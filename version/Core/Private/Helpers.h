#pragma once
#include <vector>
#include "../../json.hpp"

namespace ArkApi
{
	void MergePdbConfig(nlohmann::json& left, const nlohmann::json& right);
	std::vector<std::string> MergeStringArrays(std::vector<std::string> first, std::vector<std::string> second);
}
