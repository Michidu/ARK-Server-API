#ifndef H_UManager
#define H_UManager

#include <windows.h>
#include <iostream>

namespace UpdateManager
{
	void CheckUpdate();
	std::string GetVersion(const std::wstring& fileName);
	void SetDumpVersion(std::string newVersion);
	void Startup(const std::wstring& lpApplicationName);
	std::wstring CutPath(const std::wstring& path, size_t amount);
}

#endif