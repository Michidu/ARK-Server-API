#include "Tools.h"

#include <windows.h>

namespace ArkApi::Tools
{
	std::string GetCurrentDir()
	{
		char buffer[MAX_PATH];
		GetModuleFileNameA(nullptr, buffer, MAX_PATH);

		const std::string::size_type pos = std::string(buffer).find_last_of("\\/");

		return std::string(buffer).substr(0, pos);
	}

	std::wstring ConvertToWideStr(const std::string& text)
	{
		const size_t size = text.size();

		std::wstring wstr;
		if (size > 0)
		{
			wstr.resize(size);

			size_t converted_chars;
			mbstowcs_s(&converted_chars, &wstr[0], size + 1, text.c_str(), _TRUNCATE);
		}

		return wstr;
	}
}
