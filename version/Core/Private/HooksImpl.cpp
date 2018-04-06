#include "HooksImpl.h"

#include <Logger/Logger.h>

#include "Hooks.h"
#include "ApiUtils.h"
#include "Commands.h"
#include "PluginManager/PluginManager.h"

namespace ArkApi
{
	// Hooks declaration
	DECLARE_HOOK(UEngine_Init, void, DWORD64, DWORD64);
	DECLARE_HOOK(UWorld_InitWorld, void, UWorld*, DWORD64);
	DECLARE_HOOK(UWorld_Tick, void, DWORD64, DWORD64, float);
	DECLARE_HOOK(AShooterGameMode_InitGame, void, AShooterGameMode*, FString*, FString*, FString*);
	DECLARE_HOOK(AShooterPlayerController_ServerSendChatMessage_Impl, void, AShooterPlayerController*, FString*,
		EChatSendMode::Type);
	DECLARE_HOOK(APlayerController_ConsoleCommand, FString*, APlayerController*, FString*, FString*, bool);
	DECLARE_HOOK(RCONClientConnection_ProcessRCONPacket, void, RCONClientConnection*, RCONPacket*, UWorld*);
	DECLARE_HOOK(AGameState_DefaultTimer, void, AGameState*);
	DECLARE_HOOK(AShooterGameMode_BeginPlay, void, AShooterGameMode*);

	void InitHooks()
	{
		auto& hooks = Hooks::Get();

		hooks.SetHook("UEngine.Init", &Hook_UEngine_Init, &UEngine_Init_original);
		hooks.SetHook("UWorld.InitWorld", &Hook_UWorld_InitWorld, &UWorld_InitWorld_original);
		hooks.SetHook("UWorld.Tick", &Hook_UWorld_Tick, &UWorld_Tick_original);
		hooks.SetHook("AShooterGameMode.InitGame", &Hook_AShooterGameMode_InitGame, &AShooterGameMode_InitGame_original);
		hooks.SetHook("AShooterPlayerController.ServerSendChatMessage_Implementation",
		              &Hook_AShooterPlayerController_ServerSendChatMessage_Impl,
		              &AShooterPlayerController_ServerSendChatMessage_Impl_original);
		hooks.SetHook("APlayerController.ConsoleCommand", &Hook_APlayerController_ConsoleCommand,
		              &APlayerController_ConsoleCommand_original);
		hooks.SetHook("RCONClientConnection.ProcessRCONPacket", &Hook_RCONClientConnection_ProcessRCONPacket,
		              &RCONClientConnection_ProcessRCONPacket_original);
		hooks.SetHook("AGameState.DefaultTimer", &Hook_AGameState_DefaultTimer, &AGameState_DefaultTimer_original);
		hooks.SetHook("AShooterGameMode.BeginPlay", &Hook_AShooterGameMode_BeginPlay, &AShooterGameMode_BeginPlay_original);

		Log::GetLog()->info("Initialized hooks\n");
	}

	// Hooks

	void Hook_UEngine_Init(DWORD64 _this, DWORD64 InEngineLoop)
	{
		UEngine_Init_original(_this, InEngineLoop);

		Log::GetLog()->info("UGameEngine::Init was called");
		Log::GetLog()->info("Loading plugins..\n");

		PluginManager::Get().LoadAllPlugins();
	}

	void Hook_UWorld_InitWorld(UWorld* world, DWORD64 ivs)
	{
		Log::GetLog()->info("UWorld::InitWorld was called");

		ApiUtils::Get().SetWorld(world);

		UWorld_InitWorld_original(world, ivs);
	}

	void Hook_UWorld_Tick(DWORD64 world, DWORD64 tick_type, float delta_seconds)
	{
		Commands::Get().CheckOnTickCallbacks(delta_seconds);

		UWorld_Tick_original(world, tick_type, delta_seconds);
	}

	void Hook_AShooterGameMode_InitGame(AShooterGameMode* a_shooter_game_mode, FString* map_name, FString* options,
	                                    FString* error_message)
	{
		ApiUtils::Get().SetShooterGameMode(a_shooter_game_mode);

		AShooterGameMode_InitGame_original(a_shooter_game_mode, map_name, options, error_message);
	}

	void Hook_AShooterPlayerController_ServerSendChatMessage_Impl(
		AShooterPlayerController* player_controller, FString* message, EChatSendMode::Type mode)
	{
		const long double last_chat_time = player_controller->LastChatMessageTimeField();
		const long double time_seconds = ApiUtils::Get().GetWorld()->TimeSecondsField();

		const auto spam_check = last_chat_time > 0 && time_seconds - last_chat_time < 1.0;

		const auto command_executed = !spam_check
			                              ? Commands::Get().CheckChatCommands(player_controller, message, mode)
			                              : false;
		if (command_executed) 
			player_controller->LastChatMessageTimeField() = time_seconds;

		const auto prevent_default = Commands::Get().CheckOnChatMessageCallbacks(
			player_controller, message, mode, spam_check, command_executed);

		if (spam_check || command_executed || prevent_default)
			return;

		AShooterPlayerController_ServerSendChatMessage_Impl_original(player_controller, message, mode);
	}

	FString* Hook_APlayerController_ConsoleCommand(APlayerController* a_player_controller, FString* result,
	                                               FString* cmd, bool write_to_log)
	{
		Commands::Get().CheckConsoleCommands(a_player_controller, cmd, write_to_log);

		return APlayerController_ConsoleCommand_original(a_player_controller, result, cmd, write_to_log);
	}

	void Hook_RCONClientConnection_ProcessRCONPacket(RCONClientConnection* _this, RCONPacket* packet,
	                                                 UWorld* in_world)
	{
		Commands::Get().CheckRconCommands(_this, packet, in_world);

		RCONClientConnection_ProcessRCONPacket_original(_this, packet, in_world);
	}

	void Hook_AGameState_DefaultTimer(AGameState* _this)
	{
		Commands::Get().CheckOnTimerCallbacks();

		AGameState_DefaultTimer_original(_this);
	}

	void Hook_AShooterGameMode_BeginPlay(AShooterGameMode* _AShooterGameMode)
	{
		AShooterGameMode_BeginPlay_original(_AShooterGameMode);

		ApiUtils::Get().SetStatus(ServerStatus::Ready);
	}
}
