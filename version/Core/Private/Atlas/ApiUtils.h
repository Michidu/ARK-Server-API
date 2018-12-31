#pragma once

#include <IApiUtils.h>

namespace AtlasApi
{
	class ApiUtils : public ArkApi::IApiUtils
	{
	public:
		ApiUtils() = default;

		ApiUtils(const ApiUtils&) = delete;
		ApiUtils(ApiUtils&&) = delete;
		ApiUtils& operator=(const ApiUtils&) = delete;
		ApiUtils& operator=(ApiUtils&&) = delete;

		~ApiUtils() override = default;

		UWorld* GetWorld() const override;
		AShooterGameMode* GetShooterGameMode() const override;
		ArkApi::ServerStatus GetStatus() const override;

		void SetWorld(UWorld* uworld);
		void SetShooterGameMode(AShooterGameMode* shooter_game_mode);
		void SetStatus(ArkApi::ServerStatus status);

	private:
		UWorld* u_world_{nullptr};
		AShooterGameMode* shooter_game_mode_{nullptr};
		ArkApi::ServerStatus status_{0};
	};
} // namespace AtlasApi
