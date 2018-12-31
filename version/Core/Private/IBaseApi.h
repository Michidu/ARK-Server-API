#pragma once

#include <memory>
#include <string>

#include "ICommands.h"

namespace API
{
	class IBaseApi
	{
	public:
		virtual ~IBaseApi() = default;

		virtual bool Init() = 0;
		virtual float GetVersion() = 0;
		virtual std::string GetApiName() = 0;
		virtual void RegisterCommands() = 0;

		virtual std::unique_ptr<ArkApi::ICommands>& GetCommands() = 0;
		virtual std::unique_ptr<ArkApi::IHooks>& GetHooks() = 0;
		virtual std::unique_ptr<ArkApi::IApiUtils>& GetApiUtils() = 0;
	};

	inline std::unique_ptr<IBaseApi> game_api;
} // namespace API
