#include "HooksImpl.h"

#include <windows.h>
#include <iostream>

#include "Hooks.h"
#include "ApiUtils.h"
#include "Commands.h"

#include "API/ARK/Ark.h"

namespace ArkApi
{
	// Hooks declaration
	DECLARE_HOOK(UWorld_InitWorld, void, UWorld*, DWORD64);
	DECLARE_HOOK(UWorld_Tick, void, DWORD64, DWORD64, float);
	DECLARE_HOOK(AShooterGameMode_InitGame, void, AShooterGameMode*, FString*, FString*, FString*);
	DECLARE_HOOK(AShooterPlayerController_ServerSendChatMessage_Impl, void, AShooterPlayerController*, FString*,
		EChatSendMode::Type);
	DECLARE_HOOK(APlayerController_ConsoleCommand, FString*, APlayerController*, FString*, FString*, bool);
	DECLARE_HOOK(RCONClientConnection_ProcessRCONPacket, void, RCONClientConnection*, RCONPacket*, UWorld*);
	DECLARE_HOOK(AGameState_DefaultTimer, void, AGameState*);

	void InitHooks()
	{
		auto& hooks = Hooks::Get();

		hooks.SetHook("UWorld", "InitWorld", &Hook_UWorld_InitWorld,
		              reinterpret_cast<LPVOID*>(&UWorld_InitWorld_original));
		hooks.SetHook("UWorld", "Tick", &Hook_UWorld_Tick, reinterpret_cast<LPVOID*>(&UWorld_Tick_original));
		hooks.SetHook("AShooterGameMode", "InitGame", &Hook_AShooterGameMode_InitGame,
		              reinterpret_cast<LPVOID*>(&AShooterGameMode_InitGame_original));
		hooks.SetHook("AShooterPlayerController", "ServerSendChatMessage_Implementation",
		              &Hook_AShooterPlayerController_ServerSendChatMessage_Impl,
		              reinterpret_cast<LPVOID*>(&AShooterPlayerController_ServerSendChatMessage_Impl_original));
		hooks.SetHook("APlayerController", "ConsoleCommand", &Hook_APlayerController_ConsoleCommand,
		              reinterpret_cast<LPVOID*>(&APlayerController_ConsoleCommand_original));
		hooks.SetHook("RCONClientConnection", "ProcessRCONPacket", &Hook_RCONClientConnection_ProcessRCONPacket,
		              reinterpret_cast<LPVOID*>(&RCONClientConnection_ProcessRCONPacket_original));
		hooks.SetHook("AGameState", "DefaultTimer", &Hook_AGameState_DefaultTimer,
		              reinterpret_cast<LPVOID*>(&AGameState_DefaultTimer_original));
	}


	// Hooks

	void _cdecl Hook_UWorld_InitWorld(UWorld* world, DWORD64 ivs)
	{
		std::cout << "[API] UWorld::InitWorld was called" << std::endl;

		ApiUtils::Get().SetWorld(world);
		
		UWorld_InitWorld_original(world, ivs);
	}

	void _cdecl Hook_UWorld_Tick(DWORD64 world, DWORD64 tick_type, float delta_seconds)
	{
		Commands::Get().CheckOnTickCallbacks(delta_seconds);

		UWorld_Tick_original(world, tick_type, delta_seconds);
	}

	void _cdecl Hook_AShooterGameMode_InitGame(AShooterGameMode* a_shooter_game_mode, FString* map_name, FString* options,
	                                           FString* error_message)
	{
		ApiUtils::Get().SetShooterGameMode(a_shooter_game_mode);

		AShooterGameMode_InitGame_original(a_shooter_game_mode, map_name, options, error_message);
	}

	void _cdecl Hook_AShooterPlayerController_ServerSendChatMessage_Impl(
		AShooterPlayerController* a_shooter_player_controller, FString* message, EChatSendMode::Type mode)
	{
		if (Commands::Get().CheckChatCommands(a_shooter_player_controller, message, mode))
			return;

		AShooterPlayerController_ServerSendChatMessage_Impl_original(a_shooter_player_controller, message, mode);
	}

	FString* _cdecl Hook_APlayerController_ConsoleCommand(APlayerController* a_player_controller, FString* result,
	                                                      FString* cmd, bool write_to_log)
	{
		Commands::Get().CheckConsoleCommands(a_player_controller, cmd, write_to_log);

		return APlayerController_ConsoleCommand_original(a_player_controller, result, cmd, write_to_log);
	}

	void _cdecl Hook_RCONClientConnection_ProcessRCONPacket(RCONClientConnection* _this, RCONPacket* packet,
	                                                        UWorld* in_world)
	{
		Commands::Get().CheckRconCommands(_this, packet, in_world);

		RCONClientConnection_ProcessRCONPacket_original(_this, packet, in_world);
	}

	void _cdecl Hook_AGameState_DefaultTimer(AGameState* _this)
	{
		Commands::Get().CheckOnTimerCallbacks();

		AGameState_DefaultTimer_original(_this);
	}
}
