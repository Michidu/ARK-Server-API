#ifndef APIUTILS_H
#define APIUTILS_H

#include "API/ARK/Ark.h"

namespace ArkApi
{
	class ApiUtils
	{
	public:
		ARK_API static ApiUtils& Get();

		ApiUtils(const ApiUtils&) = delete;
		ApiUtils(ApiUtils&&) = delete;
		ApiUtils& operator=(const ApiUtils&) = delete;
		ApiUtils& operator=(ApiUtils&&) = delete;

		void SetWorld(UWorld* uworld);
		ARK_API UWorld* GetWorld() const;

		void SetShooterGameMode(AShooterGameMode* shooter_game_mode);
		ARK_API AShooterGameMode* GetShooterGameMode() const;

		template <typename T, typename... Args>
		void SendDirectMessage(AShooterPlayerController* player_controller, FLinearColor msg_color, const T* msg,
		                       Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			player_controller->ClientServerChatDirectMessage(&text, msg_color, false);
		}

		template <typename T, typename... Args>
		void SendNotification(AShooterPlayerController* player_controller, FLinearColor color, float display_scale,
		                      float display_time, UTexture2D* icon, const T* msg, Args&&... args)
		{
			if constexpr (!TIsCharType<T>::Value)
				static_assert(TIsCharType<T>::Value, "Msg must be a char or wchar_t");

			FString text = FormatText(msg, std::forward<Args>(args)...);

			player_controller->ClientServerSOTFNotificationCustom(&text, color, display_scale, display_time, icon, nullptr);
		}

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
		ApiUtils()
			: u_world_(nullptr),
			  shooter_game_mode_(nullptr)
		{
		}

		UWorld* u_world_;
		AShooterGameMode* shooter_game_mode_;
	};
}

#endif // APIUTILS_H
