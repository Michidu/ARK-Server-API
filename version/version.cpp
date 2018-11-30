#include <Windows.h>
#include <cstdio>
#include <filesystem>

#include "Core/Private/HooksImpl.h"

#include "Core/Private/Offsets.h"
#include "Core/Private/PDBReader/PDBReader.h"

#include "Core/Private/PluginManager/PluginManager.h"
#include "Core/Public/Logger/Logger.h"

#pragma comment(lib, "libMinHook.x64.lib")

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
	FILE* p_cout;
	freopen_s(&p_cout, "conout$", "w", stdout);
}

void PruneOldLogs()
{
	using namespace ArkApi;

	namespace fs = std::experimental::filesystem;

	const auto now = std::chrono::system_clock::now();

	const std::string current_dir = Tools::GetCurrentDir();

	for (const auto& file : fs::directory_iterator(current_dir + "/logs"))
	{
		const auto ftime = last_write_time(file);

		auto diff = std::chrono::duration_cast<std::chrono::hours>(now - ftime);
		if (diff.count() >= 24 * 14) // 14 days
		{
			fs::remove(file);
		}
	}
}

void Init()
{
	using namespace ArkApi;

	namespace fs = std::filesystem;

	OpenConsole();

	const std::string current_dir = Tools::GetCurrentDir();

	if (!fs::exists(current_dir + "/logs"))
	{
		fs::create_directory(current_dir + "/logs");
	}

	PruneOldLogs();

	Log::Get().Init("API");

	Log::GetLog()->info("-----------------------------------------------");
	Log::GetLog()->info("ARK: Server Api V{}", API_VERSION);
	Log::GetLog()->info("Loading...\n");

	PdbReader pdb_reader;

	std::unordered_map<std::string, intptr_t> offsets_dump;
	std::unordered_map<std::string, BitField> bitfields_dump;

	nlohmann::json plugin_pdb_config;
	try
	{
		plugin_pdb_config = PluginManager::GetAllPDBConfigs();
	}
	catch (const std::exception& error)
	{
		Log::GetLog()->critical("Failed to read plugin pdb configs - {}", error.what());
		return;
	}

	try
	{
		const std::wstring dir = Tools::Utf8Decode(current_dir);
		pdb_reader.Read(dir + L"/ShooterGameServer.pdb", plugin_pdb_config, &offsets_dump, &bitfields_dump);
	}
	catch (const std::exception& error)
	{
		Log::GetLog()->critical("Failed to read pdb - {}", error.what());
		return;
	}

	Offsets::Get().Init(move(offsets_dump), move(bitfields_dump));

	InitHooks();

	Log::GetLog()->info("API was successfully loaded");
	Log::GetLog()->info("-----------------------------------------------\n");
}

BOOL WINAPI DllMain(HINSTANCE hinst_dll, DWORD fdw_reason, LPVOID /*unused*/)
{
	if (fdw_reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hinst_dll);

		CHAR sysDir[MAX_PATH];
		GetSystemDirectoryA(sysDir, MAX_PATH);

		char buffer[MAX_PATH];
		sprintf_s(buffer, "%s\\version.dll", sysDir);

		m_hinst_dll = LoadLibraryA(buffer);
		if (m_hinst_dll == nullptr)
		{
			return FALSE;
		}

		for (int i = 0; i < 17; i++)
		{
			mProcs[i] = reinterpret_cast<UINT_PTR>(GetProcAddress(m_hinst_dll, import_names[i]));
		}

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
