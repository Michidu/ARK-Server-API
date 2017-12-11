#include "PDBReader.h"

#include <iostream>
#include <fstream>
#include <comdef.h>

#include "Tools.h"
#include "../Public/Offsets.h"

namespace ArkApi
{
	bool PdbReader::Read(std::unordered_map<std::string, intptr_t>* offsets_dump)
	{
		offsets_dump_ = offsets_dump;

		std::ifstream f{path_};
		if (!f.good())
		{
			std::cout << "Failed to open pdb file";
			return false;
		}

		IDiaDataSource* data_source;
		IDiaSession* dia_session;
		IDiaSymbol* symbol;

		if (!LoadDataFromPdb(&data_source, &dia_session, &symbol))
		{
			std::cout << "Failed to load data from pdb file";
			return false;
		}

		if (!ReadConfig())
			return false;

		std::cout << "Dumping structures.." << std::endl;
		DumpStructs(symbol);

		std::cout << "Dumping functions.." << std::endl;
		DumpFreeFunctions(symbol);

		Cleanup(symbol, dia_session);

		return false;
	}

	bool PdbReader::LoadDataFromPdb(IDiaDataSource** dia_source, IDiaSession** session, IDiaSymbol** symbol) const
	{
		const std::string current_dir = tools::GetCurrentDir();

		std::string lib_path = current_dir + "\\msdia140.dll";
		const HMODULE h_module = LoadLibraryA(lib_path.c_str());
		if (!h_module)
		{
			std::cout << "Failed to load msdia140.dll - " << GetLastError() << std::endl;
			return false;
		}

		HRESULT (WINAPI* DllGetClassObject)(REFCLSID, REFIID, LPVOID) =
			reinterpret_cast<HRESULT(WINAPI*)(REFCLSID, REFIID, LPVOID)>(GetProcAddress(h_module, "DllGetClassObject"));
		if (!DllGetClassObject)
		{
			std::cout << "Can't find DllGetClassObject - " << GetLastError() << std::endl;
			return false;
		}

		IClassFactory* class_factory;
		HRESULT hr = DllGetClassObject(__uuidof(DiaSource), IID_IClassFactory, &class_factory);
		if (FAILED(hr))
		{
			std::cout << "DllGetClassObject failed - " << GetLastError() << std::endl;
			return false;
		}

		hr = class_factory->CreateInstance(nullptr, __uuidof(IDiaDataSource), reinterpret_cast<void **>(dia_source));
		if (FAILED(hr))
		{
			class_factory->Release();

			std::cout << "CreateInstance failed - " << GetLastError() << std::endl;
			return false;
		}

		hr = (*dia_source)->loadDataFromPdb(path_.c_str());
		if (FAILED(hr))
		{
			class_factory->Release();

			std::cout << "loadDataFromPdb failed - HRESULT = " << std::hex << hr << std::endl;
			return false;
		}

		// Open a session for querying symbols

		hr = (*dia_source)->openSession(session);
		if (FAILED(hr))
		{
			class_factory->Release();

			std::cout << "openSession failed - HRESULT = " << std::hex << hr << std::endl;
			return false;
		}

		// Retrieve a reference to the global scope

		hr = (*session)->get_globalScope(symbol);
		if (hr != S_OK)
		{
			class_factory->Release();

			std::cout << "get_globalScope failed" << std::endl;
			return false;
		}

		class_factory->Release();

		return true;
	}

	bool PdbReader::ReadConfig()
	{
		const std::string config_path = tools::GetCurrentDir() + "/config.json";
		std::ifstream file{config_path};
		if (!file.is_open())
		{
			std::cerr << "Failed to open config.json" << std::endl;
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
			return;

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			BSTR bstr_name;
			if (symbol->get_name(&bstr_name) != S_OK)
				continue;

			const _bstr_t bbstr_name(bstr_name);
			const std::string str_name(bbstr_name);

			// Check if structure name is in config
			const auto find_res = find(structs_array.begin(), structs_array.end(), str_name);
			if (find_res != structs_array.end())
				DumpType(symbol, str_name, 0);

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
			return;

		ULONG celt = 0;
		while (SUCCEEDED(enum_symbols->Next(1, &symbol, &celt)) && celt == 1)
		{
			BSTR bstr_name;
			if (symbol->get_name(&bstr_name) != S_OK)
				continue;

			const _bstr_t bbstr_name(bstr_name);
			const std::string str_name(bbstr_name);

			const auto find_res = find(funcs_array.begin(), funcs_array.end(), str_name);
			if (find_res != funcs_array.end())
			{
				DWORD offset;
				if (symbol->get_addressOffset(&offset) != S_OK)
					continue;

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
		IDiaSymbol* symbol_type;
		IDiaSymbol* symbol_child;
		DWORD sym_tag;
		DWORD sym_tag_type;
		ULONG celt = 0;

		if (indent > 5)
			return;

		if (symbol->get_symTag(&sym_tag) != S_OK)
			return;

		switch (sym_tag)
		{
		case SymTagData:
			DumpData(symbol, structure);

			if (symbol->get_type(&symbol_type) == S_OK &&
				symbol_type->get_symTag(&sym_tag_type) == S_OK &&
				sym_tag_type == SymTagUDT)
			{
				DumpType(symbol_type, structure, indent + 2);
			}

			symbol_type->Release();
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
			return;

		if (loc_type != LocIsThisRel && loc_type != LocIsBitField)
			return;

		IDiaSymbol* type;
		if (symbol->get_type(&type) != S_OK)
			return;

		if (type)
		{
			//auto field = nlohmann::json({
			//	{"kind", loc_type == LocIsThisRel ? "field" : loc_type == LocIsBitField ? "bitfield" : ""}
			//});

			LONG offset;
			if (symbol->get_offset(&offset) != S_OK)
				return;

			//field["offset"] = offset;

			if (loc_type == LocIsBitField)
			{
				/*DWORD bitPosition;
				if (symbol->get_bitPosition(&bitPosition) != S_OK)
				return;

				ULONGLONG numbits;
				if (symbol->get_length(&numbits) != S_OK)
				return;

				field["numbits"] = numbits;
				field["bitposition"] = bitPosition;


				ULONGLONG length;
				if (type->get_length(&length) != S_OK)
				return;

				field["length"] = length;*/
			}

			BSTR bstr_name;
			if (symbol->get_name(&bstr_name) != S_OK)
				return;

			const _bstr_t bbstr_name(bstr_name);

			(*offsets_dump_)[structure + "." + std::string(bbstr_name)] = offset;

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
			return "";

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
			return;

		BSTR bstr_name;
		if (symbol->get_name(&bstr_name) != S_OK)
			return;

		const _bstr_t bbstr_name(bstr_name);
		std::string str_name(bbstr_name);

		if (str_name.find("exec") != std::string::npos) // Filter out functions with "exec" prefix
			return;

		(*offsets_dump_)[std::string(structure) + "." + str_name] = offset;
		//jsonDump["structures"][structure][str_name] = nlohmann::json({
		//{"offset", offset},
		//{"kind", "method"}
		//});

		SysFreeString(bstr_name);
	}

	void PdbReader::Cleanup(IDiaSymbol* symbol, IDiaSession* session)
	{
		if (symbol)
			symbol->Release();

		if (session)
			session->Release();

		CoUninitialize();
	}
}
