#ifndef H_ApiUtils
#define H_ApiUtils

#include "API/Base.h"

namespace ApiUtils
{
	// Set and Get UWorld

	void SetWorld(UWorld* aUworld);
	UWorld* GetWorld();

	// Set and Get AShooterGameMode

	void SetGameMode(AShooterGameMode* aShooterGameMode);
	AShooterGameMode* GetGameMode();
}

#endif
