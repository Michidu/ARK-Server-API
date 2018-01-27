#pragma once

#include <IApiUtils.h>

namespace ArkApi
{
	class ApiUtils : public IApiUtils
	{
	public:
		static ApiUtils& Get();

		ApiUtils(const ApiUtils&) = delete;
		ApiUtils(ApiUtils&&) = delete;
		ApiUtils& operator=(const ApiUtils&) = delete;
		ApiUtils& operator=(ApiUtils&&) = delete;

		UWorld* GetWorld() const override;
		AShooterGameMode* GetShooterGameMode() const override;
		ServerStatus GetStatus() const override;

		void SetWorld(UWorld* uworld);
		void SetShooterGameMode(AShooterGameMode* shooter_game_mode);
		void SetStatus(ServerStatus status);

	private:
		ApiUtils()
			: u_world_(nullptr),
			  shooter_game_mode_(nullptr)
		{
		}

		~ApiUtils() = default;

		UWorld* u_world_;
		AShooterGameMode* shooter_game_mode_;
		ServerStatus status_;
	};
}
