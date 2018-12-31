#include "Hooks.h"

#include <string>

#include <Logger/Logger.h>

#include "../../MinHook.h"
#include "Offsets.h"
#include "IBaseApi.h"

namespace API
{
	Hooks::Hooks()
	{
		if (MH_Initialize() != MH_OK)
		{
			Log::GetLog()->critical("Can't initialize MinHook");
			throw;
		}
	}

	bool Hooks::SetHookInternal(const std::string& func_name, LPVOID detour, LPVOID* original)
	{
		LPVOID target = Offsets::Get().GetAddress(func_name);
		if (target == nullptr)
		{
			Log::GetLog()->error("{} does not exist", func_name);
			return false;
		}

		auto& hook_vector = all_hooks_[func_name];

		LPVOID new_target = hook_vector.empty()
			                    ? target
			                    : hook_vector.back()->detour;

		hook_vector.push_back(std::make_shared<Hook>(new_target, detour, original));

		if (MH_CreateHook(new_target, detour, original) != MH_OK)
		{
			Log::GetLog()->error("Failed to create hook for {}", func_name);
			return false;
		}

		if (MH_EnableHook(new_target) != MH_OK)
		{
			Log::GetLog()->error("Failed to enable hook for {}", func_name);
			return false;
		}

		return true;
	}

	bool Hooks::DisableHook(const std::string& func_name, LPVOID detour)
	{
		const LPVOID target = Offsets::Get().GetAddress(func_name);
		if (target == nullptr)
		{
			Log::GetLog()->error("{} does not exist", func_name);
			return false;
		}

		auto& hook_vector = all_hooks_[func_name];

		const auto iter = std::find_if(hook_vector.begin(), hook_vector.end(),
		                               [detour](const std::shared_ptr<Hook>& hook) -> bool
		                               {
			                               return hook->detour == detour;
		                               });

		if (iter == hook_vector.end())
		{
			Log::GetLog()->warn("Failed to find hook");
			return false;
		}

		// Remove all hooks placed on this function
		for (const auto& hook : hook_vector)
		{
			if (MH_RemoveHook(hook->target) != MH_OK)
			{
				Log::GetLog()->error("Failed to disable hook for {}", func_name);
				return false;
			}
		}

		// Remove hook from all_hooks vector
		hook_vector.erase(std::remove(hook_vector.begin(), hook_vector.end(), *iter), hook_vector.end());

		auto hook_vec(move(hook_vector));
		hook_vector.clear();

		// Enable all hooks again
		for (const auto& hook : hook_vec)
		{
			SetHookInternal(func_name, hook->detour, hook->original);
		}

		return true;
	}
} // namespace API

// Free function
ArkApi::IHooks& ArkApi::GetHooks()
{
	return reinterpret_cast<IHooks&>(*API::game_api->GetHooks());
}
