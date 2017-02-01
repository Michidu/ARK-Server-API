#include "ArkApiPrivatePCH.h"
#include "Commands.h"
#include "API/Base.h"
#include <vector>

namespace Commands
{
	// Commands containers

	std::vector<ChatCommand*> chatCommands;
	std::vector<ConsoleCommand*> consoleCommands;
	std::vector<RconCommand*> rconCommands;
	std::vector<std::function<void(float)>> onTickCallbacks;

	// Add commands

	void AddChatCommand(const FString& command, const std::function<void(AShooterPlayerController*, FString*, int)>& callback)
	{
		ChatCommand* chatCommand = new ChatCommand(command, callback);
		chatCommands.push_back(chatCommand);
	}

	void AddConsoleCommand(const FString& command, const std::function<void(APlayerController*, FString*, bool)>& callback)
	{
		ConsoleCommand* consoleCommand = new ConsoleCommand(command, callback);
		consoleCommands.push_back(consoleCommand);
	}

	void AddRconCommand(const FString& command, const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback)
	{
		RconCommand* rconCommand = new RconCommand(command, callback);
		rconCommands.push_back(rconCommand);
	}

	void AddOnTickCallback(const std::function<void(float)>& callback)
	{
		onTickCallbacks.push_back(callback);
	}

	// Callbacks

	bool CheckChatCommands(const FString& commandName, AShooterPlayerController* _AShooterPlayerController, FString* Message, int Mode)
	{
		bool result = false;

		for (auto command : chatCommands)
		{
			if (commandName.StartsWith(command->command, ESearchCase::IgnoreCase))
			{
				command->callback(_AShooterPlayerController, Message, Mode);

				result = true;
			}
		}

		return result;
	}

	bool CheckConsoleCommands(const FString& commandName, APlayerController* _APlayerController, FString* Cmd, bool bWriteToLog)
	{
		bool result = false;

		for (auto command : consoleCommands)
		{
			if (commandName.StartsWith(command->command, ESearchCase::IgnoreCase))
			{
				command->callback(_APlayerController, Cmd, bWriteToLog);

				result = true;
			}
		}

		return result;
	}

	bool CheckRconCommands(const FString& commandName, RCONClientConnection* rconClientConnection, RCONPacket* rconPacket, UWorld* uWorld)
	{
		bool result = false;

		for (auto command : rconCommands)
		{
			if (commandName.StartsWith(command->command, ESearchCase::IgnoreCase))
			{
				command->callback(rconClientConnection, rconPacket, uWorld);

				result = true;
			}
		}

		return result;
	}

	void CheckOnTickCallbacks(float DeltaSeconds)
	{
		for (auto callback : onTickCallbacks)
		{
			callback(DeltaSeconds);
		}
	}
}
