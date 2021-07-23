#pragma once

#include <vector>

#include "json.hpp"

namespace API
{
	void MergePdbConfig(nlohmann::json& left, const nlohmann::json& right);
	std::vector<std::string> MergeStringArrays(std::vector<std::string> first, std::vector<std::string> second);

	std::string ReplaceString(std::string subject, const std::string& search, const std::string& replace);
} // namespace API
