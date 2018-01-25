#pragma once

#include "API/Base.h"

#include <string>

namespace ArkApi::Tools
{
	ARK_API std::string GetCurrentDir();
	ARK_API std::wstring ConvertToWideStr(const std::string& text);
	ARK_API std::string ConvertToAnsiStr(const std::wstring& text);

	/**
	 * \brief Returns true if plugin was loaded, false otherwise
	 */
	ARK_API bool IsPluginLoaded(const std::string& plugin_name);
}
