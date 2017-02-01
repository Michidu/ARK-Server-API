#pragma once

#include "Base.h"

struct AGameState
{
	TSubclassOf<AGameMode> GetGameModeClassField() const { return GetNativeField<TSubclassOf<AGameMode>>(this, "AGameState", "GameModeClass"); }
	AGameMode* GetAuthorityGameModeField() const { return GetNativeField<AGameMode *>(this, "AGameState", "AuthorityGameMode"); }
	//TSubclassOf<ASpectatorPawn> GetSpectatorClassField() const { return GetNativeField<TSubclassOf<ASpectatorPawn>>(this, "AGameState", "SpectatorClass"); }
	FName GetMatchStateField() const { return GetNativeField<FName>(this, "AGameState", "MatchState"); }
	void SetMatchStateField(FName newValue) { SetNativeField(this, "AGameState", "MatchState", newValue); }
	FName GetPreviousMatchStateField() const { return GetNativeField<FName>(this, "AGameState", "PreviousMatchState"); }
	void SetPreviousMatchStateField(FName newValue) { SetNativeField(this, "AGameState", "PreviousMatchState", newValue); }
	int GetElapsedTimeField() const { return GetNativeField<int>(this, "AGameState", "ElapsedTime"); }
	void SetElapsedTimeField(int newValue) { SetNativeField(this, "AGameState", "ElapsedTime", newValue); }
	TArray<APlayerState *, FDefaultAllocator> GetPlayerArrayField() const { return GetNativeField<TArray<APlayerState *, FDefaultAllocator>>(this, "AGameState", "PlayerArray"); }
	TArray<APlayerState *, FDefaultAllocator> GetInactivePlayerArrayField() const { return GetNativeField<TArray<APlayerState *, FDefaultAllocator>>(this, "AGameState", "InactivePlayerArray"); }

	// Functions

	bool TeleportTo(FVector* DestLocation, FRotator* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, FVector *, FRotator *, bool, bool>((DWORD64)this, "AGameState", "TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "AGameState", "PostInitializeComponents"); }
	void OnRep_GameModeClass() { NativeCall<void>((DWORD64)this, "AGameState", "OnRep_GameModeClass"); }
	void OnRep_SpectatorClass() { NativeCall<void>((DWORD64)this, "AGameState", "OnRep_SpectatorClass"); }
	void ReceivedGameModeClass() { NativeCall<void>((DWORD64)this, "AGameState", "ReceivedGameModeClass"); }
	void ReceivedSpectatorClass() { NativeCall<void>((DWORD64)this, "AGameState", "ReceivedSpectatorClass"); }
	void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) { NativeCall<void, bool>((DWORD64)this, "AGameState", "SeamlessTravelTransitionCheckpoint", bToTransitionMap); }
	void AddPlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState *>((DWORD64)this, "AGameState", "AddPlayerState", PlayerState); }
	void RemovePlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState *>((DWORD64)this, "AGameState", "RemovePlayerState", PlayerState); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>((DWORD64)this, "AGameState", "HandleMatchIsWaitingToStart"); }
	void HandleMatchHasStarted() { NativeCall<void>((DWORD64)this, "AGameState", "HandleMatchHasStarted"); }
	bool HasMatchStarted() { return NativeCall<bool>((DWORD64)this, "AGameState", "HasMatchStarted"); }
	bool IsMatchInProgress() { return NativeCall<bool>((DWORD64)this, "AGameState", "IsMatchInProgress"); }
	bool HasMatchEnded() { return NativeCall<bool>((DWORD64)this, "AGameState", "HasMatchEnded"); }
	void OnRep_MatchState() { NativeCall<void>((DWORD64)this, "AGameState", "OnRep_MatchState"); }
	void NetSpawnActorAtLocation() { NativeCall<void>((DWORD64)this, "AGameState", "NetSpawnActorAtLocation"); }
};

struct AShooterGameState : AGameState
{
	int GetNumNPCField() const { return GetNativeField<int>(this, "AShooterGameState", "NumNPC"); }
	void SetNumNPCField(int newValue) { SetNativeField(this, "AShooterGameState", "NumNPC", newValue); }
	int GetNumActiveNPCField() const { return GetNativeField<int>(this, "AShooterGameState", "NumActiveNPC"); }
	void SetNumActiveNPCField(int newValue) { SetNativeField(this, "AShooterGameState", "NumActiveNPC", newValue); }
	int GetNumDeadNPCField() const { return GetNativeField<int>(this, "AShooterGameState", "NumDeadNPC"); }
	void SetNumDeadNPCField(int newValue) { SetNativeField(this, "AShooterGameState", "NumDeadNPC", newValue); }
	int GetNumPlayerActorsField() const { return GetNativeField<int>(this, "AShooterGameState", "NumPlayerActors"); }
	void SetNumPlayerActorsField(int newValue) { SetNativeField(this, "AShooterGameState", "NumPlayerActors", newValue); }
	int GetNumPlayerConnectedField() const { return GetNativeField<int>(this, "AShooterGameState", "NumPlayerConnected"); }
	void SetNumPlayerConnectedField(int newValue) { SetNativeField(this, "AShooterGameState", "NumPlayerConnected", newValue); }
	bool GetbServerUseLocalizedChatField() const { return GetNativeField<bool>(this, "AShooterGameState", "bServerUseLocalizedChat"); }
	void SetbServerUseLocalizedChatField(bool newValue) { SetNativeField(this, "AShooterGameState", "bServerUseLocalizedChat", newValue); }
	float GetLocalizedChatRadiusField() const { return GetNativeField<float>(this, "AShooterGameState", "LocalizedChatRadius"); }
	void SetLocalizedChatRadiusField(float newValue) { SetNativeField(this, "AShooterGameState", "LocalizedChatRadius", newValue); }
	float GetLocalizedChatRadiusUnconsiousScaleField() const { return GetNativeField<float>(this, "AShooterGameState", "LocalizedChatRadiusUnconsiousScale"); }
	void SetLocalizedChatRadiusUnconsiousScaleField(float newValue) { SetNativeField(this, "AShooterGameState", "LocalizedChatRadiusUnconsiousScale", newValue); }
	float GetServerFramerateField() const { return GetNativeField<float>(this, "AShooterGameState", "ServerFramerate"); }
	void SetServerFramerateField(float newValue) { SetNativeField(this, "AShooterGameState", "ServerFramerate", newValue); }
	FString GetNewStructureDestructionTagField() const { return GetNativeField<FString>(this, "AShooterGameState", "NewStructureDestructionTag"); }
	void SetNewStructureDestructionTagField(FString newValue) { SetNativeField(this, "AShooterGameState", "NewStructureDestructionTag", newValue); }
	int GetDayNumberField() const { return GetNativeField<int>(this, "AShooterGameState", "DayNumber"); }
	void SetDayNumberField(int newValue) { SetNativeField(this, "AShooterGameState", "DayNumber", newValue); }
	float GetDayTimeField() const { return GetNativeField<float>(this, "AShooterGameState", "DayTime"); }
	void SetDayTimeField(float newValue) { SetNativeField(this, "AShooterGameState", "DayTime", newValue); }
	long double GetNetworkTimeField() const { return GetNativeField<long double>(this, "AShooterGameState", "NetworkTime"); }
	void SetNetworkTimeField(long double newValue) { SetNativeField(this, "AShooterGameState", "NetworkTime", newValue); }
	unsigned int GetTimeUTCField() const { return GetNativeField<unsigned int>(this, "AShooterGameState", "TimeUTC"); }
	void SetTimeUTCField(unsigned int newValue) { SetNativeField(this, "AShooterGameState", "TimeUTC", newValue); }
	bool GetbIsOfficialServerField() const { return GetNativeField<bool>(this, "AShooterGameState", "bIsOfficialServer"); }
	void SetbIsOfficialServerField(bool newValue) { SetNativeField(this, "AShooterGameState", "bIsOfficialServer", newValue); }
	bool GetbIsArkTributeAvailableField() const { return GetNativeField<bool>(this, "AShooterGameState", "bIsArkTributeAvailable"); }
	void SetbIsArkTributeAvailableField(bool newValue) { SetNativeField(this, "AShooterGameState", "bIsArkTributeAvailable", newValue); }
	bool GetbIsArkDownloadsAllowedField() const { return GetNativeField<bool>(this, "AShooterGameState", "bIsArkDownloadsAllowed"); }
	void SetbIsArkDownloadsAllowedField(bool newValue) { SetNativeField(this, "AShooterGameState", "bIsArkDownloadsAllowed", newValue); }
	bool GetbAllowThirdPersonPlayerField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowThirdPersonPlayer"); }
	void SetbAllowThirdPersonPlayerField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowThirdPersonPlayer", newValue); }
	bool GetbServerHardcoreField() const { return GetNativeField<bool>(this, "AShooterGameState", "bServerHardcore"); }
	void SetbServerHardcoreField(bool newValue) { SetNativeField(this, "AShooterGameState", "bServerHardcore", newValue); }
	bool GetbServerPVEField() const { return GetNativeField<bool>(this, "AShooterGameState", "bServerPVE"); }
	void SetbServerPVEField(bool newValue) { SetNativeField(this, "AShooterGameState", "bServerPVE", newValue); }
	bool GetbAutoPvEField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAutoPvE"); }
	void SetbAutoPvEField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAutoPvE", newValue); }
	bool GetbServerCrosshairField() const { return GetNativeField<bool>(this, "AShooterGameState", "bServerCrosshair"); }
	void SetbServerCrosshairField(bool newValue) { SetNativeField(this, "AShooterGameState", "bServerCrosshair", newValue); }
	bool GetbServerForceNoHUDField() const { return GetNativeField<bool>(this, "AShooterGameState", "bServerForceNoHUD"); }
	void SetbServerForceNoHUDField(bool newValue) { SetNativeField(this, "AShooterGameState", "bServerForceNoHUD", newValue); }
	bool GetbFlyerPlatformAllowUnalignedDinoBasingField() const { return GetNativeField<bool>(this, "AShooterGameState", "bFlyerPlatformAllowUnalignedDinoBasing"); }
	void SetbFlyerPlatformAllowUnalignedDinoBasingField(bool newValue) { SetNativeField(this, "AShooterGameState", "bFlyerPlatformAllowUnalignedDinoBasing", newValue); }
	bool GetbMapPlayerLocationField() const { return GetNativeField<bool>(this, "AShooterGameState", "bMapPlayerLocation"); }
	void SetbMapPlayerLocationField(bool newValue) { SetNativeField(this, "AShooterGameState", "bMapPlayerLocation", newValue); }
	bool GetbPvEDisableFriendlyFireField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPvEDisableFriendlyFire"); }
	void SetbPvEDisableFriendlyFireField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPvEDisableFriendlyFire", newValue); }
	bool GetbPvEAllowTribeWarField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPvEAllowTribeWar"); }
	void SetbPvEAllowTribeWarField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPvEAllowTribeWar", newValue); }
	bool GetbPvEAllowTribeWarCancelField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPvEAllowTribeWarCancel"); }
	void SetbPvEAllowTribeWarCancelField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPvEAllowTribeWarCancel", newValue); }
	bool GetbEnablePvPGammaField() const { return GetNativeField<bool>(this, "AShooterGameState", "bEnablePvPGamma"); }
	void SetbEnablePvPGammaField(bool newValue) { SetNativeField(this, "AShooterGameState", "bEnablePvPGamma", newValue); }
	bool GetbDisablePvEGammaField() const { return GetNativeField<bool>(this, "AShooterGameState", "bDisablePvEGamma"); }
	void SetbDisablePvEGammaField(bool newValue) { SetNativeField(this, "AShooterGameState", "bDisablePvEGamma", newValue); }
	int GetNumTamedDinosField() const { return GetNativeField<int>(this, "AShooterGameState", "NumTamedDinos"); }
	void SetNumTamedDinosField(int newValue) { SetNativeField(this, "AShooterGameState", "NumTamedDinos", newValue); }
	int GetMaxStructuresInRangeField() const { return GetNativeField<int>(this, "AShooterGameState", "MaxStructuresInRange"); }
	void SetMaxStructuresInRangeField(int newValue) { SetNativeField(this, "AShooterGameState", "MaxStructuresInRange", newValue); }
	float GetDayCycleSpeedScaleField() const { return GetNativeField<float>(this, "AShooterGameState", "DayCycleSpeedScale"); }
	void SetDayCycleSpeedScaleField(float newValue) { SetNativeField(this, "AShooterGameState", "DayCycleSpeedScale", newValue); }
	float GetDayTimeSpeedScaleField() const { return GetNativeField<float>(this, "AShooterGameState", "DayTimeSpeedScale"); }
	void SetDayTimeSpeedScaleField(float newValue) { SetNativeField(this, "AShooterGameState", "DayTimeSpeedScale", newValue); }
	float GetNightTimeSpeedScaleField() const { return GetNativeField<float>(this, "AShooterGameState", "NightTimeSpeedScale"); }
	void SetNightTimeSpeedScaleField(float newValue) { SetNativeField(this, "AShooterGameState", "NightTimeSpeedScale", newValue); }
	float GetPvEStructureDecayPeriodMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "PvEStructureDecayPeriodMultiplier"); }
	void SetPvEStructureDecayPeriodMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "PvEStructureDecayPeriodMultiplier", newValue); }
	float GetPvEDinoDecayPeriodMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "PvEDinoDecayPeriodMultiplier"); }
	void SetPvEDinoDecayPeriodMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "PvEDinoDecayPeriodMultiplier", newValue); }
	float GetPerPlatformMaxStructuresMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "PerPlatformMaxStructuresMultiplier"); }
	void SetPerPlatformMaxStructuresMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "PerPlatformMaxStructuresMultiplier", newValue); }
	bool GetbDisableStructureDecayPvEField() const { return GetNativeField<bool>(this, "AShooterGameState", "bDisableStructureDecayPvE"); }
	void SetbDisableStructureDecayPvEField(bool newValue) { SetNativeField(this, "AShooterGameState", "bDisableStructureDecayPvE", newValue); }
	bool GetbDisableDinoDecayPvEField() const { return GetNativeField<bool>(this, "AShooterGameState", "bDisableDinoDecayPvE"); }
	void SetbDisableDinoDecayPvEField(bool newValue) { SetNativeField(this, "AShooterGameState", "bDisableDinoDecayPvE", newValue); }
	bool GetbAllowCaveBuildingPvEField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowCaveBuildingPvE"); }
	void SetbAllowCaveBuildingPvEField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowCaveBuildingPvE", newValue); }
	bool GetbPreventDownloadSurvivorsField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventDownloadSurvivors"); }
	void SetbPreventDownloadSurvivorsField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventDownloadSurvivors", newValue); }
	bool GetbReachedPlatformStructureLimitField() const { return GetNativeField<bool>(this, "AShooterGameState", "bReachedPlatformStructureLimit"); }
	void SetbReachedPlatformStructureLimitField(bool newValue) { SetNativeField(this, "AShooterGameState", "bReachedPlatformStructureLimit", newValue); }
	bool GetbAdminLoggingField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAdminLogging"); }
	void SetbAdminLoggingField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAdminLogging", newValue); }
	bool GetbPvPStructureDecayField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPvPStructureDecay"); }
	void SetbPvPStructureDecayField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPvPStructureDecay", newValue); }
	bool GetbPreventDownloadDinosField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventDownloadDinos"); }
	void SetbPreventDownloadDinosField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventDownloadDinos", newValue); }
	bool GetbPreventDownloadItemsField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventDownloadItems"); }
	void SetbPreventDownloadItemsField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventDownloadItems", newValue); }
	bool GetbPreventUploadDinosField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventUploadDinos"); }
	void SetbPreventUploadDinosField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventUploadDinos", newValue); }
	bool GetbPreventUploadItemsField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventUploadItems"); }
	void SetbPreventUploadItemsField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventUploadItems", newValue); }
	bool GetbPreventUploadSurvivorsField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventUploadSurvivors"); }
	void SetbPreventUploadSurvivorsField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventUploadSurvivors", newValue); }
	bool GetbPreventMateBoostField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventMateBoost"); }
	void SetbPreventMateBoostField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventMateBoost", newValue); }
	bool GetbPreventStructurePaintingField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventStructurePainting"); }
	void SetbPreventStructurePaintingField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventStructurePainting", newValue); }
	bool GetbAllowCharacterCreationField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowCharacterCreation"); }
	void SetbAllowCharacterCreationField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowCharacterCreation", newValue); }
	bool GetbAllowSpawnPointSelectionField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowSpawnPointSelection"); }
	void SetbAllowSpawnPointSelectionField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowSpawnPointSelection", newValue); }
	int GetMaxTamedDinosField() const { return GetNativeField<int>(this, "AShooterGameState", "MaxTamedDinos"); }
	void SetMaxTamedDinosField(int newValue) { SetNativeField(this, "AShooterGameState", "MaxTamedDinos", newValue); }
	bool GetbDisableSpawnAnimationsField() const { return GetNativeField<bool>(this, "AShooterGameState", "bDisableSpawnAnimations"); }
	void SetbDisableSpawnAnimationsField(bool newValue) { SetNativeField(this, "AShooterGameState", "bDisableSpawnAnimations", newValue); }
	FString GetPlayerListStringField() const { return GetNativeField<FString>(this, "AShooterGameState", "PlayerListString"); }
	void SetPlayerListStringField(FString newValue) { SetNativeField(this, "AShooterGameState", "PlayerListString", newValue); }
	float GetGlobalSpoilingTimeMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "GlobalSpoilingTimeMultiplier"); }
	void SetGlobalSpoilingTimeMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "GlobalSpoilingTimeMultiplier", newValue); }
	float GetGlobalItemDecompositionTimeMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "GlobalItemDecompositionTimeMultiplier"); }
	void SetGlobalItemDecompositionTimeMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "GlobalItemDecompositionTimeMultiplier", newValue); }
	int GetMaxNumberOfPlayersInTribeField() const { return GetNativeField<int>(this, "AShooterGameState", "MaxNumberOfPlayersInTribe"); }
	void SetMaxNumberOfPlayersInTribeField(int newValue) { SetNativeField(this, "AShooterGameState", "MaxNumberOfPlayersInTribe", newValue); }
	float GetGlobalCorpseDecompositionTimeMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "GlobalCorpseDecompositionTimeMultiplier"); }
	void SetGlobalCorpseDecompositionTimeMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "GlobalCorpseDecompositionTimeMultiplier", newValue); }
	float GetEggHatchSpeedMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "EggHatchSpeedMultiplier"); }
	void SetEggHatchSpeedMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "EggHatchSpeedMultiplier", newValue); }
	bool GetbAllowPaintingWithoutResourcesField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowPaintingWithoutResources"); }
	void SetbAllowPaintingWithoutResourcesField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowPaintingWithoutResources", newValue); }
	bool GetbEnableExtraStructurePreventionVolumesField() const { return GetNativeField<bool>(this, "AShooterGameState", "bEnableExtraStructurePreventionVolumes"); }
	void SetbEnableExtraStructurePreventionVolumesField(bool newValue) { SetNativeField(this, "AShooterGameState", "bEnableExtraStructurePreventionVolumes", newValue); }
	//TArray<FItemCraftingCostOverride, FDefaultAllocator> GetOverrideItemCraftingCostsField() const { return GetNativeField<TArray<FItemCraftingCostOverride, FDefaultAllocator>>(this, "AShooterGameState", "OverrideItemCraftingCosts"); }
	//void SetOverrideItemCraftingCostsField(TArray<FItemCraftingCostOverride, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "OverrideItemCraftingCosts", newValue); }
	bool GetbPlayingDynamicMusicField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPlayingDynamicMusic"); }
	void SetbPlayingDynamicMusicField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPlayingDynamicMusic", newValue); }
	float GetLastHadMusicTimeField() const { return GetNativeField<float>(this, "AShooterGameState", "LastHadMusicTime"); }
	void SetLastHadMusicTimeField(float newValue) { SetNativeField(this, "AShooterGameState", "LastHadMusicTime", newValue); }
	//TArray<FLevelExperienceRamp, FDefaultAllocator> GetLevelExperienceRampOverridesField() const { return GetNativeField<TArray<FLevelExperienceRamp, FDefaultAllocator>>(this, "AShooterGameState", "LevelExperienceRampOverrides"); }
	//void SetLevelExperienceRampOverridesField(TArray<FLevelExperienceRamp, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "LevelExperienceRampOverrides", newValue); }
	//TArray<FEngramEntryOverride, FDefaultAllocator> GetOverrideEngramEntriesField() const { return GetNativeField<TArray<FEngramEntryOverride, FDefaultAllocator>>(this, "AShooterGameState", "OverrideEngramEntries"); }
	//void SetOverrideEngramEntriesField(TArray<FEngramEntryOverride, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "OverrideEngramEntries", newValue); }
	TArray<FString, FDefaultAllocator> GetPreventDinoTameClassNamesField() const { return GetNativeField<TArray<FString, FDefaultAllocator>>(this, "AShooterGameState", "PreventDinoTameClassNames"); }
	void SetPreventDinoTameClassNamesField(TArray<FString, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "PreventDinoTameClassNames", newValue); }
	float GetListenServerTetherDistanceMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "ListenServerTetherDistanceMultiplier"); }
	void SetListenServerTetherDistanceMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "ListenServerTetherDistanceMultiplier", newValue); }
	FString GetPGMapNameField() const { return GetNativeField<FString>(this, "AShooterGameState", "PGMapName"); }
	void SetPGMapNameField(FString newValue) { SetNativeField(this, "AShooterGameState", "PGMapName", newValue); }
	TArray<int, FDefaultAllocator> GetSupportedSpawnRegionsField() const { return GetNativeField<TArray<int, FDefaultAllocator>>(this, "AShooterGameState", "SupportedSpawnRegions"); }
	void SetSupportedSpawnRegionsField(TArray<int, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "SupportedSpawnRegions", newValue); }
	bool GetbEnableDeathTeamSpectatorField() const { return GetNativeField<bool>(this, "AShooterGameState", "bEnableDeathTeamSpectator"); }
	void SetbEnableDeathTeamSpectatorField(bool newValue) { SetNativeField(this, "AShooterGameState", "bEnableDeathTeamSpectator", newValue); }
	FVector GetPlayerFloatingHUDOffsetField() const { return GetNativeField<FVector>(this, "AShooterGameState", "PlayerFloatingHUDOffset"); }
	void SetPlayerFloatingHUDOffsetField(FVector newValue) { SetNativeField(this, "AShooterGameState", "PlayerFloatingHUDOffset", newValue); }
	float GetPlayerFloatingHUDOffsetScreenYField() const { return GetNativeField<float>(this, "AShooterGameState", "PlayerFloatingHUDOffsetScreenY"); }
	void SetPlayerFloatingHUDOffsetScreenYField(float newValue) { SetNativeField(this, "AShooterGameState", "PlayerFloatingHUDOffsetScreenY", newValue); }
	float GetStructureDamageRepairCooldownField() const { return GetNativeField<float>(this, "AShooterGameState", "StructureDamageRepairCooldown"); }
	void SetStructureDamageRepairCooldownField(float newValue) { SetNativeField(this, "AShooterGameState", "StructureDamageRepairCooldown", newValue); }
	bool GetbForceAllStructureLockingField() const { return GetNativeField<bool>(this, "AShooterGameState", "bForceAllStructureLocking"); }
	void SetbForceAllStructureLockingField(bool newValue) { SetNativeField(this, "AShooterGameState", "bForceAllStructureLocking", newValue); }
	bool GetbAllowCustomRecipesField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowCustomRecipes"); }
	void SetbAllowCustomRecipesField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowCustomRecipes", newValue); }
	bool GetbAllowRaidDinoFeedingField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowRaidDinoFeeding"); }
	void SetbAllowRaidDinoFeedingField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowRaidDinoFeeding", newValue); }
	float GetCustomRecipeEffectivenessMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "CustomRecipeEffectivenessMultiplier"); }
	void SetCustomRecipeEffectivenessMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "CustomRecipeEffectivenessMultiplier", newValue); }
	float GetCustomRecipeSkillMultiplierField() const { return GetNativeField<float>(this, "AShooterGameState", "CustomRecipeSkillMultiplier"); }
	void SetCustomRecipeSkillMultiplierField(float newValue) { SetNativeField(this, "AShooterGameState", "CustomRecipeSkillMultiplier", newValue); }
	FVector GetOverrideAreaMusicPositionField() const { return GetNativeField<FVector>(this, "AShooterGameState", "OverrideAreaMusicPosition"); }
	void SetOverrideAreaMusicPositionField(FVector newValue) { SetNativeField(this, "AShooterGameState", "OverrideAreaMusicPosition", newValue); }
	float GetOverrideAreaMusicRangeField() const { return GetNativeField<float>(this, "AShooterGameState", "OverrideAreaMusicRange"); }
	void SetOverrideAreaMusicRangeField(float newValue) { SetNativeField(this, "AShooterGameState", "OverrideAreaMusicRange", newValue); }
	bool GetbAllowUnclaimDinosField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowUnclaimDinos"); }
	void SetbAllowUnclaimDinosField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowUnclaimDinos", newValue); }
	float GetFloatingHUDRangeField() const { return GetNativeField<float>(this, "AShooterGameState", "FloatingHUDRange"); }
	void SetFloatingHUDRangeField(float newValue) { SetNativeField(this, "AShooterGameState", "FloatingHUDRange", newValue); }
	float GetFloatingChatRangeField() const { return GetNativeField<float>(this, "AShooterGameState", "FloatingChatRange"); }
	void SetFloatingChatRangeField(float newValue) { SetNativeField(this, "AShooterGameState", "FloatingChatRange", newValue); }
	int GetExtinctionEventTimeIntervalField() const { return GetNativeField<int>(this, "AShooterGameState", "ExtinctionEventTimeInterval"); }
	void SetExtinctionEventTimeIntervalField(int newValue) { SetNativeField(this, "AShooterGameState", "ExtinctionEventTimeInterval", newValue); }
	float GetExtinctionEventPercentField() const { return GetNativeField<float>(this, "AShooterGameState", "ExtinctionEventPercent"); }
	void SetExtinctionEventPercentField(float newValue) { SetNativeField(this, "AShooterGameState", "ExtinctionEventPercent", newValue); }
	int GetExtinctionEventSecondsRemainingField() const { return GetNativeField<int>(this, "AShooterGameState", "ExtinctionEventSecondsRemaining"); }
	void SetExtinctionEventSecondsRemainingField(int newValue) { SetNativeField(this, "AShooterGameState", "ExtinctionEventSecondsRemaining", newValue); }
	bool GetbDoExtinctionEventField() const { return GetNativeField<bool>(this, "AShooterGameState", "bDoExtinctionEvent"); }
	void SetbDoExtinctionEventField(bool newValue) { SetNativeField(this, "AShooterGameState", "bDoExtinctionEvent", newValue); }
	bool GetbPreventOfflinePvPField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventOfflinePvP"); }
	void SetbPreventOfflinePvPField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventOfflinePvP", newValue); }
	bool GetbPvPDinoDecayField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPvPDinoDecay"); }
	void SetbPvPDinoDecayField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPvPDinoDecay", newValue); }
	bool GetbOverideStructurePlatformPreventionField() const { return GetNativeField<bool>(this, "AShooterGameState", "bOverideStructurePlatformPrevention"); }
	void SetbOverideStructurePlatformPreventionField(bool newValue) { SetNativeField(this, "AShooterGameState", "bOverideStructurePlatformPrevention", newValue); }
	TArray<int, FDefaultAllocator> GetPreventOfflinePvPLiveTeamsField() const { return GetNativeField<TArray<int, FDefaultAllocator>>(this, "AShooterGameState", "PreventOfflinePvPLiveTeams"); }
	void SetPreventOfflinePvPLiveTeamsField(TArray<int, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "PreventOfflinePvPLiveTeams", newValue); }
	TArray<int, FDefaultAllocator> GetPreventOfflinePvPExpiringTeamsField() const { return GetNativeField<TArray<int, FDefaultAllocator>>(this, "AShooterGameState", "PreventOfflinePvPExpiringTeams"); }
	void SetPreventOfflinePvPExpiringTeamsField(TArray<int, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "PreventOfflinePvPExpiringTeams", newValue); }
	TArray<double, FDefaultAllocator> GetPreventOfflinePvPExpiringTimesField() const { return GetNativeField<TArray<double, FDefaultAllocator>>(this, "AShooterGameState", "PreventOfflinePvPExpiringTimes"); }
	void SetPreventOfflinePvPExpiringTimesField(TArray<double, FDefaultAllocator> newValue) { SetNativeField(this, "AShooterGameState", "PreventOfflinePvPExpiringTimes", newValue); }
	TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0>> GetPreventOfflinePvPLiveTimesField() const { return GetNativeField<TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0>>>(this, "AShooterGameState", "PreventOfflinePvPLiveTimes"); }
	void SetPreventOfflinePvPLiveTimesField(TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0>> newValue) { SetNativeField(this, "AShooterGameState", "PreventOfflinePvPLiveTimes", newValue); }
	bool GetbAllowAnyoneBabyImprintCuddleField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowAnyoneBabyImprintCuddle"); }
	void SetbAllowAnyoneBabyImprintCuddleField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowAnyoneBabyImprintCuddle", newValue); }
	bool GetbDisableImprintDinoBuffField() const { return GetNativeField<bool>(this, "AShooterGameState", "bDisableImprintDinoBuff"); }
	void SetbDisableImprintDinoBuffField(bool newValue) { SetNativeField(this, "AShooterGameState", "bDisableImprintDinoBuff", newValue); }
	bool GetbIsCustomMapField() const { return GetNativeField<bool>(this, "AShooterGameState", "bIsCustomMap"); }
	void SetbIsCustomMapField(bool newValue) { SetNativeField(this, "AShooterGameState", "bIsCustomMap", newValue); }
	FString GetClusterIdField() const { return GetNativeField<FString>(this, "AShooterGameState", "ClusterId"); }
	FString GetServerSessionNameField() const { return GetNativeField<FString>(this, "AShooterGameState", "ServerSessionName"); }
	void SetServerSessionNameField(FString newValue) { SetNativeField(this, "AShooterGameState", "ServerSessionName", newValue); }
	bool GetbPreventTribeAlliancesField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPreventTribeAlliances"); }
	void SetbPreventTribeAlliancesField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPreventTribeAlliances", newValue); }
	FString GetLoadForceRespawnDinosTagField() const { return GetNativeField<FString>(this, "AShooterGameState", "LoadForceRespawnDinosTag"); }
	void SetLoadForceRespawnDinosTagField(FString newValue) { SetNativeField(this, "AShooterGameState", "LoadForceRespawnDinosTag", newValue); }
	bool GetbOnlyDecayUnsnappedCoreStructuresField() const { return GetNativeField<bool>(this, "AShooterGameState", "bOnlyDecayUnsnappedCoreStructures"); }
	void SetbOnlyDecayUnsnappedCoreStructuresField(bool newValue) { SetNativeField(this, "AShooterGameState", "bOnlyDecayUnsnappedCoreStructures", newValue); }
	bool GetbFastDecayUnsnappedCoreStructuresField() const { return GetNativeField<bool>(this, "AShooterGameState", "bFastDecayUnsnappedCoreStructures"); }
	void SetbFastDecayUnsnappedCoreStructuresField(bool newValue) { SetNativeField(this, "AShooterGameState", "bFastDecayUnsnappedCoreStructures", newValue); }
	bool GetbServerUseDinoListField() const { return GetNativeField<bool>(this, "AShooterGameState", "bServerUseDinoList"); }
	void SetbServerUseDinoListField(bool newValue) { SetNativeField(this, "AShooterGameState", "bServerUseDinoList", newValue); }
	bool GetbPvEAllowStructuresAtSupplyDropsField() const { return GetNativeField<bool>(this, "AShooterGameState", "bPvEAllowStructuresAtSupplyDrops"); }
	void SetbPvEAllowStructuresAtSupplyDropsField(bool newValue) { SetNativeField(this, "AShooterGameState", "bPvEAllowStructuresAtSupplyDrops", newValue); }
	bool GetbAllowForceNetUpdateField() const { return GetNativeField<bool>(this, "AShooterGameState", "bAllowForceNetUpdate"); }
	void SetbAllowForceNetUpdateField(bool newValue) { SetNativeField(this, "AShooterGameState", "bAllowForceNetUpdate", newValue); }
	float GetMinimumDinoReuploadIntervalField() const { return GetNativeField<float>(this, "AShooterGameState", "MinimumDinoReuploadInterval"); }
	void SetMinimumDinoReuploadIntervalField(float newValue) { SetNativeField(this, "AShooterGameState", "MinimumDinoReuploadInterval", newValue); }

	// Functions

	TArray<APrimalDinoCharacter *, FDefaultAllocator>* BaseGetAllDinoCharactersOfTeam(TArray<APrimalDinoCharacter *, FDefaultAllocator>* result, int Team) { return NativeCall<TArray<APrimalDinoCharacter *, FDefaultAllocator> *, TArray<APrimalDinoCharacter *, FDefaultAllocator> *, int>((DWORD64)this, "AShooterGameState", "BaseGetAllDinoCharactersOfTeam", result, Team); }
	//APrimalBuff * BaseSpawnBuffAndAttachToCharacter(UClass * Buff APrimalCharacter * PrimalCharacter, float ExperiencePoints) { return NativeCall<APrimalBuff *, UClass *, APrimalCharacter *, float>((DWORD64)this, "AShooterGameState", "BaseSpawnBuffAndAttachToCharacter", Buff, PrimalCharacter, ExperiencePoints); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "AShooterGameState", "Destroyed"); }
	void OnRep_SupportedSpawnRegions() { NativeCall<void>((DWORD64)this, "AShooterGameState", "OnRep_SupportedSpawnRegions"); }
	void OnRep_ReplicateLocalizedChatRadius() { NativeCall<void>((DWORD64)this, "AShooterGameState", "OnRep_ReplicateLocalizedChatRadius"); }
	void UpdateDynamicMusic(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "AShooterGameState", "UpdateDynamicMusic", DeltaSeconds); }
	void CreateCustomGameUI(AShooterPlayerController* SceneOwner) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "AShooterGameState", "CreateCustomGameUI", SceneOwner); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "AShooterGameState", "BeginPlay"); }
	float GetMatineePlayRate(AActor* forMatineeActor) { return NativeCall<float, AActor *>((DWORD64)this, "AShooterGameState", "GetMatineePlayRate", forMatineeActor); }
	void NotifyPlayerDied(AShooterCharacter* theShooterChar, AShooterPlayerController* prevController, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *, APawn *, AActor *>((DWORD64)this, "AShooterGameState", "NotifyPlayerDied", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	bool AllowDinoTame(APrimalDinoCharacter* DinoChar, AShooterPlayerController* ForPC) { return NativeCall<bool, APrimalDinoCharacter *, AShooterPlayerController *>((DWORD64)this, "AShooterGameState", "AllowDinoTame", DinoChar, ForPC); }
	void InitializedGameState() { NativeCall<void>((DWORD64)this, "AShooterGameState", "InitializedGameState"); }
	bool IsTeamIDInvincible(int TargetingTeamID) { return NativeCall<bool, int>((DWORD64)this, "AShooterGameState", "IsTeamIDInvincible", TargetingTeamID); }
	long double GetOfflineDamagePreventionTime(int TargetingTeamID) { return NativeCall<long double, int>((DWORD64)this, "AShooterGameState", "GetOfflineDamagePreventionTime", TargetingTeamID); }
	void NetUpdateOfflinePvPLiveTeams_Implementation(TArray<int, FDefaultAllocator>* NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int, FDefaultAllocator> *>((DWORD64)this, "AShooterGameState", "NetUpdateOfflinePvPLiveTeams_Implementation", NewPreventOfflinePvPLiveTeams); }
	void NetUpdateOfflinePvPExpiringTeams_Implementation(TArray<int, FDefaultAllocator>* NewPreventOfflinePvPExpiringTeams, TArray<double, FDefaultAllocator>* NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int, FDefaultAllocator> *, TArray<double, FDefaultAllocator> *>((DWORD64)this, "AShooterGameState", "NetUpdateOfflinePvPExpiringTeams_Implementation", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void UpdatePreventOfflinePvPStatus() { NativeCall<void>((DWORD64)this, "AShooterGameState", "UpdatePreventOfflinePvPStatus"); }
	void AddFloatingText() { NativeCall<void>((DWORD64)this, "AShooterGameState", "AddFloatingText"); }
	void AddFloatingDamageText() { NativeCall<void>((DWORD64)this, "AShooterGameState", "AddFloatingDamageText"); }
	void NetAddFloatingDamageText() { NativeCall<void>((DWORD64)this, "AShooterGameState", "NetAddFloatingDamageText"); }
	void NetAddFloatingText() { NativeCall<void>((DWORD64)this, "AShooterGameState", "NetAddFloatingText"); }
	FString* GetCleanServerSessionName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterGameState", "GetCleanServerSessionName", result); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties) { NativeCall<void, bool>((DWORD64)this, "AShooterGameState", "ForceNetUpdate", bDormantDontReplicateProperties); }
	void WorldCompositionRescan() { NativeCall<void>((DWORD64)this, "AShooterGameState", "WorldCompositionRescan"); }
	void HTTPGetRequest() { NativeCall<void>((DWORD64)this, "AShooterGameState", "HTTPGetRequest"); }
	void HTTPGetRequestCompleted() { NativeCall<void>((DWORD64)this, "AShooterGameState", "HTTPGetRequestCompleted"); }
	void HTTPPostRequest() { NativeCall<void>((DWORD64)this, "AShooterGameState", "HTTPPostRequest"); }
	void HTTPPostRequestCompleted() { NativeCall<void>((DWORD64)this, "AShooterGameState", "HTTPPostRequestCompleted"); }
	void StaticRegisterNativesAShooterGameState() { NativeCall<void>((DWORD64)this, "AShooterGameState", "StaticRegisterNativesAShooterGameState"); }
	void NetUpdateOfflinePvPExpiringTeams(TArray<int, FDefaultAllocator>* NewPreventOfflinePvPExpiringTeams, TArray<double, FDefaultAllocator>* NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int, FDefaultAllocator> *, TArray<double, FDefaultAllocator> *>((DWORD64)this, "AShooterGameState", "NetUpdateOfflinePvPExpiringTeams", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void NetUpdateOfflinePvPLiveTeams(TArray<int, FDefaultAllocator>* NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int, FDefaultAllocator> *>((DWORD64)this, "AShooterGameState", "NetUpdateOfflinePvPLiveTeams", NewPreventOfflinePvPLiveTeams); }
};
