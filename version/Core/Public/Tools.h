#ifndef TOOLS_H
#define TOOLS_H

#include <string>

namespace ArkApi::tools
{
	std::string GetCurrentDir();
	std::wstring ConvertToWideStr(const std::string& text);
}

#endif // TOOLS_H
