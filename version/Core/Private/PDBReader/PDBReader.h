#pragma once

#include <dia2.h>

#include <API/Base.h>
#include "../../json.hpp"

namespace ArkApi
{
	class PdbReader
	{
	public:
		PdbReader()
			: offsets_dump_(nullptr),
			  bitfields_dump_(nullptr)
		{
		}

		void Read(std::wstring path, nlohmann::json plugin_pdb_config,
		          std::unordered_map<std::string, intptr_t>* offsets_dump,
		          std::unordered_map<std::string, BitField>* bitfields_dump);

	private:
		static void LoadDataFromPdb(const std::wstring&, IDiaDataSource**, IDiaSession**, IDiaSymbol**);
		bool ReadConfig();
		void DumpStructs(IDiaSymbol*);
		void DumpFreeFunctions(IDiaSymbol*);
		void DumpGlobalVariables(IDiaSymbol*);
		void DumpType(IDiaSymbol*, const std::string&, int) const;
		void DumpData(IDiaSymbol*, const std::string&) const;
		static std::string GetName(IDiaSymbol*);
		void DumpFunction(IDiaSymbol*, const std::string&) const;
		static void Cleanup(IDiaSymbol*, IDiaSession*);

		std::unordered_map<std::string, intptr_t>* offsets_dump_;
		std::unordered_map<std::string, BitField>* bitfields_dump_;

		nlohmann::json config_;
	};
}
