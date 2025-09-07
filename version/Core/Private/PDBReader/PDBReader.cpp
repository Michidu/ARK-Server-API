#include "PDBReader.h"

#include <fstream>

#include <Logger/Logger.h>
#include <Tools.h>

#include "../Private/Helpers.h"
#include "../Private/Offsets.h"

namespace API
{
	template <typename T>
	class ScopedDiaType
	{
	public:
		ScopedDiaType() : _sym(nullptr)
		{
		}

		ScopedDiaType(T* sym) : _sym(sym)
		{
		}

		~ScopedDiaType()
		{
			if (_sym != nullptr)
				_sym->Release();
		}

		T** ref() { return &_sym; }
		T** operator&() { return ref(); }
		T* operator->() { return _sym; }
		operator T*() { return _sym; }
		void Attach(T* sym) { _sym = sym; }

	private:
		T* _sym;
	};

	template <typename T>
	using CComPtr = ScopedDiaType<T>;

	void PdbReader::Read(const std::wstring& path, std::unordered_map<std::string, intptr_t>* offsets_dump,
	                     std::unordered_map<std::string, BitField>* bitfields_dump)
	{
		offsets_dump_ = offsets_dump;
		bitfields_dump_ = bitfields_dump;

		std::ifstream f{path};
		if (!f.good())
			throw std::runtime_error("Failed to open pdb file");

		IDiaDataSource* data_source;
		IDiaSession* dia_session;
		IDiaSymbol* symbol;

		try
		{
			LoadDataFromPdb(path, &data_source, &dia_session, &symbol);
		}
		catch (const std::runtime_error&)
		{
			Log::GetLog()->error("Failed to load data from pdb file ");
			throw;
		}

		Log::GetLog()->info("Dumping structures..");
		DumpStructs(symbol);

		Log::GetLog()->info("Dumping functions..");
		DumpFunctions(symbol);

		Log::GetLog()->info("Dumping globals..");
		DumpGlobalVariables(symbol);

		Cleanup(symbol, dia_session, data_source);

		Log::GetLog()->info("Successfully read information from PDB\n");
	}

	void PdbReader::LoadDataFromPdb(const std::wstring& path, IDiaDataSource** dia_source, IDiaSession** session,
	                                IDiaSymbol** symbol)
	{
		const std::string current_dir = Tools::GetCurrentDir();

		const std::string lib_path = current_dir + "\\msdia140.dll";
		const HMODULE h_module = LoadLibraryA(lib_path.c_str());
		if (h_module == nullptr)
		{
			throw std::runtime_error("Failed to load msdia140.dll. Error code - " + std::to_string(GetLastError()));
		}

		const auto dll_get_class_object = reinterpret_cast<HRESULT(WINAPI*)(REFCLSID, REFIID, LPVOID)>(GetProcAddress(
			h_module, "DllGetClassObject"));
		if (dll_get_class_object == nullptr)
		{
			throw std::runtime_error("Can't find DllGetClassObject. Error code - " + std::to_string(GetLastError()));
		}

		IClassFactory* class_factory;
		HRESULT hr = dll_get_class_object(__uuidof(DiaSource), IID_IClassFactory, &class_factory);
		if (FAILED(hr))
		{
			throw std::runtime_error("DllGetClassObject has failed. Error code - " + std::to_string(GetLastError()));
		}

		hr = class_factory->CreateInstance(nullptr, __uuidof(IDiaDataSource), reinterpret_cast<void**>(dia_source));
		if (FAILED(hr))
		{
			class_factory->Release();
			throw std::runtime_error("CreateInstance has failed. Error code - " + std::to_string(GetLastError()));
		}

		hr = (*dia_source)->loadDataFromPdb(path.c_str());
		if (FAILED(hr))
		{
			class_factory->Release();
			throw std::runtime_error("loadDataFromPdb has failed. HRESULT - " + std::to_string(hr));
		}

		// Open a session for querying symbols

		hr = (*dia_source)->openSession(session);
		if (FAILED(hr))
		{
			class_factory->Release();
			throw std::runtime_error("openSession has failed. HRESULT - " + std::to_string(hr));
		}

		// Retrieve a reference to the global scope

		hr = (*session)->get_globalScope(symbol);
		if (hr != S_OK)
		{
			class_factory->Release();
			throw std::runtime_error("get_globalScope has failed. HRESULT - " + std::to_string(hr));
		}

		class_factory->Release();
	}

	void PdbReader::DumpStructs(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol = nullptr;

		CComPtr<IDiaEnumSymbols> enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagUDT, nullptr, nsNone, &enum_symbols)))
			throw std::runtime_error("Failed to find symbols");

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			CComPtr<IDiaSymbol> sym(symbol);

			const uint32_t sym_id = GetSymbolId(symbol);
			if (visited_.find(sym_id) != visited_.end())
				return;

			visited_.insert(sym_id);

			std::string str_name = GetSymbolNameString(sym);
			if (str_name.empty())
				continue;

			DumpType(sym, str_name, 0);
		}
	}

	void PdbReader::DumpFunctions(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol;

		CComPtr<IDiaEnumSymbols> enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagFunction, nullptr, nsNone, &enum_symbols)))
			throw std::runtime_error("Failed to find symbols");

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			CComPtr<IDiaSymbol> sym(symbol);

			DWORD sym_tag_type;
			if (sym->get_symTag(&sym_tag_type) != S_OK)
				continue;

			const uint32_t sym_id = GetSymbolId(sym);
			if (visited_.find(sym_id) != visited_.end())
				continue;

			visited_.insert(sym_id);

			std::string str_name = GetSymbolNameString(sym);
			if (str_name.empty())
				continue;

			DWORD offset;
			if (sym->get_addressOffset(&offset) != S_OK)
				continue;

			// Filter out some useless functions
			if (str_name.find('`') != std::string::npos)
				continue;

			// Check if it's a member function
			if (str_name.find(':') != std::string::npos)
			{
				const std::string new_str = ReplaceString(str_name, "::", ".");

				(*offsets_dump_)[new_str] = offset;
			}
			else
			{
				(*offsets_dump_)["Global." + str_name] = offset;
			}
		}
	}

	void PdbReader::DumpGlobalVariables(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol;

		CComPtr<IDiaEnumSymbols> enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagData, nullptr, nsNone, &enum_symbols)))
			throw std::runtime_error("Failed to find symbols");

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			CComPtr<IDiaSymbol> sym(symbol);

			const uint32_t sym_id = GetSymbolId(symbol);
			if (visited_.find(sym_id) != visited_.end())
				return;

			visited_.insert(sym_id);

			std::string str_name = GetSymbolNameString(sym);
			if (str_name.empty())
				continue;

			DWORD sym_tag;
			if (sym->get_symTag(&sym_tag) != S_OK)
				continue;

			DWORD offset;
			if (sym->get_addressOffset(&offset) != S_OK)
				continue;

			(*offsets_dump_)["Global." + str_name] = offset;
		}
	}

	void PdbReader::DumpType(IDiaSymbol* symbol, const std::string& structure, int indent) const
	{
		CComPtr<IDiaEnumSymbols> enum_children;
		IDiaSymbol* symbol_child;
		DWORD sym_tag;
		ULONG celt = 0;

		if (indent > 5)
			return;

		if (symbol->get_symTag(&sym_tag) != S_OK)
			return;

		switch (sym_tag)
		{
		case SymTagData:
			DumpData(symbol, structure);
			break;
		case SymTagEnum:
		case SymTagUDT:
			if (SUCCEEDED(symbol->findChildren(SymTagNull, nullptr, nsNone, &enum_children)))
			{
				while (SUCCEEDED(enum_children->Next(1, &symbol_child, &celt)) && celt == 1)
				{
					CComPtr<IDiaSymbol> sym_child(symbol_child);

					DumpType(sym_child, structure, indent + 2);
				}
			}
			break;
		default:
			break;
		}
	}

	void PdbReader::DumpData(IDiaSymbol* symbol, const std::string& structure) const
	{
		DWORD loc_type;
		if (symbol->get_locationType(&loc_type) != S_OK)
			return;

		if (loc_type != LocIsThisRel && loc_type != LocIsBitField)
			return;

		CComPtr<IDiaSymbol> type;
		if (symbol->get_type(&type) != S_OK)
			return;

		if (type == nullptr)
			return;

		LONG offset;
		if (symbol->get_offset(&offset) != S_OK)
			return;

		std::string str_name = GetSymbolNameString(symbol);
		if (str_name.empty())
			return;

		if (loc_type == LocIsBitField)
		{
			DWORD bit_position;
			if (symbol->get_bitPosition(&bit_position) != S_OK)
				return;

			ULONGLONG num_bits;
			if (symbol->get_length(&num_bits) != S_OK)
				return;

			ULONGLONG length;
			if (type->get_length(&length) != S_OK)
				return;

			const BitField bit_field{static_cast<DWORD64>(offset), bit_position, num_bits, length};

			(*bitfields_dump_)[structure + "." + str_name] = bit_field;
		}
		else if (loc_type == LocIsThisRel)
		{
			(*offsets_dump_)[structure + "." + str_name] = offset;
		}
	}

	std::string PdbReader::GetSymbolNameString(IDiaSymbol* symbol)
	{
		BSTR str = nullptr;

		std::string name;

		HRESULT hr = symbol->get_name(&str);
		if (hr != S_OK)
			return name;

		if (str != nullptr)
		{
			name = Tools::Utf8Encode(str);
		}

		SysFreeString(str);

		return name;
	}

	uint32_t PdbReader::GetSymbolId(IDiaSymbol* symbol)
	{
		DWORD id;
		symbol->get_symIndexId(&id);

		return id;
	}

	void PdbReader::Cleanup(IDiaSymbol* symbol, IDiaSession* session, IDiaDataSource* source)
	{
		if (symbol != nullptr)
			symbol->Release();
		if (session != nullptr)
			session->Release();
		if (source != nullptr)
			source->Release();

		CoUninitialize();
	}
} // namespace API
