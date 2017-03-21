#ifndef H_UManager
#define H_UManager

#include <windows.h>
#include <iostream>

namespace UpdateManager
{
	void Update();
	void Startup(const std::string& lpApplicationName);
}

#endif