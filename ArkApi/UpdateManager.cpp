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
		std::string dirPath = JsonUtils::GetCurrentDir();

		std::string versionPath = CutPath(dirPath, 3);

		std::string serverVersion = GetVersion(versionPath + "/version.txt");
		std::string dumpVersion = GetVersion(dirPath + "/version.txt");

		std::string dumpFile = dirPath + "/dump.json";

		if (dumpVersion != serverVersion || !fs::exists(dumpFile))
		{
			std::cout << "Updating offsets.." << std::endl;

			Startup(dirPath + "/PDBReader.exe");

			SetDumpVersion(serverVersion);
		}

		if (dumpVersion == "") // Create dump version file
		{
			SetDumpVersion(serverVersion);
		}
	}

	std::string CutPath(const std::string& path, size_t amount)
	{
		std::string result = path;

		for (int i = 0; i < amount; i++)
		{
			result = result.substr(0, result.find_last_of("\\/"));
		}

		return result;
	}

	std::string GetVersion(const std::string& fileName)
	{
		std::string version = "";

		std::ifstream file(fileName);

		file >> version;
		file.close();

		return version;
	}

	void SetDumpVersion(std::string newVersion)
	{
		std::string dirPath = JsonUtils::GetCurrentDir();

		std::ofstream file(dirPath + "/version.txt");
		file << newVersion;
		file.close();
	}

	void Startup(const std::string& lpApplicationName)
	{
		STARTUPINFOA si;
		PROCESS_INFORMATION pi;

		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));

		CreateProcessA(lpApplicationName.c_str(), nullptr, nullptr, nullptr, false, 0, nullptr, nullptr, &si, &pi);

		WaitForSingleObject(pi.hProcess, INFINITE);

		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
}
