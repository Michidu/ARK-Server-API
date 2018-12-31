#pragma once

#include <functional>

#ifdef ARK_GAME
#include <API/ARK/Ark.h>
#else
#include <API/Atlas/Atlas.h>
#endif

namespace ArkApi
{
	class ARK_API ICommands
	{
	public:
		virtual ~ICommands() = default;

		/**
		 * \brief Adds a chat command
		 * \param command Command name
		 * \param callback Callback function
		 */
		virtual void AddChatCommand(const FString& command,
		                            const std::function<void(AShooterPlayerController*, FString*, EChatSendMode::Type)>&
		                            callback) = 0;
		/**
		* \brief Adds a console command
		* \param command Command name
		* \param callback Callback function
		*/
		virtual void AddConsoleCommand(const FString& command,
		                               const std::function<void(APlayerController*, FString*, bool)>& callback) = 0;

		/**
		* \brief Adds a rcon command
		* \param command Command name
		* \param callback Callback function
		*/
		virtual void AddRconCommand(const FString& command,
		                            const std::function<void(RCONClientConnection*, RCONPacket*, UWorld*)>& callback) =
		0;

		/**
		 * \brief Added function will be called every frame
		 * \param id Unique ID
		 * \param callback Callback function
		 */
		virtual void AddOnTickCallback(const FString& id, const std::function<void(float)>& callback) = 0;

		/**
		 * \brief Added function will be called every second
		 * \param id Unique ID
		 * \param callback Callback function
		 */
		virtual void AddOnTimerCallback(const FString& id, const std::function<void()>& callback) = 0;

		/**
		* \brief Added function will be called for AShooterPlayerController->ServerSendChatMessage events
		* \param id Unique ID
		* \param callback Callback function
		*/
		virtual void AddOnChatMessageCallback(const FString& id,
		                                      const std::function<bool(AShooterPlayerController*, FString*,
		                                                               EChatSendMode::Type, bool, bool)>& callback) = 0;

		/**
		 * \brief Removes a chat command
		 * \param command Command name
		 * \return true if success, false otherwise
		 */
		virtual bool RemoveChatCommand(const FString& command) = 0;

		/**
		 * \brief Removes a console command
		 * \param command Command name
		 * \return true if success, false otherwise
		 */
		virtual bool RemoveConsoleCommand(const FString& command) = 0;

		/**
		 * \brief Removes a rcon command
		 * \param command Command name
		 * \return true if success, false otherwise
		 */
		virtual bool RemoveRconCommand(const FString& command) = 0;

		/**
		 * \brief Removes a on-tick callback
		 * \param id Callback ID
		 * \return true if success, false otherwise
		 */
		virtual bool RemoveOnTickCallback(const FString& id) = 0;

		/**
		 * \brief Removes an on-timer callback
		 * \param id Callback ID
		 * \return true if success, false otherwise
		 */
		virtual bool RemoveOnTimerCallback(const FString& id) = 0;

		/**
		* \brief Removes an on-chat-message callback
		* \param id Callback ID
		* \return true if success, false otherwise
		*/
		virtual bool RemoveOnChatMessageCallback(const FString& id) = 0;
	};

	ARK_API ICommands& APIENTRY GetCommands();
} // namespace ArkApi
