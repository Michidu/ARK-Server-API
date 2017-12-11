#include "Hooks.h"

#include <iostream>
#include <string>

#include "../../MinHook.h"
#include "Offsets.h"

namespace ArkApi
{
	Hooks::Hooks()
	{
		if (MH_Initialize() != MH_OK)
			throw std::runtime_error{"Can't initialize MinHook"};
	}

	Hooks& Hooks::Get()
	{
		static Hooks instance;
		return instance;
	}

	void Hooks::SetHook(const std::string& structure, const std::string& func_name, const LPVOID p_detour,
	                    LPVOID* pp_original)
	{
		const LPVOID target = Offsets::Get().GetAddress(structure, func_name);

		if (MH_CreateHook(target, p_detour, pp_original) != MH_OK)
		{
			std::cout << "Failed to create hook for " << structure << "::" << func_name << std::endl;
			return;
		}

		if (MH_EnableHook(target) != MH_OK)
		{
			std::cout << "Failed to enable hook for " << structure << "::" << func_name << std::endl;
		}
	}

	void Hooks::DisableHook(const std::string& structure, const std::string& func_name)
	{
		const LPVOID target = Offsets::Get().GetAddress(structure, func_name);

		if (MH_RemoveHook(target) != MH_OK)
		{
			std::cout << "Failed to disable hook for " << structure << "::" << func_name << std::endl;
		}
	}
}
