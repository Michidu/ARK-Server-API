#include "Hooks.h"

#include <string>

#include "Logger/easylogging++.h"

#include "../../MinHook.h"
#include "Offsets.h"

namespace ArkApi
{
	Hooks::Hooks()
	{
		if (MH_Initialize() != MH_OK)
			LOG(FATAL) << "Can't initialize MinHook";
	}

	Hooks& Hooks::Get()
	{
		static Hooks instance;
		return instance;
	}

	bool Hooks::SetHook(const std::string& structure, const std::string& func_name, const LPVOID p_detour,
	                    LPVOID* pp_original)
	{
		const LPVOID target = Offsets::Get().GetAddress(structure, func_name);

		if (MH_CreateHook(target, p_detour, pp_original) != MH_OK)
		{
			LOG(ERROR) << "Failed to create hook for " << structure << "::" << func_name;
			return false;
		}

		if (MH_EnableHook(target) != MH_OK)
		{
			LOG(ERROR) << "Failed to enable hook for " << structure << "::" << func_name;
			return false;
		}

		return true;
	}

	void Hooks::DisableHook(const std::string& structure, const std::string& func_name)
	{
		const LPVOID target = Offsets::Get().GetAddress(structure, func_name);

		if (MH_RemoveHook(target) != MH_OK)
		{
			LOG(ERROR) << "Failed to disable hook for " << structure << "::" << func_name;
		}
	}

	// Free function
	IHooks& GetHooks()
	{
		return Hooks::Get();
	}
}
