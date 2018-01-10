#pragma once

#include <IHooks.h>

#include <unordered_map>
#include <memory>

namespace ArkApi
{
	class Hooks : public IHooks
	{
	public:
		static Hooks& Get();

		Hooks(const Hooks&) = delete;
		Hooks(Hooks&&) = delete;
		Hooks& operator=(const Hooks&) = delete;
		Hooks& operator=(Hooks&&) = delete;

		bool SetHookInternal(const std::string& func_name, LPVOID detour, LPVOID* original) override;

		bool DisableHook(const std::string& func_name, LPVOID detour) override;

	private:
		struct Hook
		{
			Hook(LPVOID target, LPVOID detour, LPVOID* original)
				: target(target),
				  detour(detour),
				  original(original)
			{
			}

			LPVOID target;
			LPVOID detour;
			LPVOID* original;
		};

		Hooks();
		~Hooks() = default;

		std::unordered_map<std::string, std::vector<std::shared_ptr<Hook>>> all_hooks_;
	};
}
