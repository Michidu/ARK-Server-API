#include <Tools.h>

#include "../IBaseApi.h"
#include "../PluginManager/PluginManager.h"

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
		{
			return std::string();
		}

		const int size_needed = WideCharToMultiByte(CP_UTF8, 0, wstr.data(), static_cast<int>(wstr.size()), nullptr, 0,
		                                            nullptr, nullptr);

		std::string str(size_needed, 0);
		WideCharToMultiByte(CP_UTF8, 0, wstr.data(), static_cast<int>(wstr.size()), str.data(), size_needed, nullptr,
		                    nullptr);

		return str;
	}

	std::wstring Utf8Decode(const std::string& str)
	{
		if (str.empty())
		{
			return std::wstring();
		}

		const int size_needed = MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), nullptr, 0);

		std::wstring wstr(size_needed, 0);
		MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), wstr.data(), size_needed);

		return wstr;
	}

	bool IsPluginLoaded(const std::string& plugin_name)
	{
		return API::PluginManager::Get().IsPluginLoaded(plugin_name);
	}

	float GetApiVersion()
	{
		return API::game_api->GetVersion();
	}
} // namespace Tools // namespace ArkApi
