#include "ArkApiPrivatePCH.h"
#include "JsonUtils.h"
#include <fstream>

namespace JsonUtils
{
	nlohmann::json json;

	void Init()
	{
		std::ifstream file("dump.json");
		if (!file.is_open())
		{
			throw std::runtime_error("Could not open file dump.json");
		}

		file >> json;
		file.close();
	}

	nlohmann::json GetJson()
	{
		return json;
	}
}
