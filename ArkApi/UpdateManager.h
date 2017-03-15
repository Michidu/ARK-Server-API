#ifndef H_UManager
#define H_UManager

#include <windows.h>
#include <iostream>

namespace UpdateManager
{
	void CheckUpdate();
	std::string GetVersion(const std::string& fileName);
	void SetDumpVersion(std::string newVersion);
	void Startup(const std::string& lpApplicationName);
	std::string CutPath(const std::string& path, size_t amount);
}

#endif