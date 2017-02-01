#include "ArkApiPrivatePCH.h"
#include "Ark.h"
#include <functional>
#include "ApiUtils.h"
#include "Hooks.h"
#include "Commands.h"

namespace Ark
{
	UWorld* GetWorld()
	{
		return ApiUtils::GetWorld();
	}

	AShooterGameMode* GetGameMode()
	{
		return ApiUtils::GetGameMode();
	}

	void SetHook(const std::string& structure, const std::string& funcName, LPVOID pDetour, LPVOID* ppOriginal)
	{
		Hooks::SetHook(structure, funcName, pDetour, ppOriginal);
	}

	void AddChatCommand(const FString& command, const std::function<void(AShooterPlayerController*, FString*, int)>& callback)
	{
		Commands::AddChatCommand(command, callback);
	}

	void AddConsoleCommand(const FString& command, const std::function<void(APlayerController*, FString*, bool)>& callback)
	{
		Commands::AddConsoleCommand(command, callback);
	}

	void AddRconCommand(const FString& command, const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback)
	{
		Commands::AddRconCommand(command, callback);
	}

	void AddOnTickCallback(const std::function<void(float)>& callback)
	{
		Commands::AddOnTickCallback(callback);
	}
}
