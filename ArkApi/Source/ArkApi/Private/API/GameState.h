#pragma once

#include "Base.h"

struct AGameState
{
	void SetAuthorityGameMode(AGameMode* a0) { *(AGameMode**)GetAddress(this, "AGameState", "AuthorityGameMode") = a0; };
	AGameMode* GetAuthorityGameMode() const { return *(AGameMode**)GetAddress(this, "AGameState", "AuthorityGameMode"); };
	void SetMatchState(FName a0) { *(FName*)GetAddress(this, "AGameState", "MatchState") = a0; };
	FName GetMatchState() const { return *(FName*)GetAddress(this, "AGameState", "MatchState"); };
	FName GetPreviousMatchState() const { return *(FName*)GetAddress(this, "AGameState", "PreviousMatchState"); };
	void SetElapsedTime(int a0) { *(int*)GetAddress(this, "AGameState", "ElapsedTime") = a0; };
	int GetElapsedTime() const { return *(int*)GetAddress(this, "AGameState", "ElapsedTime"); };
	TArray<APlayerState *, FDefaultAllocator> GetPlayerArray() const { return *(TArray<APlayerState *, FDefaultAllocator>*)GetAddress(this, "AGameState", "PlayerArray"); };
	TArray<APlayerState *, FDefaultAllocator> GetInactivePlayerArray() const { return *(TArray<APlayerState *, FDefaultAllocator>*)GetAddress(this, "AGameState", "InactivePlayerArray"); };

	// Functions

	bool HasMatchStarted() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameState", "HasMatchStarted"))((DWORD64)this); }
	bool IsMatchInProgress() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameState", "IsMatchInProgress"))((DWORD64)this); }
	bool HasMatchEnded() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameState", "HasMatchEnded"))((DWORD64)this); }
	void HandleMatchIsWaitingToStart() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "HandleMatchIsWaitingToStart"))((DWORD64)this); }
	void HandleMatchHasStarted() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "HandleMatchHasStarted"))((DWORD64)this); }
	void HandleMatchHasEnded() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "HandleMatchHasEnded"))((DWORD64)this); }
	void HandleLeavingMap() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "HandleLeavingMap"))((DWORD64)this); }
	void OnRep_GameModeClass() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "OnRep_GameModeClass"))((DWORD64)this); }
	void OnRep_SpectatorClass() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "OnRep_SpectatorClass"))((DWORD64)this); }
	void OnRep_MatchState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "OnRep_MatchState"))((DWORD64)this); }
	void PostInitializeComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "PostInitializeComponents"))((DWORD64)this); }
	void ReceivedGameModeClass() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "ReceivedGameModeClass"))((DWORD64)this); }
	void ReceivedSpectatorClass() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "ReceivedSpectatorClass"))((DWORD64)this); }
	void SeamlessTravelTransitionCheckpoint(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AGameState", "SeamlessTravelTransitionCheckpoint"))((DWORD64)this, a1); }
	void AddPlayerState(APlayerState* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerState*)>(GetAddress("AGameState", "AddPlayerState"))((DWORD64)this, a1); }
	void RemovePlayerState(APlayerState* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerState*)>(GetAddress("AGameState", "RemovePlayerState"))((DWORD64)this, a1); }
	void DefaultTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameState", "DefaultTimer"))((DWORD64)this); }
	bool ShouldShowGore() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameState", "ShouldShowGore"))((DWORD64)this); }
};

struct AShooterGameState : AGameState
{
	int GetNumNPC() const { return *(int*)GetAddress(this, "AShooterGameState", "NumNPC"); };
	int GetNumActiveNPC() const { return *(int*)GetAddress(this, "AShooterGameState", "NumActiveNPC"); };
	int GetNumDeadNPC() const { return *(int*)GetAddress(this, "AShooterGameState", "NumDeadNPC"); };
	int GetNumPlayerActors() const { return *(int*)GetAddress(this, "AShooterGameState", "NumPlayerActors"); };
	int GetNumPlayerConnected() const { return *(int*)GetAddress(this, "AShooterGameState", "NumPlayerConnected"); };
	void SetbServerUseLocalizedChat(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bServerUseLocalizedChat") = a0; };
	bool GetbServerUseLocalizedChat() const { return *(bool*)GetAddress(this, "AShooterGameState", "bServerUseLocalizedChat"); };
	void SetLocalizedChatRadius(float a0) { *(float*)GetAddress(this, "AShooterGameState", "LocalizedChatRadius") = a0; };
	float GetLocalizedChatRadius() const { return *(float*)GetAddress(this, "AShooterGameState", "LocalizedChatRadius"); };
	void SetLocalizedChatRadiusUnconsiousScale(float a0) { *(float*)GetAddress(this, "AShooterGameState", "LocalizedChatRadiusUnconsiousScale") = a0; };
	float GetLocalizedChatRadiusUnconsiousScale() const { return *(float*)GetAddress(this, "AShooterGameState", "LocalizedChatRadiusUnconsiousScale"); };
	float GetServerFramerate() const { return *(float*)GetAddress(this, "AShooterGameState", "ServerFramerate"); };
	void SetNewStructureDestructionTag(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "NewStructureDestructionTag") = a0; };
	FString GetNewStructureDestructionTag() const { return *(FString*)GetAddress(this, "AShooterGameState", "NewStructureDestructionTag"); };
	void SetDayNumber(int a0) { *(int*)GetAddress(this, "AShooterGameState", "DayNumber") = a0; };
	int GetDayNumber() const { return *(int*)GetAddress(this, "AShooterGameState", "DayNumber"); };
	void SetDayTime(float a0) { *(float*)GetAddress(this, "AShooterGameState", "DayTime") = a0; };
	float GetDayTime() const { return *(float*)GetAddress(this, "AShooterGameState", "DayTime"); };
	void SetNetworkTime(double a0) { *(double*)GetAddress(this, "AShooterGameState", "NetworkTime") = a0; };
	double GetNetworkTime() const { return *(double*)GetAddress(this, "AShooterGameState", "NetworkTime"); };
	void SetTimeUTC(unsigned int a0) { *(unsigned int*)GetAddress(this, "AShooterGameState", "TimeUTC") = a0; };
	unsigned int GetTimeUTC() const { return *(unsigned int*)GetAddress(this, "AShooterGameState", "TimeUTC"); };
	void SetbIsOfficialServer(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bIsOfficialServer") = a0; };
	bool GetbIsOfficialServer() const { return *(bool*)GetAddress(this, "AShooterGameState", "bIsOfficialServer"); };
	void SetbIsArkTributeAvailable(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bIsArkTributeAvailable") = a0; };
	bool GetbIsArkTributeAvailable() const { return *(bool*)GetAddress(this, "AShooterGameState", "bIsArkTributeAvailable"); };
	void SetbIsArkDownloadsAllowed(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bIsArkDownloadsAllowed") = a0; };
	bool GetbIsArkDownloadsAllowed() const { return *(bool*)GetAddress(this, "AShooterGameState", "bIsArkDownloadsAllowed"); };
	void SetbAllowThirdPersonPlayer(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowThirdPersonPlayer") = a0; };
	bool GetbAllowThirdPersonPlayer() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowThirdPersonPlayer"); };
	void SetbServerHardcore(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bServerHardcore") = a0; };
	bool GetbServerHardcore() const { return *(bool*)GetAddress(this, "AShooterGameState", "bServerHardcore"); };
	void SetbServerPVE(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bServerPVE") = a0; };
	bool GetbServerPVE() const { return *(bool*)GetAddress(this, "AShooterGameState", "bServerPVE"); };
	void SetbAutoPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAutoPvE") = a0; };
	bool GetbAutoPvE() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAutoPvE"); };
	void SetbServerCrosshair(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bServerCrosshair") = a0; };
	bool GetbServerCrosshair() const { return *(bool*)GetAddress(this, "AShooterGameState", "bServerCrosshair"); };
	void SetbServerForceNoHUD(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bServerForceNoHUD") = a0; };
	bool GetbServerForceNoHUD() const { return *(bool*)GetAddress(this, "AShooterGameState", "bServerForceNoHUD"); };
	void SetbFlyerPlatformAllowUnalignedDinoBasing(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bFlyerPlatformAllowUnalignedDinoBasing") = a0; };
	bool GetbFlyerPlatformAllowUnalignedDinoBasing() const { return *(bool*)GetAddress(this, "AShooterGameState", "bFlyerPlatformAllowUnalignedDinoBasing"); };
	void SetbMapPlayerLocation(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bMapPlayerLocation") = a0; };
	bool GetbMapPlayerLocation() const { return *(bool*)GetAddress(this, "AShooterGameState", "bMapPlayerLocation"); };
	void SetbPvEDisableFriendlyFire(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPvEDisableFriendlyFire") = a0; };
	bool GetbPvEDisableFriendlyFire() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPvEDisableFriendlyFire"); };
	void SetbPvEAllowTribeWar(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPvEAllowTribeWar") = a0; };
	bool GetbPvEAllowTribeWar() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPvEAllowTribeWar"); };
	void SetbPvEAllowTribeWarCancel(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPvEAllowTribeWarCancel") = a0; };
	bool GetbPvEAllowTribeWarCancel() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPvEAllowTribeWarCancel"); };
	void SetbEnablePvPGamma(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bEnablePvPGamma") = a0; };
	bool GetbEnablePvPGamma() const { return *(bool*)GetAddress(this, "AShooterGameState", "bEnablePvPGamma"); };
	void SetbDisablePvEGamma(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bDisablePvEGamma") = a0; };
	bool GetbDisablePvEGamma() const { return *(bool*)GetAddress(this, "AShooterGameState", "bDisablePvEGamma"); };
	void SetNumTamedDinos(int a0) { *(int*)GetAddress(this, "AShooterGameState", "NumTamedDinos") = a0; };
	int GetNumTamedDinos() const { return *(int*)GetAddress(this, "AShooterGameState", "NumTamedDinos"); };
	void SetMaxStructuresInRange(int a0) { *(int*)GetAddress(this, "AShooterGameState", "MaxStructuresInRange") = a0; };
	int GetMaxStructuresInRange() const { return *(int*)GetAddress(this, "AShooterGameState", "MaxStructuresInRange"); };
	void SetDayCycleSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterGameState", "DayCycleSpeedScale") = a0; };
	float GetDayCycleSpeedScale() const { return *(float*)GetAddress(this, "AShooterGameState", "DayCycleSpeedScale"); };
	void SetDayTimeSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterGameState", "DayTimeSpeedScale") = a0; };
	float GetDayTimeSpeedScale() const { return *(float*)GetAddress(this, "AShooterGameState", "DayTimeSpeedScale"); };
	void SetNightTimeSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterGameState", "NightTimeSpeedScale") = a0; };
	float GetNightTimeSpeedScale() const { return *(float*)GetAddress(this, "AShooterGameState", "NightTimeSpeedScale"); };
	void SetPvEStructureDecayPeriodMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "PvEStructureDecayPeriodMultiplier") = a0; };
	float GetPvEStructureDecayPeriodMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "PvEStructureDecayPeriodMultiplier"); };
	void SetPvEDinoDecayPeriodMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "PvEDinoDecayPeriodMultiplier") = a0; };
	float GetPvEDinoDecayPeriodMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "PvEDinoDecayPeriodMultiplier"); };
	void SetPerPlatformMaxStructuresMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "PerPlatformMaxStructuresMultiplier") = a0; };
	float GetPerPlatformMaxStructuresMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "PerPlatformMaxStructuresMultiplier"); };
	void SetbDisableStructureDecayPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bDisableStructureDecayPvE") = a0; };
	bool GetbDisableStructureDecayPvE() const { return *(bool*)GetAddress(this, "AShooterGameState", "bDisableStructureDecayPvE"); };
	void SetbDisableDinoDecayPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bDisableDinoDecayPvE") = a0; };
	bool GetbDisableDinoDecayPvE() const { return *(bool*)GetAddress(this, "AShooterGameState", "bDisableDinoDecayPvE"); };
	void SetbAllowCaveBuildingPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowCaveBuildingPvE") = a0; };
	bool GetbAllowCaveBuildingPvE() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowCaveBuildingPvE"); };
	void SetbPreventDownloadSurvivors(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventDownloadSurvivors") = a0; };
	bool GetbPreventDownloadSurvivors() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventDownloadSurvivors"); };
	void SetbReachedPlatformStructureLimit(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bReachedPlatformStructureLimit") = a0; };
	bool GetbReachedPlatformStructureLimit() const { return *(bool*)GetAddress(this, "AShooterGameState", "bReachedPlatformStructureLimit"); };
	void SetbAdminLogging(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAdminLogging") = a0; };
	bool GetbAdminLogging() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAdminLogging"); };
	void SetbPvPStructureDecay(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPvPStructureDecay") = a0; };
	bool GetbPvPStructureDecay() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPvPStructureDecay"); };
	void SetbPreventDownloadDinos(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventDownloadDinos") = a0; };
	bool GetbPreventDownloadDinos() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventDownloadDinos"); };
	void SetbPreventDownloadItems(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventDownloadItems") = a0; };
	bool GetbPreventDownloadItems() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventDownloadItems"); };
	void SetbPreventUploadDinos(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventUploadDinos") = a0; };
	bool GetbPreventUploadDinos() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventUploadDinos"); };
	void SetbPreventUploadItems(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventUploadItems") = a0; };
	bool GetbPreventUploadItems() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventUploadItems"); };
	void SetbPreventUploadSurvivors(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventUploadSurvivors") = a0; };
	bool GetbPreventUploadSurvivors() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventUploadSurvivors"); };
	void SetbPreventMateBoost(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventMateBoost") = a0; };
	bool GetbPreventMateBoost() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventMateBoost"); };
	void SetbPreventStructurePainting(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventStructurePainting") = a0; };
	bool GetbPreventStructurePainting() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventStructurePainting"); };
	void SetbAllowCharacterCreation(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowCharacterCreation") = a0; };
	bool GetbAllowCharacterCreation() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowCharacterCreation"); };
	void SetbAllowSpawnPointSelection(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowSpawnPointSelection") = a0; };
	bool GetbAllowSpawnPointSelection() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowSpawnPointSelection"); };
	void SetMaxTamedDinos(int a0) { *(int*)GetAddress(this, "AShooterGameState", "MaxTamedDinos") = a0; };
	int GetMaxTamedDinos() const { return *(int*)GetAddress(this, "AShooterGameState", "MaxTamedDinos"); };
	void SetbDisableSpawnAnimations(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bDisableSpawnAnimations") = a0; };
	bool GetbDisableSpawnAnimations() const { return *(bool*)GetAddress(this, "AShooterGameState", "bDisableSpawnAnimations"); };
	void SetPlayerListString(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "PlayerListString") = a0; };
	FString GetPlayerListString() const { return *(FString*)GetAddress(this, "AShooterGameState", "PlayerListString"); };
	void SetGlobalSpoilingTimeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "GlobalSpoilingTimeMultiplier") = a0; };
	float GetGlobalSpoilingTimeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "GlobalSpoilingTimeMultiplier"); };
	void SetGlobalItemDecompositionTimeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "GlobalItemDecompositionTimeMultiplier") = a0; };
	float GetGlobalItemDecompositionTimeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "GlobalItemDecompositionTimeMultiplier"); };
	void SetMaxNumberOfPlayersInTribe(int a0) { *(int*)GetAddress(this, "AShooterGameState", "MaxNumberOfPlayersInTribe") = a0; };
	int GetMaxNumberOfPlayersInTribe() const { return *(int*)GetAddress(this, "AShooterGameState", "MaxNumberOfPlayersInTribe"); };
	void SetGlobalCorpseDecompositionTimeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "GlobalCorpseDecompositionTimeMultiplier") = a0; };
	float GetGlobalCorpseDecompositionTimeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "GlobalCorpseDecompositionTimeMultiplier"); };
	void SetEggHatchSpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "EggHatchSpeedMultiplier") = a0; };
	float GetEggHatchSpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "EggHatchSpeedMultiplier"); };
	void SetbAllowPaintingWithoutResources(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowPaintingWithoutResources") = a0; };
	bool GetbAllowPaintingWithoutResources() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowPaintingWithoutResources"); };
	void SetbEnableExtraStructurePreventionVolumes(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bEnableExtraStructurePreventionVolumes") = a0; };
	bool GetbEnableExtraStructurePreventionVolumes() const { return *(bool*)GetAddress(this, "AShooterGameState", "bEnableExtraStructurePreventionVolumes"); };
	//void SetOverrideItemCraftingCosts(TArray<FItemCraftingCostOverride, FDefaultAllocator> a0) { *(TArray<FItemCraftingCostOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "OverrideItemCraftingCosts") = a0; };
	//TArray<FItemCraftingCostOverride, FDefaultAllocator> GetOverrideItemCraftingCosts() const { return *(TArray<FItemCraftingCostOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "OverrideItemCraftingCosts"); };
	void SetbPlayingDynamicMusic(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPlayingDynamicMusic") = a0; };
	bool GetbPlayingDynamicMusic() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPlayingDynamicMusic"); };
	void SetLastHadMusicTime(float a0) { *(float*)GetAddress(this, "AShooterGameState", "LastHadMusicTime") = a0; };
	float GetLastHadMusicTime() const { return *(float*)GetAddress(this, "AShooterGameState", "LastHadMusicTime"); };
	//void SetLevelExperienceRampOverrides(TArray<FLevelExperienceRamp, FDefaultAllocator> a0) { *(TArray<FLevelExperienceRamp, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "LevelExperienceRampOverrides") = a0; };
	//TArray<FLevelExperienceRamp, FDefaultAllocator> GetLevelExperienceRampOverrides() const { return *(TArray<FLevelExperienceRamp, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "LevelExperienceRampOverrides"); };
	//void SetOverrideEngramEntries(TArray<FEngramEntryOverride, FDefaultAllocator> a0) { *(TArray<FEngramEntryOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "OverrideEngramEntries") = a0; };
	//TArray<FEngramEntryOverride, FDefaultAllocator> GetOverrideEngramEntries() const { return *(TArray<FEngramEntryOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "OverrideEngramEntries"); };
	void SetPreventDinoTameClassNames(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventDinoTameClassNames") = a0; };
	TArray<FString, FDefaultAllocator> GetPreventDinoTameClassNames() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventDinoTameClassNames"); };
	void SetListenServerTetherDistanceMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "ListenServerTetherDistanceMultiplier") = a0; };
	float GetListenServerTetherDistanceMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "ListenServerTetherDistanceMultiplier"); };
	void SetPGMapName(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "PGMapName") = a0; };
	FString GetPGMapName() const { return *(FString*)GetAddress(this, "AShooterGameState", "PGMapName"); };
	void SetSupportedSpawnRegions(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "SupportedSpawnRegions") = a0; };
	TArray<int, FDefaultAllocator> GetSupportedSpawnRegions() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "SupportedSpawnRegions"); };
	void SetbEnableDeathTeamSpectator(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bEnableDeathTeamSpectator") = a0; };
	bool GetbEnableDeathTeamSpectator() const { return *(bool*)GetAddress(this, "AShooterGameState", "bEnableDeathTeamSpectator"); };
	void SetPlayerFloatingHUDOffset(FVector a0) { *(FVector*)GetAddress(this, "AShooterGameState", "PlayerFloatingHUDOffset") = a0; };
	FVector GetPlayerFloatingHUDOffset() const { return *(FVector*)GetAddress(this, "AShooterGameState", "PlayerFloatingHUDOffset"); };
	void SetPlayerFloatingHUDOffsetScreenY(float a0) { *(float*)GetAddress(this, "AShooterGameState", "PlayerFloatingHUDOffsetScreenY") = a0; };
	float GetPlayerFloatingHUDOffsetScreenY() const { return *(float*)GetAddress(this, "AShooterGameState", "PlayerFloatingHUDOffsetScreenY"); };
	void SetStructureDamageRepairCooldown(float a0) { *(float*)GetAddress(this, "AShooterGameState", "StructureDamageRepairCooldown") = a0; };
	float GetStructureDamageRepairCooldown() const { return *(float*)GetAddress(this, "AShooterGameState", "StructureDamageRepairCooldown"); };
	void SetbForceAllStructureLocking(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bForceAllStructureLocking") = a0; };
	bool GetbForceAllStructureLocking() const { return *(bool*)GetAddress(this, "AShooterGameState", "bForceAllStructureLocking"); };
	void SetbAllowCustomRecipes(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowCustomRecipes") = a0; };
	bool GetbAllowCustomRecipes() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowCustomRecipes"); };
	void SetbAllowRaidDinoFeeding(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowRaidDinoFeeding") = a0; };
	bool GetbAllowRaidDinoFeeding() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowRaidDinoFeeding"); };
	void SetCustomRecipeEffectivenessMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "CustomRecipeEffectivenessMultiplier") = a0; };
	float GetCustomRecipeEffectivenessMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "CustomRecipeEffectivenessMultiplier"); };
	void SetCustomRecipeSkillMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameState", "CustomRecipeSkillMultiplier") = a0; };
	float GetCustomRecipeSkillMultiplier() const { return *(float*)GetAddress(this, "AShooterGameState", "CustomRecipeSkillMultiplier"); };
	void SetOverrideAreaMusicPosition(FVector a0) { *(FVector*)GetAddress(this, "AShooterGameState", "OverrideAreaMusicPosition") = a0; };
	FVector GetOverrideAreaMusicPosition() const { return *(FVector*)GetAddress(this, "AShooterGameState", "OverrideAreaMusicPosition"); };
	void SetOverrideAreaMusicRange(float a0) { *(float*)GetAddress(this, "AShooterGameState", "OverrideAreaMusicRange") = a0; };
	float GetOverrideAreaMusicRange() const { return *(float*)GetAddress(this, "AShooterGameState", "OverrideAreaMusicRange"); };
	void SetbAllowUnclaimDinos(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowUnclaimDinos") = a0; };
	bool GetbAllowUnclaimDinos() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowUnclaimDinos"); };
	void SetFloatingHUDRange(float a0) { *(float*)GetAddress(this, "AShooterGameState", "FloatingHUDRange") = a0; };
	float GetFloatingHUDRange() const { return *(float*)GetAddress(this, "AShooterGameState", "FloatingHUDRange"); };
	void SetFloatingChatRange(float a0) { *(float*)GetAddress(this, "AShooterGameState", "FloatingChatRange") = a0; };
	float GetFloatingChatRange() const { return *(float*)GetAddress(this, "AShooterGameState", "FloatingChatRange"); };
	void SetExtinctionEventTimeInterval(int a0) { *(int*)GetAddress(this, "AShooterGameState", "ExtinctionEventTimeInterval") = a0; };
	int GetExtinctionEventTimeInterval() const { return *(int*)GetAddress(this, "AShooterGameState", "ExtinctionEventTimeInterval"); };
	void SetExtinctionEventPercent(float a0) { *(float*)GetAddress(this, "AShooterGameState", "ExtinctionEventPercent") = a0; };
	float GetExtinctionEventPercent() const { return *(float*)GetAddress(this, "AShooterGameState", "ExtinctionEventPercent"); };
	void SetExtinctionEventSecondsRemaining(int a0) { *(int*)GetAddress(this, "AShooterGameState", "ExtinctionEventSecondsRemaining") = a0; };
	int GetExtinctionEventSecondsRemaining() const { return *(int*)GetAddress(this, "AShooterGameState", "ExtinctionEventSecondsRemaining"); };
	void SetbDoExtinctionEvent(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bDoExtinctionEvent") = a0; };
	bool GetbDoExtinctionEvent() const { return *(bool*)GetAddress(this, "AShooterGameState", "bDoExtinctionEvent"); };
	void SetbPreventOfflinePvP(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventOfflinePvP") = a0; };
	bool GetbPreventOfflinePvP() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventOfflinePvP"); };
	void SetbPvPDinoDecay(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPvPDinoDecay") = a0; };
	bool GetbPvPDinoDecay() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPvPDinoDecay"); };
	void SetbOverideStructurePlatformPrevention(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bOverideStructurePlatformPrevention") = a0; };
	bool GetbOverideStructurePlatformPrevention() const { return *(bool*)GetAddress(this, "AShooterGameState", "bOverideStructurePlatformPrevention"); };
	void SetPreventOfflinePvPLiveTeams(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPLiveTeams") = a0; };
	TArray<int, FDefaultAllocator> GetPreventOfflinePvPLiveTeams() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPLiveTeams"); };
	void SetPreventOfflinePvPExpiringTeams(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPExpiringTeams") = a0; };
	TArray<int, FDefaultAllocator> GetPreventOfflinePvPExpiringTeams() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPExpiringTeams"); };
	void SetPreventOfflinePvPExpiringTimes(TArray<double, FDefaultAllocator> a0) { *(TArray<double, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPExpiringTimes") = a0; };
	TArray<double, FDefaultAllocator> GetPreventOfflinePvPExpiringTimes() const { return *(TArray<double, FDefaultAllocator>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPExpiringTimes"); };
	void SetPreventOfflinePvPLiveTimes(TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0>> a0) { *(TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0>>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPLiveTimes") = a0; };
	TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0>> GetPreventOfflinePvPLiveTimes() const { return *(TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0>>*)GetAddress(this, "AShooterGameState", "PreventOfflinePvPLiveTimes"); };
	void SetbAllowAnyoneBabyImprintCuddle(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bAllowAnyoneBabyImprintCuddle") = a0; };
	bool GetbAllowAnyoneBabyImprintCuddle() const { return *(bool*)GetAddress(this, "AShooterGameState", "bAllowAnyoneBabyImprintCuddle"); };
	void SetbDisableImprintDinoBuff(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bDisableImprintDinoBuff") = a0; };
	bool GetbDisableImprintDinoBuff() const { return *(bool*)GetAddress(this, "AShooterGameState", "bDisableImprintDinoBuff"); };
	void SetbIsCustomMap(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bIsCustomMap") = a0; };
	bool GetbIsCustomMap() const { return *(bool*)GetAddress(this, "AShooterGameState", "bIsCustomMap"); };
	void SetClusterId(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "ClusterId") = a0; };
	FString GetClusterId() const { return *(FString*)GetAddress(this, "AShooterGameState", "ClusterId"); };
	void SetAmazonS3AccessKeyID(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "AmazonS3AccessKeyID") = a0; };
	FString GetAmazonS3AccessKeyID() const { return *(FString*)GetAddress(this, "AShooterGameState", "AmazonS3AccessKeyID"); };
	void SetAmazonS3SecretAccessKey(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "AmazonS3SecretAccessKey") = a0; };
	FString GetAmazonS3SecretAccessKey() const { return *(FString*)GetAddress(this, "AShooterGameState", "AmazonS3SecretAccessKey"); };
	void SetAmazonS3BucketName(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "AmazonS3BucketName") = a0; };
	FString GetAmazonS3BucketName() const { return *(FString*)GetAddress(this, "AShooterGameState", "AmazonS3BucketName"); };
	void SetServerSessionName(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "ServerSessionName") = a0; };
	FString GetServerSessionName() const { return *(FString*)GetAddress(this, "AShooterGameState", "ServerSessionName"); };
	void SetbPreventTribeAlliances(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPreventTribeAlliances") = a0; };
	bool GetbPreventTribeAlliances() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPreventTribeAlliances"); };
	void SetLoadForceRespawnDinosTag(FString a0) { *(FString*)GetAddress(this, "AShooterGameState", "LoadForceRespawnDinosTag") = a0; };
	FString GetLoadForceRespawnDinosTag() const { return *(FString*)GetAddress(this, "AShooterGameState", "LoadForceRespawnDinosTag"); };
	void SetbOnlyDecayUnsnappedCoreStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bOnlyDecayUnsnappedCoreStructures") = a0; };
	bool GetbOnlyDecayUnsnappedCoreStructures() const { return *(bool*)GetAddress(this, "AShooterGameState", "bOnlyDecayUnsnappedCoreStructures"); };
	void SetbFastDecayUnsnappedCoreStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bFastDecayUnsnappedCoreStructures") = a0; };
	bool GetbFastDecayUnsnappedCoreStructures() const { return *(bool*)GetAddress(this, "AShooterGameState", "bFastDecayUnsnappedCoreStructures"); };
	void SetbServerUseDinoList(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bServerUseDinoList") = a0; };
	bool GetbServerUseDinoList() const { return *(bool*)GetAddress(this, "AShooterGameState", "bServerUseDinoList"); };
	void SetbPvEAllowStructuresAtSupplyDrops(bool a0) { *(bool*)GetAddress(this, "AShooterGameState", "bPvEAllowStructuresAtSupplyDrops") = a0; };
	bool GetbPvEAllowStructuresAtSupplyDrops() const { return *(bool*)GetAddress(this, "AShooterGameState", "bPvEAllowStructuresAtSupplyDrops"); };

	// Functions

	void DisplayWelcomeUI() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "DisplayWelcomeUI"))((DWORD64)this); }
	void UpdateDynamicMusic(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterGameState", "UpdateDynamicMusic"))((DWORD64)this, a1); }
	float GetMatineePlayRate(AActor* a1) { return static_cast<float(_cdecl*)(DWORD64, AActor*)>(GetAddress("AShooterGameState", "GetMatineePlayRate"))((DWORD64)this, a1); }
	bool AllowDinoTame(APrimalDinoCharacter* a1, AShooterPlayerController* a2) { return static_cast<bool(_cdecl*)(DWORD64, APrimalDinoCharacter*, AShooterPlayerController*)>(GetAddress("AShooterGameState", "AllowDinoTame"))((DWORD64)this, a1, a2); }
	void OnRep_SupportedSpawnRegions() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "OnRep_SupportedSpawnRegions"))((DWORD64)this); }
	void NotifyPlayerDied(AShooterCharacter* a1, AShooterPlayerController* a2, APawn* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, AShooterCharacter*, AShooterPlayerController*, APawn*, AActor*)>(GetAddress("AShooterGameState", "NotifyPlayerDied"))((DWORD64)this, a1, a2, a3, a4); }
	bool AllowTribeManager(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterGameState", "AllowTribeManager"))((DWORD64)this, a1); }
	bool AllowOrbitCamera(APrimalCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("AShooterGameState", "AllowOrbitCamera"))((DWORD64)this, a1); }
	bool AllowPopUps() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "AllowPopUps"))((DWORD64)this); }
	bool AllowDaytimeTransitionSounds() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "AllowDaytimeTransitionSounds"))((DWORD64)this); }
	bool AllowStartSupplyCrateSpawns() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "AllowStartSupplyCrateSpawns"))((DWORD64)this); }
	void HandleActorEvent(AActor* a1, FName a2, FVector a3) { static_cast<void(_cdecl*)(DWORD64, AActor*, FName, FVector)>(GetAddress("AShooterGameState", "HandleActorEvent"))((DWORD64)this, a1, a2, a3); }
	void ExtraShooterCharacterTick(AShooterCharacter* a1, float a2) { static_cast<void(_cdecl*)(DWORD64, AShooterCharacter*, float)>(GetAddress("AShooterGameState", "ExtraShooterCharacterTick"))((DWORD64)this, a1, a2); }
	bool AllowTribeManagement() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "AllowTribeManagement"))((DWORD64)this); }
	bool ForceOccludedFloatingHUD(AActor* a1, AShooterPlayerController* a2) { return static_cast<bool(_cdecl*)(DWORD64, AActor*, AShooterPlayerController*)>(GetAddress("AShooterGameState", "ForceOccludedFloatingHUD"))((DWORD64)this, a1, a2); }
	bool AllowRemoveItems(UPrimalInventoryComponent* a1, AShooterPlayerController* a2, UPrimalItem* a3) { return static_cast<bool(_cdecl*)(DWORD64, UPrimalInventoryComponent*, AShooterPlayerController*, UPrimalItem*)>(GetAddress("AShooterGameState", "AllowRemoveItems"))((DWORD64)this, a1, a2, a3); }
	bool AllowShowPlayerHudUI(APrimalCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("AShooterGameState", "AllowShowPlayerHudUI"))((DWORD64)this, a1); }
	bool AllowCreateSurvivor() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "AllowCreateSurvivor"))((DWORD64)this); }
	bool HasGameModeMatchStarted() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "HasGameModeMatchStarted"))((DWORD64)this); }
	TArray<AShooterPlayerController *, FDefaultAllocator> BaseGetAllShooterControllers() { return static_cast<TArray<AShooterPlayerController *, FDefaultAllocator>(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "BaseGetAllShooterControllers"))((DWORD64)this); }
	TArray<AShooterCharacter *, FDefaultAllocator> BaseGetAllShooterCharacters() { return static_cast<TArray<AShooterCharacter *, FDefaultAllocator>(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "BaseGetAllShooterCharacters"))((DWORD64)this); }
	TArray<AShooterCharacter *, FDefaultAllocator> BaseGetAllShooterCharactersOfTeam(int a1) { return static_cast<TArray<AShooterCharacter *, FDefaultAllocator>(_cdecl*)(DWORD64, int)>(GetAddress("AShooterGameState", "BaseGetAllShooterCharactersOfTeam"))((DWORD64)this, a1); }
	TArray<APrimalDinoCharacter *, FDefaultAllocator> BaseGetAllDinoCharactersOfTeam(int a1) { return static_cast<TArray<APrimalDinoCharacter *, FDefaultAllocator>(_cdecl*)(DWORD64, int)>(GetAddress("AShooterGameState", "BaseGetAllDinoCharactersOfTeam"))((DWORD64)this, a1); }
	FVector2D* BaseProjectWorldToScreenPosition(FVector2D* res, const FVector& a1, APlayerController* a2) { return static_cast<FVector2D*(_cdecl*)(DWORD64, FVector2D*, const FVector&, APlayerController*)>(GetAddress("AShooterGameState", "BaseProjectWorldToScreenPosition"))((DWORD64)this, res, a1, a2); }
	bool IsTeamIDInvincible(int a1) { return static_cast<bool(_cdecl*)(DWORD64, int)>(GetAddress("AShooterGameState", "IsTeamIDInvincible"))((DWORD64)this, a1); }
	void NetUpdateOfflinePvPLiveTeams(const TArray<int, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, const TArray<int, FDefaultAllocator>&)>(GetAddress("AShooterGameState", "NetUpdateOfflinePvPLiveTeams"))((DWORD64)this, a1); }
	void NetUpdateOfflinePvPExpiringTeams(const TArray<int, FDefaultAllocator>& a1, const TArray<double, FDefaultAllocator>& a2) { static_cast<void(_cdecl*)(DWORD64, const TArray<int, FDefaultAllocator>&, const TArray<double, FDefaultAllocator>&)>(GetAddress("AShooterGameState", "NetUpdateOfflinePvPExpiringTeams"))((DWORD64)this, a1, a2); }
	void UpdatePreventOfflinePvPStatus() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "UpdatePreventOfflinePvPStatus"))((DWORD64)this); }
	double GetOfflineDamagePreventionTime(int a1) { return static_cast<double(_cdecl*)(DWORD64, int)>(GetAddress("AShooterGameState", "GetOfflineDamagePreventionTime"))((DWORD64)this, a1); }
	void AddFloatingText(FVector a1, FString a2, FColor a3, float a4, float a5, float a6, FVector a7, float a8, float a9, float a10) { static_cast<void(_cdecl*)(DWORD64, FVector, FString, FColor, float, float, float, FVector, float, float, float)>(GetAddress("AShooterGameState", "AddFloatingText"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); }
	void AddFloatingDamageText(FVector a1, int a2, int a3) { static_cast<void(_cdecl*)(DWORD64, FVector, int, int)>(GetAddress("AShooterGameState", "AddFloatingDamageText"))((DWORD64)this, a1, a2, a3); }
	void NetAddFloatingDamageText(FVector a1, int a2, int a3, int a4) { static_cast<void(_cdecl*)(DWORD64, FVector, int, int, int)>(GetAddress("AShooterGameState", "NetAddFloatingDamageText"))((DWORD64)this, a1, a2, a3, a4); }
	void NetAddFloatingText(FVector a1, FString a2, FColor a3, float a4, float a5, float a6, FVector a7, float a8, float a9, float a10, int a11) { static_cast<void(_cdecl*)(DWORD64, FVector, FString, FColor, float, float, float, FVector, float, float, float, int)>(GetAddress("AShooterGameState", "NetAddFloatingText"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
	FString GetCleanServerSessionName() { return static_cast<FString(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "GetCleanServerSessionName"))((DWORD64)this); }
	void ForceNetUpdate(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterGameState", "ForceNetUpdate"))((DWORD64)this, a1); }
	void WorldCompositionRescan() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameState", "WorldCompositionRescan"))((DWORD64)this); }
};
