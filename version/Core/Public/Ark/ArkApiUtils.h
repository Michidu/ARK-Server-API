#pragma once

#include <optional>

#include <API/ARK/Ark.h>

namespace ArkApi
{
	enum class ServerStatus { Loading, Ready };

	class ARK_API IApiUtils
	{
	public:
		virtual ~IApiUtils() = default;

		/**
		* \brief Returns a pointer to UWorld
		*/
		virtual UWorld* GetWorld() const = 0;

		/**
		* \brief Returns a pointer to AShooterGameMode
		*/
		virtual AShooterGameMode* GetShooterGameMode() const = 0;

		/**
		* \brief Returns the current server status
		*/
		virtual ServerStatus GetStatus() const = 0;

		/**
		* \brief Sends server message to the specific player. Using fmt::format.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param player_controller Player
		* \param msg_color Message color
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendServerMessage(AShooterPlayerController* player_controller, FLinearColor msg_color, const T* msg,
		                       Args&&... args)
		{
			if (player_controller)
			{
				FString text(FString::Format(msg, std::forward<Args>(args)...));
				player_controller->ClientServerChatDirectMessage(&text, msg_color, false);
			}
		}

		/**
		* \brief Sends notification (on-screen message) to the specific player. Using fmt::format.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param player_controller Player
		* \param color Message color
		* \param display_scale Size of text
		* \param display_time Display time
		* \param icon Message icon (optional)
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendNotification(AShooterPlayerController* player_controller, FLinearColor color, float display_scale,
		                      float display_time, UTexture2D* icon, const T* msg, Args&&... args)
		{
			if (player_controller)
			{
				FString text(FString::Format(msg, std::forward<Args>(args)...));

				player_controller->ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon,
				                                                      nullptr);
			}
		}

		/**
		 * \brief Sends chat message to the specific player. Using fmt::format.
		 * \tparam T Either a a char or wchar_t
		 * \tparam Args Optional arguments types
		 * \param player_controller Player
		 * \param sender_name Name of the sender
		 * \param msg Message
		 * \param args Optional arguments
		 */
		template <typename T, typename... Args>
		void SendChatMessage(AShooterPlayerController* player_controller, const FString& sender_name, const T* msg,
		                     Args&&... args)
		{
			if (player_controller)
			{
				const FString text(FString::Format(msg, std::forward<Args>(args)...));

				FChatMessage chat_message = FChatMessage();
				chat_message.SenderName = sender_name;
				chat_message.Message = text;

				player_controller->ClientChatMessage(chat_message);
			}
		}

		/**
		* \brief Sends server message to all players. Using fmt::format.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param msg_color Message color
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendServerMessageToAll(FLinearColor msg_color, const T* msg,
		                            Args&&... args)
		{
			FString text(FString::Format(msg, std::forward<Args>(args)...));

			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());
				if (shooter_pc)
				{
					shooter_pc->ClientServerChatDirectMessage(&text, msg_color, false);
				}
			}
		}

		/**
		* \brief Sends notification (on-screen message) to all players. Using fmt::format.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param color Message color
		* \param display_scale Size of text
		* \param display_time Display time
		* \param icon Message icon (optional)
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendNotificationToAll(FLinearColor color, float display_scale,
		                           float display_time, UTexture2D* icon, const T* msg, Args&&... args)
		{
			FString text(FString::Format(msg, std::forward<Args>(args)...));

			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());
				if (shooter_pc)
				{
					shooter_pc->
						ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon, nullptr);
				}
			}
		}

		/**
		* \brief Sends chat message to all players. Using fmt::format.
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param sender_name Name of the sender
		* \param msg Message
		* \param args Optional arguments
		*/
		template <typename T, typename... Args>
		void SendChatMessageToAll(const FString& sender_name, const T* msg, Args&&... args)
		{
			const FString text(FString::Format(msg, std::forward<Args>(args)...));

			FChatMessage chat_message = FChatMessage();
			chat_message.SenderName = sender_name;
			chat_message.Message = text;

			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				AShooterPlayerController* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());
				if (shooter_pc)
				{
					shooter_pc->ClientChatMessage(chat_message);
				}
			}
		}

		/**
		 * \brief Returns Steam ID from player controller
		 */
		static uint64 GetSteamIdFromController(AController* controller)
		{
			uint64 steam_id = 0;

			auto* playerController = static_cast<AShooterPlayerController*>(controller);
			if(playerController != nullptr)
			{
				steam_id = playerController->GetUniqueNetIdAsUINT64();
			}

			return steam_id;
		}

		/**
		 * \brief Finds player from the given steam name
		 * \param steam_name Steam name
		 * \return Pointer to AShooterPlayerController
		 */
		AShooterPlayerController* FindPlayerFromSteamName(const FString& steam_name) const
		{
			AShooterPlayerController* result = nullptr;

			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				const FString current_name = player_controller->PlayerStateField()->PlayerNameField();
				if (current_name == steam_name)
				{
					auto* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

					result = shooter_pc;
					break;
				}
			}

			return result;
		}

		/**
		* \brief Finds player controller from the given player character
		* \param character Player character
		* \return Pointer to AShooterPlayerController
		*/
		AShooterPlayerController* FindControllerFromCharacter(AShooterCharacter* character) const
		{
			AShooterPlayerController* result = nullptr;

			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				auto* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

				if (shooter_pc->GetPlayerCharacter() == character)
				{
					result = shooter_pc;
					break;
				}
			}

			return result;
		}

		/**
		* \brief Finds all matching players from the given character name
		* \param character_name Character name
		* \param search Type Defaulted To ESearchCase::Type::IgnoreCase
		* \param full_match Will match the full length of the string if true
		* \return Array of AShooterPlayerController*
		*/
		TArray<AShooterPlayerController*> FindPlayerFromCharacterName(const FString& character_name,
		                                                              ESearchCase::Type search,
		                                                              bool full_match) const
		{
			TArray<AShooterPlayerController*> found_players;

			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				auto* shooter_player = static_cast<AShooterPlayerController*>(player_controller.Get());
				FString char_name = GetCharacterName(shooter_player);

				if (!char_name.IsEmpty() && (full_match
					                             ? char_name.Equals(character_name, search)
					                             : char_name.StartsWith(character_name, search)))
				{
					found_players.Add(shooter_player);
				}
			}

			return found_players;
		}

		/**
		* \brief Returns the character name of player
		* \param player_controller Player
		*/
		static FString GetCharacterName(AShooterPlayerController* player_controller)
		{
			if (player_controller != nullptr)
			{
				auto* player_state = static_cast<AShooterPlayerState*>(player_controller->PlayerStateField());
				if (player_state != nullptr && player_state->MyPlayerDataStructField() != nullptr)
				{
					return player_state->MyPlayerDataStructField()->MyPlayerCharacterConfigField().PlayerCharacterName;
				}
			}

			return FString("");
		}

		/**
		* \brief Returns the steam name of player
		* \param player_controller Player
		*/
		static FString GetSteamName(AController* player_controller)
		{
			return player_controller != nullptr ? player_controller->PlayerStateField()->PlayerNameField() : "";
		}

		/**
		 * \brief Finds player from the given steam id
		 * \param steam_id Steam id
		 * \return Pointer to AShooterPlayerController
		 */
		AShooterPlayerController* FindPlayerFromSteamId(uint64 steam_id) const
		{
			AShooterPlayerController* result = nullptr;

			const auto& player_controllers = GetWorld()->PlayerControllerListField();
			for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
			{
				const uint64 current_steam_id = GetSteamIdFromController(player_controller.Get());

				if (current_steam_id == steam_id)
				{
					auto* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());

					result = shooter_pc;
					break;
				}
			}

			return result;
		}

		/**
		 * \brief Spawns an item drop
		 * \param blueprint Item simplified BP
		 * Example: '/Game/PrimalEarth/CoreBlueprints/Items/Armor/Riot/PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C'
		 * \param pos Spawn position
		 * \param amount Quantity
		 * \param item_quality Quality
		 * \param force_blueprint Is blueprint
		 * \param life_span Life span
		 * \return Returns true if drop was spawned, false otherwise
		 */
		bool SpawnDrop(const wchar_t* blueprint, FVector pos, int amount, float item_quality = 0.0f,
		               bool force_blueprint = false, float life_span = 0.0f) const
		{
			APlayerController* player = GetWorld()->GetFirstPlayerController();
			if (!player)
			{
				return false;
			}

			UObject* object = Globals::
				StaticLoadObject(UObject::StaticClass(), nullptr, blueprint, nullptr, 0, 0, true);
			if (!object)
			{
				return false;
			}

			TSubclassOf<UPrimalItem> archetype;
			archetype.uClass = reinterpret_cast<UClass*>(object);

			UPrimalItem* item = UPrimalItem::AddNewItem(archetype, nullptr, false, false, item_quality, false, amount,
			                                            force_blueprint, 0, false, nullptr, 0);
			if (!item)
			{
				return false;
			}

			FItemNetInfo* info = static_cast<FItemNetInfo*>(FMemory::Malloc(0x400));
			RtlSecureZeroMemory(info, 0x400);

			item->GetItemNetInfo(info, false);

			TSubclassOf<ADroppedItem> archetype_dropped;
			archetype_dropped.uClass = reinterpret_cast<UClass*>(object);

			FVector zero_vector{0, 0, 0};
			FRotator rot{0, 0, 0};

			UPrimalInventoryComponent::StaticDropItem(player, info, archetype_dropped, &rot, true, &pos, &rot, true,
			                                          false, false, true, nullptr, &zero_vector, nullptr, life_span);

			FMemory::Free(info);

			return true;
		}

		/**
		 * \brief Spawns a dino near player or at specific coordinates
		 * \param player Player. If null, random player will be chosen. At least one player should be on the map
		 * \param blueprint Blueprint path
		 * \param location Spawn position. If null, dino will be spawned near player
		 * \param lvl Level of the dino
		 * \param force_tame Force tame
		 * \param neutered Neuter dino
		 * \return Spawned dino or null
		 */
		APrimalDinoCharacter* SpawnDino(AShooterPlayerController* player, FString blueprint, FVector* location, int lvl,
		                                bool force_tame, bool neutered) const
		{
			if (player == nullptr)
			{
				player = static_cast<AShooterPlayerController*>(GetWorld()->GetFirstPlayerController());
				if (player == nullptr)
				{
					return nullptr;
				}
			}

			AActor* actor = player->SpawnActor(&blueprint, 100, 0, 0, true);
			if (actor != nullptr && actor->IsA(APrimalDinoCharacter::GetPrivateStaticClass()))
			{
				auto* dino = static_cast<APrimalDinoCharacter*>(actor);

				if (location != nullptr && !location->IsZero())
				{
					FRotator rotation{0, 0, 0};
					dino->TeleportTo(location, &rotation, true, false);
				}

				if (force_tame)
				{
					dino->TamingTeamIDField() = player->TargetingTeamField();

					auto* state = static_cast<AShooterPlayerState*>(player->PlayerStateField());

					FString player_name;
					state->GetPlayerName(&player_name);

					dino->TamerStringField() = player_name;

					state->SetTribeTamingDinoSettings(dino);

					dino->TameDino(player, true, 0, true, true, false);
				}

				if (neutered)
				{
					dino->DoNeuter_Implementation();
				}

				dino->AbsoluteBaseLevelField() = lvl;

				dino->BeginPlay();

				return dino;
			}

			return nullptr;
		}

		/**
		* \brief Returns true if character is riding a dino, false otherwise
		* \param player_controller Player
		*/
		static bool IsRidingDino(AShooterPlayerController* player_controller)
		{
			return player_controller != nullptr && player_controller->GetPlayerCharacter() != nullptr
				&& player_controller->GetPlayerCharacter()->GetRidingDino() != nullptr;
		}

		/**
		* \brief Returns the dino the character is riding
		* \param player_controller Player
		* \return APrimalDinoCharacter*
		*/
		static APrimalDinoCharacter* GetRidingDino(AShooterPlayerController* player_controller)
		{
			return player_controller != nullptr && player_controller->GetPlayerCharacter() != nullptr
				       ? player_controller->GetPlayerCharacter()->GetRidingDino()
				       : nullptr;
		}

		/**
		* \brief Returns the position of a player
		* \param player_controller Player
		* \return FVector
		*/
		static FVector GetPosition(APlayerController* player_controller)
		{
			return player_controller != nullptr ? player_controller->DefaultActorLocationField() : FVector{0, 0, 0};
		}

		/**
		* \brief Teleport one player to another
		* \param me Player
		* \param him Other Player
		* \param check_for_dino If set true prevents players teleporting with dino's or teleporting to a player on a dino
		* \param max_dist Is the max distance the characters can be away from each other -1 is disabled
		*/
		static std::optional<FString> TeleportToPlayer(AShooterPlayerController* me, AShooterPlayerController* him,
		                                               bool check_for_dino, float max_dist)
		{
			if (!(me != nullptr && him != nullptr && me->GetPlayerCharacter() != nullptr && him->
					GetPlayerCharacter()
					!= nullptr
					&& !me->GetPlayerCharacter()->IsDead() && !him->GetPlayerCharacter()->IsDead())
			)
			{
				return "One of players is dead";
			}

			if (check_for_dino && (IsRidingDino(me) || IsRidingDino(him)))
			{
				return "One of players is riding a dino";
			}

			if (max_dist != -1 && FVector::Distance(GetPosition(me), GetPosition(him)) > max_dist)
			{
				return "Person is too far away";
			}

			const FVector pos = him->DefaultActorLocationField();

			me->SetPlayerPos(pos.X, pos.Y, pos.Z);

			return {};
		}

		/**
		* \brief Teleports player to the given position
		* \param player_controller Player
		* \param pos New position
		*/
		static bool TeleportToPos(AShooterPlayerController* player_controller, const FVector& pos)
		{
			if (player_controller != nullptr && !IsPlayerDead(player_controller))
			{
				player_controller->SetPlayerPos(pos.X, pos.Y, pos.Z);
				return true;
			}

			return false;
		}


		/**
		* \brief Counts a specific items quantity
		* \param player_controller Player
		* \param item_name The name of the item you want to count the quantity of
		 * \return On success, the function returns amount of items player has. Returns -1 if the function has failed.
		 */
		static int GetInventoryItemCount(AShooterPlayerController* player_controller, const FString& item_name)
		{
			if (player_controller == nullptr)
			{
				return -1;
			}

			UPrimalInventoryComponent* inventory_component =
				player_controller->GetPlayerCharacter()->MyInventoryComponentField();
			if (inventory_component == nullptr)
			{
				return -1;
			}

			FString name;
			int item_count = 0;

			for (UPrimalItem* item : inventory_component->InventoryItemsField())
			{
				item->GetItemName(&name, true, false, nullptr);

				if (name.Equals(item_name, ESearchCase::IgnoreCase))
				{
					item_count += item->GetItemQuantity();
				}
			}

			return item_count;
		}

		/**
		 * \brief Returns IP address of player
		 */
		static FString GetIPAddress(AShooterPlayerController* player)
		{
			FString ip_address = "";

			if (player != nullptr)
			{
				auto* player_state = static_cast<AShooterPlayerState*>(player->PlayerStateField());

				if (player_state != nullptr && player_state->MyPlayerDataStructField() != nullptr)
				{
					ip_address = player_state->MyPlayerDataStructField()->SavedNetworkAddressField();
				}
			}

			return ip_address;
		}

		/**
		 * \brief Returns blueprint from UPrimalItem
		 */
		static FString GetItemBlueprint(UPrimalItem* item)
		{
			if (item != nullptr)
			{
				FString path_name;
				item->ClassField()->GetDefaultObject(true)->GetFullName(&path_name, nullptr);

				if (int find_index = 0; path_name.FindChar(' ', find_index))
				{
					path_name = "Blueprint'" + path_name.Mid(find_index + 1,
					                                         path_name.Len() - (find_index + (path_name.EndsWith(
						                                                                          "_C", ESearchCase::
						                                                                          CaseSensitive)
						                                                                          ? 3
						                                                                          : 1))) + "'";
					return path_name.Replace(L"Default__", L"", ESearchCase::CaseSensitive);
				}
			}

			return FString("");
		}

		/**
		 * \brief Returns true if player is dead, false otherwise
		 */
		static bool IsPlayerDead(AShooterPlayerController* player)
		{
			if (player == nullptr || player->GetPlayerCharacter() == nullptr)
			{
				return true;
			}

			return player->GetPlayerCharacter()->IsDead();
		}

		static uint64 GetPlayerID(APrimalCharacter* character)
		{
			auto* shooter_character = static_cast<AShooterCharacter*>(character);
			return shooter_character != nullptr && shooter_character->GetPlayerData() != nullptr
				       ? shooter_character->GetPlayerData()->MyDataField()->PlayerDataIDField()
				       : -1;
		}

		static uint64 GetPlayerID(AController* controller)
		{
			auto* player = static_cast<AShooterPlayerController*>(controller);
			return player != nullptr ? player->LinkedPlayerIDField() : 0;
		}

		uint64 GetSteamIDForPlayerID(int player_id) const
		{
			uint64 steam_id = GetShooterGameMode()->GetSteamIDForPlayerID(player_id);
			if (steam_id == 0)
			{
				const auto& player_controllers = GetWorld()->PlayerControllerListField();
				for (TWeakObjectPtr<APlayerController> player_controller : player_controllers)
				{					
					auto* shooter_pc = static_cast<AShooterPlayerController*>(player_controller.Get());
					if (shooter_pc != nullptr && shooter_pc->LinkedPlayerIDField() == player_id)
					{
						steam_id = shooter_pc->GetUniqueNetIdAsUINT64();
					}
				}

				GetShooterGameMode()->AddPlayerID(player_id, steam_id);
			}

			return steam_id;
		}
	};

	ARK_API IApiUtils& APIENTRY GetApiUtils();
} // namespace ArkApi
