#pragma once

#include <API/Base.h>

#include <string>

namespace ArkApi::Tools
{
	ARK_API std::string GetCurrentDir();

	ARK_API std::wstring ConvertToWideStr(const std::string& text);
	ARK_API std::string ConvertToAnsiStr(const std::wstring& text);

	/**
	 * \brief Converts a wide Unicode string to an UTF8 string
	 */
	ARK_API std::string Utf8Encode(const std::wstring& wstr);

	/**
	 * \brief Converts an UTF8 string to a wide Unicode String
	 */
	ARK_API std::wstring Utf8Decode(const std::string& str);

	/**
	 * \brief Returns true if plugin was loaded, false otherwise
	 */
	ARK_API bool IsPluginLoaded(const std::string& plugin_name);

	/**
	* \brief Returns Current Running Api Version
	*/
	ARK_API float GetApiVersion();
} // namespace Tools // namespace ArkApi

// For back compatibility
namespace API
{
	namespace Tools = ArkApi::Tools;
}
