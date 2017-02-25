#include "stdafx.h"
#include "UpdateManager.h"
#include <fstream>
#include <string>
#include "JsonUtils.h"
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

namespace UpdateManager
{
	void CheckUpdate()
	{
		std::wstring dirPath = JsonUtils::GetCurrentDir();

		std::wstring versionPath = CutPath(dirPath, 3);

		std::string serverVersion = GetVersion(versionPath + L"/version.txt");
		std::string dumpVersion = GetVersion(dirPath + L"/version.txt");

		std::wstring dumpFile = dirPath + L"/dump.json";

		if (dumpVersion != serverVersion || !fs::exists(dumpFile))
		{
			std::cout << "Updating offsets.." << std::endl;

			Startup(dirPath + L"/PDBReader.exe");

			SetDumpVersion(serverVersion);
		}

		if (dumpVersion == "") // Create dump version file
		{
			SetDumpVersion(serverVersion);
		}
	}

	std::wstring CutPath(const std::wstring& path, size_t amount)
	{
		std::wstring result = path;

		for (int i = 0; i < amount; i++)
		{
			result = result.substr(0, result.find_last_of(L"\\/"));
		}

		return result;
	}

	std::string GetVersion(const std::wstring& fileName)
	{
		std::string version = "";

		std::ifstream file(fileName);

		file >> version;
		file.close();

		return version;
	}

	void SetDumpVersion(std::string newVersion)
	{
		std::wstring dirPath = JsonUtils::GetCurrentDir();

		std::ofstream file(dirPath + L"/version.txt");
		file << newVersion;
		file.close();
	}

	void Startup(const std::wstring& lpApplicationName)
	{
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));

		CreateProcess(lpApplicationName.c_str(), nullptr, nullptr, nullptr, false, 0, nullptr, nullptr, &si, &pi);

		WaitForSingleObject(pi.hProcess, INFINITE);

		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
}
