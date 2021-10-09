#include "HooksImpl.h"

#include "ApiUtils.h"
#include "../Commands.h"
#include "../Hooks.h"
#include "../PluginManager/PluginManager.h"
#include "../IBaseApi.h"

#include <Logger/Logger.h>

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
	DECLARE_HOOK(URCONServer_Init, bool, URCONServer*, FString, int, UShooterCheatManager*);
	DECLARE_HOOK(APlayerController_ServerReceivedPlayerControllerAck_Implementation, void, APlayerController*);
	DECLARE_HOOK(AShooterPlayerController_Possess, void, AShooterPlayerController*, APawn*);
	DECLARE_HOOK(AShooterGameMode_Logout, void, AShooterGameMode*, AController*);
	DECLARE_HOOK(ReportCrash, int, _EXCEPTION_POINTERS*);

	void InitHooks()
	{
		auto& hooks = API::game_api->GetHooks();

		hooks->SetHook("UEngine.Init", &Hook_UEngine_Init, &UEngine_Init_original);
		hooks->SetHook("UWorld.InitWorld", &Hook_UWorld_InitWorld, &UWorld_InitWorld_original);
		hooks->SetHook("UWorld.Tick", &Hook_UWorld_Tick, &UWorld_Tick_original);
		hooks->SetHook("AShooterGameMode.InitGame", &Hook_AShooterGameMode_InitGame,
			&AShooterGameMode_InitGame_original);
		hooks->SetHook("AShooterPlayerController.ServerSendChatMessage_Implementation",
			&Hook_AShooterPlayerController_ServerSendChatMessage_Impl,
			&AShooterPlayerController_ServerSendChatMessage_Impl_original);
		hooks->SetHook("APlayerController.ConsoleCommand", &Hook_APlayerController_ConsoleCommand,
			&APlayerController_ConsoleCommand_original);
		hooks->SetHook("RCONClientConnection.ProcessRCONPacket", &Hook_RCONClientConnection_ProcessRCONPacket,
			&RCONClientConnection_ProcessRCONPacket_original);
		hooks->SetHook("AGameState.DefaultTimer", &Hook_AGameState_DefaultTimer, &AGameState_DefaultTimer_original);
		hooks->SetHook("AShooterGameMode.BeginPlay", &Hook_AShooterGameMode_BeginPlay,
			&AShooterGameMode_BeginPlay_original);
		hooks->SetHook("URCONServer.Init", &Hook_URCONServer_Init, &URCONServer_Init_original);
		hooks->SetHook("APlayerController.ServerReceivedPlayerControllerAck_Implementation", &Hook_APlayerController_ServerReceivedPlayerControllerAck_Implementation,
			&APlayerController_ServerReceivedPlayerControllerAck_Implementation_original);
		hooks->SetHook("AShooterPlayerController.Possess", &Hook_AShooterPlayerController_Possess,
			&AShooterPlayerController_Possess_original);
		hooks->SetHook("AShooterGameMode.Logout", &Hook_AShooterGameMode_Logout, &AShooterGameMode_Logout_original);
		hooks->SetHook("Global.ReportCrash", &Hook_ReportCrash, &ReportCrash_original);

		Log::GetLog()->info("Initialized hooks\n");
	}

	// Hooks

	void Hook_UEngine_Init(DWORD64 _this, DWORD64 InEngineLoop)
	{
		UEngine_Init_original(_this, InEngineLoop);

		Log::GetLog()->info("UGameEngine::Init was called");
		Log::GetLog()->info("Loading plugins..\n");

		API::PluginManager::Get().LoadAllPlugins();

		dynamic_cast<API::IBaseApi&>(*API::game_api).RegisterCommands();
	}

	void Hook_UWorld_InitWorld(UWorld* world, DWORD64 ivs)
	{
		Log::GetLog()->info("UWorld::InitWorld was called");

		dynamic_cast<ApiUtils&>(*API::game_api->GetApiUtils()).SetWorld(world);

		UWorld_InitWorld_original(world, ivs);
	}

	void Hook_UWorld_Tick(DWORD64 world, DWORD64 tick_type, float delta_seconds)
	{
		Commands* command = dynamic_cast<Commands*>(API::game_api->GetCommands().get());
		if (command)
		{
			command->CheckOnTickCallbacks(delta_seconds);
		}

		UWorld_Tick_original(world, tick_type, delta_seconds);
	}

	void Hook_AShooterGameMode_InitGame(AShooterGameMode* a_shooter_game_mode, FString* map_name, FString* options,
		FString* error_message)
	{
		dynamic_cast<ApiUtils&>(*API::game_api->GetApiUtils()).SetShooterGameMode(a_shooter_game_mode);

		AShooterGameMode_InitGame_original(a_shooter_game_mode, map_name, options, error_message);
	}

	void Hook_AShooterPlayerController_ServerSendChatMessage_Impl(
		AShooterPlayerController* player_controller, FString* message, EChatSendMode::Type mode)
	{
		const long double last_chat_time = player_controller->LastChatMessageTimeField();
		const long double now_time = ArkApi::GetApiUtils().GetWorld()->TimeSecondsField();

		const auto spam_check = now_time - last_chat_time < 1.0;
		if (last_chat_time > 0 && spam_check)
		{
			return;
		}

		player_controller->LastChatMessageTimeField() = now_time;

		const auto command_executed = dynamic_cast<ArkApi::Commands&>(*API::game_api->GetCommands()).
			CheckChatCommands(player_controller, message, mode);

		const auto prevent_default = dynamic_cast<ArkApi::Commands&>(*API::game_api->GetCommands()).
			CheckOnChatMessageCallbacks(player_controller, message, mode, spam_check, command_executed);

		if (command_executed || prevent_default)
		{
			return;
		}

		AShooterPlayerController_ServerSendChatMessage_Impl_original(player_controller, message, mode);
	}

	FString* Hook_APlayerController_ConsoleCommand(APlayerController* a_player_controller, FString* result,
		FString* cmd, bool write_to_log)
	{
		dynamic_cast<Commands&>(*API::game_api->GetCommands()).CheckConsoleCommands(
			a_player_controller, cmd, write_to_log);

		return APlayerController_ConsoleCommand_original(a_player_controller, result, cmd, write_to_log);
	}

	void Hook_RCONClientConnection_ProcessRCONPacket(RCONClientConnection* _this, RCONPacket* packet,
		UWorld* in_world)
	{
		if (_this->IsAuthenticatedField())
		{
			dynamic_cast<Commands&>(*API::game_api->GetCommands()).CheckRconCommands(_this, packet, in_world);
		}

		RCONClientConnection_ProcessRCONPacket_original(_this, packet, in_world);
	}

	void Hook_AGameState_DefaultTimer(AGameState* _this)
	{
		Commands* command = dynamic_cast<Commands*>(API::game_api->GetCommands().get());
		if (command)
		{
			command->CheckOnTimerCallbacks();
		}

		AGameState_DefaultTimer_original(_this);
	}

	void Hook_AShooterGameMode_BeginPlay(AShooterGameMode* _AShooterGameMode)
	{
		AShooterGameMode_BeginPlay_original(_AShooterGameMode);

		dynamic_cast<ApiUtils&>(*API::game_api->GetApiUtils()).SetStatus(ServerStatus::Ready);
	}

	bool Hook_URCONServer_Init(URCONServer* _this, FString Password, int InPort, UShooterCheatManager* SCheatManager)
	{
		dynamic_cast<ApiUtils&>(*API::game_api->GetApiUtils()).SetCheatManager(SCheatManager);

		return URCONServer_Init_original(_this, Password, InPort, SCheatManager);
	}

	void Hook_APlayerController_ServerReceivedPlayerControllerAck_Implementation(APlayerController* _this)
	{
		APlayerController_ServerReceivedPlayerControllerAck_Implementation_original(_this);

		if (_this)
		{
			AShooterPlayerController* ASPC = static_cast<AShooterPlayerController*>(_this);
			dynamic_cast<ApiUtils&>(*API::game_api->GetApiUtils()).SetPlayerController(ASPC);
		}
	}

	void  Hook_AShooterPlayerController_Possess(AShooterPlayerController* _this, APawn* inPawn)
	{
		dynamic_cast<ApiUtils&>(*API::game_api->GetApiUtils()).SetPlayerController(_this);

		AShooterPlayerController_Possess_original(_this, inPawn);
	}

	void  Hook_AShooterGameMode_Logout(AShooterGameMode* _this, AController* Exiting)
	{
		AShooterPlayerController* Exiting_SPC = static_cast<AShooterPlayerController*>(Exiting);
		dynamic_cast<ApiUtils&>(*API::game_api->GetApiUtils()).RemovePlayerController(Exiting_SPC);

		AShooterGameMode_Logout_original(_this, Exiting);
	}

	int Hook_ReportCrash(_EXCEPTION_POINTERS* ExceptionInfo)
	{
		Log::GetLog()->error("-----------------------------------------------");
		Log::GetLog()->error("Server crash detected");

		HMODULE hm;
		::GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, static_cast<LPCTSTR>(ExceptionInfo->ExceptionRecord->ExceptionAddress), &hm);
		MODULEINFO mi;
		::GetModuleInformation(::GetCurrentProcess(), hm, &mi, sizeof(mi));
		char fn[MAX_PATH];
		::GetModuleFileNameExA(::GetCurrentProcess(), hm, fn, MAX_PATH);

		std::ostringstream oss;

		const char* se_description;
		switch (ExceptionInfo->ExceptionRecord->ExceptionCode) {
		case EXCEPTION_ACCESS_VIOLATION:          se_description = "EXCEPTION_ACCESS_VIOLATION";		 break;
		case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:     se_description = "EXCEPTION_ARRAY_BOUNDS_EXCEEDED";	 break;
		case EXCEPTION_BREAKPOINT:                se_description = "EXCEPTION_BREAKPOINT";				 break;
		case EXCEPTION_DATATYPE_MISALIGNMENT:     se_description = "EXCEPTION_DATATYPE_MISALIGNMENT";	 break;
		case EXCEPTION_FLT_DENORMAL_OPERAND:      se_description = "EXCEPTION_FLT_DENORMAL_OPERAND";	 break;
		case EXCEPTION_FLT_DIVIDE_BY_ZERO:        se_description = "EXCEPTION_FLT_DIVIDE_BY_ZERO";		 break;
		case EXCEPTION_FLT_INEXACT_RESULT:        se_description = "EXCEPTION_FLT_INEXACT_RESULT";		 break;
		case EXCEPTION_FLT_INVALID_OPERATION:     se_description = "EXCEPTION_FLT_INVALID_OPERATION";	 break;
		case EXCEPTION_FLT_OVERFLOW:              se_description = "EXCEPTION_FLT_OVERFLOW";			 break;
		case EXCEPTION_FLT_STACK_CHECK:           se_description = "EXCEPTION_FLT_STACK_CHECK";			 break;
		case EXCEPTION_FLT_UNDERFLOW:             se_description = "EXCEPTION_FLT_UNDERFLOW";			 break;
		case EXCEPTION_ILLEGAL_INSTRUCTION:       se_description = "EXCEPTION_ILLEGAL_INSTRUCTION";		 break;
		case EXCEPTION_IN_PAGE_ERROR:             se_description = "EXCEPTION_IN_PAGE_ERROR";			 break;
		case EXCEPTION_INT_DIVIDE_BY_ZERO:        se_description = "EXCEPTION_INT_DIVIDE_BY_ZERO";		 break;
		case EXCEPTION_INT_OVERFLOW:              se_description = "EXCEPTION_INT_OVERFLOW";			 break;
		case EXCEPTION_INVALID_DISPOSITION:       se_description = "EXCEPTION_INVALID_DISPOSITION";		 break;
		case EXCEPTION_NONCONTINUABLE_EXCEPTION:  se_description = "EXCEPTION_NONCONTINUABLE_EXCEPTION"; break;
		case EXCEPTION_PRIV_INSTRUCTION:          se_description = "EXCEPTION_PRIV_INSTRUCTION";		 break;
		case EXCEPTION_SINGLE_STEP:               se_description = "EXCEPTION_SINGLE_STEP";				 break;
		case EXCEPTION_STACK_OVERFLOW:            se_description = "EXCEPTION_STACK_OVERFLOW";			 break;
		default:								  se_description = "UNKNOWN EXCEPTION";					 break;
		}

		oss << "SE " << se_description << " at address 0x" << std::hex << ExceptionInfo->ExceptionRecord->ExceptionAddress << std::dec
			<< " inside " << fn << " loaded at base address 0x" << std::hex << mi.lpBaseOfDll << "\n";

		if ((ExceptionInfo->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION ||
			ExceptionInfo->ExceptionRecord->ExceptionCode == EXCEPTION_IN_PAGE_ERROR)) {

			const char* op_description;

			switch (ExceptionInfo->ExceptionRecord->ExceptionInformation[0]) {
			case 0:		op_description = "read";												break;
			case 1:		op_description = "write";												break;
			case 8:		op_description = "user-mode data execution prevention (DEP) violation"; break;
			default:	op_description = "unknown";												break;
			}

			oss << "Invalid operation: " << op_description << " at address 0x" << std::hex << ExceptionInfo->ExceptionRecord->ExceptionInformation[1] << std::dec << "\n";
		}

		if (ExceptionInfo->ExceptionRecord->ExceptionCode == EXCEPTION_IN_PAGE_ERROR) {
			oss << "Underlying NTSTATUS code that resulted in the exception " << ExceptionInfo->ExceptionRecord->ExceptionInformation[2] << "\n";
		}

		Log::GetLog()->error("{}", oss.str());


		//return result;
		return ReportCrash_original(ExceptionInfo); // report native
	}
} // namespace ArkApi