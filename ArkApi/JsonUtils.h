#ifndef H_JsonUtils
#define H_JsonUtils

#include "json.hpp"

namespace JsonUtils
{
	void Init();
	std::string GetCurrentDir();
	nlohmann::json GetJson();
}

#endif