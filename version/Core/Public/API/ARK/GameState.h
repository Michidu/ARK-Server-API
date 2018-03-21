#pragma once

struct AGameState
{
	FieldValue<TSubclassOf<AGameMode>> GameModeClassField() { return { this, "AGameState.GameModeClass" }; }
	FieldValue<AGameMode *> AuthorityGameModeField() { return { this, "AGameState.AuthorityGameMode" }; }
	FieldValue<FName> MatchStateField() { return { this, "AGameState.MatchState" }; }
	FieldValue<FName> PreviousMatchStateField() { return { this, "AGameState.PreviousMatchState" }; }
	FieldValue<int> ElapsedTimeField() { return { this, "AGameState.ElapsedTime" }; }
	FieldValue<TArray<APlayerState *>> PlayerArrayField() { return { this, "AGameState.PlayerArray" }; }
	FieldValue<TArray<APlayerState *>> InactivePlayerArrayField() { return { this, "AGameState.InactivePlayerArray" }; }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bServerAllowsAnsel() { return { this, "AGameState.bServerAllowsAnsel" }; }

	// Functions

	bool TeleportTo(FVector * DestLocation, FRotator * DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, FVector *, FRotator *, bool, bool>(this, "AGameState.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	static UClass * GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "AGameState.GetPrivateStaticClass"); }
	void DefaultTimer() { NativeCall<void>(this, "AGameState.DefaultTimer"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameState.PostInitializeComponents"); }
	void OnRep_GameModeClass() { NativeCall<void>(this, "AGameState.OnRep_GameModeClass"); }
	void OnRep_SpectatorClass() { NativeCall<void>(this, "AGameState.OnRep_SpectatorClass"); }
	void ReceivedGameModeClass() { NativeCall<void>(this, "AGameState.ReceivedGameModeClass"); }
	void ReceivedSpectatorClass() { NativeCall<void>(this, "AGameState.ReceivedSpectatorClass"); }
	void SeamlessTravelTransitionCheckpoint(bool bToTransitionMap) { NativeCall<void, bool>(this, "AGameState.SeamlessTravelTransitionCheckpoint", bToTransitionMap); }
	void AddPlayerState(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "AGameState.AddPlayerState", PlayerState); }
	void RemovePlayerState(APlayerState * PlayerState) { NativeCall<void, APlayerState *>(this, "AGameState.RemovePlayerState", PlayerState); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameState.HandleMatchIsWaitingToStart"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameState.HandleMatchHasStarted"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameState.HasMatchStarted"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameState.IsMatchInProgress"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameState.HasMatchEnded"); }
	void OnRep_MatchState() { NativeCall<void>(this, "AGameState.OnRep_MatchState"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void NetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize AtLocation, FRotator_NetQuantize AtRotation, AActor * EffectOwnerToIgnore, float MaxRangeToReplicate, USceneComponent * attachToComponent, int dataIndex, FName attachSocketName, bool bOnlySendToEffectOwner) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize, FRotator_NetQuantize, AActor *, float, USceneComponent *, int, FName, bool>(this, "AGameState.NetSpawnActorAtLocation", AnActorClass, AtLocation, AtRotation, EffectOwnerToIgnore, MaxRangeToReplicate, attachToComponent, dataIndex, attachSocketName, bOnlySendToEffectOwner); }
	bool Semaphore_TryGrab(FName SemaphoreName, AActor * InObject, float PriorityWeight, int MaxToAllocate) { return NativeCall<bool, FName, AActor *, float, int>(this, "AGameState.Semaphore_TryGrab", SemaphoreName, InObject, PriorityWeight, MaxToAllocate); }
	bool Semaphore_Release(FName SemaphoreName, AActor * InObject) { return NativeCall<bool, FName, AActor *>(this, "AGameState.Semaphore_Release", SemaphoreName, InObject); }
	static void StaticRegisterNativesAGameState() { NativeCall<void>(nullptr, "AGameState.StaticRegisterNativesAGameState"); }
};

struct AShooterGameState : AGameState
{
	FieldValue<int> NumNPCField() { return { this, "AShooterGameState.NumNPC" }; }
	FieldValue<int> NumHibernatedNPCField() { return { this, "AShooterGameState.NumHibernatedNPC" }; }
	FieldValue<int> NumActiveNPCField() { return { this, "AShooterGameState.NumActiveNPC" }; }
	FieldValue<int> NumDeadNPCField() { return { this, "AShooterGameState.NumDeadNPC" }; }
	FieldValue<int> NumPlayerActorsField() { return { this, "AShooterGameState.NumPlayerActors" }; }
	FieldValue<int> NumPlayerConnectedField() { return { this, "AShooterGameState.NumPlayerConnected" }; }
	FieldValue<bool> bServerUseLocalizedChatField() { return { this, "AShooterGameState.bServerUseLocalizedChat" }; }
	FieldValue<float> LocalizedChatRadiusField() { return { this, "AShooterGameState.LocalizedChatRadius" }; }
	FieldValue<float> LocalizedChatRadiusUnconsiousScaleField() { return { this, "AShooterGameState.LocalizedChatRadiusUnconsiousScale" }; }
	FieldValue<float> ServerFramerateField() { return { this, "AShooterGameState.ServerFramerate" }; }
	FieldValue<FString> NewStructureDestructionTagField() { return { this, "AShooterGameState.NewStructureDestructionTag" }; }
	FieldValue<int> DayNumberField() { return { this, "AShooterGameState.DayNumber" }; }
	FieldValue<float> DayTimeField() { return { this, "AShooterGameState.DayTime" }; }
	FieldValue<long double> NetworkTimeField() { return { this, "AShooterGameState.NetworkTime" }; }
	FieldValue<unsigned int> TimeUTCField() { return { this, "AShooterGameState.TimeUTC" }; }
	FieldValue<bool> bIsOfficialServerField() { return { this, "AShooterGameState.bIsOfficialServer" }; }
	FieldValue<bool> bIsListenServerField() { return { this, "AShooterGameState.bIsListenServer" }; }
	FieldValue<bool> bIsDediServerField() { return { this, "AShooterGameState.bIsDediServer" }; }
	FieldValue<bool> bIsArkTributeAvailableField() { return { this, "AShooterGameState.bIsArkTributeAvailable" }; }
	FieldValue<bool> bIsArkDownloadsAllowedField() { return { this, "AShooterGameState.bIsArkDownloadsAllowed" }; }
	FieldValue<bool> bAllowThirdPersonPlayerField() { return { this, "AShooterGameState.bAllowThirdPersonPlayer" }; }
	FieldValue<bool> bServerHardcoreField() { return { this, "AShooterGameState.bServerHardcore" }; }
	FieldValue<bool> bServerPVEField() { return { this, "AShooterGameState.bServerPVE" }; }
	FieldValue<bool> bAutoPvEField() { return { this, "AShooterGameState.bAutoPvE" }; }
	FieldValue<bool> bServerCrosshairField() { return { this, "AShooterGameState.bServerCrosshair" }; }
	FieldValue<bool> bServerForceNoHUDField() { return { this, "AShooterGameState.bServerForceNoHUD" }; }
	FieldValue<bool> bFlyerPlatformAllowUnalignedDinoBasingField() { return { this, "AShooterGameState.bFlyerPlatformAllowUnalignedDinoBasing" }; }
	FieldValue<bool> bMapPlayerLocationField() { return { this, "AShooterGameState.bMapPlayerLocation" }; }
	FieldValue<bool> bPvEDisableFriendlyFireField() { return { this, "AShooterGameState.bPvEDisableFriendlyFire" }; }
	FieldValue<bool> bPvEAllowTribeWarField() { return { this, "AShooterGameState.bPvEAllowTribeWar" }; }
	FieldValue<bool> bPvEAllowTribeWarCancelField() { return { this, "AShooterGameState.bPvEAllowTribeWarCancel" }; }
	FieldValue<bool> bEnablePvPGammaField() { return { this, "AShooterGameState.bEnablePvPGamma" }; }
	FieldValue<bool> bDisablePvEGammaField() { return { this, "AShooterGameState.bDisablePvEGamma" }; }
	FieldValue<int> NumTamedDinosField() { return { this, "AShooterGameState.NumTamedDinos" }; }
	FieldValue<int> MaxStructuresInRangeField() { return { this, "AShooterGameState.MaxStructuresInRange" }; }
	FieldValue<float> DayCycleSpeedScaleField() { return { this, "AShooterGameState.DayCycleSpeedScale" }; }
	FieldValue<float> DayTimeSpeedScaleField() { return { this, "AShooterGameState.DayTimeSpeedScale" }; }
	FieldValue<float> NightTimeSpeedScaleField() { return { this, "AShooterGameState.NightTimeSpeedScale" }; }
	FieldValue<float> PvEStructureDecayPeriodMultiplierField() { return { this, "AShooterGameState.PvEStructureDecayPeriodMultiplier" }; }
	FieldValue<float> PvEDinoDecayPeriodMultiplierField() { return { this, "AShooterGameState.PvEDinoDecayPeriodMultiplier" }; }
	FieldValue<float> PerPlatformMaxStructuresMultiplierField() { return { this, "AShooterGameState.PerPlatformMaxStructuresMultiplier" }; }
	FieldValue<bool> bDisableStructureDecayPvEField() { return { this, "AShooterGameState.bDisableStructureDecayPvE" }; }
	FieldValue<bool> bDisableDinoDecayPvEField() { return { this, "AShooterGameState.bDisableDinoDecayPvE" }; }
	FieldValue<bool> bAllowCaveBuildingPvEField() { return { this, "AShooterGameState.bAllowCaveBuildingPvE" }; }
	FieldValue<bool> bPreventDownloadSurvivorsField() { return { this, "AShooterGameState.bPreventDownloadSurvivors" }; }
	FieldValue<bool> bReachedPlatformStructureLimitField() { return { this, "AShooterGameState.bReachedPlatformStructureLimit" }; }
	FieldValue<bool> bAdminLoggingField() { return { this, "AShooterGameState.bAdminLogging" }; }
	FieldValue<bool> bPvPStructureDecayField() { return { this, "AShooterGameState.bPvPStructureDecay" }; }
	FieldValue<bool> bPreventDownloadDinosField() { return { this, "AShooterGameState.bPreventDownloadDinos" }; }
	FieldValue<bool> bPreventDownloadItemsField() { return { this, "AShooterGameState.bPreventDownloadItems" }; }
	FieldValue<bool> bPreventUploadDinosField() { return { this, "AShooterGameState.bPreventUploadDinos" }; }
	FieldValue<bool> bPreventUploadItemsField() { return { this, "AShooterGameState.bPreventUploadItems" }; }
	FieldValue<bool> bPreventUploadSurvivorsField() { return { this, "AShooterGameState.bPreventUploadSurvivors" }; }
	FieldValue<bool> bPreventMateBoostField() { return { this, "AShooterGameState.bPreventMateBoost" }; }
	FieldValue<bool> bPreventStructurePaintingField() { return { this, "AShooterGameState.bPreventStructurePainting" }; }
	FieldValue<bool> bAllowCharacterCreationField() { return { this, "AShooterGameState.bAllowCharacterCreation" }; }
	FieldValue<bool> bAllowSpawnPointSelectionField() { return { this, "AShooterGameState.bAllowSpawnPointSelection" }; }
	FieldValue<int> MaxTamedDinosField() { return { this, "AShooterGameState.MaxTamedDinos" }; }
	FieldValue<bool> bDisableSpawnAnimationsField() { return { this, "AShooterGameState.bDisableSpawnAnimations" }; }
	FieldValue<FString> PlayerListStringField() { return { this, "AShooterGameState.PlayerListString" }; }
	FieldValue<float> GlobalSpoilingTimeMultiplierField() { return { this, "AShooterGameState.GlobalSpoilingTimeMultiplier" }; }
	FieldValue<float> GlobalItemDecompositionTimeMultiplierField() { return { this, "AShooterGameState.GlobalItemDecompositionTimeMultiplier" }; }
	FieldValue<int> MaxNumberOfPlayersInTribeField() { return { this, "AShooterGameState.MaxNumberOfPlayersInTribe" }; }
	FieldValue<float> GlobalCorpseDecompositionTimeMultiplierField() { return { this, "AShooterGameState.GlobalCorpseDecompositionTimeMultiplier" }; }
	FieldValue<float> EggHatchSpeedMultiplierField() { return { this, "AShooterGameState.EggHatchSpeedMultiplier" }; }
	FieldValue<bool> bAllowPaintingWithoutResourcesField() { return { this, "AShooterGameState.bAllowPaintingWithoutResources" }; }
	FieldValue<bool> bEnableExtraStructurePreventionVolumesField() { return { this, "AShooterGameState.bEnableExtraStructurePreventionVolumes" }; }
	FieldValue<long double> LastServerSaveTimeField() { return { this, "AShooterGameState.LastServerSaveTime" }; }
	FieldValue<float> ServerSaveIntervalField() { return { this, "AShooterGameState.ServerSaveInterval" }; }
	FieldValue<float> TribeNameChangeCooldownField() { return { this, "AShooterGameState.TribeNameChangeCooldown" }; }
	FieldValue<bool> bAllowHideDamageSourceFromLogsField() { return { this, "AShooterGameState.bAllowHideDamageSourceFromLogs" }; }
	FieldValue<UAudioComponent *> DynamicMusicAudioComponentField() { return { this, "AShooterGameState.DynamicMusicAudioComponent" }; }
	FieldValue<UAudioComponent *> DynamicMusicAudioComponent2Field() { return { this, "AShooterGameState.DynamicMusicAudioComponent2" }; }
	FieldValue<bool> bPlayingDynamicMusicField() { return { this, "AShooterGameState.bPlayingDynamicMusic" }; }
	FieldValue<bool> bPlayingDynamicMusic1Field() { return { this, "AShooterGameState.bPlayingDynamicMusic1" }; }
	FieldValue<bool> bPlayingDynamicMusic2Field() { return { this, "AShooterGameState.bPlayingDynamicMusic2" }; }
	FieldValue<float> LastHadMusicTimeField() { return { this, "AShooterGameState.LastHadMusicTime" }; }
	FieldValue<TArray<FLevelExperienceRamp>> LevelExperienceRampOverridesField() { return { this, "AShooterGameState.LevelExperienceRampOverrides" }; }
	FieldValue<TArray<FString>> PreventDinoTameClassNamesField() { return { this, "AShooterGameState.PreventDinoTameClassNames" }; }
	FieldValue<float> ListenServerTetherDistanceMultiplierField() { return { this, "AShooterGameState.ListenServerTetherDistanceMultiplier" }; }
	FieldValue<FString> PGMapNameField() { return { this, "AShooterGameState.PGMapName" }; }
	FieldValue<TArray<int>> SupportedSpawnRegionsField() { return { this, "AShooterGameState.SupportedSpawnRegions" }; }
	FieldValue<USoundBase *> StaticOverrideMusicField() { return { this, "AShooterGameState.StaticOverrideMusic" }; }
	FieldValue<bool> bEnableDeathTeamSpectatorField() { return { this, "AShooterGameState.bEnableDeathTeamSpectator" }; }
	FieldValue<FVector> PlayerFloatingHUDOffsetField() { return { this, "AShooterGameState.PlayerFloatingHUDOffset" }; }
	FieldValue<float> PlayerFloatingHUDOffsetScreenYField() { return { this, "AShooterGameState.PlayerFloatingHUDOffsetScreenY" }; }
	FieldValue<float> StructureDamageRepairCooldownField() { return { this, "AShooterGameState.StructureDamageRepairCooldown" }; }
	FieldValue<bool> bForceAllStructureLockingField() { return { this, "AShooterGameState.bForceAllStructureLocking" }; }
	FieldValue<bool> bAllowCustomRecipesField() { return { this, "AShooterGameState.bAllowCustomRecipes" }; }
	FieldValue<bool> bAllowRaidDinoFeedingField() { return { this, "AShooterGameState.bAllowRaidDinoFeeding" }; }
	FieldValue<float> CustomRecipeEffectivenessMultiplierField() { return { this, "AShooterGameState.CustomRecipeEffectivenessMultiplier" }; }
	FieldValue<float> CustomRecipeSkillMultiplierField() { return { this, "AShooterGameState.CustomRecipeSkillMultiplier" }; }
	FieldValue<USoundBase *> OverrideAreaMusicField() { return { this, "AShooterGameState.OverrideAreaMusic" }; }
	FieldValue<FVector> OverrideAreaMusicPositionField() { return { this, "AShooterGameState.OverrideAreaMusicPosition" }; }
	FieldValue<float> OverrideAreaMusicRangeField() { return { this, "AShooterGameState.OverrideAreaMusicRange" }; }
	FieldValue<bool> bAllowUnclaimDinosField() { return { this, "AShooterGameState.bAllowUnclaimDinos" }; }
	FieldValue<float> FloatingHUDRangeField() { return { this, "AShooterGameState.FloatingHUDRange" }; }
	FieldValue<float> FloatingChatRangeField() { return { this, "AShooterGameState.FloatingChatRange" }; }
	FieldValue<int> ExtinctionEventTimeIntervalField() { return { this, "AShooterGameState.ExtinctionEventTimeInterval" }; }
	FieldValue<float> ExtinctionEventPercentField() { return { this, "AShooterGameState.ExtinctionEventPercent" }; }
	FieldValue<int> ExtinctionEventSecondsRemainingField() { return { this, "AShooterGameState.ExtinctionEventSecondsRemaining" }; }
	FieldValue<bool> bDoExtinctionEventField() { return { this, "AShooterGameState.bDoExtinctionEvent" }; }
	FieldValue<bool> bPreventOfflinePvPField() { return { this, "AShooterGameState.bPreventOfflinePvP" }; }
	FieldValue<bool> bPvPDinoDecayField() { return { this, "AShooterGameState.bPvPDinoDecay" }; }
	FieldValue<bool> bForceUseInventoryAppendsField() { return { this, "AShooterGameState.bForceUseInventoryAppends" }; }
	FieldValue<bool> bOverideStructurePlatformPreventionField() { return { this, "AShooterGameState.bOverideStructurePlatformPrevention" }; }
	FieldValue<TArray<int>> PreventOfflinePvPLiveTeamsField() { return { this, "AShooterGameState.PreventOfflinePvPLiveTeams" }; }
	FieldValue<TArray<int>> PreventOfflinePvPExpiringTeamsField() { return { this, "AShooterGameState.PreventOfflinePvPExpiringTeams" }; }
	FieldValue<TArray<double>> PreventOfflinePvPExpiringTimesField() { return { this, "AShooterGameState.PreventOfflinePvPExpiringTimes" }; }
	FieldValue<TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0> >> PreventOfflinePvPLiveTimesField() { return { this, "AShooterGameState.PreventOfflinePvPLiveTimes" }; }
	FieldValue<TMap<int, double, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, double, 0> >> PreventOfflinePvPFirstLiveTimeField() { return { this, "AShooterGameState.PreventOfflinePvPFirstLiveTime" }; }
	FieldValue<bool> bAllowAnyoneBabyImprintCuddleField() { return { this, "AShooterGameState.bAllowAnyoneBabyImprintCuddle" }; }
	FieldValue<bool> bDisableImprintDinoBuffField() { return { this, "AShooterGameState.bDisableImprintDinoBuff" }; }
	FieldValue<int> MaxPersonalTamedDinosField() { return { this, "AShooterGameState.MaxPersonalTamedDinos" }; }
	FieldValue<bool> bIsCustomMapField() { return { this, "AShooterGameState.bIsCustomMap" }; }
	FieldValue<bool> bIsClientField() { return { this, "AShooterGameState.bIsClient" }; }
	FieldValue<bool> bIsDedicatedServerField() { return { this, "AShooterGameState.bIsDedicatedServer" }; }
	FieldValue<FString> ClusterIdField() { return { this, "AShooterGameState.ClusterId" }; }
	FieldValue<FString> AmazonS3AccessKeyIDField() { return { this, "AShooterGameState.AmazonS3AccessKeyID" }; }
	FieldValue<FString> AmazonS3SecretAccessKeyField() { return { this, "AShooterGameState.AmazonS3SecretAccessKey" }; }
	FieldValue<FString> AmazonS3BucketNameField() { return { this, "AShooterGameState.AmazonS3BucketName" }; }
	FieldValue<FString> ServerSessionNameField() { return { this, "AShooterGameState.ServerSessionName" }; }
	FieldValue<bool> bPreventTribeAlliancesField() { return { this, "AShooterGameState.bPreventTribeAlliances" }; }
	FieldValue<FString> LoadForceRespawnDinosTagField() { return { this, "AShooterGameState.LoadForceRespawnDinosTag" }; }
	FieldValue<bool> bOnlyDecayUnsnappedCoreStructuresField() { return { this, "AShooterGameState.bOnlyDecayUnsnappedCoreStructures" }; }
	FieldValue<bool> bFastDecayUnsnappedCoreStructuresField() { return { this, "AShooterGameState.bFastDecayUnsnappedCoreStructures" }; }
	FieldValue<bool> bServerUseDinoListField() { return { this, "AShooterGameState.bServerUseDinoList" }; }
	FieldValue<bool> bPvEAllowStructuresAtSupplyDropsField() { return { this, "AShooterGameState.bPvEAllowStructuresAtSupplyDrops" }; }
	FieldValue<bool> bAllowForceNetUpdateField() { return { this, "AShooterGameState.bAllowForceNetUpdate" }; }
	FieldValue<float> MinimumDinoReuploadIntervalField() { return { this, "AShooterGameState.MinimumDinoReuploadInterval" }; }
	FieldValue<float> HairGrowthSpeedMultiplierField() { return { this, "AShooterGameState.HairGrowthSpeedMultiplier" }; }
	FieldValue<float> FastDecayIntervalField() { return { this, "AShooterGameState.FastDecayInterval" }; }
	FieldValue<float> OxygenSwimSpeedStatMultiplierField() { return { this, "AShooterGameState.OxygenSwimSpeedStatMultiplier" }; }
	FieldValue<bool> bAllowMultipleAttachedC4Field() { return { this, "AShooterGameState.bAllowMultipleAttachedC4" }; }
	FieldValue<bool> bCrossARKAllowForeignDinoDownloadsField() { return { this, "AShooterGameState.bCrossARKAllowForeignDinoDownloads" }; }
	FieldValue<long double> LastPlayedDynamicMusic1Field() { return { this, "AShooterGameState.LastPlayedDynamicMusic1" }; }
	FieldValue<long double> LastPlayedDynamicMusic2Field() { return { this, "AShooterGameState.LastPlayedDynamicMusic2" }; }
	FieldValue<bool> bUseCorpseLocatorField() { return { this, "AShooterGameState.bUseCorpseLocator" }; }
	FieldValue<bool> bDisableStructurePlacementCollisionField() { return { this, "AShooterGameState.bDisableStructurePlacementCollision" }; }
	FieldValue<bool> bUseSingleplayerSettingsField() { return { this, "AShooterGameState.bUseSingleplayerSettings" }; }
	FieldValue<bool> bAllowPlatformSaddleMultiFloorsField() { return { this, "AShooterGameState.bAllowPlatformSaddleMultiFloors" }; }
	FieldValue<bool> bPreventSpawnAnimationsField() { return { this, "AShooterGameState.bPreventSpawnAnimations" }; }
	FieldValue<int> MaxAlliancesPerTribeField() { return { this, "AShooterGameState.MaxAlliancesPerTribe" }; }
	FieldValue<int> MaxTribesPerAllianceField() { return { this, "AShooterGameState.MaxTribesPerAlliance" }; }
	FieldValue<bool> bIsLegacyServerField() { return { this, "AShooterGameState.bIsLegacyServer" }; }
	FieldValue<bool> bDisableDinoDecayClaimingField() { return { this, "AShooterGameState.bDisableDinoDecayClaiming" }; }
	FieldValue<FName> UseStructurePreventionVolumeTagField() { return { this, "AShooterGameState.UseStructurePreventionVolumeTag" }; }
	FieldValue<int> MaxStructuresInSmallRadiusField() { return { this, "AShooterGameState.MaxStructuresInSmallRadius" }; }
	FieldValue<float> RadiusStructuresInSmallRadiusField() { return { this, "AShooterGameState.RadiusStructuresInSmallRadius" }; }
	FieldValue<bool> bUseTameLimitForStructuresOnlyField() { return { this, "AShooterGameState.bUseTameLimitForStructuresOnly" }; }
	FieldValue<bool> bLimitTurretsInRangeField() { return { this, "AShooterGameState.bLimitTurretsInRange" }; }
	FieldValue<float> LimitTurretsRangeField() { return { this, "AShooterGameState.LimitTurretsRange" }; }
	FieldValue<int> LimitTurretsNumField() { return { this, "AShooterGameState.LimitTurretsNum" }; }
	FieldValue<bool> bForceAllowAllStructuresField() { return { this, "AShooterGameState.bForceAllowAllStructures" }; }
	FieldValue<bool> bShowCreativeModeField() { return { this, "AShooterGameState.bShowCreativeMode" }; }
	FieldValue<int> AmbientSoundCheckIncrementField() { return { this, "AShooterGameState.AmbientSoundCheckIncrement" }; }
	FieldValue<float> PreventOfflinePvPConnectionInvincibleIntervalField() { return { this, "AShooterGameState.PreventOfflinePvPConnectionInvincibleInterval" }; }
	FieldValue<float> PassiveTameIntervalMultiplierField() { return { this, "AShooterGameState.PassiveTameIntervalMultiplier" }; }

	// Functions

	UObject * GetUObjectInterfaceHUDInterface() { return NativeCall<UObject *>(this, "AShooterGameState.GetUObjectInterfaceHUDInterface"); }
	static APrimalBuff * BaseSpawnBuffAndAttachToCharacter(UClass * Buff, APrimalCharacter * PrimalCharacter, float ExperiencePoints) { return NativeCall<APrimalBuff *, UClass *, APrimalCharacter *, float>(nullptr, "AShooterGameState.BaseSpawnBuffAndAttachToCharacter", Buff, PrimalCharacter, ExperiencePoints); }
	void Destroyed() { NativeCall<void>(this, "AShooterGameState.Destroyed"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void OnRep_SupportedSpawnRegions() { NativeCall<void>(this, "AShooterGameState.OnRep_SupportedSpawnRegions"); }
	void OnRep_ReplicateLocalizedChatRadius() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateLocalizedChatRadius"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.Tick", DeltaSeconds); }
	void UpdateDynamicMusic(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.UpdateDynamicMusic", DeltaSeconds); }
	void CreateCustomGameUI(AShooterPlayerController * SceneOwner) { NativeCall<void, AShooterPlayerController *>(this, "AShooterGameState.CreateCustomGameUI", SceneOwner); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterGameState.DrawHUD", HUD); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterGameState.PostInitializeComponents"); }
	float GetClientReplicationRateFor(UNetConnection * InConnection, AActor * InActor) { return NativeCall<float, UNetConnection *, AActor *>(this, "AShooterGameState.GetClientReplicationRateFor", InConnection, InActor); }
	static long double GetNetworkTimeDelta(AShooterGameState * gameState, long double netTime, bool bTimeUntil) { return NativeCall<long double, AShooterGameState *, long double, bool>(nullptr, "AShooterGameState.GetNetworkTimeDelta", gameState, netTime, bTimeUntil); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterGameState.LoadedFromSaveGame"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameState.BeginPlay"); }
	float GetMatineePlayRate(AActor * forMatineeActor) { return NativeCall<float, AActor *>(this, "AShooterGameState.GetMatineePlayRate", forMatineeActor); }
	void NotifyPlayerDied(AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *, APawn *, AActor *>(this, "AShooterGameState.NotifyPlayerDied", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	bool AllowDinoTame(APrimalDinoCharacter * DinoChar, AShooterPlayerController * ForPC) { return NativeCall<bool, APrimalDinoCharacter *, AShooterPlayerController *>(this, "AShooterGameState.AllowDinoTame", DinoChar, ForPC); }
	bool AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter> DinoCharClass, AShooterPlayerController * ForPC) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>, AShooterPlayerController *>(this, "AShooterGameState.AllowDinoClassTame", DinoCharClass, ForPC); }
	TArray<AShooterPlayerController *> * BaseGetAllShooterControllers(TArray<AShooterPlayerController *> * result) { return NativeCall<TArray<AShooterPlayerController *> *, TArray<AShooterPlayerController *> *>(this, "AShooterGameState.BaseGetAllShooterControllers", result); }
	TArray<AShooterCharacter *> * BaseGetAllShooterCharactersOfTeam(TArray<AShooterCharacter *> * result, int Team) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *, int>(this, "AShooterGameState.BaseGetAllShooterCharactersOfTeam", result, Team); }
	TArray<AShooterCharacter *> * BaseGetAllShooterCharacters(TArray<AShooterCharacter *> * result) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *>(this, "AShooterGameState.BaseGetAllShooterCharacters", result); }
	TArray<APrimalDinoCharacter *> * BaseGetAllDinoCharactersOfTeam(TArray<APrimalDinoCharacter *> * result, int Team) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, int>(this, "AShooterGameState.BaseGetAllDinoCharactersOfTeam", result, Team); }
	void InitializedGameState() { NativeCall<void>(this, "AShooterGameState.InitializedGameState"); }
	bool IsTeamIDInvincible(int TargetingTeamID, bool bInvincibleOnlyWhenOffline) { return NativeCall<bool, int, bool>(this, "AShooterGameState.IsTeamIDInvincible", TargetingTeamID, bInvincibleOnlyWhenOffline); }
	long double GetOfflineDamagePreventionTime(int TargetingTeamID) { return NativeCall<long double, int>(this, "AShooterGameState.GetOfflineDamagePreventionTime", TargetingTeamID); }
	void NetUpdateOfflinePvPLiveTeams_Implementation(TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int> *>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams_Implementation", NewPreventOfflinePvPLiveTeams); }
	void NetUpdateOfflinePvPExpiringTeams_Implementation(TArray<int> * NewPreventOfflinePvPExpiringTeams, TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int> *, TArray<double> *>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams_Implementation", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void UpdatePreventOfflinePvPStatus() { NativeCall<void>(this, "AShooterGameState.UpdatePreventOfflinePvPStatus"); }
	void AddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float>(this, "AShooterGameState.AddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime); }
	void AddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID) { NativeCall<void, FVector, int, int>(this, "AShooterGameState.AddFloatingDamageText", AtLocation, DamageAmount, FromTeamID); }
	void NetAddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID, int OnlySendToTeamID) { NativeCall<void, FVector, int, int, int>(this, "AShooterGameState.NetAddFloatingDamageText", AtLocation, DamageAmount, FromTeamID, OnlySendToTeamID); }
	void NetAddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime, int OnlySendToTeamID) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float, int>(this, "AShooterGameState.NetAddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime, OnlySendToTeamID); }
	FString * GetCleanServerSessionName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameState.GetCleanServerSessionName", result); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties) { NativeCall<void, bool>(this, "AShooterGameState.ForceNetUpdate", bDormantDontReplicateProperties); }
	void WorldCompositionRescan() { NativeCall<void>(this, "AShooterGameState.WorldCompositionRescan"); }
	void HTTPGetRequest(FString InURL) { NativeCall<void, FString>(this, "AShooterGameState.HTTPGetRequest", InURL); }
	void HTTPPostRequest(FString InURL, FString Content) { NativeCall<void, FString, FString>(this, "AShooterGameState.HTTPPostRequest", InURL, Content); }
	void LevelAddedToWorld(ULevel * addedLevel) { NativeCall<void, ULevel *>(this, "AShooterGameState.LevelAddedToWorld", addedLevel); }
	bool AllowDownloadDino_Implementation(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.AllowDownloadDino_Implementation", TheDinoClass); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameState.IsEngramClassHidden", ForItemClass); }
	static void StaticRegisterNativesAShooterGameState() { NativeCall<void>(nullptr, "AShooterGameState.StaticRegisterNativesAShooterGameState"); }
	bool AllowDownloadDino(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.AllowDownloadDino", TheDinoClass); }
	void NetUpdateOfflinePvPExpiringTeams(TArray<int> * NewPreventOfflinePvPExpiringTeams, TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, TArray<int> *, TArray<double> *>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void NetUpdateOfflinePvPLiveTeams(TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, TArray<int> *>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams", NewPreventOfflinePvPLiveTeams); }
};

struct AGameSession
{
	FieldValue<int> MaxSpectatorsField() { return { this, "AGameSession.MaxSpectators" }; }
	FieldValue<int> MaxPlayersField() { return { this, "AGameSession.MaxPlayers" }; }
	FieldValue<char> MaxSplitscreensPerConnectionField() { return { this, "AGameSession.MaxSplitscreensPerConnection" }; }
	FieldValue<bool> bRequiresPushToTalkField() { return { this, "AGameSession.bRequiresPushToTalk" }; }
	FieldValue<FName> SessionNameField() { return { this, "AGameSession.SessionName" }; }

	// Functions

	bool RequiresPushToTalk() { return NativeCall<bool>(this, "AGameSession.RequiresPushToTalk"); }
	void InitOptions(FString * Options) { NativeCall<void, FString *>(this, "AGameSession.InitOptions", Options); }
	bool ProcessAutoLogin() { return NativeCall<bool>(this, "AGameSession.ProcessAutoLogin"); }
	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, FUniqueNetId * UserId, FString * Error) { NativeCall<void, int, bool, FUniqueNetId *, FString *>(this, "AGameSession.OnLoginComplete", LocalUserNum, bWasSuccessful, UserId, Error); }
	FString * ApproveLogin(FString * result, FString * Options, FString * authToken) { return NativeCall<FString *, FString *, FString *, FString *>(this, "AGameSession.ApproveLogin", result, Options, authToken); }
	void RegisterPlayer(APlayerController * NewPlayer, TSharedPtr<FUniqueNetId> * UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController *, TSharedPtr<FUniqueNetId> *, bool>(this, "AGameSession.RegisterPlayer", NewPlayer, UniqueId, bWasFromInvite); }
	void UnregisterPlayer(APlayerController * ExitingPlayer) { NativeCall<void, APlayerController *>(this, "AGameSession.UnregisterPlayer", ExitingPlayer); }
	bool AtCapacity(bool bSpectator, FString * AuthToken) { return NativeCall<bool, bool, FString *>(this, "AGameSession.AtCapacity", bSpectator, AuthToken); }
	void NotifyLogout(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AGameSession.NotifyLogout", PC); }
	bool KickPlayer(APlayerController * KickedPlayer, FText * KickReason) { return NativeCall<bool, APlayerController *, FText *>(this, "AGameSession.KickPlayer", KickedPlayer, KickReason); }
	bool BanPlayer(APlayerController * BannedPlayer, FText * BanReason) { return NativeCall<bool, APlayerController *, FText *>(this, "AGameSession.BanPlayer", BannedPlayer, BanReason); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameSession.ReturnToMainMenuHost"); }
	bool TravelToSession(int ControllerId, FName InSessionName) { return NativeCall<bool, int, FName>(this, "AGameSession.TravelToSession", ControllerId, InSessionName); }
	void UpdateSessionJoinability(FName InSessionName, bool bPublicSearchable, bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly) { NativeCall<void, FName, bool, bool, bool, bool>(this, "AGameSession.UpdateSessionJoinability", InSessionName, bPublicSearchable, bAllowInvites, bJoinViaPresence, bJoinViaPresenceFriendsOnly); }
};

struct AShooterGameSession : AGameSession
{
	FieldValue<TArray<UNetConnection *>> FailedAuthTokenClientConnectionsField() { return { this, "AShooterGameSession.FailedAuthTokenClientConnections" }; }
	FieldValue<TArray<FUniqueNetIdUInt64>> FailedAuthTokenClientUniqueIDsField() { return { this, "AShooterGameSession.FailedAuthTokenClientUniqueIDs" }; }
	FieldValue<bool> bFoundSessionField() { return { this, "AShooterGameSession.bFoundSession" }; }

	// Functions

	void OnStartOnlineGameComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnStartOnlineGameComplete", SessionName, bWasSuccessful); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasStarted"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasEnded"); }
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnCreateSessionComplete", SessionName, bWasSuccessful); }
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnDestroySessionComplete", SessionName, bWasSuccessful); }
	void DelayedSessionDelete() { NativeCall<void>(this, "AShooterGameSession.DelayedSessionDelete"); }
	void InitOptions(FString * Options) { NativeCall<void, FString *>(this, "AShooterGameSession.InitOptions", Options); }
	void RegisterServer() { NativeCall<void>(this, "AShooterGameSession.RegisterServer"); }
	void UpdatePublishedSession() { NativeCall<void>(this, "AShooterGameSession.UpdatePublishedSession"); }
	FString * ApproveLogin(FString * result, FString * Options, FString * authToken) { return NativeCall<FString *, FString *, FString *, FString *>(this, "AShooterGameSession.ApproveLogin", result, Options, authToken); }
	void OnCheckAuthTokenComplete(bool bWasSuccessful, FUniqueNetId * UserId) { NativeCall<void, bool, FUniqueNetId *>(this, "AShooterGameSession.OnCheckAuthTokenComplete", bWasSuccessful, UserId); }
	void OnNumConnectedPlayersChanged(int NewPlayersCount) { NativeCall<void, int>(this, "AShooterGameSession.OnNumConnectedPlayersChanged", NewPlayersCount); }
	void Tick(float __formal) { NativeCall<void, float>(this, "AShooterGameSession.Tick", __formal); }
	void OnFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "AShooterGameSession.OnFindSessionsComplete", bWasSuccessful); }
	void OnFoundSession() { NativeCall<void>(this, "AShooterGameSession.OnFoundSession"); }
	void CancelFindSessions() { NativeCall<void>(this, "AShooterGameSession.CancelFindSessions"); }
	bool JoinSession(TSharedPtr<FUniqueNetId> UserId, FName SessionName, int SessionIndexInSearchResults) { return NativeCall<bool, TSharedPtr<FUniqueNetId>, FName, int>(this, "AShooterGameSession.JoinSession", UserId, SessionName, SessionIndexInSearchResults); }
	bool TravelToSession(int ControllerId, FName SessionName) { return NativeCall<bool, int, FName>(this, "AShooterGameSession.TravelToSession", ControllerId, SessionName); }
	void Restart() { NativeCall<void>(this, "AShooterGameSession.Restart"); }
};
