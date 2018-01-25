#include "stdafx.h"
#include "Ark.h"
#include <functional>
#include "../ApiUtils.h"
#include "../Hooks.h"
#include "../Commands.h"

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
	
	void DisableHook(const std::string& structure, const std::string& funcName)
	{
		Hooks::DisableHook(structure, funcName);
	}

	void AddChatCommand(const FString& command, const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>& callback)
	{
		Commands::AddChatCommand(command, callback);
	}
	
	void RemoveChatCommand(const FString& command)
	{
		Commands::RemoveChatCommand(command);
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
	
	void AddOnTimerCallback(const std::function<void()>& callback)
	{
		Commands::AddOnTimerCallback(callback);
	}
}
