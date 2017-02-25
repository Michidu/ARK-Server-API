#include "stdafx.h"
#include <experimental/filesystem>

#include "MinHook.h"
#include "JsonUtils.h"
#include "Hooks.h"
#include "UpdateManager.h"

#pragma comment(lib, "Pathcch.lib")
#pragma comment(lib, "libMinHook-x64-v140-md.lib")

namespace fs = std::experimental::filesystem;

void LoadAllPlugins();

void Init()
{
	if (MH_Initialize() != MH_OK)
	{
		std::cerr << "Can't initialize MinHook\n";
		throw std::runtime_error("Can't initialize MinHook");
	}

	UpdateManager::CheckUpdate();
	JsonUtils::Init();
	Hooks::Init();

	LoadAllPlugins();
}

void LoadAllPlugins()
{
	std::wstring dirPath = JsonUtils::GetCurrentDir();

	for (auto& dirName : fs::directory_iterator(dirPath + L"/BeyondApi/Plugins"))
	{
		auto path = dirName.path();
		auto fileName = path.filename();

		std::string fullFileName = path.generic_string() + "/" + fileName.generic_string() + ".dll";

		if (fs::exists(fullFileName))
		{
			HINSTANCE hInstDll = LoadLibraryA(fullFileName.c_str());
			if (!hInstDll)
			{
				std::cerr << "Failed to load plugin - " << fileName << std::endl << "Error code: " << GetLastError() << std::endl;
				continue;
			}

			std::cout << "Loaded plugin - " << fileName << std::endl;
		}
	}

	std::cout << std::endl << "Loaded all plugins" << std::endl;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		Init();
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
