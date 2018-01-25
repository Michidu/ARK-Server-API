#include "Tools.h"

#include "PluginManager/PluginManager.h"

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
			mbstowcs_s(&converted_chars, wstr.data(), size + 1, text.c_str(), _TRUNCATE);
		}

		return wstr;
	}
	
	std::string ConvertToAnsiStr(const std::wstring& text)
	{
		const size_t length = text.size();

		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(text.c_str(), text.c_str() + length, '?', str.data());

		return str;
	}

	bool IsPluginLoaded(const std::string& plugin_name)
	{
		return PluginManager::Get().IsPluginLoaded(plugin_name);
	}
}
