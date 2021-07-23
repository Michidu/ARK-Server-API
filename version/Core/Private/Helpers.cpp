#include "Helpers.h"

#include <algorithm>
#include <cctype>
#include <locale>

namespace API
{
	void MergePdbConfig(nlohmann::json& left, const nlohmann::json& right)
	{
		nlohmann::json pdb_config_result({});

		pdb_config_result["structures"] = MergeStringArrays(left.value("structures", std::vector<std::string>{}),
		                                                    right.value("structures", std::vector<std::string>{}));
		pdb_config_result["functions"] = MergeStringArrays(left.value("functions", std::vector<std::string>{}),
		                                                   right.value("functions", std::vector<std::string>{}));
		pdb_config_result["globals"] = MergeStringArrays(left.value("globals", std::vector<std::string>{}),
		                                                 right.value("globals", std::vector<std::string>{}));

		left = pdb_config_result;
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

	std::string ReplaceString(std::string subject, const std::string& search, const std::string& replace)
	{
		size_t pos = 0;
		while ((pos = subject.find(search, pos)) != std::string::npos)
		{
			subject.replace(pos, search.length(), replace);
			pos += replace.length();
		}

		return subject;
	}
} // namespace API
