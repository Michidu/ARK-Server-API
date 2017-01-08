#ifndef H_JsonUtils
#define H_JsonUtils

#include "ArkApiPrivatePCH.h"
#include "json.hpp"

namespace JsonUtils
{
	void Init();
	nlohmann::json GetJson();
}

#endif