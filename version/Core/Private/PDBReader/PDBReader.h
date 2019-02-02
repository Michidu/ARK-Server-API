#pragma once

#include <dia2.h>

#include "json.hpp"

#include <API/Fields.h>

namespace API
{
	class PdbReader
	{
	public:
		PdbReader() = default;
		~PdbReader() = default;

		void Read(const std::wstring& path, const nlohmann::json& plugin_pdb_config,
		          std::unordered_map<std::string, intptr_t>* offsets_dump,
		          std::unordered_map<std::string, BitField>* bitfields_dump);

	private:
		static void LoadDataFromPdb(const std::wstring& /*path*/, IDiaDataSource** /*dia_source*/, IDiaSession**
		                            /*session*/, IDiaSymbol** /*symbol*/);
		bool ReadConfig();
		void DumpStructs(IDiaSymbol* /*g_symbol*/);
		void DumpFreeFunctions(IDiaSymbol* /*g_symbol*/);
		void DumpGlobalVariables(IDiaSymbol* /*g_symbol*/);
		void DumpType(IDiaSymbol* /*symbol*/, const std::string& /*structure*/, int /*indent*/) const;
		void DumpData(IDiaSymbol* /*symbol*/, const std::string& /*structure*/) const;
		static std::string GetName(IDiaSymbol* /*symbol*/);
		void DumpFunction(IDiaSymbol* /*symbol*/, const std::string& /*structure*/) const;
		static void Cleanup(IDiaSymbol* /*symbol*/, IDiaSession* /*session*/);

		std::unordered_map<std::string, intptr_t>* offsets_dump_{nullptr};
		std::unordered_map<std::string, BitField>* bitfields_dump_{nullptr};

		bool dump_all_{false};

		nlohmann::json config_;
	};
} // namespace API
