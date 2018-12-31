#pragma once

struct AGameState
{
	TSubclassOf<AGameMode>& GameModeClassField() { return *GetNativePointerField<TSubclassOf<AGameMode>*>(this, "AGameState.GameModeClass"); }
	AGameMode * AuthorityGameModeField() { return *GetNativePointerField<AGameMode **>(this, "AGameState.AuthorityGameMode"); }
	bool& bUnloadingLastLoadedSubLevelsField() { return *GetNativePointerField<bool*>(this, "AGameState.bUnloadingLastLoadedSubLevels"); }
	FName& MatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.MatchState"); }
	FName& PreviousMatchStateField() { return *GetNativePointerField<FName*>(this, "AGameState.PreviousMatchState"); }
	int& ElapsedTimeField() { return *GetNativePointerField<int*>(this, "AGameState.ElapsedTime"); }
	TArray<APlayerState *> PlayerArrayField() { return *GetNativePointerField<TArray<APlayerState *>*>(this, "AGameState.PlayerArray"); }
	TArray<APlayerState *> InactivePlayerArrayField() { return *GetNativePointerField<TArray<APlayerState *>*>(this, "AGameState.InactivePlayerArray"); }
	TArray<FReplicatedFoliageOverride>& ReplicatedFoliageOverridesField() { return *GetNativePointerField<TArray<FReplicatedFoliageOverride>*>(this, "AGameState.ReplicatedFoliageOverrides"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bServerAllowsAnsel() { return { this, "AGameState.bServerAllowsAnsel" }; }

	// Functions

	bool TeleportTo(FVector * DestLocation, FRotator * DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, FVector *, FRotator *, bool, bool>(this, "AGameState.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	//void `vcall'{2848,{flat}}(FHitResult * , FVector *) { NativeCall<void, FHitResult *, FVector *>(this, "AGameState.`vcall'{2848,{flat}}", ,); }
	void AddPlayerState(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "AGameState.AddPlayerState", PlayerState); }
	void BPNetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector AtLocation, FRotator AtRotation, AActor * EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent * attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner) { NativeCall<void, TSubclassOf<AActor>, FVector, FRotator, AActor *, float, USceneComponent *, int, FName, bool>(this, "AGameState.BPNetSpawnActorAtLocation", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner); }
	void BeginPlay() { NativeCall<void>(this, "AGameState.BeginPlay"); }
	void DefaultTimer() { NativeCall<void>(this, "AGameState.DefaultTimer"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameState.HandleMatchHasStarted"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameState.HandleMatchIsWaitingToStart"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameState.HasMatchEnded"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameState.HasMatchStarted"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameState.IsMatchInProgress"); }
	void NetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize AtLocation, FRotator_NetQuantize AtRotation, AActor * EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent * attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize, FRotator_NetQuantize, AActor *, float, USceneComponent *, int, FName, bool>(this, "AGameState.NetSpawnActorAtLocation", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner); }
	void OnRep_GameModeClass() { NativeCall<void>(this, "AGameState.OnRep_GameModeClass"); }
	void OnRep_MatchState() { NativeCall<void>(this, "AGameState.OnRep_MatchState"); }
	void OnRep_SpectatorClass() { NativeCall<void>(this, "AGameState.OnRep_SpectatorClass"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameState.PostInitializeComponents"); }
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameState.ReceivedGameModeClass"); }
	void ReceivedSpectatorClass() { NativeCall<void>(this, "AGameState.ReceivedSpectatorClass"); }
	void RemovePlayerState(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "AGameState.RemovePlayerState", PlayerState); }
	void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) { NativeCall<void, bool>(this, "AGameState.SeamlessTravelTransitionCheckpoint", bToTransitionMap); }
	bool Semaphore_Release(FName SemaphoreName, AActor * InObject) { return NativeCall<bool, FName, AActor *>(this, "AGameState.Semaphore_Release", SemaphoreName, InObject); }
	bool Semaphore_TryGrab(FName SemaphoreName, AActor * InObject, float PriorityWeight, int MaxToAllocate) { return NativeCall<bool, FName, AActor *, float, int>(this, "AGameState.Semaphore_TryGrab", SemaphoreName, InObject, PriorityWeight, MaxToAllocate); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "AGameState.GetPrivateStaticClass", Package); }
};

struct AShooterGameState : AGameState
{
	enum EMapImagesSource;
	int& NumNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumNPC"); }
	int& NumHibernatedNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumHibernatedNPC"); }
	int& NumActiveNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumActiveNPC"); }
	int& NumDeadNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumDeadNPC"); }
	int& NumPlayerActorsField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerActors"); }
	int& NumPlayerConnectedField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerConnected"); }
	bool& bServerUseLocalizedChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerUseLocalizedChat"); }
	float& LocalizedChatRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadius"); }
	float& VoiceSuperRangeRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VoiceSuperRangeRadius"); }
	float& LocalizedChatRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadiusUnconsiousScale"); }
	FieldArray<float, 16> PerLevelStatsMultiplier_PlayerField() { return {this, "AShooterGameState.PerLevelStatsMultiplier_Player"}; }
	FieldArray<float, 16> PerLevelStatsMultiplier_DinoTamedField() { return {this, "AShooterGameState.PerLevelStatsMultiplier_DinoTamed"}; }
	float& ServerFramerateField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerFramerate"); }
	bool& bAllowStructureDecayInLandClaimField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowStructureDecayInLandClaim"); }
	FString& NewStructureDestructionTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.NewStructureDestructionTag"); }
	int& DayNumberField() { return *GetNativePointerField<int*>(this, "AShooterGameState.DayNumber"); }
	float& DayTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTime"); }
	long double& NetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.NetworkTime"); }
	int& NetUTCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NetUTC"); }
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
	bool& bEnableHealthbarsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableHealthbars"); }
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
	float& OverridenOceanWindSpeedField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OverridenOceanWindSpeed"); }
	float& OceanWindSpeedField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OceanWindSpeed"); }
	bool& bAllowCharacterCreationField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCharacterCreation"); }
	bool& bAllowSpawnPointSelectionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowSpawnPointSelection"); }
	int& MaxTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos"); }
	bool& bDisableSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableSpawnAnimations"); }
	FString& PlayerListStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PlayerListString"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalItemDecompositionTimeMultiplier"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxNumberOfPlayersInTribe"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalCorpseDecompositionTimeMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.EggHatchSpeedMultiplier"); }
	bool& bAllowPaintingWithoutResourcesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowPaintingWithoutResources"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableExtraStructurePreventionVolumes"); }
	TArray<FItemCraftingCostOverride>& OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride>*>(this, "AShooterGameState.OverrideItemCraftingCosts"); }
	long double& LastServerSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastServerSaveTime"); }
	float& ServerSaveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerSaveInterval"); }
	FName& LastLoadedSubLevelField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.LastLoadedSubLevel"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeNameChangeCooldown"); }
	TArray<FTransformedSubLevel>& CurrentSubLevelsField() { return *GetNativePointerField<TArray<FTransformedSubLevel>*>(this, "AShooterGameState.CurrentSubLevels"); }
	FString& MetaWorldURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.MetaWorldURL"); }
	FString& GridIPField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.GridIP"); }
	int& GridGamePortField() { return *GetNativePointerField<int*>(this, "AShooterGameState.GridGamePort"); }
	unsigned int& ServerIdField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.ServerId"); }
	FVector2D& MapGridCellStartField() { return *GetNativePointerField<FVector2D*>(this, "AShooterGameState.MapGridCellStart"); }
	FVector2D& MapGridCellScaleField() { return *GetNativePointerField<FVector2D*>(this, "AShooterGameState.MapGridCellScale"); }
	FAsyncUpdatableTexture2D& TerritoryOverlayWorldTextureField() { return *GetNativePointerField<FAsyncUpdatableTexture2D*>(this, "AShooterGameState.TerritoryOverlayWorldTexture"); }
	FAsyncUpdatableTexture2D& TerritoryOverlayCurrentServerTextureField() { return *GetNativePointerField<FAsyncUpdatableTexture2D*>(this, "AShooterGameState.TerritoryOverlayCurrentServerTexture"); }
	bool& bAllowHideDamageSourceFromLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowHideDamageSourceFromLogs"); }
	FieldArray<ExpensiveFunctionRegister, 1> ExpensiveFunctionsField() { return {this, "AShooterGameState.ExpensiveFunctions"}; }
	UAudioComponent * DynamicMusicAudioComponentField() { return *GetNativePointerField<UAudioComponent **>(this, "AShooterGameState.DynamicMusicAudioComponent"); }
	UAudioComponent * DynamicMusicAudioComponent2Field() { return *GetNativePointerField<UAudioComponent **>(this, "AShooterGameState.DynamicMusicAudioComponent2"); }
	bool& bPlayingDynamicMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic"); }
	bool& bPlayingDynamicMusic1Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic1"); }
	bool& bPlayingDynamicMusic2Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic2"); }
	float& LastHadMusicTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LastHadMusicTime"); }
	TArray<FLevelExperienceRamp>& LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp>*>(this, "AShooterGameState.LevelExperienceRampOverrides"); }
	TArray<FEngramEntryOverride>& OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameState.OverrideEngramEntries"); }
	TArray<FString>& PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameState.PreventDinoTameClassNames"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ListenServerTetherDistanceMultiplier"); }
	FString& PGMapNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PGMapName"); }
	TArray<int>& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.SupportedSpawnRegions"); }
	UPaintingCache * PaintingCacheField() { return *GetNativePointerField<UPaintingCache **>(this, "AShooterGameState.PaintingCache"); }
	USoundBase * StaticOverrideMusicField() { return *GetNativePointerField<USoundBase **>(this, "AShooterGameState.StaticOverrideMusic"); }
	bool& bEnableDeathTeamSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableDeathTeamSpectator"); }
	FVector& PlayerFloatingHUDOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterGameState.PlayerFloatingHUDOffset"); }
	float& PlayerFloatingHUDOffsetScreenYField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PlayerFloatingHUDOffsetScreenY"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructureDamageRepairCooldown"); }
	bool& bFirstTickedField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFirstTicked"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllStructureLocking"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCustomRecipes"); }
	bool& bAllowRaidDinoFeedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowRaidDinoFeeding"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeSkillMultiplier"); }
	ATreasureMapManager * TreasureMapManagerField() { return *GetNativePointerField<ATreasureMapManager **>(this, "AShooterGameState.TreasureMapManager"); }
	USoundBase * OverrideAreaMusicField() { return *GetNativePointerField<USoundBase **>(this, "AShooterGameState.OverrideAreaMusic"); }
	FVector& OverrideAreaMusicPositionField() { return *GetNativePointerField<FVector*>(this, "AShooterGameState.OverrideAreaMusicPosition"); }
	float& OverrideAreaMusicRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OverrideAreaMusicRange"); }
	bool& bAllowUnclaimDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowUnclaimDinos"); }
	float& FloatingHUDRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingHUDRange"); }
	float& FloatingChatRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingChatRange"); }
	int& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventTimeInterval"); }
	float& ExtinctionEventPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ExtinctionEventPercent"); }
	int& ExtinctionEventSecondsRemainingField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventSecondsRemaining"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDoExtinctionEvent"); }
	TArray<FInventoryComponentDefaultItemsAppend>& InventoryComponentAppendsField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend>*>(this, "AShooterGameState.InventoryComponentAppends"); }
	bool& bPreventOfflinePvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventOfflinePvP"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPDinoDecay"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceUseInventoryAppends"); }
	bool& bOverideStructurePlatformPreventionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOverideStructurePlatformPrevention"); }
	TArray<int>& PreventOfflinePvPLiveTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.PreventOfflinePvPLiveTeams"); }
	TArray<int>& PreventOfflinePvPExpiringTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTeams"); }
	TArray<double>& PreventOfflinePvPExpiringTimesField() { return *GetNativePointerField<TArray<double>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTimes"); }
	TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> >& PreventOfflinePvPLiveTimesField() { return *GetNativePointerField<TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> >*>(this, "AShooterGameState.PreventOfflinePvPLiveTimes"); }
	TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> >& PreventOfflinePvPFirstLiveTimeField() { return *GetNativePointerField<TMap<int,double,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,double,0> >*>(this, "AShooterGameState.PreventOfflinePvPFirstLiveTime"); }
	FString& TerritoryOverlayFullWorldUrlField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.TerritoryOverlayFullWorldUrl"); }
	FString& TerritoryOverlayCurrentServerUrlField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.TerritoryOverlayCurrentServerUrl"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowAnyoneBabyImprintCuddle"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableImprintDinoBuff"); }
	TArray<FFloatingTextEntry>& FloatingTextEntriesField() { return *GetNativePointerField<TArray<FFloatingTextEntry>*>(this, "AShooterGameState.FloatingTextEntries"); }
	bool& bIsCustomMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsCustomMap"); }
	bool& bIsClientField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsClient"); }
	bool& bIsDedicatedServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsDedicatedServer"); }
	bool& bInitializedGridInfoField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bInitializedGridInfo"); }
	FString& ClusterIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ClusterId"); }
	FString& ServerSessionNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ServerSessionName"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventTribeAlliances"); }
	FString& LoadForceRespawnDinosTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.LoadForceRespawnDinosTag"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFastDecayUnsnappedCoreStructures"); }
	bool& bServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerUseDinoList"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowStructuresAtSupplyDrops"); }
	bool& bAllowForceNetUpdateField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowForceNetUpdate"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.MinimumDinoReuploadInterval"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HairGrowthSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FastDecayInterval"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OxygenSwimSpeedStatMultiplier"); }
	FOnHTTPGetProcessed& OnHTTPGetResponseField() { return *GetNativePointerField<FOnHTTPGetProcessed*>(this, "AShooterGameState.OnHTTPGetResponse"); }
	FOnHTTPPostResponse& OnHTTPPostResponseField() { return *GetNativePointerField<FOnHTTPPostResponse*>(this, "AShooterGameState.OnHTTPPostResponse"); }
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
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.UseStructurePreventionVolumeTag"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInSmallRadius"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RadiusStructuresInSmallRadius"); }
	bool& bUseTameLimitForStructuresOnlyField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseTameLimitForStructuresOnly"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitTurretsNum"); }
	bool& bForceAllowAllStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllowAllStructures"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bShowCreativeMode"); }
	TArray<FPlayerLocatorEffectMap>& PlayerLocatorEffectMapsField() { return *GetNativePointerField<TArray<FPlayerLocatorEffectMap>*>(this, "AShooterGameState.PlayerLocatorEffectMaps"); }
	int& AmbientSoundCheckIncrementField() { return *GetNativePointerField<int*>(this, "AShooterGameState.AmbientSoundCheckIncrement"); }
	int& STASISAUTODESTROY_CheckIncrementField() { return *GetNativePointerField<int*>(this, "AShooterGameState.STASISAUTODESTROY_CheckIncrement"); }
	bool& bLoadingLastLoadedSubLevelsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bLoadingLastLoadedSubLevels"); }
	bool& bOverrideWindSpeedField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOverrideWindSpeed"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PassiveTameIntervalMultiplier"); }
	float& OverrideWindDirectionField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OverrideWindDirection"); }
	float& BedBaseCooldownTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.BedBaseCooldownTime"); }
	bool& bUseStaticCharacterAgeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseStaticCharacterAge"); }
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsDino"); }
	float& BedAdditionalCoolDownSecondsForEveryKilometerField() { return *GetNativePointerField<float*>(this, "AShooterGameState.BedAdditionalCoolDownSecondsForEveryKilometer"); }
	TArray<unsigned char>& CompressedGridInfoField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "AShooterGameState.CompressedGridInfo"); }
	TArray<unsigned int>& MapChecksumsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "AShooterGameState.MapChecksums"); }
	bool& bDownloadGridInfoField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDownloadGridInfo"); }
	long double& LocalGameplayTimeSecondsField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LocalGameplayTimeSeconds"); }
	FieldArray<int, 3> MaxTameUnitsField() { return {this, "AShooterGameState.MaxTameUnits"}; }
	float& TamingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TamingSpeedMultiplier"); }
	FString& GridURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.GridURL"); }
	float& LastGridDownloadAttemptField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LastGridDownloadAttempt"); }
	float& RetryDownloadingGridIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RetryDownloadingGridInterval"); }
	bool& bSuccessfullyDownloadedGridInfoField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bSuccessfullyDownloadedGridInfo"); }
	long double& GlobalOverSubscriptionTimeLimitAtField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.GlobalOverSubscriptionTimeLimitAt"); }
	FGlobalGameplaySetup& ReplicatedGlobalGameplaySetupField() { return *GetNativePointerField<FGlobalGameplaySetup*>(this, "AShooterGameState.ReplicatedGlobalGameplaySetup"); }
	bool& bDisableBedsOnThisServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableBedsOnThisServer"); }
	bool& bRequestingMetaWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bRequestingMetaWorld"); }
	TEnumAsByte<enum AShooterGameState::EMapImagesSource>& MapImagesSourceField() { return *GetNativePointerField<TEnumAsByte<enum AShooterGameState::EMapImagesSource>*>(this, "AShooterGameState.MapImagesSource"); }
	TArray<unsigned char>& CompressedMiniMapBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "AShooterGameState.CompressedMiniMapBytes"); }
	TArray<F2DByteArray>& CompressedCellImagesBytesField() { return *GetNativePointerField<TArray<F2DByteArray>*>(this, "AShooterGameState.CompressedCellImagesBytes"); }
	FRegionGeneralOverrides& ReplicatedRegionOverridesField() { return *GetNativePointerField<FRegionGeneralOverrides*>(this, "AShooterGameState.ReplicatedRegionOverrides"); }
	FSocket * SeamlessDataSocketField() { return *GetNativePointerField<FSocket **>(this, "AShooterGameState.SeamlessDataSocket"); }
	bool& bIsHomeServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsHomeServer"); }
	bool& bIsLawlessHomeServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsLawlessHomeServer"); }
	bool& bNoDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bNoDinoTaming"); }
	bool& bNoAnchoringField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bNoAnchoring"); }
	bool& bDontUseClaimFlagsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDontUseClaimFlags"); }
	float& NoClaimFlagDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.NoClaimFlagDecayPeriodMultiplier"); }
	int& PlayerDefaultNoDiscoveriesMaxLevelUpsField() { return *GetNativePointerField<int*>(this, "AShooterGameState.PlayerDefaultNoDiscoveriesMaxLevelUps"); }
	bool& bClampHomeServerXPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bClampHomeServerXP"); }
	int& ClampHomeServerXPLevelField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ClampHomeServerXPLevel"); }
	TArray<unsigned char>& ReceivedUnProcessedBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "AShooterGameState.ReceivedUnProcessedBytes"); }

	// Functions

	UObject * GetUObjectInterfaceHUDInterface() { return NativeCall<UObject *>(this, "AShooterGameState.GetUObjectInterfaceHUDInterface"); }
	static void BaseDrawTileOnCanvas(AShooterHUD * HUD, UTexture * Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, FColor DrawColor) { NativeCall<void, AShooterHUD *, UTexture *, float, float, float, float, float, float, float, float, FColor>(nullptr, "AShooterGameState.BaseDrawTileOnCanvas", HUD, Tex, X, Y, XL, YL, U, V, UL, VL, DrawColor); }
	void AddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID) { NativeCall<void, FVector, int, int>(this, "AShooterGameState.AddFloatingDamageText", AtLocation, DamageAmount, FromTeamID); }
	void AddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float>(this, "AShooterGameState.AddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime); }
	bool AllowDaytimeTransitionSounds() { return NativeCall<bool>(this, "AShooterGameState.AllowDaytimeTransitionSounds"); }
	bool AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter> DinoCharClass, AShooterPlayerController * ForPC) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>, AShooterPlayerController *>(this, "AShooterGameState.AllowDinoClassTame", DinoCharClass, ForPC); }
	bool AllowDinoTame(APrimalDinoCharacter * DinoChar, AShooterPlayerController * ForPC) { return NativeCall<bool, APrimalDinoCharacter *, AShooterPlayerController *>(this, "AShooterGameState.AllowDinoTame", DinoChar, ForPC); }
	bool AllowDownloadDino_Implementation(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.AllowDownloadDino_Implementation", TheDinoClass); }
	bool AttemptLoadMapImages(__int16 MinX, __int16 MaxX, __int16 MinY, __int16 MaxY) { return NativeCall<bool, __int16, __int16, __int16, __int16>(this, "AShooterGameState.AttemptLoadMapImages", MinX, MaxX, MinY, MaxY); }
	TArray<APrimalDinoCharacter *> * BaseGetAllDinoCharactersOfTeam(TArray<APrimalDinoCharacter *> * result, int Team) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, int>(this, "AShooterGameState.BaseGetAllDinoCharactersOfTeam", result, Team); }
	TArray<AShooterCharacter *> * BaseGetAllShooterCharacters(TArray<AShooterCharacter *> * result) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *>(this, "AShooterGameState.BaseGetAllShooterCharacters", result); }
	TArray<AShooterCharacter *> * BaseGetAllShooterCharactersOfTeam(TArray<AShooterCharacter *> * result, int Team) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *, int>(this, "AShooterGameState.BaseGetAllShooterCharactersOfTeam", result, Team); }
	TArray<AShooterPlayerController *> * BaseGetAllShooterControllers(TArray<AShooterPlayerController *> * result) { return NativeCall<TArray<AShooterPlayerController *> *, TArray<AShooterPlayerController *> *>(this, "AShooterGameState.BaseGetAllShooterControllers", result); }
	static APrimalBuff * BaseSpawnBuffAndAttachToCharacter(UClass * Buff, APrimalCharacter * PrimalCharacter, float ExperiencePoints) { return NativeCall<APrimalBuff *, UClass *, APrimalCharacter *, float>(nullptr, "AShooterGameState.BaseSpawnBuffAndAttachToCharacter", Buff, PrimalCharacter, ExperiencePoints); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameState.BeginPlay"); }
	void ClientOnStartSeamlessTravel_Implementation() { NativeCall<void>(this, "AShooterGameState.ClientOnStartSeamlessTravel_Implementation"); }
	void ConvertMapFileToTexture(TArray<unsigned char> * InBytes, FAsyncUpdatableTexture2D * DestTexture) { NativeCall<void, TArray<unsigned char> *, FAsyncUpdatableTexture2D *>(this, "AShooterGameState.ConvertMapFileToTexture", InBytes, DestTexture); }
	void CreateCustomGameUI(AShooterPlayerController * SceneOwner) { NativeCall<void, AShooterPlayerController *>(this, "AShooterGameState.CreateCustomGameUI", SceneOwner); }
	void Destroyed() { NativeCall<void>(this, "AShooterGameState.Destroyed"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterGameState.DrawHUD", HUD); }
	void FirstTick_Implementation() { NativeCall<void>(this, "AShooterGameState.FirstTick_Implementation"); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties, bool bAbsoluteForceNetUpdate) { NativeCall<void, bool, bool>(this, "AShooterGameState.ForceNetUpdate", bDormantDontReplicateProperties, bAbsoluteForceNetUpdate); }
	void ForceUpdateTerritoryMap() { NativeCall<void>(this, "AShooterGameState.ForceUpdateTerritoryMap"); }
	unsigned int GetBedCoolDownTimeForTravelingFrom(unsigned int OriginServerId, FVector2D * RelativeLocInOriginServer, unsigned int DestServerId, FVector2D * RelativeLocInDestServer) { return NativeCall<unsigned int, unsigned int, FVector2D *, unsigned int, FVector2D *>(this, "AShooterGameState.GetBedCoolDownTimeForTravelingFrom", OriginServerId, RelativeLocInOriginServer, DestServerId, RelativeLocInDestServer); }
	FString * GetCleanServerSessionName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameState.GetCleanServerSessionName", result); }
	float GetClientReplicationRateFor(UNetConnection * InConnection, AActor * InActor) { return NativeCall<float, UNetConnection *, AActor *>(this, "AShooterGameState.GetClientReplicationRateFor", InConnection, InActor); }
	FString * GetDayTimeString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameState.GetDayTimeString", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FVector * GetLocalPlayerLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterGameState.GetLocalPlayerLocation", result); }
	float GetMatineePlayRate(AActor * forMatineeActor) { return NativeCall<float, AActor *>(this, "AShooterGameState.GetMatineePlayRate", forMatineeActor); }
	static int GetNetUTC(UWorld * ForWorld) { return NativeCall<int, UWorld *>(nullptr, "AShooterGameState.GetNetUTC", ForWorld); }
	long double GetNetworkTime() { return NativeCall<long double>(this, "AShooterGameState.GetNetworkTime"); }
	static long double GetNetworkTimeDelta(AShooterGameState * gameState, long double netTime, bool bTimeUntil) { return NativeCall<long double, AShooterGameState *, long double, bool>(nullptr, "AShooterGameState.GetNetworkTimeDelta", gameState, netTime, bTimeUntil); }
	long double GetOfflineDamagePreventionTime(int TargetingTeamID) { return NativeCall<long double, int>(this, "AShooterGameState.GetOfflineDamagePreventionTime", TargetingTeamID); }
	float GetRealTimeTotalDayLengthSeconds() { return NativeCall<float>(this, "AShooterGameState.GetRealTimeTotalDayLengthSeconds"); }
	FString * GetSaveDirectoryName(FString * result, ESaveType::Type SaveType) { return NativeCall<FString *, FString *, ESaveType::Type>(this, "AShooterGameState.GetSaveDirectoryName", result, SaveType); }
	float GetServerFramerate() { return NativeCall<float>(this, "AShooterGameState.GetServerFramerate"); }
	void GridGetRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.GridGetRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	void HTTPGetRequest(FString InURL) { NativeCall<void, FString>(this, "AShooterGameState.HTTPGetRequest", InURL); }
	void HTTPGetRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.HTTPGetRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	void HTTPPostRequest(FString InURL, FString Content) { NativeCall<void, FString, FString>(this, "AShooterGameState.HTTPPostRequest", InURL, Content); }
	void HTTPPostRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.HTTPPostRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	void HttpGetTerritoryOverlayFullMap_RequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.HttpGetTerritoryOverlayFullMap_RequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpRequestMetaWorldURL() { NativeCall<void>(this, "AShooterGameState.HttpRequestMetaWorldURL"); }
	void InitSeamlessDataSocket() { NativeCall<void>(this, "AShooterGameState.InitSeamlessDataSocket"); }
	void InitializedGameState() { NativeCall<void>(this, "AShooterGameState.InitializedGameState"); }
	void InitiateClientMapImagesCache() { NativeCall<void>(this, "AShooterGameState.InitiateClientMapImagesCache"); }
	bool IsAtTameUnitLimit(int ForTeam, ETameUnitType::Type TheTameUnitType, AShooterPlayerController * ForPC, int TameLimitOffset, bool bIgnoreGlobalCheck) { return NativeCall<bool, int, ETameUnitType::Type, AShooterPlayerController *, int, bool>(this, "AShooterGameState.IsAtTameUnitLimit", ForTeam, TheTameUnitType, ForPC, TameLimitOffset, bIgnoreGlobalCheck); }
	bool IsClusterServer() { return NativeCall<bool>(this, "AShooterGameState.IsClusterServer"); }
	bool IsTeamIDInvincible(int TargetingTeamID, bool bInvincibleOnlyWhenOffline) { return NativeCall<bool, int, bool>(this, "AShooterGameState.IsTeamIDInvincible", TargetingTeamID, bInvincibleOnlyWhenOffline); }
	void LevelAddedToWorld(ULevel * addedLevel) { NativeCall<void, ULevel *>(this, "AShooterGameState.LevelAddedToWorld", addedLevel); }
	void NetAddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID, int OnlySendToTeamID, bool bForceText) { NativeCall<void, FVector, int, int, int, bool>(this, "AShooterGameState.NetAddFloatingDamageText", AtLocation, DamageAmount, FromTeamID, OnlySendToTeamID, bForceText); }
	void NetAddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime, int OnlySendToTeamID, bool bForce) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float, int, bool>(this, "AShooterGameState.NetAddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime, OnlySendToTeamID, bForce); }
	void NetUpdateOfflinePvPExpiringTeams_Implementation(TArray<int> * NewPreventOfflinePvPExpiringTeams, TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int> *, TArray<double> *>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams_Implementation", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void NetUpdateOfflinePvPLiveTeams_Implementation(TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int> *>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams_Implementation", NewPreventOfflinePvPLiveTeams); }
	void NotifyPlayerDied(AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *, APawn *, AActor *>(this, "AShooterGameState.NotifyPlayerDied", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	void OnDeserializedByGame(EOnDesrializationType::Type DeserializationType) { NativeCall<void, EOnDesrializationType::Type>(this, "AShooterGameState.OnDeserializedByGame", DeserializationType); }
	void OnGetGridCellMapFromURLDone(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded, unsigned int CellServerId) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool, unsigned int>(this, "AShooterGameState.OnGetGridCellMapFromURLDone", HttpRequest, HttpResponse, bSucceeded, CellServerId); }
	void OnGetWorldMapFromURLDone(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.OnGetWorldMapFromURLDone", HttpRequest, HttpResponse, bSucceeded); }
	void OnRep_CompressedGridInfo() { NativeCall<void>(this, "AShooterGameState.OnRep_CompressedGridInfo"); }
	void OnRep_GlobalGameplaySetup() { NativeCall<void>(this, "AShooterGameState.OnRep_GlobalGameplaySetup"); }
	void OnRep_MapChecksums() { NativeCall<void>(this, "AShooterGameState.OnRep_MapChecksums"); }
	void OnRep_MapImagesSource() { NativeCall<void>(this, "AShooterGameState.OnRep_MapImagesSource"); }
	void OnRep_NetworkTime() { NativeCall<void>(this, "AShooterGameState.OnRep_NetworkTime"); }
	void OnRep_ReplicateCurrentSubLevels() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateCurrentSubLevels"); }
	void OnRep_ReplicateLocalizedChatRadius() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateLocalizedChatRadius"); }
	void OnRep_ReplicateMetaWorldURL() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateMetaWorldURL"); }
	void OnRep_ReplicateServerId() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateServerId"); }
	void OnRep_SupportedSpawnRegions() { NativeCall<void>(this, "AShooterGameState.OnRep_SupportedSpawnRegions"); }
	void OnRep_TerritoryGameUrl() { NativeCall<void>(this, "AShooterGameState.OnRep_TerritoryGameUrl"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterGameState.PostInitializeComponents"); }
	void ReconnectSeamlessDataSocket() { NativeCall<void>(this, "AShooterGameState.ReconnectSeamlessDataSocket"); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameState.RequestFinishAndExitToMainMenu"); }
	void RequestGridCellMapFromServer(unsigned int RequestedCellServerId) { NativeCall<void, unsigned int>(this, "AShooterGameState.RequestGridCellMapFromServer", RequestedCellServerId); }
	void RequestGridCellMapFromURL(unsigned int CellServerId, FString * URL) { NativeCall<void, unsigned int, FString *>(this, "AShooterGameState.RequestGridCellMapFromURL", CellServerId, URL); }
	void RequestWorldMapFromURL(FString * URL) { NativeCall<void, FString *>(this, "AShooterGameState.RequestWorldMapFromURL", URL); }
	void ServerSetWind(float newWind) { NativeCall<void, float>(this, "AShooterGameState.ServerSetWind", newWind); }
	void SetBedsDisabledOnThisServer(bool bDisabled) { NativeCall<void, bool>(this, "AShooterGameState.SetBedsDisabledOnThisServer", bDisabled); }
	void SetCompressedGridInfo() { NativeCall<void>(this, "AShooterGameState.SetCompressedGridInfo"); }
	void SetMetaWorldURL(FString * Url) { NativeCall<void, FString *>(this, "AShooterGameState.SetMetaWorldURL", Url); }
	void StartDownloadingGridInfo() { NativeCall<void>(this, "AShooterGameState.StartDownloadingGridInfo"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.Tick", DeltaSeconds); }
	void TickSeamlessDataSocket() { NativeCall<void>(this, "AShooterGameState.TickSeamlessDataSocket"); }
	void UpdateDynamicMusic(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.UpdateDynamicMusic", DeltaSeconds); }
	void UpdateFunctionExpense(int FunctionType) { NativeCall<void, int>(this, "AShooterGameState.UpdateFunctionExpense", FunctionType); }
	void UpdatePreventOfflinePvPStatus() { NativeCall<void>(this, "AShooterGameState.UpdatePreventOfflinePvPStatus"); }
	void ClientOnStartSeamlessTravel() { NativeCall<void>(this, "AShooterGameState.ClientOnStartSeamlessTravel"); }
	void FirstTick() { NativeCall<void>(this, "AShooterGameState.FirstTick"); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "AShooterGameState.GetPrivateStaticClass", Package); }
	void NetUpdateOfflinePvPExpiringTeams(TArray<int> * NewPreventOfflinePvPExpiringTeams, TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int> *, TArray<double> *>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void NetUpdateOfflinePvPLiveTeams(TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int> *>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams", NewPreventOfflinePvPLiveTeams); }
	static void StaticRegisterNativesAShooterGameState() { NativeCall<void>(nullptr, "AShooterGameState.StaticRegisterNativesAShooterGameState"); }
};

struct AGameSession
{
	int& MaxSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxSpectators"); }
	int& MaxPlayersField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxPlayers"); }
	char& ReservedPlayerSlotsField() { return *GetNativePointerField<char*>(this, "AGameSession.ReservedPlayerSlots"); }
	char& MaxSplitscreensPerConnectionField() { return *GetNativePointerField<char*>(this, "AGameSession.MaxSplitscreensPerConnection"); }
	bool& bRequiresPushToTalkField() { return *GetNativePointerField<bool*>(this, "AGameSession.bRequiresPushToTalk"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "AGameSession.SessionName"); }

	// Functions

	bool RequiresPushToTalk() { return NativeCall<bool>(this, "AGameSession.RequiresPushToTalk"); }
	//static APrimalBuff `vcall'{2752, { flat } }() { return NativeCall<APrimalBuff>(nullptr, "AGameSession.`vcall'{2752,{flat}}"); }
	//static AGameSession `vcall'{2864, { flat }}() { return NativeCall<AGameSession>(nullptr, "AGameSession.`vcall'{2864,{flat}}"); }
	FString * ApproveLogin(FString * result, FString * Options, FString * authToken, unsigned int * NewHomeServerId) { return NativeCall<FString *, FString *, FString *, FString *, unsigned int *>(this, "AGameSession.ApproveLogin", result, Options, authToken, NewHomeServerId); }
	bool AtCapacity(bool bSpectator, FString * AuthToken, bool UseReservedSlots, int * NumFreeSlots) { return NativeCall<bool, bool, FString *, bool, int *>(this, "AGameSession.AtCapacity", bSpectator, AuthToken, UseReservedSlots, NumFreeSlots); }
	bool BanPlayer(APlayerController * BannedPlayer, FText * BanReason) { return NativeCall<bool, APlayerController *, FText *>(this, "AGameSession.BanPlayer", BannedPlayer, BanReason); }
	void DumpSessionState() { NativeCall<void>(this, "AGameSession.DumpSessionState"); }
	void InitOptions(FString * Options) { NativeCall<void, FString *>(this, "AGameSession.InitOptions", Options); }
	bool KickPlayer(APlayerController * KickedPlayer, FText * KickReason) { return NativeCall<bool, APlayerController *, FText *>(this, "AGameSession.KickPlayer", KickedPlayer, KickReason); }
	void NotifyLogout(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AGameSession.NotifyLogout", PC); }
	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, FUniqueNetId * UserId, FString * Error) { NativeCall<void, int, bool, FUniqueNetId *, FString *>(this, "AGameSession.OnLoginComplete", LocalUserNum, bWasSuccessful, UserId, Error); }
	bool ProcessAutoLogin() { return NativeCall<bool>(this, "AGameSession.ProcessAutoLogin"); }
	void RegisterPlayer(APlayerController * NewPlayer, TSharedPtr<FUniqueNetId, 0> * UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController *, TSharedPtr<FUniqueNetId, 0> *, bool>(this, "AGameSession.RegisterPlayer", NewPlayer, UniqueId, bWasFromInvite); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameSession.ReturnToMainMenuHost"); }
	bool TravelToSession(int ControllerId, FName InSessionName) { return NativeCall<bool, int, FName>(this, "AGameSession.TravelToSession", ControllerId, InSessionName); }
	void UnregisterPlayer(APlayerController * ExitingPlayer) { NativeCall<void, APlayerController *>(this, "AGameSession.UnregisterPlayer", ExitingPlayer); }
	void UpdateSessionJoinability(FName InSessionName, bool bPublicSearchable, bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly) { NativeCall<void, FName, bool, bool, bool, bool>(this, "AGameSession.UpdateSessionJoinability", InSessionName, bPublicSearchable, bAllowInvites, bJoinViaPresence, bJoinViaPresenceFriendsOnly); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "AGameSession.GetPrivateStaticClass", Package); }
};

struct AShooterGameSession
{
	//FWindowsCriticalSection& SearchResultsCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "AShooterGameSession.SearchResultsCS"); }
	TArray<FInstalledItemInfo>& CachedModsField() { return *GetNativePointerField<TArray<FInstalledItemInfo>*>(this, "AShooterGameSession.CachedMods"); }
	TArray<FShooterSessionData>& ThreadSafeSearchResultsField() { return *GetNativePointerField<TArray<FShooterSessionData>*>(this, "AShooterGameSession.ThreadSafeSearchResults"); }
	//TArray<AShooterGameSession::FPlayerJoinAllowedCheck *> PlayersJoinAllowedChecksField() { return *GetNativePointerField<TArray<AShooterGameSession::FPlayerJoinAllowedCheck *>*>(this, "AShooterGameSession.PlayersJoinAllowedChecks"); }
	FShooterGameSessionParams& CurrentSessionParamsField() { return *GetNativePointerField<FShooterGameSessionParams*>(this, "AShooterGameSession.CurrentSessionParams"); }
	TSharedPtr<FShooterOnlineSessionSettings, 0>& HostSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSessionSettings, 0>*>(this, "AShooterGameSession.HostSettings"); }
	TSharedPtr<FShooterOnlineSearchSettings, 0>& SearchSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSearchSettings, 0>*>(this, "AShooterGameSession.SearchSettings"); }
	//AShooterGameSession::FOnCreatePresenceSessionComplete& CreatePresenceSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnCreatePresenceSessionComplete*>(this, "AShooterGameSession.CreatePresenceSessionCompleteEvent"); }
	//AShooterGameSession::FOnJoinSessionComplete& JoinSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnJoinSessionComplete*>(this, "AShooterGameSession.JoinSessionCompleteEvent"); }
	//AShooterGameSession::FOnFindSessionsComplete& FindSessionsCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnFindSessionsComplete*>(this, "AShooterGameSession.FindSessionsCompleteEvent"); }
	//AShooterGameSession::FOnFoundSession& FoundSessionEventField() { return *GetNativePointerField<AShooterGameSession::FOnFoundSession*>(this, "AShooterGameSession.FoundSessionEvent"); }
	bool& bFoundSessionField() { return *GetNativePointerField<bool*>(this, "AShooterGameSession.bFoundSession"); }
	//TArray<AShooterGameSession::FPlayerPendingHomeServerChange>& PlayersPendingHomeServerChangeField() { return *GetNativePointerField<TArray<AShooterGameSession::FPlayerPendingHomeServerChange>*>(this, "AShooterGameSession.PlayersPendingHomeServerChange"); }

	// Functions

	//static AShooterGameSession `vcall'{2944, { flat }}() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.`vcall'{2944,{flat}}"); }
	//static AShooterGameSession `vcall'{2952, { flat }}() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.`vcall'{2952,{flat}}"); }
	FString * ApproveLogin(FString * result, FString * Options, FString * authToken, unsigned int * NewHomeServerId) { return NativeCall<FString *, FString *, FString *, FString *, unsigned int *>(this, "AShooterGameSession.ApproveLogin", result, Options, authToken, NewHomeServerId); }
	void CancelFindSessions() { NativeCall<void>(this, "AShooterGameSession.CancelFindSessions"); }
	bool FPlayerJoinAllowedCheck(bool UseReservedSlots) { return NativeCall<bool, bool>(this, "AShooterGameSession.FPlayerJoinAllowedCheck", UseReservedSlots); }
	static AShooterGameSession DelayedSessionDelete() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.DelayedSessionDelete"); }
	void FindSessions(TSharedPtr<FUniqueNetId, 0> UserId, FName SessionName, bool bIsLAN, bool bIsPresence, bool bRecreateSearchSettings, EListSessionStatus::Type FindType, bool bQueryNotFullSessions, bool bPasswordServers, const wchar_t * ServerName, FString ClusterId, FString AtlasId, FString ServerId, FString AuthListURL) { NativeCall<void, TSharedPtr<FUniqueNetId, 0>, FName, bool, bool, bool, EListSessionStatus::Type, bool, bool, const wchar_t *, FString, FString, FString, FString>(this, "AShooterGameSession.FindSessions", UserId, SessionName, bIsLAN, bIsPresence, bRecreateSearchSettings, FindType, bQueryNotFullSessions, bPasswordServers, ServerName, ClusterId, AtlasId, ServerId, AuthListURL); }
	EOnlineAsyncTaskState::Type GetSearchResultStatus(int * SearchResultIdx, int * NumSearchResults) { return NativeCall<EOnlineAsyncTaskState::Type, int *, int *>(this, "AShooterGameSession.GetSearchResultStatus", SearchResultIdx, NumSearchResults); }
	TArray<FOnlineSessionSearchResult> * GetSearchResults() { return NativeCall<TArray<FOnlineSessionSearchResult> *>(this, "AShooterGameSession.GetSearchResults"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasEnded"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasStarted"); }
	void InitOptions(FString * Options) { NativeCall<void, FString *>(this, "AShooterGameSession.InitOptions", Options); }
	bool IsPlayerPendingHomeServerChange(FString PlayerId, unsigned int * RequestedNewHomeServer) { return NativeCall<bool, FString, unsigned int *>(this, "AShooterGameSession.IsPlayerPendingHomeServerChange", PlayerId, RequestedNewHomeServer); }
	bool FPlayerJoinAllowedCheck() { return NativeCall<bool>(this, "AShooterGameSession.FPlayerJoinAllowedCheck"); }
	bool JoinSession(TSharedPtr<FUniqueNetId, 0> UserId, FName SessionName, FOnlineSessionSearchResult * SearchResult) { return NativeCall<bool, TSharedPtr<FUniqueNetId, 0>, FName, FOnlineSessionSearchResult *>(this, "AShooterGameSession.JoinSession", UserId, SessionName, SearchResult); }
	bool JoinSession(TSharedPtr<FUniqueNetId, 0> UserId, FName SessionName, int SessionIndexInSearchResults) { return NativeCall<bool, TSharedPtr<FUniqueNetId, 0>, FName, int>(this, "AShooterGameSession.JoinSession", UserId, SessionName, SessionIndexInSearchResults); }
	//static FTrueSkyPlugin FPlayerJoinAllowedCheck() { return NativeCall<FTrueSkyPlugin>(nullptr, "AShooterGameSession.FPlayerJoinAllowedCheck"); }
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnCreateSessionComplete", SessionName, bWasSuccessful); }
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnDestroySessionComplete", SessionName, bWasSuccessful); }
	static AShooterGameSession OnFindSessionsComplete() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.OnFindSessionsComplete"); }
	static AShooterGameSession OnFoundSession() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.OnFoundSession"); }
	static AShooterGameSession OnJoinSessionComplete() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.OnJoinSessionComplete"); }
	static AShooterGameSession OnNumConnectedPlayersChanged() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.OnNumConnectedPlayersChanged"); }
	static AShooterGameSession OnStartOnlineGameComplete() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.OnStartOnlineGameComplete"); }
	void RegisterServer() { NativeCall<void>(this, "AShooterGameSession.RegisterServer"); }
	void RemovePlayerPendingHomeServerChange(FString PlayerId) { NativeCall<void, FString>(this, "AShooterGameSession.RemovePlayerPendingHomeServerChange", PlayerId); }
	void Restart() { NativeCall<void>(this, "AShooterGameSession.Restart"); }
	void SerializeServerIsFull(FMemoryArchive * Ar, char * ServerIsFull) { NativeCall<void, FMemoryArchive *, char *>(this, "AShooterGameSession.SerializeServerIsFull", Ar, ServerIsFull); }
	static void SerializeServerIsFull(UWorld * World, FMemoryArchive * Ar, char * ServerIsFull) { NativeCall<void, UWorld *, FMemoryArchive *, char *>(nullptr, "AShooterGameSession.SerializeServerIsFull", World, Ar, ServerIsFull); }
	void Tick(float __formal) { NativeCall<void, float>(this, "AShooterGameSession.Tick", __formal); }
	bool FPlayerJoinAllowedCheck(AShooterGameSession * pGameSession) { return NativeCall<bool, AShooterGameSession *>(this, "AShooterGameSession.FPlayerJoinAllowedCheck", pGameSession); }
	void TickPlayersJoinAllowedChecks() { NativeCall<void>(this, "AShooterGameSession.TickPlayersJoinAllowedChecks"); }
	bool TravelToSession(int ControllerId, FName SessionName) { return NativeCall<bool, int, FName>(this, "AShooterGameSession.TravelToSession", ControllerId, SessionName); }
	static AShooterGameSession UpdatePublishedSession() { return NativeCall<AShooterGameSession>(nullptr, "AShooterGameSession.UpdatePublishedSession"); }
	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "AShooterGameSession.GetPrivateStaticClass", Package); }
};