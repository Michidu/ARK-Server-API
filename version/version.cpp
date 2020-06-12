#include <Windows.h>
#include <cstdio>
#include <filesystem>

#include "Core/Private/Ark/ArkBaseApi.h"
#include "Core/Private/Atlas/AtlasBaseApi.h"
#include "Core/Public/Logger/Logger.h"
#include "Core/Public/Tools.h"

#pragma comment(lib, "libMinHook.x64.lib")
#pragma comment(lib, "libcurl.lib")
#pragma comment(lib, "libeay32.lib")
#pragma comment(lib, "ssleay32.lib")

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

std::time_t GetFileWriteTime(const std::filesystem::path& filename)
{
	struct _stat64 fileInfo{};
	if (_wstati64(filename.wstring().c_str(), &fileInfo) != 0)
	{
		throw std::runtime_error("Failed to get last write time.");
	}
	return fileInfo.st_mtime;
}

void PruneOldLogs()
{
	namespace fs = std::filesystem;

	const auto now = std::chrono::system_clock::now();

	const std::string current_dir = API::Tools::GetCurrentDir();

	for (const auto& file : fs::directory_iterator(current_dir + "/logs"))
	{
		const std::time_t ftime = GetFileWriteTime(file);

		if (file.path().filename() == "ArkApi.log")
		{
			tm tm{};
			localtime_s(&tm, &ftime);

			char time_str[64];
			strftime(time_str, 64, "%Y-%m-%d-%H-%M", &tm);

			const std::string new_name = "ArkApi_" + std::string(time_str) + ".log";
			std::rename(file.path().generic_string().data(), (current_dir + "/logs/" + new_name).data());
		}

		const auto time_point = std::chrono::system_clock::from_time_t(ftime);

		auto diff = std::chrono::duration_cast<std::chrono::hours>(now - time_point);
		if (diff.count() >= 24 * 14) // 14 days
		{
			fs::remove(file);
		}
	}
}

std::string DetectGame()
{
	namespace fs = std::filesystem;

	const std::string current_dir = API::Tools::GetCurrentDir();

	for (const auto& directory_entry : fs::directory_iterator(current_dir))
	{
		const auto& path = directory_entry.path();
		if (is_directory(path))
		{
			const auto name = path.filename().stem().generic_string();
			if (name == "ArkApi")
			{
				return "Ark";
			}
			if (name == "AtlasApi")
			{
				return "Atlas";
			}
		}
	}

	return "";
}

void Init()
{
	namespace fs = std::filesystem;

	OpenConsole();

	const std::string current_dir = API::Tools::GetCurrentDir();

	if (!fs::exists(current_dir + "/logs"))
	{
		fs::create_directory(current_dir + "/logs");
	}

	PruneOldLogs();

	Log::Get().Init("API");

	const std::string game_name = DetectGame();
	if (game_name == "Ark")
		API::game_api = std::make_unique<API::ArkBaseApi>();
	else if (game_name == "Atlas")
		API::game_api = std::make_unique<API::AtlasBaseApi>();
	else
		Log::GetLog()->critical("Failed to detect game");

	API::game_api->Init();
}

BOOL WINAPI DllMain(HINSTANCE hinst_dll, DWORD fdw_reason, LPVOID /*unused*/)
{
	if (fdw_reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hinst_dll);

		CHAR sys_dir[MAX_PATH];
		GetSystemDirectoryA(sys_dir, MAX_PATH);

		char buffer[MAX_PATH];
		sprintf_s(buffer, "%s\\version.dll", sys_dir);

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
