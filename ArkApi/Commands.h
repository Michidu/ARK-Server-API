#ifndef H_Commands
#define H_Commands

#include "API/Base.h"

namespace Commands
{
	// Command structures

	struct ChatCommand
	{
		ChatCommand(const FString& command, const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>& callback)
			: command(command),
			  callback(callback)
		{
		}

		FString command;
		std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)> callback;
	};

	struct ConsoleCommand
	{
		ConsoleCommand(const FString& command, const std::function<void(APlayerController*, FString*, bool)>& callback)
			: command(command),
			  callback(callback)
		{
		}

		FString command;
		std::function<void(APlayerController*, FString*, bool)> callback;
	};

	struct RconCommand
	{
		RconCommand(const FString& command, const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback)
			: command(command),
			  callback(callback)
		{
		}

		FString command;
		std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)> callback;
	};

	// Add commands

	void AddChatCommand(const FString& command, const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>& callback);
	void RemoveChatCommand(const FString& command);
	void AddConsoleCommand(const FString& command, const std::function<void(APlayerController*, FString*, bool)>& callback);
	void AddRconCommand(const FString& command, const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback);
	void AddOnTickCallback(const std::function<void(float)>& callback);
	void AddOnTimerCallback(const std::function<void()>& callback);

	// Check callbacks

	bool CheckChatCommands(const FString& commandName, AShooterPlayerController* _AShooterPlayerController, FString* Message, EChatSendMode::Type Mode);
	bool CheckConsoleCommands(const FString& commandName, APlayerController* _APlayerController, FString* Cmd, bool bWriteToLog);
	bool CheckRconCommands(const FString& commandName, RCONClientConnection* rconClientConnection, RCONPacket* rconPacket, UWorld* uWorld);
	void CheckOnTickCallbacks(float DeltaSeconds);
	void CheckOnTimerCallbacks();
}

#endif
