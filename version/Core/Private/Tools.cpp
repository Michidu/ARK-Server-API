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

	std::string Utf8Encode(const std::wstring& wstr)
	{
		if (wstr.empty())
			return std::string();

		const int size = static_cast<int>(wstr.size()) + 1;
		std::string str(size, '\0');
		WideCharToMultiByte(CP_UTF8, 0, wstr.data(), static_cast<int>(wstr.size()), str.data(), size, nullptr, nullptr);

		return str;
	}

	std::wstring Utf8Decode(const std::string& str)
	{
		if (str.empty())
			return std::wstring();

		const int size = static_cast<int>(str.size()) + 1;
		std::wstring wstr(size, '\0');
		MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), wstr.data(), size);

		return wstr;
	}

	bool IsPluginLoaded(const std::string& plugin_name)
	{
		return PluginManager::Get().IsPluginLoaded(plugin_name);
	}
}
