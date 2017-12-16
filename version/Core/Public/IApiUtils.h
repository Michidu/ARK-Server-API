#pragma once

#include "API/ARK/Ark.h"

namespace ArkApi
{
	class ARK_API IApiUtils
	{
	public:
		virtual ~IApiUtils() = default;

		/**
		* \brief Receives a pointer to UWorld
		* \return Pointer to UWorld
		*/
		virtual UWorld* GetWorld() const = 0;

		/**
		* \brief Receives a pointer to AShooterGameMode
		* \return Pointer to AShooterGameMode
		*/
		virtual AShooterGameMode* GetShooterGameMode() const = 0;

		/**
		* \brief Sends 'server' message to the specific player. Using sprintf formatting.
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
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			player_controller->ClientServerChatDirectMessage(&text, msg_color, false);
		}

		/**
		* \brief Sends notification (on-screen message) to the specific player. Using sprintf formatting.
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
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			player_controller->ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon, nullptr);
		}

		/**
		* \brief Formats text using sprintf
		* \tparam T Either a a char or wchar_t
		* \tparam Args Optional arguments types
		* \param msg Message
		* \param args Optional arguments
		* \return Formatted text
		*/
		template <typename T, typename... Args>
		FString FormatText(const T* msg, Args&&... args)
		{
			const size_t size = CountTextSize(msg, std::forward<Args>(args)...);

			std::unique_ptr<T[]> buffer(new T[size]);

			if constexpr (std::is_same<T, wchar_t>::value)
				_snwprintf_s(buffer.get(), size, _TRUNCATE, msg, std::forward<Args>(args)...);
			else if constexpr (std::is_same<T, char>::value)
				_snprintf_s(buffer.get(), size, _TRUNCATE, msg, std::forward<Args>(args)...);

			return FString(buffer.get());
		}

	private:
		template <typename T, typename... Args>
		size_t CountTextSize(const T* msg, Args&&... args)
		{
			size_t size = 0;

			if constexpr (std::is_same<T, wchar_t>::value)
				size = swprintf_s(nullptr, 0, msg, std::forward<Args>(args)...) + 1;
			else if constexpr (std::is_same<T, char>::value)
				size = snprintf(nullptr, 0, msg, std::forward<Args>(args)...) + 1;

			return size;
		}
	};

	extern "C" ARK_API IApiUtils& APIENTRY GetApiUtils();
}
