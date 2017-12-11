#ifndef COMMANDS_H
#define COMMANDS_H

#include "API/ARK/Ark.h"

namespace ArkApi
{
	class Commands
	{
	public:
		ARK_API static Commands& Get();

		Commands(const Commands&) = delete;
		Commands(Commands&&) = delete;
		Commands& operator=(const Commands&) = delete;
		Commands& operator=(Commands&&) = delete;

		ARK_API void AddChatCommand(const FString& command,
		                            const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>&
		                            callback);
		ARK_API void RemoveChatCommand(const FString& command);

		ARK_API void AddConsoleCommand(const FString& command,
		                               const std::function<void(APlayerController*, FString*, bool)>& callback);
		ARK_API void AddRconCommand(const FString& command,
		                            const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback);
		ARK_API void AddOnTickCallback(const std::function<void(float)>& callback);
		ARK_API void AddOnTimerCallback(const std::function<void()>& callback);

		ARK_API bool CheckChatCommands(AShooterPlayerController* a_shooter_player_controller, FString* message,
		                               EChatSendMode::Type mode);
		ARK_API bool CheckConsoleCommands(APlayerController* a_player_controller, FString* cmd, bool write_to_log);
		ARK_API bool CheckRconCommands(RCONClientConnection* rcon_client_connection, RCONPacket* rcon_packet,
		                               UWorld* u_world);
		ARK_API void CheckOnTickCallbacks(float delta_seconds);
		ARK_API void CheckOnTimerCallbacks();
	private:
		Commands() = default;

		template <typename T>
		struct Command
		{
			FString command;
			std::function<T> callback;
		};

		using ChatCommand = Command<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>;
		using ConsoleCommand = Command<void(APlayerController*, FString*, bool)>;
		using RconCommand = Command<void(RCONClientConnection*, RCONPacket*, UWorld*)>;

		std::vector<ChatCommand*> chat_commands_;
		std::vector<ConsoleCommand*> console_commands_;
		std::vector<RconCommand*> rcon_commands_;
		std::vector<std::function<void(float)>> on_tick_callbacks_;
		std::vector<std::function<void()>> on_timer_callbacks_;
	};
}

#endif // COMMANDS_H
