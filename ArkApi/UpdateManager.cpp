#include "stdafx.h"
#include "UpdateManager.h"
#include "JsonUtils.h"

namespace UpdateManager
{
	void Update()
	{
		std::string dirPath = JsonUtils::GetCurrentDir();

		Startup(dirPath + "/PDBReader.exe");
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
