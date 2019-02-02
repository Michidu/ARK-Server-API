#include "PDBReader.h"

#include <comdef.h>
#include <fstream>

#include <Logger/Logger.h>
#include <Tools.h>

#include "../Private/Helpers.h"
#include "../Private/Offsets.h"

namespace API
{
	void PdbReader::Read(const std::wstring& path, const nlohmann::json& plugin_pdb_config,
	                     std::unordered_map<std::string, intptr_t>* offsets_dump,
	                     std::unordered_map<std::string, BitField>* bitfields_dump)
	{
		offsets_dump_ = offsets_dump;
		bitfields_dump_ = bitfields_dump;

		std::ifstream f{path};
		if (!f.good())
		{
			throw std::runtime_error("Failed to open pdb file");
		}

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

		if (!ReadConfig())
		{
			throw std::runtime_error("Failed to open config.json");
		}

		dump_all_ = config_["settings"].value("DumpAll", false);

		try
		{
			MergePdbConfig(config_, plugin_pdb_config);
		}
		catch (const std::runtime_error&)
		{
			Log::GetLog()->error("Failed to merge api config with pdb configs");
			throw;
		}

		Log::GetLog()->info("Dumping structures..");
		DumpStructs(symbol);

		Log::GetLog()->info("Dumping functions..");
		DumpFreeFunctions(symbol);

		Log::GetLog()->info("Dumping globals..");
		DumpGlobalVariables(symbol);

		Cleanup(symbol, dia_session);

		Log::GetLog()->info("Successfully read information from PDB\n");
	}

	void PdbReader::LoadDataFromPdb(const std::wstring& path, IDiaDataSource** dia_source, IDiaSession** session,
	                                IDiaSymbol** symbol)
	{
		const std::string current_dir = Tools::GetCurrentDir();

		std::string lib_path = current_dir + "\\msdia140.dll";
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

		hr = class_factory->CreateInstance(nullptr, __uuidof(IDiaDataSource), reinterpret_cast<void **>(dia_source));
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

	bool PdbReader::ReadConfig()
	{
		const std::string config_path = Tools::GetCurrentDir() + "/config.json";
		std::ifstream file{config_path};
		if (!file.is_open())
		{
			return false;
		}

		file >> config_;
		file.close();

		return true;
	}

	void PdbReader::DumpStructs(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol;

		auto structs_array = config_["structures"].get<std::vector<std::string>>();

		IDiaEnumSymbols* enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagUDT, nullptr, nsNone, &enum_symbols)))
		{
			throw std::runtime_error("Failed to find symbols");
		}

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			BSTR bstr_name;
			if (symbol->get_name(&bstr_name) != S_OK)
			{
				continue;
			}

			const _bstr_t bbstr_name(bstr_name);
			const std::string str_name(bbstr_name);

			// Check if structure name is in config
			if (dump_all_ || find(structs_array.begin(), structs_array.end(), str_name) != structs_array.end())
			{
				DumpType(symbol, str_name, 0);
			}

			SysFreeString(bstr_name);

			symbol->Release();
		}

		enum_symbols->Release();
	}

	void PdbReader::DumpFreeFunctions(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol;

		auto funcs_array = config_["functions"].get<std::vector<std::string>>();

		IDiaEnumSymbols* enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagFunction, nullptr, nsNone, &enum_symbols)))
		{
			throw std::runtime_error("Failed to find symbols");
		}

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			BSTR bstr_name;
			if (symbol->get_name(&bstr_name) != S_OK)
			{
				continue;
			}

			const _bstr_t bbstr_name(bstr_name);
			const std::string str_name(bbstr_name);

			const auto find_res = find(funcs_array.begin(), funcs_array.end(), str_name);
			if (find_res != funcs_array.end())
			{
				DWORD offset;
				if (symbol->get_addressOffset(&offset) != S_OK)
				{
					continue;
				}

				(*offsets_dump_)["Global." + str_name] = offset;
			}

			SysFreeString(bstr_name);

			symbol->Release();
		}

		enum_symbols->Release();
	}

	void PdbReader::DumpGlobalVariables(IDiaSymbol* g_symbol)
	{
		IDiaSymbol* symbol;

		auto globals_array = config_["globals"].get<std::vector<std::string>>();

		IDiaEnumSymbols* enum_symbols;
		if (FAILED(g_symbol->findChildren(SymTagData, nullptr, nsNone, &enum_symbols)))
		{
			throw std::runtime_error("Failed to find symbols");
		}

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			BSTR bstr_name;
			if (symbol->get_name(&bstr_name) != S_OK)
			{
				continue;
			}

			const _bstr_t bbstr_name(bstr_name);
			const std::string str_name(bbstr_name);

			const auto find_res = find(globals_array.begin(), globals_array.end(), str_name);
			if (find_res != globals_array.end())
			{
				DWORD offset;
				if (symbol->get_addressOffset(&offset) != S_OK)
				{
					continue;
				}

				(*offsets_dump_)["Global." + str_name] = offset;
			}

			SysFreeString(bstr_name);

			symbol->Release();
		}

		enum_symbols->Release();
	}

	void PdbReader::DumpType(IDiaSymbol* symbol, const std::string& structure, int indent) const
	{
		IDiaEnumSymbols* enum_children;
		IDiaSymbol* symbol_child;
		DWORD sym_tag;
		ULONG celt = 0;

		if (indent > 5)
		{
			return;
		}

		if (symbol->get_symTag(&sym_tag) != S_OK)
		{
			return;
		}

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
					DumpType(symbol_child, structure, indent + 2);

					symbol_child->Release();
				}

				enum_children->Release();
			}
			break;
		case SymTagFunction:
			DumpFunction(symbol, structure);
			break;
		default:
			break;
		}
	}

	void PdbReader::DumpData(IDiaSymbol* symbol, const std::string& structure) const
	{
		DWORD loc_type;
		if (symbol->get_locationType(&loc_type) != S_OK)
		{
			return;
		}

		if (loc_type != LocIsThisRel && loc_type != LocIsBitField)
		{
			return;
		}

		IDiaSymbol* type;
		if (symbol->get_type(&type) != S_OK)
		{
			return;
		}

		if (type != nullptr)
		{
			LONG offset;
			if (symbol->get_offset(&offset) != S_OK)
			{
				return;
			}

			BSTR bstr_name;
			if (symbol->get_name(&bstr_name) != S_OK)
			{
				return;
			}

			const _bstr_t bbstr_name(bstr_name);

			if (loc_type == LocIsBitField)
			{
				DWORD bit_position;
				if (symbol->get_bitPosition(&bit_position) != S_OK)
				{
					return;
				}

				ULONGLONG num_bits;
				if (symbol->get_length(&num_bits) != S_OK)
				{
					return;
				}

				ULONGLONG length;
				if (type->get_length(&length) != S_OK)
				{
					return;
				}

				const BitField bit_field{static_cast<DWORD64>(offset), bit_position, num_bits, length};

				(*bitfields_dump_)[structure + "." + std::string(bbstr_name)] = bit_field;
			}
			else if (loc_type == LocIsThisRel)
			{
				(*offsets_dump_)[structure + "." + std::string(bbstr_name)] = offset;
			}

			SysFreeString(bstr_name);
		}

		type->Release();
	}

	std::string PdbReader::GetName(IDiaSymbol* symbol)
	{
		BSTR bstr_name;
		BSTR bstr_und_name;
		BSTR bstr_full_name;

		if (symbol->get_name(&bstr_name) != S_OK)
		{
			return "";
		}

		if (symbol->get_undecoratedName(&bstr_und_name) == S_OK)
		{
			bstr_full_name = wcscmp(bstr_name, bstr_und_name) == 0 ? bstr_name : bstr_und_name;
		}
		else
		{
			bstr_full_name = bstr_name;
		}

		const _bstr_t str_name(bstr_name);

		SysFreeString(bstr_name);
		SysFreeString(bstr_und_name);
		SysFreeString(bstr_full_name);

		return std::string(str_name);
	}

	void PdbReader::DumpFunction(IDiaSymbol* symbol, const std::string& structure) const
	{
		DWORD offset;
		if (symbol->get_addressOffset(&offset) != S_OK)
		{
			return;
		}

		BSTR bstr_name;
		if (symbol->get_name(&bstr_name) != S_OK)
		{
			return;
		}

		const _bstr_t bbstr_name(bstr_name);
		std::string str_name(bbstr_name);

		if (str_name.find("exec") != std::string::npos)
		{
			// Filter out functions with "exec" prefix
			return;
		}

		(*offsets_dump_)[std::string(structure) + "." + str_name] = offset;

		SysFreeString(bstr_name);
	}

	void PdbReader::Cleanup(IDiaSymbol* symbol, IDiaSession* session)
	{
		if (symbol != nullptr)
		{
			symbol->Release();
		}

		if (session != nullptr)
		{
			session->Release();
		}

		CoUninitialize();
	}
} // namespace API
