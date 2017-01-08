#ifndef H_UManager
#define H_UManager

#include "ArkApiPrivatePCH.h"
#include <iostream>

namespace UpdateManager
{
	void CheckUpdate();
	std::string GetVersion(std::string fileName);
	void SetDumpVersion(std::string newVersion);
	void Startup(LPCTSTR lpApplicationName);
}

#endif