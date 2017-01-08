#include "ArkApiPrivatePCH.h"
#include "UpdateManager.h"
#include <fstream>
#include <string>

namespace UpdateManager
{
	void CheckUpdate()
	{
		std::string serverVersion = GetVersion("../../../version.txt");
		std::string dumpVersion = GetVersion("version.txt");

		if (dumpVersion != serverVersion)
		{
			std::cout << "Updating offsets.." << std::endl;

			Startup(L"PDBReader.exe");

			SetDumpVersion(serverVersion);
		}

		if (dumpVersion == "") // Create dump version file
		{
			SetDumpVersion(serverVersion);
		}
	}

	std::string GetVersion(std::string fileName)
	{
		std::string version = "";

		std::ifstream file(fileName);
		file >> version;
		file.close();

		return version;
	}

	void SetDumpVersion(std::string newVersion)
	{
		std::ofstream file("version.txt");
		file << newVersion;
		file.close();
	}

	void Startup(LPCTSTR lpApplicationName)
	{
		STARTUPINFO si;
		PROCESS_INFORMATION pi;

		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));

		CreateProcess(lpApplicationName, nullptr, nullptr, nullptr, false, 0, nullptr, nullptr, &si, &pi);

		WaitForSingleObject(pi.hProcess, INFINITE);

		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
}
