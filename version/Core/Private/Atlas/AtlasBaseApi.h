#pragma once

#include "../IBaseApi.h"

#include <IApiUtils.h>

namespace API
{
	class AtlasBaseApi : public IBaseApi
	{
	public:
		AtlasBaseApi();
		~AtlasBaseApi() override = default;

		bool Init() override;
		float GetVersion() override;
		std::string GetApiName() override;
		void RegisterCommands() override;

		std::unique_ptr<ArkApi::ICommands>& GetCommands() override;
		std::unique_ptr<ArkApi::IHooks>& GetHooks() override;
		std::unique_ptr<ArkApi::IApiUtils>& GetApiUtils() override;

	private:
		// Callbacks
		static FString LoadPlugin(FString* cmd);
		static FString UnloadPlugin(FString* cmd);

		static void LoadPluginCmd(APlayerController* /*player_controller*/, FString* /*cmd*/, bool /*unused*/);
		static void UnloadPluginCmd(APlayerController* /*player_controller*/, FString* /*cmd*/, bool /*unused*/);

		static void LoadPluginRcon(RCONClientConnection* /*rcon_connection*/, RCONPacket* /*rcon_packet*/,
		                           UWorld* /*unused*/);
		static void UnloadPluginRcon(RCONClientConnection* /*rcon_connection*/, RCONPacket* /*rcon_packet*/,
		                             UWorld* /*unused*/);

		std::unique_ptr<ArkApi::ICommands> commands_;
		std::unique_ptr<ArkApi::IHooks> hooks_;
		std::unique_ptr<ArkApi::IApiUtils> api_utils_;
	};
} // namespace API
