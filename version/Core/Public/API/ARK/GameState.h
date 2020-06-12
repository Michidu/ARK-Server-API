#pragma once

#include "API/Base.h"

struct AGameState
{
	TSubclassOf<AGameMode>& GameModeClassField() { return *GetNativePointerField<TSubclassOf<AGameMode>*>(this, "AGameState.GameModeClass"); }
	AGameMode* AuthorityGameModeField() { return *GetNativePointerField<AGameMode**>(this, "AGameState.AuthorityGameMode"); }
	TSubclassOf<ASpectatorPawn>& SpectatorClassField() { return *GetNativePointerField<TSubclassOf<ASpectatorPawn>*>(this, "AGameState.SpectatorClass"); }
	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.MatchState"); }
	FName& PreviousMatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.PreviousMatchState"); }
	int& ElapsedTimeField() { return *GetNativePointerField<int*>(this, "AGameState.ElapsedTime"); }
	TArray<APlayerState*> PlayerArrayField() { return *GetNativePointerField<TArray<APlayerState*>*>(this, "AGameState.PlayerArray"); }
	TArray<APlayerState*> InactivePlayerArrayField() { return *GetNativePointerField<TArray<APlayerState*>*>(this, "AGameState.InactivePlayerArray"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bServerAllowsAnsel() { return { this, "AGameState.bServerAllowsAnsel" }; }

	// Functions

	bool TeleportTo(FVector* DestLocation, FRotator* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, FVector*, FRotator*, bool, bool>(this, "AGameState.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void DefaultTimer() { NativeCall<void>(this, "AGameState.DefaultTimer"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameState.PostInitializeComponents"); }
	void OnRep_GameModeClass() { NativeCall<void>(this, "AGameState.OnRep_GameModeClass"); }
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameState.ReceivedGameModeClass"); }
	void ReceivedSpectatorClass() { NativeCall<void>(this, "AGameState.ReceivedSpectatorClass"); }
	void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) { NativeCall<void, bool>(this, "AGameState.SeamlessTravelTransitionCheckpoint", bToTransitionMap); }
	void AddPlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AGameState.AddPlayerState", PlayerState); }
	void RemovePlayerState(APlayerState* PlayerState) { NativeCall<void, APlayerState*>(this, "AGameState.RemovePlayerState", PlayerState); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameState.HandleMatchIsWaitingToStart"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameState.HandleMatchHasStarted"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameState.HasMatchStarted"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameState.IsMatchInProgress"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameState.HasMatchEnded"); }
	void InitializedGameState() { NativeCall<void>(this, "AGameState.InitializedGameState"); }
	void OnRep_MatchState() { NativeCall<void>(this, "AGameState.OnRep_MatchState"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "AGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void NetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize AtLocation, FRotator_NetQuantize AtRotation, AActor* EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent* attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize, FRotator_NetQuantize, AActor*, float, USceneComponent*, int, FName, bool>(this, "AGameState.NetSpawnActorAtLocation", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner); }
	bool Semaphore_TryGrab(FName SemaphoreName, AActor* InObject, float PriorityWeight, int MaxToAllocate) { return NativeCall<bool, FName, AActor*, float, int>(this, "AGameState.Semaphore_TryGrab", SemaphoreName, InObject, PriorityWeight, MaxToAllocate); }
	bool Semaphore_Release(FName SemaphoreName, AActor* InObject) { return NativeCall<bool, FName, AActor*>(this, "AGameState.Semaphore_Release", SemaphoreName, InObject); }
};

struct AShooterGameState : AGameState
{
	int& NumNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumNPC"); }
	int& NumHibernatedNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumHibernatedNPC"); }
	int& NumActiveNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumActiveNPC"); }
	int& NumDeadNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumDeadNPC"); }
	int& NumPlayerActorsField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerActors"); }
	int& NumPlayerConnectedField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerConnected"); }
	bool& bServerUseLocalizedChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerUseLocalizedChat"); }
	float& LocalizedChatRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadius"); }
	float& VoiceSuperRangeRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VoiceSuperRangeRadius"); }
	float& VoiceWhisperRangeRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VoiceWhisperRangeRadius"); }
	float& LocalizedChatRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadiusUnconsiousScale"); }
	unsigned int& VivoxAttenuationModelField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.VivoxAttenuationModel"); }
	float& VivoxMinDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VivoxMinDistance"); }
	float& VivoxRolloffField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VivoxRolloff"); }
	float& ServerFramerateField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerFramerate"); }
	FString & NewStructureDestructionTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.NewStructureDestructionTag"); }
	int& DayNumberField() { return *GetNativePointerField<int*>(this, "AShooterGameState.DayNumber"); }
	float& DayTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTime"); }
	long double& NetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.NetworkTime"); }
	unsigned int& TimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.TimeUTC"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsOfficialServer"); }
	bool& bIsListenServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsListenServer"); }
	bool& bIsDediServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsDediServer"); }
	bool& bIsArkTributeAvailableField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsArkTributeAvailable"); }
	bool& bIsArkDownloadsAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsArkDownloadsAllowed"); }
	bool& bAllowThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowThirdPersonPlayer"); }
	bool& bServerHardcoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerHardcore"); }
	bool& bServerPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerPVE"); }
	bool& bAutoPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAutoPvE"); }
	bool& bServerCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerCrosshair"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerForceNoHUD"); }
	bool& bFlyerPlatformAllowUnalignedDinoBasingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFlyerPlatformAllowUnalignedDinoBasing"); }
	bool& bMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bMapPlayerLocation"); }
	bool& bPvEDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEDisableFriendlyFire"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowTribeWar"); }
	bool& bPvEAllowTribeWarCancelField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowTribeWarCancel"); }
	bool& bEnablePvPGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnablePvPGamma"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisablePvEGamma"); }
	int& NumTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumTamedDinos"); }
	int& MaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInRange"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayCycleSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTimeSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.NightTimeSpeedScale"); }
	float& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEStructureDecayPeriodMultiplier"); }
	float& PvEDinoDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEDinoDecayPeriodMultiplier"); }
	float& PerPlatformMaxStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PerPlatformMaxStructuresMultiplier"); }
	bool& bDisableStructureDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableStructureDecayPvE"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayPvE"); }
	bool& bAllowCaveBuildingPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCaveBuildingPvE"); }
	bool& bAllowCaveBuildingPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCaveBuildingPvP"); }
	bool& bPreventDownloadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadSurvivors"); }
	bool& bReachedPlatformStructureLimitField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bReachedPlatformStructureLimit"); }
	bool& bAdminLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAdminLogging"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPStructureDecay"); }
	bool& bPreventDownloadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadDinos"); }
	bool& bPreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadItems"); }
	bool& bPreventUploadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadDinos"); }
	bool& bPreventUploadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadItems"); }
	bool& bPreventUploadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadSurvivors"); }
	bool& bPreventMateBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventMateBoost"); }
	bool& bPreventStructurePaintingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventStructurePainting"); }
	bool& bAllowCharacterCreationField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCharacterCreation"); }
	bool& bAllowSpawnPointSelectionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowSpawnPointSelection"); }
	int& MaxTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos"); }
	bool& bDisableSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableSpawnAnimations"); }
	FString & PlayerListStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PlayerListString"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalItemDecompositionTimeMultiplier"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxNumberOfPlayersInTribe"); }
	float& TribeSlotReuseCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeSlotReuseCooldown"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalCorpseDecompositionTimeMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.EggHatchSpeedMultiplier"); }
	FName & ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.ActiveEvent"); }
	bool& bAllowPaintingWithoutResourcesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowPaintingWithoutResources"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableExtraStructurePreventionVolumes"); }
	TArray<FItemCraftingCostOverride> & OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride>*>(this, "AShooterGameState.OverrideItemCraftingCosts"); }
	TArray<FItemMaxItemQuantityOverride> & OverrideItemMaxQuantityField() { return *GetNativePointerField<TArray<FItemMaxItemQuantityOverride>*>(this, "AShooterGameState.OverrideItemMaxQuantity"); }
	long double& LastServerSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastServerSaveTime"); }
	float& ServerSaveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerSaveInterval"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeNameChangeCooldown"); }
	float& PlatformSaddleBuildAreaBoundsMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PlatformSaddleBuildAreaBoundsMultiplier"); }
	bool& bAlwaysAllowStructurePickupField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAlwaysAllowStructurePickup"); }
	float& StructurePickupTimeAfterPlacementField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupTimeAfterPlacement"); }
	float& StructurePickupHoldDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupHoldDuration"); }
	bool& bAllowIntegratedSPlusStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowIntegratedSPlusStructures"); }
	bool& bAllowHideDamageSourceFromLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowHideDamageSourceFromLogs"); }
	UAudioComponent * DynamicMusicAudioComponentField() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterGameState.DynamicMusicAudioComponent"); }
	UAudioComponent * DynamicMusicAudioComponent2Field() { return *GetNativePointerField<UAudioComponent**>(this, "AShooterGameState.DynamicMusicAudioComponent2"); }
	bool& bPlayingDynamicMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic"); }
	bool& bPlayingDynamicMusic1Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic1"); }
	bool& bPlayingDynamicMusic2Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic2"); }
	float& LastHadMusicTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LastHadMusicTime"); }
	TArray<FLevelExperienceRamp> & LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp>*>(this, "AShooterGameState.LevelExperienceRampOverrides"); }
	TArray<FEngramEntryOverride> & OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameState.OverrideEngramEntries"); }
	TArray<FString> & PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameState.PreventDinoTameClassNames"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ListenServerTetherDistanceMultiplier"); }
	FString & PGMapNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PGMapName"); }
	TArray<int> & SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.SupportedSpawnRegions"); }
	UPaintingCache * PaintingCacheField() { return *GetNativePointerField<UPaintingCache**>(this, "AShooterGameState.PaintingCache"); }
	USoundBase * StaticOverrideMusicField() { return *GetNativePointerField<USoundBase**>(this, "AShooterGameState.StaticOverrideMusic"); }
	bool& bEnableDeathTeamSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableDeathTeamSpectator"); }
	FVector & PlayerFloatingHUDOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterGameState.PlayerFloatingHUDOffset"); }
	float& PlayerFloatingHUDOffsetScreenYField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PlayerFloatingHUDOffsetScreenY"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructureDamageRepairCooldown"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllStructureLocking"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCustomRecipes"); }
	bool& bAllowRaidDinoFeedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowRaidDinoFeeding"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeSkillMultiplier"); }
	USoundBase * OverrideAreaMusicField() { return *GetNativePointerField<USoundBase**>(this, "AShooterGameState.OverrideAreaMusic"); }
	FVector & OverrideAreaMusicPositionField() { return *GetNativePointerField<FVector*>(this, "AShooterGameState.OverrideAreaMusicPosition"); }
	float& OverrideAreaMusicRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OverrideAreaMusicRange"); }
	bool& bAllowUnclaimDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowUnclaimDinos"); }
	float& FloatingHUDRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingHUDRange"); }
	float& FloatingChatRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingChatRange"); }
	int& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventTimeInterval"); }
	float& ExtinctionEventPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ExtinctionEventPercent"); }
	int& ExtinctionEventSecondsRemainingField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventSecondsRemaining"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDoExtinctionEvent"); }
	TArray<FInventoryComponentDefaultItemsAppend> & InventoryComponentAppendsField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend>*>(this, "AShooterGameState.InventoryComponentAppends"); }
	bool& bPreventOfflinePvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventOfflinePvP"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPDinoDecay"); }
	bool& bAllowUnclaimDinosConfigField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowUnclaimDinosConfig"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceUseInventoryAppends"); }
	bool& bOverideStructurePlatformPreventionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOverideStructurePlatformPrevention"); }
	float& ItemStackSizeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ItemStackSizeMultiplier"); }
	TArray<int> & PreventOfflinePvPLiveTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.PreventOfflinePvPLiveTeams"); }
	TArray<int> & PreventOfflinePvPExpiringTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTeams"); }
	TArray<double> & PreventOfflinePvPExpiringTimesField() { return *GetNativePointerField<TArray<double>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTimes"); }
	TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> > & PreventOfflinePvPLiveTimesField() { return *GetNativePointerField<TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> >*>(this, "AShooterGameState.PreventOfflinePvPLiveTimes"); }
	TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> > & PreventOfflinePvPFirstLiveTimeField() { return *GetNativePointerField<TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> >*>(this, "AShooterGameState.PreventOfflinePvPFirstLiveTime"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowAnyoneBabyImprintCuddle"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableImprintDinoBuff"); }
	int& MaxPersonalTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxPersonalTamedDinos"); }
	TArray<FFloatingTextEntry> & FloatingTextEntriesField() { return *GetNativePointerField<TArray<FFloatingTextEntry>*>(this, "AShooterGameState.FloatingTextEntries"); }
	bool& bIsCustomMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsCustomMap"); }
	bool& bIsClientField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsClient"); }
	bool& bIsDedicatedServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsDedicatedServer"); }
	FString & ClusterIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ClusterId"); }
	FString & AmazonS3AccessKeyIDField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3AccessKeyID"); }
	FString & AmazonS3SecretAccessKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3SecretAccessKey"); }
	FString & AmazonS3BucketNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3BucketName"); }
	FString & ServerSessionNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ServerSessionName"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventTribeAlliances"); }
	FString & LoadForceRespawnDinosTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.LoadForceRespawnDinosTag"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFastDecayUnsnappedCoreStructures"); }
	bool& bServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerUseDinoList"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowStructuresAtSupplyDrops"); }
	bool& bAllowForceNetUpdateField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowForceNetUpdate"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.MinimumDinoReuploadInterval"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HairGrowthSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FastDecayInterval"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OxygenSwimSpeedStatMultiplier"); }
	FOnHTTPGetProcessed & OnHTTPGetResponseField() { return *GetNativePointerField<FOnHTTPGetProcessed*>(this, "AShooterGameState.OnHTTPGetResponse"); }
	FOnHTTPPostResponse & OnHTTPPostResponseField() { return *GetNativePointerField<FOnHTTPPostResponse*>(this, "AShooterGameState.OnHTTPPostResponse"); }
	bool& bAllowMultipleAttachedC4Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowMultipleAttachedC4"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bCrossARKAllowForeignDinoDownloads"); }
	long double& LastPlayedDynamicMusic1Field() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastPlayedDynamicMusic1"); }
	long double& LastPlayedDynamicMusic2Field() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastPlayedDynamicMusic2"); }
	bool& bUseCorpseLocatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseCorpseLocator"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableStructurePlacementCollision"); }
	bool& bUseSingleplayerSettingsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseSingleplayerSettings"); }
	bool& bAllowPlatformSaddleMultiFloorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowPlatformSaddleMultiFloors"); }
	bool& bPreventSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventSpawnAnimations"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTribesPerAlliance"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsLegacyServer"); }
	bool& bDisableDinoDecayClaimingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayClaiming"); }
	FName & UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.UseStructurePreventionVolumeTag"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInSmallRadius"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RadiusStructuresInSmallRadius"); }
	bool& bUseTameLimitForStructuresOnlyField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseTameLimitForStructuresOnly"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitTurretsNum"); }
	bool& bForceAllowAllStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllowAllStructures"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bShowCreativeMode"); }
	TArray<FPlayerLocatorEffectMap> & PlayerLocatorEffectMapsField() { return *GetNativePointerField<TArray<FPlayerLocatorEffectMap>*>(this, "AShooterGameState.PlayerLocatorEffectMaps"); }
	int& AmbientSoundCheckIncrementField() { return *GetNativePointerField<int*>(this, "AShooterGameState.AmbientSoundCheckIncrement"); }
	int& ThrottledTicksModField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ThrottledTicksMod"); }
	int& PerformanceThrottledTicksModField() { return *GetNativePointerField<int*>(this, "AShooterGameState.PerformanceThrottledTicksMod"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PassiveTameIntervalMultiplier"); }
	TArray<TSubclassOf<APrimalDinoCharacter>> & UniqueDinosField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "AShooterGameState.UniqueDinos"); }
	unsigned int& MinimumUniqueDownloadIntervalField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MinimumUniqueDownloadInterval"); }
	unsigned int& MaximumUniqueDownloadIntervalField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MaximumUniqueDownloadInterval"); }
	bool& bIgnoreStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIgnoreStructuresPreventionVolumes"); }
	UPrimalWorldSettingsEventOverrides * ActiveEventOverridesField() { return *GetNativePointerField<UPrimalWorldSettingsEventOverrides**>(this, "AShooterGameState.ActiveEventOverrides"); }
	bool& bIgnoreLimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIgnoreLimitMaxStructuresInRangeTypeFlag"); }
	TArray<FMassTeleportData> & MassTeleportQueueField() { return *GetNativePointerField<TArray<FMassTeleportData>*>(this, "AShooterGameState.MassTeleportQueue"); }
	TArray<AActor*> MassTeleportQueueToRemoveField() { return *GetNativePointerField<TArray<AActor*>*>(this, "AShooterGameState.MassTeleportQueueToRemove"); }
	TArray<FMassTeleportData> & MassTeleportQueueToAddField() { return *GetNativePointerField<TArray<FMassTeleportData>*>(this, "AShooterGameState.MassTeleportQueueToAdd"); }
	bool& bAllowLowGravitySpinField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowLowGravitySpin"); }
	TArray<FName> & BiomeBuffTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "AShooterGameState.BiomeBuffTags"); }

	// Functions

	static UClass * StaticClass() { return NativeCall<UClass*>(nullptr, "AShooterGameState.StaticClass"); }
	UObject * GetUObjectInterfaceHUDInterface() { return NativeCall<UObject*>(this, "AShooterGameState.GetUObjectInterfaceHUDInterface"); }
	static void BaseDrawTileOnCanvas(AShooterHUD * HUD, UTexture * Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, FColor DrawColor) { NativeCall<void, AShooterHUD*, UTexture*, float, float, float, float, float, float, float, float, FColor>(nullptr, "AShooterGameState.BaseDrawTileOnCanvas", HUD, Tex, X, Y, XL, YL, U, V, UL, VL, DrawColor); }
	static APrimalBuff * BaseSpawnBuffAndAttachToCharacter(UClass * Buff, APrimalCharacter * PrimalCharacter, float ExperiencePoints) { return NativeCall<APrimalBuff*, UClass*, APrimalCharacter*, float>(nullptr, "AShooterGameState.BaseSpawnBuffAndAttachToCharacter", Buff, PrimalCharacter, ExperiencePoints); }
	void Destroyed() { NativeCall<void>(this, "AShooterGameState.Destroyed"); }
	bool IsClusterServer() { return NativeCall<bool>(this, "AShooterGameState.IsClusterServer"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "AShooterGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool GetItemMaxQuantityOverride(TSubclassOf<UPrimalItem> ForClass, FMaxItemQuantityOverride * OutMaxQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, FMaxItemQuantityOverride*>(this, "AShooterGameState.GetItemMaxQuantityOverride", ForClass, OutMaxQuantity); }
	void OnRep_SupportedSpawnRegions() { NativeCall<void>(this, "AShooterGameState.OnRep_SupportedSpawnRegions"); }
	void OnRep_ReplicateLocalizedChatRadius() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateLocalizedChatRadius"); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameState.RequestFinishAndExitToMainMenu"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.Tick", DeltaSeconds); }
	FVector * GetLocalPlayerLocation(FVector * result) { return NativeCall<FVector*, FVector*>(this, "AShooterGameState.GetLocalPlayerLocation", result); }
	float GetServerFramerate() { return NativeCall<float>(this, "AShooterGameState.GetServerFramerate"); }
	void UpdateDynamicMusic(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.UpdateDynamicMusic", DeltaSeconds); }
	void CreateCustomGameUI(AShooterPlayerController * SceneOwner) { NativeCall<void, AShooterPlayerController*>(this, "AShooterGameState.CreateCustomGameUI", SceneOwner); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD*>(this, "AShooterGameState.DrawHUD", HUD); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterGameState.PostInitializeComponents"); }
	void UpdateFunctionExpense(int FunctionType) { NativeCall<void, int>(this, "AShooterGameState.UpdateFunctionExpense", FunctionType); }
	float GetClientReplicationRateFor(UNetConnection * InConnection, AActor * InActor) { return NativeCall<float, UNetConnection*, AActor*>(this, "AShooterGameState.GetClientReplicationRateFor", InConnection, InActor); }
	static long double GetNetworkTimeDelta(AShooterGameState * gameState, long double netTime, bool bTimeUntil) { return NativeCall<long double, AShooterGameState*, long double, bool>(nullptr, "AShooterGameState.GetNetworkTimeDelta", gameState, netTime, bTimeUntil); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterGameState.LoadedFromSaveGame"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive*>(this, "AShooterGameState.Serialize", Ar); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameState.BeginPlay"); }
	float GetMatineePlayRate(AActor * forMatineeActor) { return NativeCall<float, AActor*>(this, "AShooterGameState.GetMatineePlayRate", forMatineeActor); }
	void NotifyPlayerDied(AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, AShooterCharacter*, AShooterPlayerController*, APawn*, AActor*>(this, "AShooterGameState.NotifyPlayerDied", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	bool AllowDinoTame(APrimalDinoCharacter * DinoChar, AShooterPlayerController * ForPC) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*>(this, "AShooterGameState.AllowDinoTame", DinoChar, ForPC); }
	bool AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter> DinoCharClass, AShooterPlayerController * ForPC) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>, AShooterPlayerController*>(this, "AShooterGameState.AllowDinoClassTame", DinoCharClass, ForPC); }
	FString * GetDayTimeString(FString * result) { return NativeCall<FString*, FString*>(this, "AShooterGameState.GetDayTimeString", result); }
	TArray<AShooterPlayerController*> * BaseGetAllShooterControllers(TArray<AShooterPlayerController*> * result) { return NativeCall<TArray<AShooterPlayerController*>*, TArray<AShooterPlayerController*>*>(this, "AShooterGameState.BaseGetAllShooterControllers", result); }
	TArray<AShooterCharacter*> * BaseGetAllShooterCharactersOfTeam(TArray<AShooterCharacter*> * result, int Team) { return NativeCall<TArray<AShooterCharacter*>*, TArray<AShooterCharacter*>*, int>(this, "AShooterGameState.BaseGetAllShooterCharactersOfTeam", result, Team); }
	TArray<AShooterCharacter*> * BaseGetAllShooterCharacters(TArray<AShooterCharacter*> * result) { return NativeCall<TArray<AShooterCharacter*>*, TArray<AShooterCharacter*>*>(this, "AShooterGameState.BaseGetAllShooterCharacters", result); }
	TArray<APrimalDinoCharacter*> * BaseGetAllDinoCharactersOfTeam(TArray<APrimalDinoCharacter*> * result, int Team) { return NativeCall<TArray<APrimalDinoCharacter*>*, TArray<APrimalDinoCharacter*>*, int>(this, "AShooterGameState.BaseGetAllDinoCharactersOfTeam", result, Team); }
	void InitializedGameState() { NativeCall<void>(this, "AShooterGameState.InitializedGameState"); }
	bool IsTeamIDInvincible(int TargetingTeamID, bool bInvincibleOnlyWhenOffline) { return NativeCall<bool, int, bool>(this, "AShooterGameState.IsTeamIDInvincible", TargetingTeamID, bInvincibleOnlyWhenOffline); }
	long double GetOfflineDamagePreventionTime(int TargetingTeamID) { return NativeCall<long double, int>(this, "AShooterGameState.GetOfflineDamagePreventionTime", TargetingTeamID); }
	void NetUpdateOfflinePvPLiveTeams_Implementation(TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int>*>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams_Implementation", NewPreventOfflinePvPLiveTeams); }
	void NetUpdateOfflinePvPExpiringTeams_Implementation(TArray<int> * NewPreventOfflinePvPExpiringTeams, TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int>*, TArray<double>*>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams_Implementation", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void UpdatePreventOfflinePvPStatus() { NativeCall<void>(this, "AShooterGameState.UpdatePreventOfflinePvPStatus"); }
	void AddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float>(this, "AShooterGameState.AddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime); }
	void AddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID) { NativeCall<void, FVector, int, int>(this, "AShooterGameState.AddFloatingDamageText", AtLocation, DamageAmount, FromTeamID); }
	void NetAddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID, int OnlySendToTeamID) { NativeCall<void, FVector, int, int, int>(this, "AShooterGameState.NetAddFloatingDamageText", AtLocation, DamageAmount, FromTeamID, OnlySendToTeamID); }
	void NetAddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime, int OnlySendToTeamID) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float, int>(this, "AShooterGameState.NetAddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime, OnlySendToTeamID); }
	FString * GetCleanServerSessionName(FString * result) { return NativeCall<FString*, FString*>(this, "AShooterGameState.GetCleanServerSessionName", result); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties, bool bAbsoluteForceNetUpdate, bool bDontUpdateChannel) { NativeCall<void, bool, bool, bool>(this, "AShooterGameState.ForceNetUpdate", bDormantDontReplicateProperties, bAbsoluteForceNetUpdate, bDontUpdateChannel); }
	void WorldCompositionRescan() { NativeCall<void>(this, "AShooterGameState.WorldCompositionRescan"); }
	void HTTPGetRequest(FString InURL) { NativeCall<void, FString>(this, "AShooterGameState.HTTPGetRequest", InURL); }
	void HTTPGetRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.HTTPGetRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	void HTTPPostRequest(FString InURL, FString Content) { NativeCall<void, FString, FString>(this, "AShooterGameState.HTTPPostRequest", InURL, Content); }
	void HTTPPostRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.HTTPPostRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	void LevelAddedToWorld(ULevel * addedLevel) { NativeCall<void, ULevel*>(this, "AShooterGameState.LevelAddedToWorld", addedLevel); }
	TArray<FGameIniData> * GetIniArray(TArray<FGameIniData> * result, FString SectionName) { return NativeCall<TArray<FGameIniData>*, TArray<FGameIniData>*, FString>(this, "AShooterGameState.GetIniArray", result, SectionName); }
	bool AllowDownloadDino_Implementation(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.AllowDownloadDino_Implementation", TheDinoClass); }
	void DinoDownloaded(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.DinoDownloaded", TheDinoClass); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameState.IsEngramClassHidden", ForItemClass); }
	void Multi_SpawnCosmeticActor_Implementation(TSubclassOf<AActor> SpawnActorOfClass, FVector SpawnAtLocation, FRotator SpawnWithRotation) { NativeCall<void, TSubclassOf<AActor>, FVector, FRotator>(this, "AShooterGameState.Multi_SpawnCosmeticActor_Implementation", SpawnActorOfClass, SpawnAtLocation, SpawnWithRotation); }
	bool StartMassTeleport(FMassTeleportData * NewMassTeleportData, FTeleportDestination * TeleportDestination, AActor * InitiatingActor, TArray<AActor*> TeleportActors, TSubclassOf<APrimalBuff> BuffToApply, const float TeleportDuration, const float TeleportRadius, const bool bTeleportingSnapsToGround, const bool bMaintainRotation) { return NativeCall<bool, FMassTeleportData*, FTeleportDestination*, AActor*, TArray<AActor*>, TSubclassOf<APrimalBuff>, const float, const float, const bool, const bool>(this, "AShooterGameState.StartMassTeleport", NewMassTeleportData, TeleportDestination, InitiatingActor, TeleportActors, BuffToApply, TeleportDuration, TeleportRadius, bTeleportingSnapsToGround, bMaintainRotation); }
	bool CancelMassTeleport(AActor * WithInitiatingActor) { return NativeCall<bool, AActor*>(this, "AShooterGameState.CancelMassTeleport", WithInitiatingActor); }
	bool ShouldMassTeleportMoveActor(AActor * ForActor, FMassTeleportData * WithMassTeleportData) { return NativeCall<bool, AActor*, FMassTeleportData*>(this, "AShooterGameState.ShouldMassTeleportMoveActor", ForActor, WithMassTeleportData); }
	void Tick_MassTeleport(float DeltaTime) { NativeCall<void, float>(this, "AShooterGameState.Tick_MassTeleport", DeltaTime); }
	void RemoveIrrelevantBiomeBuffs(APrimalCharacter * PrimalChar) { NativeCall<void, APrimalCharacter*>(this, "AShooterGameState.RemoveIrrelevantBiomeBuffs", PrimalChar); }
	static bool IsValidMassTeleportData(FMassTeleportData * CheckData) { return NativeCall<bool, FMassTeleportData*>(nullptr, "AShooterGameState.IsValidMassTeleportData", CheckData); }
	void PrepareActorForMassTeleport(AActor * PrepareActor, FMassTeleportData * WithMassTeleportData) { NativeCall<void, AActor*, FMassTeleportData*>(this, "AShooterGameState.PrepareActorForMassTeleport", PrepareActor, WithMassTeleportData); }
	static void StaticRegisterNativesAShooterGameState() { NativeCall<void>(nullptr, "AShooterGameState.StaticRegisterNativesAShooterGameState"); }
	static UClass * GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "AShooterGameState.GetPrivateStaticClass", Package); }
	bool AllowDownloadDino(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.AllowDownloadDino", TheDinoClass); }
	void NetUpdateOfflinePvPExpiringTeams(TArray<int> * NewPreventOfflinePvPExpiringTeams, TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int>*, TArray<double>*>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void NetUpdateOfflinePvPLiveTeams(TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int>*>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams", NewPreventOfflinePvPLiveTeams); }
};

struct AGameSession 
{
	int& MaxSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxSpectators"); }
	int& MaxPlayersField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxPlayers"); }
	char& MaxSplitscreensPerConnectionField() { return *GetNativePointerField<char*>(this, "AGameSession.MaxSplitscreensPerConnection"); }
	bool& bRequiresPushToTalkField() { return *GetNativePointerField<bool*>(this, "AGameSession.bRequiresPushToTalk"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "AGameSession.SessionName"); }

	// Functions

	bool RequiresPushToTalk() { return NativeCall<bool>(this, "AGameSession.RequiresPushToTalk"); }
	void InitOptions(FString* Options) { NativeCall<void, FString*>(this, "AGameSession.InitOptions", Options); }
	bool ProcessAutoLogin() { return NativeCall<bool>(this, "AGameSession.ProcessAutoLogin"); }
	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, FUniqueNetId* UserId, FString* Error) { NativeCall<void, int, bool, FUniqueNetId*, FString*>(this, "AGameSession.OnLoginComplete", LocalUserNum, bWasSuccessful, UserId, Error); }
	FString* ApproveLogin(FString* result, FString* Options, FString* authToken) { return NativeCall<FString*, FString*, FString*, FString*>(this, "AGameSession.ApproveLogin", result, Options, authToken); }
	void RegisterPlayer(APlayerController* NewPlayer, TSharedPtr<FUniqueNetId, 0>* UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController*, TSharedPtr<FUniqueNetId, 0>*, bool>(this, "AGameSession.RegisterPlayer", NewPlayer, UniqueId, bWasFromInvite); }
	void UnregisterPlayer(APlayerController* ExitingPlayer) { NativeCall<void, APlayerController*>(this, "AGameSession.UnregisterPlayer", ExitingPlayer); }
	bool AtCapacity(bool bSpectator, FString* AuthToken) { return NativeCall<bool, bool, FString*>(this, "AGameSession.AtCapacity", bSpectator, AuthToken); }
	void NotifyLogout(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AGameSession.NotifyLogout", PC); }
	bool KickPlayer(APlayerController* KickedPlayer, FText* KickReason) { return NativeCall<bool, APlayerController*, FText*>(this, "AGameSession.KickPlayer", KickedPlayer, KickReason); }
	void BanPlayer() { NativeCall<void>(this, "AGameSession.BanPlayer"); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameSession.ReturnToMainMenuHost"); }
	bool TravelToSession(int ControllerId, FName InSessionName) { return NativeCall<bool, int, FName>(this, "AGameSession.TravelToSession", ControllerId, InSessionName); }
	void UpdateSessionJoinability(FName InSessionName, bool bPublicSearchable, bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly) { NativeCall<void, FName, bool, bool, bool, bool>(this, "AGameSession.UpdateSessionJoinability", InSessionName, bPublicSearchable, bAllowInvites, bJoinViaPresence, bJoinViaPresenceFriendsOnly); }
};

struct AShooterGameSession : AGameSession
{
	TArray<FInstalledItemInfo>& CachedModsField() { return *GetNativePointerField<TArray<FInstalledItemInfo>*>(this, "AShooterGameSession.CachedMods"); }
	TArray<FShooterSessionData>& ThreadSafeSearchResultsField() { return *GetNativePointerField<TArray<FShooterSessionData>*>(this, "AShooterGameSession.ThreadSafeSearchResults"); }
	TArray<UNetConnection*> FailedAuthTokenClientConnectionsField() { return *GetNativePointerField<TArray<UNetConnection*>*>(this, "AShooterGameSession.FailedAuthTokenClientConnections"); }
	TArray<FUniqueNetIdUInt64>& FailedAuthTokenClientUniqueIDsField() { return *GetNativePointerField<TArray<FUniqueNetIdUInt64>*>(this, "AShooterGameSession.FailedAuthTokenClientUniqueIDs"); }
	FShooterGameSessionParams& CurrentSessionParamsField() { return *GetNativePointerField<FShooterGameSessionParams*>(this, "AShooterGameSession.CurrentSessionParams"); }
	TSharedPtr<FShooterOnlineSessionSettings, 0>& HostSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSessionSettings, 0>*>(this, "AShooterGameSession.HostSettings"); }
	TSharedPtr<FShooterOnlineSearchSettings, 0>& SearchSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSearchSettings, 0>*>(this, "AShooterGameSession.SearchSettings"); }
	bool& bFoundSessionField() { return *GetNativePointerField<bool*>(this, "AShooterGameSession.bFoundSession"); }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AShooterGameSession.StaticClass"); }
	void OnStartOnlineGameComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnStartOnlineGameComplete", SessionName, bWasSuccessful); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasStarted"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasEnded"); }
	TArray<FOnlineSessionSearchResult>* GetSearchResults() { return NativeCall<TArray<FOnlineSessionSearchResult>*>(this, "AShooterGameSession.GetSearchResults"); }
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnCreateSessionComplete", SessionName, bWasSuccessful); }
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnDestroySessionComplete", SessionName, bWasSuccessful); }
	void DelayedSessionDelete() { NativeCall<void>(this, "AShooterGameSession.DelayedSessionDelete"); }
	void InitOptions(FString* Options) { NativeCall<void, FString*>(this, "AShooterGameSession.InitOptions", Options); }
	void RegisterServer() { NativeCall<void>(this, "AShooterGameSession.RegisterServer"); }
	void UpdatePublishedSession() { NativeCall<void>(this, "AShooterGameSession.UpdatePublishedSession"); }
	FString* ApproveLogin(FString* result, FString* Options, FString* authToken) { return NativeCall<FString*, FString*, FString*, FString*>(this, "AShooterGameSession.ApproveLogin", result, Options, authToken); }
	void OnCheckAuthTokenComplete(bool bWasSuccessful, FUniqueNetId* UserId) { NativeCall<void, bool, FUniqueNetId*>(this, "AShooterGameSession.OnCheckAuthTokenComplete", bWasSuccessful, UserId); }
	void OnNumConnectedPlayersChanged(int NewPlayersCount) { NativeCall<void, int>(this, "AShooterGameSession.OnNumConnectedPlayersChanged", NewPlayersCount); }
	void Tick(float __formal) { NativeCall<void, float>(this, "AShooterGameSession.Tick", __formal); }
	void OnFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "AShooterGameSession.OnFindSessionsComplete", bWasSuccessful); }
	void OnFoundSession() { NativeCall<void>(this, "AShooterGameSession.OnFoundSession"); }
	void BroadcastFoundSessionEvent() { NativeCall<void>(this, "AShooterGameSession.BroadcastFoundSessionEvent"); }
	void CancelFindSessions() { NativeCall<void>(this, "AShooterGameSession.CancelFindSessions"); }
	bool JoinSession(TSharedPtr<FUniqueNetId, 0> UserId, FName SessionName, int SessionIndexInSearchResults) { return NativeCall<bool, TSharedPtr<FUniqueNetId, 0>, FName, int>(this, "AShooterGameSession.JoinSession", UserId, SessionName, SessionIndexInSearchResults); }
	bool JoinSession(TSharedPtr<FUniqueNetId, 0> UserId, FName SessionName, FOnlineSessionSearchResult* SearchResult) { return NativeCall<bool, TSharedPtr<FUniqueNetId, 0>, FName, FOnlineSessionSearchResult*>(this, "AShooterGameSession.JoinSession", UserId, SessionName, SearchResult); }
	bool TravelToSession(int ControllerId, FName SessionName) { return NativeCall<bool, int, FName>(this, "AShooterGameSession.TravelToSession", ControllerId, SessionName); }
	void Restart() { NativeCall<void>(this, "AShooterGameSession.Restart"); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "AShooterGameSession.GetPrivateStaticClass", Package); }
};
