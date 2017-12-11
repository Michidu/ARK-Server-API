#ifndef PDBREADER_H
#define PDBREADER_H

#include <string>

#include <dia2.h>

#include "../../json.hpp"

namespace ArkApi
{
	class PdbReader
	{
	public:
		explicit PdbReader(const std::wstring& path)
			: offsets_dump_(nullptr),
			  path_(path)
		{
		}

		bool Read(std::unordered_map<std::string, intptr_t>* offsets_dump);
	private:
		bool LoadDataFromPdb(IDiaDataSource**, IDiaSession**, IDiaSymbol**) const;
		bool ReadConfig();
		void DumpStructs(IDiaSymbol*);
		void DumpFreeFunctions(IDiaSymbol*);
		void DumpType(IDiaSymbol*, const std::string&, int) const;
		void DumpData(IDiaSymbol*, const std::string&) const;
		static std::string GetName(IDiaSymbol*);
		void DumpFunction(IDiaSymbol*, const std::string&) const;
		static void Cleanup(IDiaSymbol*, IDiaSession*);

		std::unordered_map<std::string, intptr_t>* offsets_dump_;
		std::wstring path_;
		nlohmann::json config_;
	};
}

#endif // PDBREADER_H
