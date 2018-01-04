#include <Windows.h>
#include <stdio.h>

#include "Core/Private/PDBReader/PDBReader.h"
#include "Core/Private/Offsets.h"
#include "Core/Private/HooksImpl.h"
#include "Core/Private/PluginManager/PluginManager.h"
#include "Core/Public/Logger/Logger.h"

#pragma comment(lib, "libMinHook-x64-v141-md.lib")

HINSTANCE m_hinst_dll = nullptr;
extern "C" UINT_PTR mProcs[17]{0};

LPCSTR import_names[] = {
	"GetFileVersionInfoA", "GetFileVersionInfoByHandle", "GetFileVersionInfoExA", "GetFileVersionInfoExW",
	"GetFileVersionInfoSizeA", "GetFileVersionInfoSizeExA", "GetFileVersionInfoSizeExW", "GetFileVersionInfoSizeW",
	"GetFileVersionInfoW", "VerFindFileA", "VerFindFileW", "VerInstallFileA", "VerInstallFileW", "VerLanguageNameA",
	"VerLanguageNameW", "VerQueryValueA", "VerQueryValueW"
};

void OpenConsole()
{
	AllocConsole();
	FILE* pCout;
	freopen_s(&pCout, "conout$", "w", stdout);
}

void Init()
{
	OpenConsole();

	Log::Get().Init("API");

	Log::GetLog()->info("-----------------------------------------------");
	Log::GetLog()->info("ARK Beyond Api V{}", API_VERSION);
	Log::GetLog()->info("Loading...\n");

	ArkApi::PdbReader pdb_reader;

	std::unordered_map<std::string, intptr_t> offsets_dump;
	std::unordered_map<std::string, BitField> bitfields_dump;

	try
	{
		pdb_reader.Read(L"ShooterGameServer.pdb", &offsets_dump, &bitfields_dump);
	}
	catch (const std::runtime_error& error)
	{
		Log::GetLog()->critical("Failed to read pdb. {}", error.what());
		return;
	}

	ArkApi::Offsets::Get().Init(move(offsets_dump));

	ArkApi::InitHooks();

	ArkApi::PluginManager::Get().LoadAllPlugins();

	Log::GetLog()->info("API was successfully loaded");
	Log::GetLog()->info("-----------------------------------------------\n");
}

BOOL WINAPI DllMain(HINSTANCE hinst_dll, DWORD fdw_reason, LPVOID)
{
	if (fdw_reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hinst_dll);

		CHAR sysDir[MAX_PATH];
		GetSystemDirectoryA(sysDir, MAX_PATH);

		char buffer[MAX_PATH];
		sprintf_s(buffer, "%s\\version.dll", sysDir);

		m_hinst_dll = LoadLibraryA(buffer);
		if (!m_hinst_dll)
			return FALSE;

		for (int i = 0; i < 17; i++)
			mProcs[i] = reinterpret_cast<UINT_PTR>(GetProcAddress(m_hinst_dll, import_names[i]));

		Init();
	}
	else if (fdw_reason == DLL_PROCESS_DETACH)
	{
		FreeLibrary(m_hinst_dll);
	}

	return TRUE;
}

extern "C" void GetFileVersionInfoA_wrapper();
extern "C" void GetFileVersionInfoByHandle_wrapper();
extern "C" void GetFileVersionInfoExA_wrapper();
extern "C" void GetFileVersionInfoExW_wrapper();
extern "C" void GetFileVersionInfoSizeA_wrapper();
extern "C" void GetFileVersionInfoSizeExA_wrapper();
extern "C" void GetFileVersionInfoSizeExW_wrapper();
extern "C" void GetFileVersionInfoSizeW_wrapper();
extern "C" void GetFileVersionInfoW_wrapper();
extern "C" void VerFindFileA_wrapper();
extern "C" void VerFindFileW_wrapper();
extern "C" void VerInstallFileA_wrapper();
extern "C" void VerInstallFileW_wrapper();
extern "C" void VerLanguageNameA_wrapper();
extern "C" void VerLanguageNameW_wrapper();
extern "C" void VerQueryValueA_wrapper();
extern "C" void VerQueryValueW_wrapper();
