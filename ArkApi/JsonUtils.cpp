#include "stdafx.h"
#include "JsonUtils.h"
#include <fstream>
#include <Pathcch.h>

namespace JsonUtils
{
	nlohmann::json json;

	void Init()
	{
		std::wstring dirPath = GetCurrentDir();

		std::wstring fullPath = dirPath + L"/dump.json";
		std::ifstream file(fullPath);
		if (!file.is_open())
		{
			std::cerr << "Could not open file dump.json\n";
			throw std::runtime_error("Could not open file dump.json");
		}

		file >> json;
		file.close();
	}

	std::wstring GetCurrentDir()
	{
		wchar_t buffer[MAX_PATH];
		GetModuleFileNameW(nullptr, buffer, sizeof(buffer));

		PathCchRemoveFileSpec(buffer, sizeof(buffer));

		std::wstring dirPath(buffer);

		return dirPath;
	}

	nlohmann::json GetJson()
	{
		return json;
	}
}
