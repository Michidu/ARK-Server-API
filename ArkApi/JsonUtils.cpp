#include "stdafx.h"
#include "JsonUtils.h"
#include <fstream>

namespace JsonUtils
{
	namespace
	{
		nlohmann::json json;
	}

	void Init()
	{
		std::string dirPath = GetCurrentDir();

		std::string fullPath = dirPath + "/dump.json";
		std::ifstream file(fullPath);
		if (!file.is_open())
		{
			std::cerr << "Could not open file dump.json\n";
			throw std::runtime_error("Could not open file dump.json");
		}

		file >> json;
		file.close();
	}

	std::string GetCurrentDir()
	{
		char buffer[MAX_PATH];
		GetModuleFileNameA(nullptr, buffer, MAX_PATH);
		std::string::size_type pos = std::string(buffer).find_last_of("\\/");

		return std::string(buffer).substr(0, pos);
	}

	const nlohmann::json& GetJson()
	{
		return json;
	}
}
