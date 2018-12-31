#pragma once

#include <IHooks.h>

#include <memory>
#include <unordered_map>

namespace API
{
	class Hooks : public ArkApi::IHooks
	{
	public:
		Hooks();

		Hooks(const Hooks&) = delete;
		Hooks(Hooks&&) = delete;
		Hooks& operator=(const Hooks&) = delete;
		Hooks& operator=(Hooks&&) = delete;

		~Hooks() override = default;

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

		std::unordered_map<std::string, std::vector<std::shared_ptr<Hook>>> all_hooks_;
	};
} // namespace API
