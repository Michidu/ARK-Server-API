#include "ArkApiPrivatePCH.h"
#include "AllowWindowsPlatformTypes.h"
#include <windows.h>
#include <experimental/filesystem>

#include "MinHook.h"
#include "JsonUtils.h"
#include "Hooks.h"
#include "UpdateManager.h"

namespace fs = std::experimental::filesystem;

void LoadAllPlugins();

void Init()
{
	if (MH_Initialize() != MH_OK)
	{
		throw std::runtime_error("Can't initialize MinHook");
	}

	UpdateManager::CheckUpdate();
	JsonUtils::Init();
	Hooks::Init();

	LoadAllPlugins();
}

void LoadAllPlugins()
{
	for (auto& dirName : fs::directory_iterator("BeyondApi/Plugins"))
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

#define LOCTEXT_NAMESPACE "FArkApiModule"

void FArkApiModule::StartupModule()
{
}

void FArkApiModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FArkApiModule, ArkSotfApi)
