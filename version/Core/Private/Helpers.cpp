#include "Helpers.h"
#include <algorithm>
#include <cctype>

namespace ArkApi
{
	void MergePdbConfig(nlohmann::json& left, const nlohmann::json& right)
	{
		left["structures"] = MergeStringArrays(left.value("structures", std::vector<std::string>{}),
		                                       right.value("structures", std::vector<std::string>{}));
		left["functions"] = MergeStringArrays(left.value("functions", std::vector<std::string>{}),
		                                      right.value("functions", std::vector<std::string>{}));
		left["globals"] = MergeStringArrays(left.value("globals", std::vector<std::string>{}),
		                                    right.value("globals", std::vector<std::string>{}));
	}

	std::vector<std::string> MergeStringArrays(std::vector<std::string> first, std::vector<std::string> second)
	{
		std::vector<std::string> merged, unique;
		std::sort(first.begin(), first.end());
		std::sort(second.begin(), second.end());
		std::set_union(
			first.begin(),
			first.end(),
			second.begin(),
			second.end(),
			std::back_inserter(merged),
			[](std::string s1, std::string s2)
			{
				return std::lexicographical_compare(
					s1.begin(),
					s1.end(),
					s2.begin(),
					s2.end(),
					[](char c1, char c2)
					{
						return std::tolower(c1) < std::tolower(c2);
					}
				);
			}
		);

		std::unique_copy(
			merged.begin(),
			merged.end(),
			std::back_inserter(unique),
			[](std::string s1, std::string s2)
			{
				return std::equal(
					s1.begin(),
					s1.end(),
					s2.begin(),
					s2.end(),
					[](char c1, char c2)
					{
						return std::tolower(c1) == std::tolower(c2);
					}
				);
			}
		);

		return unique;
	}
}
