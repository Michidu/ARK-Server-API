#ifndef H_Hooks
#define H_Hooks

#include <string>
#include "json.hpp"
#include "API/Ark.h"

namespace Hooks
{
	struct Hook
	{
		LPVOID pTarget;
		LPVOID pDetour;
	};

	// Init
	void Init();
	void InitBaseAddress();
	void InitHooks();

	// Hook
	void SetHook(const std::string& structure, const std::string& funcName, LPVOID pDetour, LPVOID* ppOriginal);
	void DisableHook(const std::string& structure, const std::string& funcName);

	// Address helpers
	DWORD64 GetAddress(const void* base, const std::string& structure, const std::string& offset);
	DWORD64 GetAddress(LPVOID base, const std::string& structure, const std::string& offset);
	LPVOID GetAddress(const std::string& structure, const std::string& offset);
}

#endif
