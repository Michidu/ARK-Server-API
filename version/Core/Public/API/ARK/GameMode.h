#pragma once

#include "API/UE/UE.h"
#include "API/Enums.h"

#include "API/UE/Containers/Map.h"

struct UWorld : UObject
{
	struct InitializationValues
	{
		unsigned __int32 bInitializeScenes : 1;
		unsigned __int32 bAllowAudioPlayback : 1;
		unsigned __int32 bRequiresHitProxies : 1;
		unsigned __int32 bCreatePhysicsScene : 1;
		unsigned __int32 bCreateNavigation : 1;
		unsigned __int32 bCreateAISystem : 1;
		unsigned __int32 bShouldSimulatePhysics : 1;
		unsigned __int32 bEnableTraceCollision : 1;
		unsigned __int32 bTransactional : 1;
		unsigned __int32 bCreateFXSystem : 1;
	};

	FieldValue<TArray<TSubclassOf<AActor>>> ActorsClassesAllowedToSaveField() { return { this, "UWorld.ActorsClassesAllowedToSave" }; }
	FieldValue<bool> bIsIdleField() { return { this, "UWorld.bIsIdle" }; }
	FieldValue<TArray<TWeakObjectPtr<AActor>>> LocalStasisActorsField() { return { this, "UWorld.LocalStasisActors" }; }
	FieldValue<TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>> LevelNameHashField() { return { this, "UWorld.LevelNameHash" }; }
	FieldValue<ULevel *> PersistentLevelField() { return { this, "UWorld.PersistentLevel" }; }
	FieldValue<AGameState *> GameStateField() { return { this, "UWorld.GameState" }; }
	FieldValue<TArray<UObject *>> ExtraReferencedObjectsField() { return { this, "UWorld.ExtraReferencedObjects" }; }
	FieldValue<FString> StreamingLevelsPrefixField() { return { this, "UWorld.StreamingLevelsPrefix" }; }
	FieldValue<ULevel *> CurrentLevelPendingVisibilityField() { return { this, "UWorld.CurrentLevelPendingVisibility" }; }
	FieldValue<TArray<FVector>> ViewLocationsRenderedLastFrameField() { return { this, "UWorld.ViewLocationsRenderedLastFrame" }; }
	FieldValue<AGameMode *> AuthorityGameModeField() { return { this, "UWorld.AuthorityGameMode" }; }
	FieldValue<TArray<ULevel *>> LevelsField() { return { this, "UWorld.Levels" }; }
	FieldValue<TArray<AActor *>> NetworkActorsField() { return { this, "UWorld.NetworkActors" }; }
	FieldValue<ULevel *> CurrentLevelField() { return { this, "UWorld.CurrentLevel" }; }
	FieldValue<int> FrameCounterField() { return { this, "UWorld.FrameCounter" }; }
	FieldValue<bool> GamePreviewField() { return { this, "UWorld.GamePreview" }; }
	FieldValue<TMap<FString, TArray<TArray<TArray<unsigned int>>>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, TArray<TArray<TArray<unsigned int>>>, 0> >> LocalInstancedStaticMeshComponentInstancesVisibilityStateField() { return { this, "UWorld.LocalInstancedStaticMeshComponentInstancesVisibilityState" }; }
	FieldValue<TMap<FName, TWeakObjectPtr<UClass>, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, TWeakObjectPtr<UClass>, 0> >> PrioritizedObjectMapField() { return { this, "UWorld.PrioritizedObjectMap" }; }
	FieldValue<TArray<TAutoWeakObjectPtr<AController>>> ControllerListField() { return { this, "UWorld.ControllerList" }; }
	FieldValue<TArray<TAutoWeakObjectPtr<APlayerController>>> PlayerControllerListField() { return { this, "UWorld.PlayerControllerList" }; }
	FieldValue<TArray<TAutoWeakObjectPtr<APawn>>> PawnListField() { return { this, "UWorld.PawnList" }; }
	FieldValue<TSet<TWeakObjectPtr<UActorComponent>, DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>> ComponentsThatNeedEndOfFrameUpdateField() { return { this, "UWorld.ComponentsThatNeedEndOfFrameUpdate" }; }
	FieldValue<TSet<TWeakObjectPtr<UActorComponent>, DefaultKeyFuncs<TWeakObjectPtr<UActorComponent>, 0>, FDefaultSetAllocator>> ComponentsThatNeedEndOfFrameUpdate_OnGameThreadField() { return { this, "UWorld.ComponentsThatNeedEndOfFrameUpdate_OnGameThread" }; }
	FieldValue<TMap<TWeakObjectPtr<UBlueprint>, TWeakObjectPtr<UObject>, FDefaultSetAllocator, TDefaultMapKeyFuncs<TWeakObjectPtr<UBlueprint>, TWeakObjectPtr<UObject>, 0> >> BlueprintObjectsBeingDebuggedField() { return { this, "UWorld.BlueprintObjectsBeingDebugged" }; }
	FieldValue<bool> bRequiresHitProxiesField() { return { this, "UWorld.bRequiresHitProxies" }; }
	FieldValue<long double> BuildStreamingDataTimerField() { return { this, "UWorld.BuildStreamingDataTimer" }; }
	FieldValue<bool> bInTickField() { return { this, "UWorld.bInTick" }; }
	FieldValue<bool> bIsBuiltField() { return { this, "UWorld.bIsBuilt" }; }
	FieldValue<bool> bTickNewlySpawnedField() { return { this, "UWorld.bTickNewlySpawned" }; }
	FieldValue<bool> bPostTickComponentUpdateField() { return { this, "UWorld.bPostTickComponentUpdate" }; }
	FieldValue<int> PlayerNumField() { return { this, "UWorld.PlayerNum" }; }
	FieldValue<float> TimeSinceLastPendingKillPurgeField() { return { this, "UWorld.TimeSinceLastPendingKillPurge" }; }
	FieldValue<bool> FullPurgeTriggeredField() { return { this, "UWorld.FullPurgeTriggered" }; }
	FieldValue<bool> bShouldDelayGarbageCollectField() { return { this, "UWorld.bShouldDelayGarbageCollect" }; }
	FieldValue<bool> bIsWorldInitializedField() { return { this, "UWorld.bIsWorldInitialized" }; }
	FieldValue<int> AllowLevelLoadOverrideField() { return { this, "UWorld.AllowLevelLoadOverride" }; }
	FieldValue<int> StreamingVolumeUpdateDelayField() { return { this, "UWorld.StreamingVolumeUpdateDelay" }; }
	FieldValue<bool> bIsLevelStreamingFrozenField() { return { this, "UWorld.bIsLevelStreamingFrozen" }; }
	FieldValue<bool> bShouldForceUnloadStreamingLevelsField() { return { this, "UWorld.bShouldForceUnloadStreamingLevels" }; }
	FieldValue<bool> bShouldForceVisibleStreamingLevelsField() { return { this, "UWorld.bShouldForceVisibleStreamingLevels" }; }
	FieldValue<bool> bDoDelayedUpdateCullDistanceVolumesField() { return { this, "UWorld.bDoDelayedUpdateCullDistanceVolumes" }; }
	FieldValue<TEnumAsByte<enum EWorldType::Type>> WorldTypeField() { return { this, "UWorld.WorldType" }; }
	FieldValue<bool> bIsRunningConstructionScriptField() { return { this, "UWorld.bIsRunningConstructionScript" }; }
	FieldValue<bool> bShouldSimulatePhysicsField() { return { this, "UWorld.bShouldSimulatePhysics" }; }
	FieldValue<FName> DebugDrawTraceTagField() { return { this, "UWorld.DebugDrawTraceTag" }; }
	FieldValue<long double> LastTimeUnbuiltLightingWasEncounteredField() { return { this, "UWorld.LastTimeUnbuiltLightingWasEncountered" }; }
	FieldValue<long double> TimeSecondsField() { return { this, "UWorld.TimeSeconds" }; }
	FieldValue<long double> LoadedAtTimeSecondsField() { return { this, "UWorld.LoadedAtTimeSeconds" }; }
	FieldValue<long double> RealTimeSecondsField() { return { this, "UWorld.RealTimeSeconds" }; }
	FieldValue<long double> AudioTimeSecondsField() { return { this, "UWorld.AudioTimeSeconds" }; }
	FieldValue<float> DeltaTimeSecondsField() { return { this, "UWorld.DeltaTimeSeconds" }; }
	FieldValue<float> PauseDelayField() { return { this, "UWorld.PauseDelay" }; }
	FieldValue<unsigned int> StasisThisFrameField() { return { this, "UWorld.StasisThisFrame" }; }
	FieldValue<unsigned int> UnStasisThisFrameField() { return { this, "UWorld.UnStasisThisFrame" }; }
	FieldValue<unsigned int> StasisOssilationThisFrameField() { return { this, "UWorld.StasisOssilationThisFrame" }; }
	FieldValue<unsigned int> StasisThisFrameMaxField() { return { this, "UWorld.StasisThisFrameMax" }; }
	FieldValue<unsigned int> UnStasisThisFrameMaxField() { return { this, "UWorld.UnStasisThisFrameMax" }; }
	FieldValue<unsigned int> StasisOssilationThisFrameMaxField() { return { this, "UWorld.StasisOssilationThisFrameMax" }; }
	FieldValue<float> StasisThisFrameAvgField() { return { this, "UWorld.StasisThisFrameAvg" }; }
	FieldValue<float> UnStasisThisFrameAvgField() { return { this, "UWorld.UnStasisThisFrameAvg" }; }
	FieldValue<float> StasisOssilationThisFrameAvgField() { return { this, "UWorld.StasisOssilationThisFrameAvg" }; }
	FieldValue<float> StasisMaxResetTimerField() { return { this, "UWorld.StasisMaxResetTimer" }; }
	FieldValue<unsigned int> LastUnstasisCountField() { return { this, "UWorld.LastUnstasisCount" }; }
	FieldValue<unsigned int> LoadedSaveIncrementorField() { return { this, "UWorld.LoadedSaveIncrementor" }; }
	FieldValue<unsigned int> CurrentSaveIncrementorField() { return { this, "UWorld.CurrentSaveIncrementor" }; }
	FieldValue<bool> bBlockAllOnNextLevelStreamingProcessField() { return { this, "UWorld.bBlockAllOnNextLevelStreamingProcess" }; }
	FieldValue<FIntVector> OriginLocationField() { return { this, "UWorld.OriginLocation" }; }
	FieldValue<FIntVector> RequestedOriginLocationField() { return { this, "UWorld.RequestedOriginLocation" }; }
	FieldValue<bool> bOriginOffsetThisFrameField() { return { this, "UWorld.bOriginOffsetThisFrame" }; }
	FieldValue<bool> bFlushingLevelStreamingField() { return { this, "UWorld.bFlushingLevelStreaming" }; }
	FieldValue<long double> ForceBlockLoadTimeoutField() { return { this, "UWorld.ForceBlockLoadTimeout" }; }
	FieldValue<FString> NextURLField() { return { this, "UWorld.NextURL" }; }
	FieldValue<float> NextSwitchCountdownField() { return { this, "UWorld.NextSwitchCountdown" }; }
	FieldValue<TArray<FName>> PreparingLevelNamesField() { return { this, "UWorld.PreparingLevelNames" }; }
	FieldValue<FName> CommittedPersistentLevelNameField() { return { this, "UWorld.CommittedPersistentLevelName" }; }
	FieldValue<FString> CurrentDayTimeField() { return { this, "UWorld.CurrentDayTime" }; }
	FieldValue<unsigned int> NumLightingUnbuiltObjectsField() { return { this, "UWorld.NumLightingUnbuiltObjects" }; }

	// Functions

	AActor * SpawnActor(UClass * Class, FVector * Location, FRotator * Rotation, FActorSpawnParameters * SpawnParameters) { return NativeCall<AActor *, UClass *, FVector *, FRotator *, FActorSpawnParameters *>(this, "UWorld.SpawnActor", Class, Location, Rotation, SpawnParameters); }
	bool DestroyActor(AActor * ThisActor, bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, AActor *, bool, bool>(this, "UWorld.DestroyActor", ThisActor, bNetForce, bShouldModifyLevel); }
	bool FindTeleportSpot(AActor * TestActor, FVector * TestLocation, FRotator TestRotation, FVector * TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor *, FVector *, FRotator, FVector *>(this, "UWorld.FindTeleportSpot", TestActor, TestLocation, TestRotation, TraceWorldGeometryFromLocation); }
	bool EncroachingBlockingGeometry(AActor * TestActor, FVector TestLocation, FRotator TestRotation, FVector * ProposedAdjustment, FVector * TraceWorldGeometryFromLocation) { return NativeCall<bool, AActor *, FVector, FRotator, FVector *, FVector *>(this, "UWorld.EncroachingBlockingGeometry", TestActor, TestLocation, TestRotation, ProposedAdjustment, TraceWorldGeometryFromLocation); }
	void SetMapNeedsLightingFullyRebuilt(int InNumLightingUnbuiltObjects) { NativeCall<void, int>(this, "UWorld.SetMapNeedsLightingFullyRebuilt", InNumLightingUnbuiltObjects); }
	void TickNetClient(float DeltaSeconds) { NativeCall<void, float>(this, "UWorld.TickNetClient", DeltaSeconds); }
	bool IsPaused() { return NativeCall<bool>(this, "UWorld.IsPaused"); }
	void ProcessLevelStreamingVolumes(FVector * OverrideViewLocation) { NativeCall<void, FVector *>(this, "UWorld.ProcessLevelStreamingVolumes", OverrideViewLocation); }
	void MarkActorComponentForNeededEndOfFrameUpdate(UActorComponent * Component, bool bForceGameThread) { NativeCall<void, UActorComponent *, bool>(this, "UWorld.MarkActorComponentForNeededEndOfFrameUpdate", Component, bForceGameThread); }
	void CleanupActors() { NativeCall<void>(this, "UWorld.CleanupActors"); }
	void UpdateAllReflectionCaptures() { NativeCall<void>(this, "UWorld.UpdateAllReflectionCaptures"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UWorld.PostDuplicate", bDuplicateForPIE); }
	void FinishDestroy() { NativeCall<void>(this, "UWorld.FinishDestroy"); }
	void PostLoad() { NativeCall<void>(this, "UWorld.PostLoad"); }
	bool PreSaveRoot(const wchar_t * Filename, TArray<FString> * AdditionalPackagesToCook) { return NativeCall<bool, const wchar_t *, TArray<FString> *>(this, "UWorld.PreSaveRoot", Filename, AdditionalPackagesToCook); }
	void PostSaveRoot(bool bCleanupIsRequired) { NativeCall<void, bool>(this, "UWorld.PostSaveRoot", bCleanupIsRequired); }
	void SetupParameterCollectionInstances() { NativeCall<void>(this, "UWorld.SetupParameterCollectionInstances"); }
	void UpdateParameterCollectionInstances(bool bUpdateInstanceUniformBuffers) { NativeCall<void, bool>(this, "UWorld.UpdateParameterCollectionInstances", bUpdateInstanceUniformBuffers); }
	void InitWorld(UWorld::InitializationValues IVS) { NativeCall<void, UWorld::InitializationValues>(this, "UWorld.InitWorld", IVS); }
	void InitializeNewWorld(UWorld::InitializationValues IVS) { NativeCall<void, UWorld::InitializationValues>(this, "UWorld.InitializeNewWorld", IVS); }
	void RemoveActor(AActor * Actor, bool bShouldModifyLevel) { NativeCall<void, AActor *, bool>(this, "UWorld.RemoveActor", Actor, bShouldModifyLevel); }
	bool AllowAudioPlayback() { return NativeCall<bool>(this, "UWorld.AllowAudioPlayback"); }
	void ClearWorldComponents() { NativeCall<void>(this, "UWorld.ClearWorldComponents"); }
	void UpdateWorldComponents(bool bRerunConstructionScripts, bool bCurrentLevelOnly) { NativeCall<void, bool, bool>(this, "UWorld.UpdateWorldComponents", bRerunConstructionScripts, bCurrentLevelOnly); }
	void UpdateCullDistanceVolumes() { NativeCall<void>(this, "UWorld.UpdateCullDistanceVolumes"); }
	void EnsureCollisionTreeIsBuilt() { NativeCall<void>(this, "UWorld.EnsureCollisionTreeIsBuilt"); }
	void AddToWorld(ULevel * Level, FTransform * LevelTransform, bool bAlwaysConsiderTimeLimit) { NativeCall<void, ULevel *, FTransform *, bool>(this, "UWorld.AddToWorld", Level, LevelTransform, bAlwaysConsiderTimeLimit); }
	void RemoveFromWorld(ULevel * Level) { NativeCall<void, ULevel *>(this, "UWorld.RemoveFromWorld", Level); }
	static FString * ConvertToPIEPackageName(FString * result, FString * PackageName, int PIEInstanceID) { return NativeCall<FString *, FString *, FString *, int>(nullptr, "UWorld.ConvertToPIEPackageName", result, PackageName, PIEInstanceID); }
	static FString * StripPIEPrefixFromPackageName(FString * result, FString * PrefixedName, FString * Prefix) { return NativeCall<FString *, FString *, FString *, FString *>(nullptr, "UWorld.StripPIEPrefixFromPackageName", result, PrefixedName, Prefix); }
	static UWorld * DuplicateWorldForPIE(FString * PackageName, UWorld * OwningWorld) { return NativeCall<UWorld *, FString *, UWorld *>(nullptr, "UWorld.DuplicateWorldForPIE", PackageName, OwningWorld); }
	bool AreAlwaysLoadedLevelsLoaded() { return NativeCall<bool>(this, "UWorld.AreAlwaysLoadedLevelsLoaded"); }
	bool AllowLevelLoadRequests() { return NativeCall<bool>(this, "UWorld.AllowLevelLoadRequests"); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld * NewWorld) { NativeCall<void, bool, bool, UWorld *>(this, "UWorld.CleanupWorld", bSessionEnded, bCleanupResources, NewWorld); }
	APlayerController * GetFirstPlayerController() { return NativeCall<APlayerController *>(this, "UWorld.GetFirstPlayerController"); }
	ULocalPlayer * GetFirstLocalPlayerFromController() { return NativeCall<ULocalPlayer *>(this, "UWorld.GetFirstLocalPlayerFromController"); }
	void AddController(AController * Controller) { NativeCall<void, AController *>(this, "UWorld.AddController", Controller); }
	void RemoveController(AController * Controller) { NativeCall<void, AController *>(this, "UWorld.RemoveController", Controller); }
	void AddNetworkActor(AActor * Actor) { NativeCall<void, AActor *>(this, "UWorld.AddNetworkActor", Actor); }
	void RemoveNetworkActor(AActor * Actor) { NativeCall<void, AActor *>(this, "UWorld.RemoveNetworkActor", Actor); }
	AWorldSettings * GetWorldSettings(bool bCheckStreamingPesistent, bool bChecked) { return NativeCall<AWorldSettings *, bool, bool>(this, "UWorld.GetWorldSettings", bCheckStreamingPesistent, bChecked); }
	float GetDefaultGravityZ() { return NativeCall<float>(this, "UWorld.GetDefaultGravityZ"); }
	FString * GetMapName(FString * result) { return NativeCall<FString *, FString *>(this, "UWorld.GetMapName", result); }
	void WelcomePlayer(UNetConnection * Connection) { NativeCall<void, UNetConnection *>(this, "UWorld.WelcomePlayer", Connection); }
	bool DestroySwappedPC(UNetConnection * Connection) { return NativeCall<bool, UNetConnection *>(this, "UWorld.DestroySwappedPC", Connection); }
	bool IsPreparingMapChange() { return NativeCall<bool>(this, "UWorld.IsPreparingMapChange"); }
	bool SetNewWorldOrigin(FIntVector InNewOriginLocation) { return NativeCall<bool, FIntVector>(this, "UWorld.SetNewWorldOrigin", InNewOriginLocation); }
	void NavigateTo(FIntVector InLocation) { NativeCall<void, FIntVector>(this, "UWorld.NavigateTo", InLocation); }
	void GetMatineeActors(TArray<AMatineeActor *> * OutMatineeActors) { NativeCall<void, TArray<AMatineeActor *> *>(this, "UWorld.GetMatineeActors", OutMatineeActors); }
	void SeamlessTravel(FString * SeamlessTravelURL, bool bAbsolute, FGuid MapPackageGuid) { NativeCall<void, FString *, bool, FGuid>(this, "UWorld.SeamlessTravel", SeamlessTravelURL, bAbsolute, MapPackageGuid); }
	bool IsInSeamlessTravel() { return NativeCall<bool>(this, "UWorld.IsInSeamlessTravel"); }
	void UpdateConstraintActors() { NativeCall<void>(this, "UWorld.UpdateConstraintActors"); }
	int GetActorCount() { return NativeCall<int>(this, "UWorld.GetActorCount"); }
	int GetNetRelevantActorCount() { return NativeCall<int>(this, "UWorld.GetNetRelevantActorCount"); }
	bool ContainsLevel(ULevel * InLevel) { return NativeCall<bool, ULevel *>(this, "UWorld.ContainsLevel", InLevel); }
	void BroadcastLevelsChanged() { NativeCall<void>(this, "UWorld.BroadcastLevelsChanged"); }
	bool IsLevelLoadedByName(FName * LevelName) { return NativeCall<bool, FName *>(this, "UWorld.IsLevelLoadedByName", LevelName); }
	FString * GetLocalURL(FString * result) { return NativeCall<FString *, FString *>(this, "UWorld.GetLocalURL", result); }
	FString * GetAddressURL(FString * result) { return NativeCall<FString *, FString *>(this, "UWorld.GetAddressURL", result); }
	static FString * RemovePIEPrefix(FString * result, FString * Source) { return NativeCall<FString *, FString *, FString *>(nullptr, "UWorld.RemovePIEPrefix", result, Source); }
	void ServerTravel(FString * FURL, bool bAbsolute, bool bShouldSkipGameNotify) { NativeCall<void, FString *, bool, bool>(this, "UWorld.ServerTravel", FURL, bAbsolute, bShouldSkipGameNotify); }
	UClass * GetModPrioritizedClass(FName * NameIn) { return NativeCall<UClass *, FName *>(this, "UWorld.GetModPrioritizedClass", NameIn); }
	bool LoadFromFile(FString * filename) { return NativeCall<bool, FString *>(this, "UWorld.LoadFromFile", filename); }
	void UpdateMemoryState(FName PackageName, bool bSave, ULevel * Level) { NativeCall<void, FName, bool, ULevel *>(this, "UWorld.UpdateMemoryState", PackageName, bSave, Level); }
	void AddToInternalOctree(UPrimitiveComponent * InComponent) { NativeCall<void, UPrimitiveComponent *>(this, "UWorld.AddToInternalOctree", InComponent); }
	void RemoveFromInternalOctree(UPrimitiveComponent * InComponent) { NativeCall<void, UPrimitiveComponent *>(this, "UWorld.RemoveFromInternalOctree", InComponent); }
	bool LineTraceSingle(FHitResult * OutHit, FVector * Start, FVector * End, FCollisionQueryParams * Params, FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, FHitResult *, FVector *, FVector *, FCollisionQueryParams *, FCollisionObjectQueryParams *>(this, "UWorld.LineTraceSingle", OutHit, Start, End, Params, ObjectQueryParams); }
	void StartAsyncTrace() { NativeCall<void>(this, "UWorld.StartAsyncTrace"); }
	void FinishAsyncTrace() { NativeCall<void>(this, "UWorld.FinishAsyncTrace"); }
	void FinishPhysicsSim() { NativeCall<void>(this, "UWorld.FinishPhysicsSim"); }
	static void StaticRegisterNativesUWorld() { NativeCall<void>(nullptr, "UWorld.StaticRegisterNativesUWorld"); }
};

struct UEngine : UObject
{
	FieldValue<UPrimalGlobals *> GameSingletonField() { return { this, "UEngine.GameSingleton" }; } // UObject *
};

struct UPrimalGlobals : UObject
{
	FieldValue<UPrimalGameData *> PrimalGameDataField() { return { this, "UPrimalGlobals.PrimalGameData" }; }
	FieldValue<UPrimalGameData *> PrimalGameDataOverrideField() { return { this, "UPrimalGlobals.PrimalGameDataOverride" }; }
};


// Level

struct ULevelBase
{
	//TTransArray<AActor *> GetActorsField() const { return GetNativeField<TTransArray<AActor *>>(this, "ULevelBase.Actors"); }
};

struct ULevel : ULevelBase
{
};

// Game Mode

struct AGameMode
{
	FieldValue<FName> MatchStateField() { return { this, "AGameMode.MatchState" }; }
	FieldValue<FString> OptionsStringField() { return { this, "AGameMode.OptionsString" }; }
	FieldValue<TSubclassOf<APawn>> DefaultPawnClassField() { return { this, "AGameMode.DefaultPawnClass" }; }
	FieldValue<TSubclassOf<AHUD>> HUDClassField() { return { this, "AGameMode.HUDClass" }; }
	FieldValue<int> NumSpectatorsField() { return { this, "AGameMode.NumSpectators" }; }
	FieldValue<int> NumPlayersField() { return { this, "AGameMode.NumPlayers" }; }
	FieldValue<int> NumBotsField() { return { this, "AGameMode.NumBots" }; }
	FieldValue<float> MinRespawnDelayField() { return { this, "AGameMode.MinRespawnDelay" }; }
	FieldValue<AGameSession *> GameSessionField() { return { this, "AGameMode.GameSession" }; }
	FieldValue<int> NumTravellingPlayersField() { return { this, "AGameMode.NumTravellingPlayers" }; }
	FieldValue<int> CurrentIDField() { return { this, "AGameMode.CurrentID" }; }
	FieldValue<FString> DefaultPlayerNameField() { return { this, "AGameMode.DefaultPlayerName" }; }
	FieldValue<TArray<APlayerStart *>> PlayerStartsField() { return { this, "AGameMode.PlayerStarts" }; }
	FieldValue<TSubclassOf<APlayerController>> PlayerControllerClassField() { return { this, "AGameMode.PlayerControllerClass" }; }
	FieldValue<TSubclassOf<ASpectatorPawn>> SpectatorClassField() { return { this, "AGameMode.SpectatorClass" }; }
	FieldValue<TSubclassOf<APlayerState>> PlayerStateClassField() { return { this, "AGameMode.PlayerStateClass" }; }
	FieldValue<TSubclassOf<AGameState>> GameStateClassField() { return { this, "AGameMode.GameStateClass" }; }
	FieldValue<AGameState *> GameStateField() { return { this, "AGameMode.GameState" }; }
	FieldValue<TArray<APlayerState *>> InactivePlayerArrayField() { return { this, "AGameMode.InactivePlayerArray" }; }
	FieldValue<UAntiDupeTransactionLog *> AntiDupeTransactionLogField() { return { this, "AGameMode.AntiDupeTransactionLog" }; }
	FieldValue<float> InactivePlayerStateLifeSpanField() { return { this, "AGameMode.InactivePlayerStateLifeSpan" }; }
	FieldValue<TArray<APlayerStart *>> UsedPlayerStartsField() { return { this, "AGameMode.UsedPlayerStarts" }; }

	// Functions

	FString * GetNetworkNumber(FString * result) { return NativeCall<FString *, FString *>(this, "AGameMode.GetNetworkNumber", result); }
	void SwapPlayerControllers(APlayerController * OldPC, APlayerController * NewPC) { NativeCall<void, APlayerController *, APlayerController *>(this, "AGameMode.SwapPlayerControllers", OldPC, NewPC); }
	void ForceClearUnpauseDelegates(AActor * PauseActor) { NativeCall<void, AActor *>(this, "AGameMode.ForceClearUnpauseDelegates", PauseActor); }
	void InitGame(FString * MapName, FString * Options, FString * ErrorMessage) { NativeCall<void, FString *, FString *, FString *>(this, "AGameMode.InitGame", MapName, Options, ErrorMessage); }
	void RestartGame() { NativeCall<void>(this, "AGameMode.RestartGame"); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameMode.ReturnToMainMenuHost"); }
	void PostLogin(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.PostLogin", NewPlayer); }
	bool ShouldStartInCinematicMode(bool * OutHidePlayer, bool * OutHideHUD, bool * OutDisableMovement, bool * OutDisableTurning) { return NativeCall<bool, bool *, bool *, bool *, bool *>(this, "AGameMode.ShouldStartInCinematicMode", OutHidePlayer, OutHideHUD, OutDisableMovement, OutDisableTurning); }
	void SetPlayerDefaults(APawn * PlayerPawn) { NativeCall<void, APawn *>(this, "AGameMode.SetPlayerDefaults", PlayerPawn); }
	void Logout(AController * Exiting) { NativeCall<void, AController *>(this, "AGameMode.Logout", Exiting); }
	void InitGameState() { NativeCall<void>(this, "AGameMode.InitGameState"); }
	AActor * FindPlayerStart(AController * Player, FString * IncomingName) { return NativeCall<AActor *, AController *, FString *>(this, "AGameMode.FindPlayerStart", Player, IncomingName); }
	void PreInitializeComponents() { NativeCall<void>(this, "AGameMode.PreInitializeComponents"); }
	void RestartPlayer(AController * NewPlayer) { NativeCall<void, AController *>(this, "AGameMode.RestartPlayer", NewPlayer); }
	void StartPlay() { NativeCall<void>(this, "AGameMode.StartPlay"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>(this, "AGameMode.HandleMatchIsWaitingToStart"); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch"); }
	void StartMatch() { NativeCall<void>(this, "AGameMode.StartMatch"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AGameMode.HandleMatchHasStarted"); }
	void EndMatch() { NativeCall<void>(this, "AGameMode.EndMatch"); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AGameMode.HandleMatchHasEnded"); }
	void StartToLeaveMap() { NativeCall<void>(this, "AGameMode.StartToLeaveMap"); }
	void AbortMatch() { NativeCall<void>(this, "AGameMode.AbortMatch"); }
	bool HasMatchStarted() { return NativeCall<bool>(this, "AGameMode.HasMatchStarted"); }
	bool IsMatchInProgress() { return NativeCall<bool>(this, "AGameMode.IsMatchInProgress"); }
	bool HasMatchEnded() { return NativeCall<bool>(this, "AGameMode.HasMatchEnded"); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>(this, "AGameMode.SetMatchState", NewState); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AGameMode.Tick", DeltaSeconds); }
	void ResetLevel() { NativeCall<void>(this, "AGameMode.ResetLevel"); }
	void HandleSeamlessTravelPlayer(AController ** C) { NativeCall<void, AController **>(this, "AGameMode.HandleSeamlessTravelPlayer", C); }
	void SetSeamlessTravelViewTarget(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AGameMode.SetSeamlessTravelViewTarget", PC); }
	void ProcessServerTravel(FString * URL, bool bAbsolute) { NativeCall<void, FString *, bool>(this, "AGameMode.ProcessServerTravel", URL, bAbsolute); }
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor *> * ActorList) { NativeCall<void, bool, TArray<AActor *> *>(this, "AGameMode.GetSeamlessTravelActorList", bToEntry, ActorList); }
	void SetBandwidthLimit(float AsyncIOBandwidthLimit) { NativeCall<void, float>(this, "AGameMode.SetBandwidthLimit", AsyncIOBandwidthLimit); }
	FString * InitNewPlayer(FString * result, APlayerController * NewPlayerController, TSharedPtr<FUniqueNetId> * UniqueId, FString * Options, FString * Portal) { return NativeCall<FString *, FString *, APlayerController *, TSharedPtr<FUniqueNetId> *, FString *, FString *>(this, "AGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	bool MustSpectate(APlayerController * NewPlayerController) { return NativeCall<bool, APlayerController *>(this, "AGameMode.MustSpectate", NewPlayerController); }
	APlayerController * Login(UPlayer * NewPlayer, FString * Portal, FString * Options, TSharedPtr<FUniqueNetId> * UniqueId, FString * ErrorMessage) { return NativeCall<APlayerController *, UPlayer *, FString *, FString *, TSharedPtr<FUniqueNetId> *, FString *>(this, "AGameMode.Login", NewPlayer, Portal, Options, UniqueId, ErrorMessage); }
	void Reset() { NativeCall<void>(this, "AGameMode.Reset"); }
	void RemovePlayerControllerFromPlayerCount(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AGameMode.RemovePlayerControllerFromPlayerCount", PC); }
	int GetNumPlayers() { return NativeCall<int>(this, "AGameMode.GetNumPlayers"); }
	void ClearPause() { NativeCall<void>(this, "AGameMode.ClearPause"); }
	bool GrabOption(FString * Options, FString * Result) { return NativeCall<bool, FString *, FString *>(this, "AGameMode.GrabOption", Options, Result); }
	void GetKeyValue(FString * Pair, FString * Key, FString * Value) { NativeCall<void, FString *, FString *, FString *>(this, "AGameMode.GetKeyValue", Pair, Key, Value); }
	FString * ParseOption(FString * result, FString * Options, FString * InKey) { return NativeCall<FString *, FString *, FString *, FString *>(this, "AGameMode.ParseOption", result, Options, InKey); }
	bool HasOption(FString * Options, FString * InKey) { return NativeCall<bool, FString *, FString *>(this, "AGameMode.HasOption", Options, InKey); }
	FString * GetDefaultGameClassPath(FString * result, FString * MapName, FString * Options, FString * Portal) { return NativeCall<FString *, FString *, FString *, FString *, FString *>(this, "AGameMode.GetDefaultGameClassPath", result, MapName, Options, Portal); }
	TSubclassOf<AGameSession> * GetGameSessionClass(TSubclassOf<AGameSession> * result) { return NativeCall<TSubclassOf<AGameSession> *, TSubclassOf<AGameSession> *>(this, "AGameMode.GetGameSessionClass", result); }
	APlayerController * ProcessClientTravel(FString * FURL, FGuid NextMapGuid, bool bSeamless, bool bAbsolute) { return NativeCall<APlayerController *, FString *, FGuid, bool, bool>(this, "AGameMode.ProcessClientTravel", FURL, NextMapGuid, bSeamless, bAbsolute); }
	void PreLogin(FString * Options, FString * Address, TSharedPtr<FUniqueNetId> * UniqueId, FString * authToken, FString * ErrorMessage) { NativeCall<void, FString *, FString *, TSharedPtr<FUniqueNetId> *, FString *, FString *>(this, "AGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage); }
	void RemoveConnectedPlayer(TSharedPtr<FUniqueNetId> * UniqueNetId) { NativeCall<void, TSharedPtr<FUniqueNetId> *>(this, "AGameMode.RemoveConnectedPlayer", UniqueNetId); }
	APlayerController * SpawnPlayerController(FVector * SpawnLocation, FRotator * SpawnRotation) { return NativeCall<APlayerController *, FVector *, FRotator *>(this, "AGameMode.SpawnPlayerController", SpawnLocation, SpawnRotation); }
	TSubclassOf<UObject> * GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject> * result, AController * InController) { return NativeCall<TSubclassOf<UObject> *, TSubclassOf<UObject> *, AController *>(this, "AGameMode.GetDefaultPawnClassForController_Implementation", result, InController); }
	APawn * SpawnDefaultPawnFor(AController * NewPlayer, AActor * StartSpot) { return NativeCall<APawn *, AController *, AActor *>(this, "AGameMode.SpawnDefaultPawnFor", NewPlayer, StartSpot); }
	void GenericPlayerInitialization(AController * C) { NativeCall<void, AController *>(this, "AGameMode.GenericPlayerInitialization", C); }
	void StartNewPlayer(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.StartNewPlayer", NewPlayer); }
	void ChangeName(AController * Other, FString * S, bool bNameChange) { NativeCall<void, AController *, FString *, bool>(this, "AGameMode.ChangeName", Other, S, bNameChange); }
	void SendPlayer(APlayerController * aPlayer, FString * FURL) { NativeCall<void, APlayerController *, FString *>(this, "AGameMode.SendPlayer", aPlayer, FURL); }
	void Broadcast(AActor * Sender, FString * Msg, FName Type) { NativeCall<void, AActor *, FString *, FName>(this, "AGameMode.Broadcast", Sender, Msg, Type); }
	bool ShouldSpawnAtStartSpot_Implementation(AController * Player) { return NativeCall<bool, AController *>(this, "AGameMode.ShouldSpawnAtStartSpot_Implementation", Player); }
	void AddPlayerStart(APlayerStart * NewPlayerStart) { NativeCall<void, APlayerStart *>(this, "AGameMode.AddPlayerStart", NewPlayerStart); }
	void RemovePlayerStart(APlayerStart * RemovedPlayerStart) { NativeCall<void, APlayerStart *>(this, "AGameMode.RemovePlayerStart", RemovedPlayerStart); }
	AActor * ChoosePlayerStart_Implementation(AController * Player) { return NativeCall<AActor *, AController *>(this, "AGameMode.ChoosePlayerStart_Implementation", Player); }
	bool PlayerCanRestart(APlayerController * Player) { return NativeCall<bool, APlayerController *>(this, "AGameMode.PlayerCanRestart", Player); }
	void UpdateGameplayMuteList(APlayerController * aPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.UpdateGameplayMuteList", aPlayer); }
	bool AllowCheats(APlayerController * P) { return NativeCall<bool, APlayerController *>(this, "AGameMode.AllowCheats", P); }
	bool AllowPausing(APlayerController * PC) { return NativeCall<bool, APlayerController *>(this, "AGameMode.AllowPausing", PC); }
	void AddInactivePlayer(APlayerState * PlayerState, APlayerController * PC) { NativeCall<void, APlayerState *, APlayerController *>(this, "AGameMode.AddInactivePlayer", PlayerState, PC); }
	bool FindInactivePlayer(APlayerController * PC) { return NativeCall<bool, APlayerController *>(this, "AGameMode.FindInactivePlayer", PC); }
	void OverridePlayerState(APlayerController * PC, APlayerState * OldPlayerState) { NativeCall<void, APlayerController *, APlayerState *>(this, "AGameMode.OverridePlayerState", PC, OldPlayerState); }
	void PostSeamlessTravel() { NativeCall<void>(this, "AGameMode.PostSeamlessTravel"); }
	static FString * StaticGetFullGameClassName(FString * result, FString * Str) { return NativeCall<FString *, FString *, FString *>(nullptr, "AGameMode.StaticGetFullGameClassName", result, Str); }
	static void StaticRegisterNativesAGameMode() { NativeCall<void>(nullptr, "AGameMode.StaticRegisterNativesAGameMode"); }
	AActor * ChoosePlayerStart(AController * Player) { return NativeCall<AActor *, AController *>(this, "AGameMode.ChoosePlayerStart", Player); }
	void K2_PostLogin(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AGameMode.K2_PostLogin", NewPlayer); }
};

struct AShooterGameMode : AGameMode
{
	FieldValue<int> LastRepopulationIndexToCheckField() { return { this, "AShooterGameMode.LastRepopulationIndexToCheck" }; }
	FieldValue<FString> AlarmNotificationKeyField() { return { this, "AShooterGameMode.AlarmNotificationKey" }; }
	FieldValue<FString> AlarmNotificationURLField() { return { this, "AShooterGameMode.AlarmNotificationURL" }; }
	FieldValue<FString> BanFileNameField() { return { this, "AShooterGameMode.BanFileName" }; }
	FieldValue<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0> >> BannedMapField() { return { this, "AShooterGameMode.BannedMap" }; }
	FieldValue<long double> LastTimeCheckedForSaveBackupField() { return { this, "AShooterGameMode.LastTimeCheckedForSaveBackup" }; }
	FieldValue<int> LastDayOfYearBackedUpField() { return { this, "AShooterGameMode.LastDayOfYearBackedUp" }; }
	FieldValue<long double> TimeLastStartedDoingRemoteBackupField() { return { this, "AShooterGameMode.TimeLastStartedDoingRemoteBackup" }; }
	FieldValue<bool> InitiatedArkTributeAvailabilityCheckField() { return { this, "AShooterGameMode.InitiatedArkTributeAvailabilityCheck" }; }
	FieldValue<URCONServer *> RCONSocketField() { return { this, "AShooterGameMode.RCONSocket" }; }
	FieldValue<FString> PlayersJoinNoCheckFilenameField() { return { this, "AShooterGameMode.PlayersJoinNoCheckFilename" }; }
	FieldValue<FString> PlayersExclusiveCheckFilenameField() { return { this, "AShooterGameMode.PlayersExclusiveCheckFilename" }; }
	FieldValue<int> TerrainGeneratorVersionField() { return { this, "AShooterGameMode.TerrainGeneratorVersion" }; }
	FieldValue<TArray<FUniqueNetIdUInt64>> PlayersJoinNoCheckField() { return { this, "AShooterGameMode.PlayersJoinNoCheck" }; }
	FieldValue<TArray<FUniqueNetIdUInt64>> PlayersExclusiveListField() { return { this, "AShooterGameMode.PlayersExclusiveList" }; }
	FieldValue<void *> GameBackupPipeReadField() { return { this, "AShooterGameMode.GameBackupPipeRead" }; }
	FieldValue<void *> GameBackupPipeWriteField() { return { this, "AShooterGameMode.GameBackupPipeWrite" }; }
	FieldValue<TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>> TribesIdsField() { return { this, "AShooterGameMode.TribesIds" }; }
	FieldValue<TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, unsigned __int64, 0> >> PlayersIdsField() { return { this, "AShooterGameMode.PlayersIds" }; }
	FieldValue<TMap<unsigned __int64, int, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, int, 0> >> SteamIdsField() { return { this, "AShooterGameMode.SteamIds" }; }
	FieldValue<FString> LaunchOptionsField() { return { this, "AShooterGameMode.LaunchOptions" }; }
	FieldValue<TArray<FTribeData>> TribesDataField() { return { this, "AShooterGameMode.TribesData" }; }
	FieldValue<FString> PGMapNameField() { return { this, "AShooterGameMode.PGMapName" }; }
	FieldValue<FString> PGTerrainPropertiesStringField() { return { this, "AShooterGameMode.PGTerrainPropertiesString" }; }
	FieldValue<bool> bAutoCreateNewPlayerDataField() { return { this, "AShooterGameMode.bAutoCreateNewPlayerData" }; }
	FieldValue<bool> bIsRestartingField() { return { this, "AShooterGameMode.bIsRestarting" }; }
	FieldValue<bool> bProximityVoiceChatField() { return { this, "AShooterGameMode.bProximityVoiceChat" }; }
	FieldValue<bool> bProximityChatField() { return { this, "AShooterGameMode.bProximityChat" }; }
	FieldValue<bool> bAutoRestoreBackupsField() { return { this, "AShooterGameMode.bAutoRestoreBackups" }; }
	FieldValue<float> DifficultyValueField() { return { this, "AShooterGameMode.DifficultyValue" }; }
	FieldValue<float> DifficultyValueMinField() { return { this, "AShooterGameMode.DifficultyValueMin" }; }
	FieldValue<float> DifficultyValueMaxField() { return { this, "AShooterGameMode.DifficultyValueMax" }; }
	FieldValue<float> ProximityRadiusField() { return { this, "AShooterGameMode.ProximityRadius" }; }
	FieldValue<float> ProximityRadiusUnconsiousScaleField() { return { this, "AShooterGameMode.ProximityRadiusUnconsiousScale" }; }
	FieldValue<TSubclassOf<UCheatManager>> CheatClassField() { return { this, "AShooterGameMode.CheatClass" }; }
	FieldValue<bool> bIsOfficialServerField() { return { this, "AShooterGameMode.bIsOfficialServer" }; }
	FieldValue<bool> bServerAllowArkDownloadField() { return { this, "AShooterGameMode.bServerAllowArkDownload" }; }
	FieldValue<bool> bServerAllowThirdPersonPlayerField() { return { this, "AShooterGameMode.bServerAllowThirdPersonPlayer" }; }
	FieldValue<bool> bUseExclusiveListField() { return { this, "AShooterGameMode.bUseExclusiveList" }; }
	FieldValue<bool> bAlwaysNotifyPlayerLeftField() { return { this, "AShooterGameMode.bAlwaysNotifyPlayerLeft" }; }
	FieldValue<bool> bAlwaysNotifyPlayerJoinedField() { return { this, "AShooterGameMode.bAlwaysNotifyPlayerJoined" }; }
	FieldValue<bool> bServerHardcoreField() { return { this, "AShooterGameMode.bServerHardcore" }; }
	FieldValue<bool> bServerPVEField() { return { this, "AShooterGameMode.bServerPVE" }; }
	FieldValue<bool> bServerCrosshairField() { return { this, "AShooterGameMode.bServerCrosshair" }; }
	FieldValue<bool> bServerForceNoHUDField() { return { this, "AShooterGameMode.bServerForceNoHUD" }; }
	FieldValue<bool> bMapPlayerLocationField() { return { this, "AShooterGameMode.bMapPlayerLocation" }; }
	FieldValue<bool> bAllowFlyerCarryPvEField() { return { this, "AShooterGameMode.bAllowFlyerCarryPvE" }; }
	FieldValue<bool> bDisableStructureDecayPvEField() { return { this, "AShooterGameMode.bDisableStructureDecayPvE" }; }
	FieldValue<bool> bDisableDinoDecayPvEField() { return { this, "AShooterGameMode.bDisableDinoDecayPvE" }; }
	FieldValue<bool> bEnablePvPGammaField() { return { this, "AShooterGameMode.bEnablePvPGamma" }; }
	FieldValue<bool> bDisablePvEGammaField() { return { this, "AShooterGameMode.bDisablePvEGamma" }; }
	FieldValue<bool> bClampResourceHarvestDamageField() { return { this, "AShooterGameMode.bClampResourceHarvestDamage" }; }
	FieldValue<bool> bPreventStructurePaintingField() { return { this, "AShooterGameMode.bPreventStructurePainting" }; }
	FieldValue<bool> bAllowCaveBuildingPvEField() { return { this, "AShooterGameMode.bAllowCaveBuildingPvE" }; }
	FieldValue<bool> bAdminLoggingField() { return { this, "AShooterGameMode.bAdminLogging" }; }
	FieldValue<bool> bPvPStructureDecayField() { return { this, "AShooterGameMode.bPvPStructureDecay" }; }
	FieldValue<bool> bAutoDestroyStructuresField() { return { this, "AShooterGameMode.bAutoDestroyStructures" }; }
	FieldValue<bool> bForceAllStructureLockingField() { return { this, "AShooterGameMode.bForceAllStructureLocking" }; }
	FieldValue<bool> bAllowDeprecatedStructuresField() { return { this, "AShooterGameMode.bAllowDeprecatedStructures" }; }
	FieldValue<bool> bPreventTribeAlliancesField() { return { this, "AShooterGameMode.bPreventTribeAlliances" }; }
	FieldValue<bool> bAllowHitMarkersField() { return { this, "AShooterGameMode.bAllowHitMarkers" }; }
	FieldValue<bool> bOnlyAutoDestroyCoreStructuresField() { return { this, "AShooterGameMode.bOnlyAutoDestroyCoreStructures" }; }
	FieldValue<bool> bPreventMateBoostField() { return { this, "AShooterGameMode.bPreventMateBoost" }; }
	FieldValue<bool> bTribeLogDestroyedEnemyStructuresField() { return { this, "AShooterGameMode.bTribeLogDestroyedEnemyStructures" }; }
	FieldValue<bool> bPvEAllowStructuresAtSupplyDropsField() { return { this, "AShooterGameMode.bPvEAllowStructuresAtSupplyDrops" }; }
	FieldValue<bool> bServerGameLogIncludeTribeLogsField() { return { this, "AShooterGameMode.bServerGameLogIncludeTribeLogs" }; }
	FieldValue<bool> bServerRCONOutputTribeLogsField() { return { this, "AShooterGameMode.bServerRCONOutputTribeLogs" }; }
	FieldValue<bool> bUseOptimizedHarvestingHealthField() { return { this, "AShooterGameMode.bUseOptimizedHarvestingHealth" }; }
	FieldValue<bool> bClampItemSpoilingTimesField() { return { this, "AShooterGameMode.bClampItemSpoilingTimes" }; }
	FieldValue<bool> bClampItemStatsField() { return { this, "AShooterGameMode.bClampItemStats" }; }
	FieldValue<bool> bAutoDestroyDecayedDinosField() { return { this, "AShooterGameMode.bAutoDestroyDecayedDinos" }; }
	FieldValue<bool> bAllowMultipleAttachedC4Field() { return { this, "AShooterGameMode.bAllowMultipleAttachedC4" }; }
	FieldValue<bool> bAllowFlyingStaminaRecoveryField() { return { this, "AShooterGameMode.bAllowFlyingStaminaRecovery" }; }
	FieldValue<bool> bCrossARKAllowForeignDinoDownloadsField() { return { this, "AShooterGameMode.bCrossARKAllowForeignDinoDownloads" }; }
	FieldValue<bool> bPreventSpawnAnimationsField() { return { this, "AShooterGameMode.bPreventSpawnAnimations" }; }
	FieldValue<bool> bIsLegacyServerField() { return { this, "AShooterGameMode.bIsLegacyServer" }; }
	FieldValue<bool> bIdlePlayerKickAllowedField() { return { this, "AShooterGameMode.bIdlePlayerKickAllowed" }; }
	FieldValue<int> TheMaxStructuresInRangeField() { return { this, "AShooterGameMode.TheMaxStructuresInRange" }; }
	FieldValue<int> MaxStructuresInSmallRadiusField() { return { this, "AShooterGameMode.MaxStructuresInSmallRadius" }; }
	FieldValue<int> RCONPortField() { return { this, "AShooterGameMode.RCONPort" }; }
	FieldValue<float> DayCycleSpeedScaleField() { return { this, "AShooterGameMode.DayCycleSpeedScale" }; }
	FieldValue<float> NightTimeSpeedScaleField() { return { this, "AShooterGameMode.NightTimeSpeedScale" }; }
	FieldValue<float> DayTimeSpeedScaleField() { return { this, "AShooterGameMode.DayTimeSpeedScale" }; }
	FieldValue<float> PvEStructureDecayPeriodMultiplierField() { return { this, "AShooterGameMode.PvEStructureDecayPeriodMultiplier" }; }
	FieldValue<float> StructurePreventResourceRadiusMultiplierField() { return { this, "AShooterGameMode.StructurePreventResourceRadiusMultiplier" }; }
	FieldValue<float> PvEDinoDecayPeriodMultiplierField() { return { this, "AShooterGameMode.PvEDinoDecayPeriodMultiplier" }; }
	FieldValue<float> ResourcesRespawnPeriodMultiplierField() { return { this, "AShooterGameMode.ResourcesRespawnPeriodMultiplier" }; }
	FieldValue<float> MaxTamedDinosField() { return { this, "AShooterGameMode.MaxTamedDinos" }; }
	FieldValue<float> ListenServerTetherDistanceMultiplierField() { return { this, "AShooterGameMode.ListenServerTetherDistanceMultiplier" }; }
	FieldValue<float> PerPlatformMaxStructuresMultiplierField() { return { this, "AShooterGameMode.PerPlatformMaxStructuresMultiplier" }; }
	FieldValue<float> AutoDestroyOldStructuresMultiplierField() { return { this, "AShooterGameMode.AutoDestroyOldStructuresMultiplier" }; }
	FieldValue<float> RCONServerGameLogBufferField() { return { this, "AShooterGameMode.RCONServerGameLogBuffer" }; }
	FieldValue<float> OxygenSwimSpeedStatMultiplierField() { return { this, "AShooterGameMode.OxygenSwimSpeedStatMultiplier" }; }
	FieldValue<float> ServerAutoForceRespawnWildDinosIntervalField() { return { this, "AShooterGameMode.ServerAutoForceRespawnWildDinosInterval" }; }
	FieldValue<float> RadiusStructuresInSmallRadiusField() { return { this, "AShooterGameMode.RadiusStructuresInSmallRadius" }; }
	FieldValue<float> EnableAFKKickPlayerCountPercentField() { return { this, "AShooterGameMode.EnableAFKKickPlayerCountPercent" }; }
	FieldValue<float> KickIdlePlayersPeriodField() { return { this, "AShooterGameMode.KickIdlePlayersPeriod" }; }
	FieldValue<float> MateBoostEffectMultiplierField() { return { this, "AShooterGameMode.MateBoostEffectMultiplier" }; }
	FieldValue<float> AutoSavePeriodMinutesField() { return { this, "AShooterGameMode.AutoSavePeriodMinutes" }; }
	FieldValue<float> XPMultiplierField() { return { this, "AShooterGameMode.XPMultiplier" }; }
	FieldValue<float> KillXPMultiplierField() { return { this, "AShooterGameMode.KillXPMultiplier" }; }
	FieldValue<float> HarvestXPMultiplierField() { return { this, "AShooterGameMode.HarvestXPMultiplier" }; }
	FieldValue<float> CraftXPMultiplierField() { return { this, "AShooterGameMode.CraftXPMultiplier" }; }
	FieldValue<float> GenericXPMultiplierField() { return { this, "AShooterGameMode.GenericXPMultiplier" }; }
	FieldValue<float> SpecialXPMultiplierField() { return { this, "AShooterGameMode.SpecialXPMultiplier" }; }
	FieldValue<float> RandomAutoSaveSpreadField() { return { this, "AShooterGameMode.RandomAutoSaveSpread" }; }
	FieldValue<FString> SteamAPIKeyField() { return { this, "AShooterGameMode.SteamAPIKey" }; }
	FieldValue<FString> LastServerNotificationMessageField() { return { this, "AShooterGameMode.LastServerNotificationMessage" }; }
	FieldValue<long double> LastServerNotificationRecievedAtField() { return { this, "AShooterGameMode.LastServerNotificationRecievedAt" }; }
	FieldValue<long double> LastExecSaveTimeField() { return { this, "AShooterGameMode.LastExecSaveTime" }; }
	FieldValue<long double> LastTimeSavedWorldField() { return { this, "AShooterGameMode.LastTimeSavedWorld" }; }
	FieldValue<FString> LastClaimedGameCodeField() { return { this, "AShooterGameMode.LastClaimedGameCode" }; }
	FieldValue<TArray<FString>> ArkGameCodesField() { return { this, "AShooterGameMode.ArkGameCodes" }; }
	FieldValue<bool> bIsCurrentlyRequestingKeyField() { return { this, "AShooterGameMode.bIsCurrentlyRequestingKey" }; }
	FieldValue<FString> SaveDirectoryNameField() { return { this, "AShooterGameMode.SaveDirectoryName" }; }
	FieldValue<TArray<UPrimalPlayerData *>> PlayerDatasField() { return { this, "AShooterGameMode.PlayerDatas" }; }
	FieldValue<int> NPCZoneManagerModField() { return { this, "AShooterGameMode.NPCZoneManagerMod" }; }
	FieldValue<bool> bPopulatingSpawnZonesField() { return { this, "AShooterGameMode.bPopulatingSpawnZones" }; }
	FieldValue<bool> bRestartedAPlayerField() { return { this, "AShooterGameMode.bRestartedAPlayer" }; }
	FieldValue<bool> bForceRespawnDinosField() { return { this, "AShooterGameMode.bForceRespawnDinos" }; }
	FieldValue<bool> bFirstSaveWorldField() { return { this, "AShooterGameMode.bFirstSaveWorld" }; }
	FieldValue<bool> bAllowRaidDinoFeedingField() { return { this, "AShooterGameMode.bAllowRaidDinoFeeding" }; }
	FieldValue<FDateTime> LastBackupTimeField() { return { this, "AShooterGameMode.LastBackupTime" }; }
	FieldValue<FDateTime> LastSaveWorldTimeField() { return { this, "AShooterGameMode.LastSaveWorldTime" }; }
	FieldValue<float> TamedDinoDamageMultiplierField() { return { this, "AShooterGameMode.TamedDinoDamageMultiplier" }; }
	FieldValue<float> DinoDamageMultiplierField() { return { this, "AShooterGameMode.DinoDamageMultiplier" }; }
	FieldValue<float> PlayerDamageMultiplierField() { return { this, "AShooterGameMode.PlayerDamageMultiplier" }; }
	FieldValue<float> StructureDamageMultiplierField() { return { this, "AShooterGameMode.StructureDamageMultiplier" }; }
	FieldValue<float> PlayerResistanceMultiplierField() { return { this, "AShooterGameMode.PlayerResistanceMultiplier" }; }
	FieldValue<float> DinoResistanceMultiplierField() { return { this, "AShooterGameMode.DinoResistanceMultiplier" }; }
	FieldValue<float> TamedDinoResistanceMultiplierField() { return { this, "AShooterGameMode.TamedDinoResistanceMultiplier" }; }
	FieldValue<float> StructureResistanceMultiplierField() { return { this, "AShooterGameMode.StructureResistanceMultiplier" }; }
	FieldValue<bool> bJoinInProgressGamesAsSpectatorField() { return { this, "AShooterGameMode.bJoinInProgressGamesAsSpectator" }; }
	FieldValue<float> TamingSpeedMultiplierField() { return { this, "AShooterGameMode.TamingSpeedMultiplier" }; }
	FieldValue<float> HarvestAmountMultiplierField() { return { this, "AShooterGameMode.HarvestAmountMultiplier" }; }
	FieldValue<float> HarvestHealthMultiplierField() { return { this, "AShooterGameMode.HarvestHealthMultiplier" }; }
	FieldValue<float> PlayerCharacterWaterDrainMultiplierField() { return { this, "AShooterGameMode.PlayerCharacterWaterDrainMultiplier" }; }
	FieldValue<float> PlayerCharacterFoodDrainMultiplierField() { return { this, "AShooterGameMode.PlayerCharacterFoodDrainMultiplier" }; }
	FieldValue<float> DinoCharacterFoodDrainMultiplierField() { return { this, "AShooterGameMode.DinoCharacterFoodDrainMultiplier" }; }
	FieldValue<float> RaidDinoCharacterFoodDrainMultiplierField() { return { this, "AShooterGameMode.RaidDinoCharacterFoodDrainMultiplier" }; }
	FieldValue<float> PlayerCharacterStaminaDrainMultiplierField() { return { this, "AShooterGameMode.PlayerCharacterStaminaDrainMultiplier" }; }
	FieldValue<float> DinoCharacterStaminaDrainMultiplierField() { return { this, "AShooterGameMode.DinoCharacterStaminaDrainMultiplier" }; }
	FieldValue<float> PlayerCharacterHealthRecoveryMultiplierField() { return { this, "AShooterGameMode.PlayerCharacterHealthRecoveryMultiplier" }; }
	FieldValue<float> DinoCharacterHealthRecoveryMultiplierField() { return { this, "AShooterGameMode.DinoCharacterHealthRecoveryMultiplier" }; }
	FieldValue<float> CarnivoreNaturalTargetingRangeMultiplierField() { return { this, "AShooterGameMode.CarnivoreNaturalTargetingRangeMultiplier" }; }
	FieldValue<float> CarnivorePlayerAggroMultiplierField() { return { this, "AShooterGameMode.CarnivorePlayerAggroMultiplier" }; }
	FieldValue<float> HerbivoreNaturalTargetingRangeMultiplierField() { return { this, "AShooterGameMode.HerbivoreNaturalTargetingRangeMultiplier" }; }
	FieldValue<float> HerbivorePlayerAggroMultiplierField() { return { this, "AShooterGameMode.HerbivorePlayerAggroMultiplier" }; }
	FieldValue<bool> AIForceTargetPlayersField() { return { this, "AShooterGameMode.AIForceTargetPlayers" }; }
	FieldValue<bool> AIForceOverlapCheckField() { return { this, "AShooterGameMode.AIForceOverlapCheck" }; }
	FieldValue<float> DinoCountMultiplierField() { return { this, "AShooterGameMode.DinoCountMultiplier" }; }
	FieldValue<bool> bDisableSaveLoadField() { return { this, "AShooterGameMode.bDisableSaveLoad" }; }
	FieldValue<bool> bDisableXPField() { return { this, "AShooterGameMode.bDisableXP" }; }
	FieldValue<bool> bDisableDynamicMusicField() { return { this, "AShooterGameMode.bDisableDynamicMusic" }; }
	FieldValue<TArray<FPlayerDeathReason>> PlayerDeathReasonsField() { return { this, "AShooterGameMode.PlayerDeathReasons" }; }
	FieldValue<TArray<FLevelExperienceRamp>> LevelExperienceRampOverridesField() { return { this, "AShooterGameMode.LevelExperienceRampOverrides" }; }
	FieldValue<TArray<int>> OverridePlayerLevelEngramPointsField() { return { this, "AShooterGameMode.OverridePlayerLevelEngramPoints" }; }
	FieldValue<TArray<int>> ExcludeItemIndicesField() { return { this, "AShooterGameMode.ExcludeItemIndices" }; }
	//FieldValue<TArray<FEngramEntryOverride>> OverrideEngramEntriesField() { return { this, "AShooterGameMode.OverrideEngramEntries" }; }
	//FieldValue<TArray<FEngramEntryOverride>> OverrideNamedEngramEntriesField() { return { this, "AShooterGameMode.OverrideNamedEngramEntries" }; }
	//FieldValue<TArray<FEngramEntryAutoUnlock>> EngramEntryAutoUnlocksField() { return { this, "AShooterGameMode.EngramEntryAutoUnlocks" }; }
	FieldValue<TArray<FString>> PreventDinoTameClassNamesField() { return { this, "AShooterGameMode.PreventDinoTameClassNames" }; }
	//FieldValue<TArray<FDinoSpawnWeightMultiplier>> DinoSpawnWeightMultipliersField() { return { this, "AShooterGameMode.DinoSpawnWeightMultipliers" }; }
	//FieldValue<TArray<FClassMultiplier>> DinoClassResistanceMultipliersField() { return { this, "AShooterGameMode.DinoClassResistanceMultipliers" }; }
	//FieldValue<TArray<FClassMultiplier>> TamedDinoClassResistanceMultipliersField() { return { this, "AShooterGameMode.TamedDinoClassResistanceMultipliers" }; }
	//FieldValue<TArray<FClassMultiplier>> DinoClassDamageMultipliersField() { return { this, "AShooterGameMode.DinoClassDamageMultipliers" }; }
	//FieldValue<TArray<FClassMultiplier>> TamedDinoClassDamageMultipliersField() { return { this, "AShooterGameMode.TamedDinoClassDamageMultipliers" }; }
	//FieldValue<TArray<FClassMultiplier>> HarvestResourceItemAmountClassMultipliersField() { return { this, "AShooterGameMode.HarvestResourceItemAmountClassMultipliers" }; }
	//FieldValue<TArray<FClassNameReplacement>> NPCReplacementsField() { return { this, "AShooterGameMode.NPCReplacements" }; }
	FieldValue<float> PvPZoneStructureDamageMultiplierField() { return { this, "AShooterGameMode.PvPZoneStructureDamageMultiplier" }; }
	FieldValue<bool> bOnlyAllowSpecifiedEngramsField() { return { this, "AShooterGameMode.bOnlyAllowSpecifiedEngrams" }; }
	FieldValue<int> OverrideMaxExperiencePointsPlayerField() { return { this, "AShooterGameMode.OverrideMaxExperiencePointsPlayer" }; }
	FieldValue<int> OverrideMaxExperiencePointsDinoField() { return { this, "AShooterGameMode.OverrideMaxExperiencePointsDino" }; }
	FieldValue<float> GlobalSpoilingTimeMultiplierField() { return { this, "AShooterGameMode.GlobalSpoilingTimeMultiplier" }; }
	FieldValue<float> GlobalItemDecompositionTimeMultiplierField() { return { this, "AShooterGameMode.GlobalItemDecompositionTimeMultiplier" }; }
	FieldValue<float> GlobalCorpseDecompositionTimeMultiplierField() { return { this, "AShooterGameMode.GlobalCorpseDecompositionTimeMultiplier" }; }
	FieldValue<float> MaxFallSpeedMultiplierField() { return { this, "AShooterGameMode.MaxFallSpeedMultiplier" }; }
	FieldValue<bool> bAutoPvETimerField() { return { this, "AShooterGameMode.bAutoPvETimer" }; }
	FieldValue<bool> bAutoPvEUseSystemTimeField() { return { this, "AShooterGameMode.bAutoPvEUseSystemTime" }; }
	FieldValue<bool> bUsingStructureDestructionTagField() { return { this, "AShooterGameMode.bUsingStructureDestructionTag" }; }
	FieldValue<FName> StructureDestructionTagField() { return { this, "AShooterGameMode.StructureDestructionTag" }; }
	FieldValue<float> AutoPvEStartTimeSecondsField() { return { this, "AShooterGameMode.AutoPvEStartTimeSeconds" }; }
	FieldValue<float> AutoPvEStopTimeSecondsField() { return { this, "AShooterGameMode.AutoPvEStopTimeSeconds" }; }
	FieldValue<int> TributeItemExpirationSecondsField() { return { this, "AShooterGameMode.TributeItemExpirationSeconds" }; }
	FieldValue<int> TributeDinoExpirationSecondsField() { return { this, "AShooterGameMode.TributeDinoExpirationSeconds" }; }
	FieldValue<int> TributeCharacterExpirationSecondsField() { return { this, "AShooterGameMode.TributeCharacterExpirationSeconds" }; }
	FieldValue<bool> PreventDownloadSurvivorsField() { return { this, "AShooterGameMode.PreventDownloadSurvivors" }; }
	FieldValue<bool> PreventDownloadItemsField() { return { this, "AShooterGameMode.PreventDownloadItems" }; }
	FieldValue<bool> PreventDownloadDinosField() { return { this, "AShooterGameMode.PreventDownloadDinos" }; }
	FieldValue<bool> bPreventUploadSurvivorsField() { return { this, "AShooterGameMode.bPreventUploadSurvivors" }; }
	FieldValue<bool> bPreventUploadItemsField() { return { this, "AShooterGameMode.bPreventUploadItems" }; }
	FieldValue<bool> bPreventUploadDinosField() { return { this, "AShooterGameMode.bPreventUploadDinos" }; }
	FieldValue<int> MaxTributeItemsField() { return { this, "AShooterGameMode.MaxTributeItems" }; }
	FieldValue<int> MaxTributeDinosField() { return { this, "AShooterGameMode.MaxTributeDinos" }; }
	FieldValue<int> MaxTributeCharactersField() { return { this, "AShooterGameMode.MaxTributeCharacters" }; }
	FieldValue<bool> bIncreasePvPRespawnIntervalField() { return { this, "AShooterGameMode.bIncreasePvPRespawnInterval" }; }
	FieldValue<float> IncreasePvPRespawnIntervalCheckPeriodField() { return { this, "AShooterGameMode.IncreasePvPRespawnIntervalCheckPeriod" }; }
	FieldValue<float> IncreasePvPRespawnIntervalMultiplierField() { return { this, "AShooterGameMode.IncreasePvPRespawnIntervalMultiplier" }; }
	FieldValue<float> IncreasePvPRespawnIntervalBaseAmountField() { return { this, "AShooterGameMode.IncreasePvPRespawnIntervalBaseAmount" }; }
	FieldValue<float> ResourceNoReplenishRadiusStructuresField() { return { this, "AShooterGameMode.ResourceNoReplenishRadiusStructures" }; }
	FieldValue<float> ResourceNoReplenishRadiusPlayersField() { return { this, "AShooterGameMode.ResourceNoReplenishRadiusPlayers" }; }
	FieldValue<float> CropGrowthSpeedMultiplierField() { return { this, "AShooterGameMode.CropGrowthSpeedMultiplier" }; }
	FieldValue<float> LayEggIntervalMultiplierField() { return { this, "AShooterGameMode.LayEggIntervalMultiplier" }; }
	FieldValue<float> PoopIntervalMultiplierField() { return { this, "AShooterGameMode.PoopIntervalMultiplier" }; }
	FieldValue<float> CropDecaySpeedMultiplierField() { return { this, "AShooterGameMode.CropDecaySpeedMultiplier" }; }
	FieldValue<bool> bAllowChatFromDeadNonAdminsField() { return { this, "AShooterGameMode.bAllowChatFromDeadNonAdmins" }; }
	FieldValue<bool> bAllowDisablingSpectatorField() { return { this, "AShooterGameMode.bAllowDisablingSpectator" }; }
	FieldValue<bool> bPvEDisableFriendlyFireField() { return { this, "AShooterGameMode.bPvEDisableFriendlyFire" }; }
	FieldValue<bool> bFlyerPlatformAllowUnalignedDinoBasingField() { return { this, "AShooterGameMode.bFlyerPlatformAllowUnalignedDinoBasing" }; }
	FieldValue<int> MaxPerTribePlatformSaddleStructureLimitField() { return { this, "AShooterGameMode.MaxPerTribePlatformSaddleStructureLimit" }; }
	FieldValue<int> MaxPlatformSaddleStructureLimitField() { return { this, "AShooterGameMode.MaxPlatformSaddleStructureLimit" }; }
	FieldValue<int> MaxDinoBaseLevelField() { return { this, "AShooterGameMode.MaxDinoBaseLevel" }; }
	FieldValue<int> MaxNumberOfPlayersInTribeField() { return { this, "AShooterGameMode.MaxNumberOfPlayersInTribe" }; }
	FieldValue<float> MatingIntervalMultiplierField() { return { this, "AShooterGameMode.MatingIntervalMultiplier" }; }
	FieldValue<float> EggHatchSpeedMultiplierField() { return { this, "AShooterGameMode.EggHatchSpeedMultiplier" }; }
	FieldValue<float> BabyMatureSpeedMultiplierField() { return { this, "AShooterGameMode.BabyMatureSpeedMultiplier" }; }
	FieldValue<float> BabyFoodConsumptionSpeedMultiplierField() { return { this, "AShooterGameMode.BabyFoodConsumptionSpeedMultiplier" }; }
	FieldValue<int> CurrentPlatformSaddleStructuresField() { return { this, "AShooterGameMode.CurrentPlatformSaddleStructures" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_PlayerField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_Player" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamedField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AddField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Add" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AffinityField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Affinity" }; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoWildField() { return { this, "AShooterGameMode.PerLevelStatsMultiplier_DinoWild" }; }
	FieldArray<int, 8> ItemStatClampsField() { return { this, "AShooterGameMode.ItemStatClamps" }; }
	FieldValue<bool> bCustomGameModeAllowSpectatorJoinAfterMatchStartField() { return { this, "AShooterGameMode.bCustomGameModeAllowSpectatorJoinAfterMatchStart" }; }
	FieldValue<bool> bGameplayLogEnabledField() { return { this, "AShooterGameMode.bGameplayLogEnabled" }; }
	FieldValue<bool> bServerGameLogEnabledField() { return { this, "AShooterGameMode.bServerGameLogEnabled" }; }
	FieldValue<TSubclassOf<UPrimalItem>> BonusSupplyCrateItemClassField() { return { this, "AShooterGameMode.BonusSupplyCrateItemClass" }; }
	FieldValue<float> BonusSupplyCrateItemGiveIntervalField() { return { this, "AShooterGameMode.BonusSupplyCrateItemGiveInterval" }; }
	FieldValue<float> StructureDamageRepairCooldownField() { return { this, "AShooterGameMode.StructureDamageRepairCooldown" }; }
	FieldValue<float> CustomRecipeEffectivenessMultiplierField() { return { this, "AShooterGameMode.CustomRecipeEffectivenessMultiplier" }; }
	FieldValue<float> CustomRecipeSkillMultiplierField() { return { this, "AShooterGameMode.CustomRecipeSkillMultiplier" }; }
	FieldValue<FString> BonusSupplyCrateItemStringField() { return { this, "AShooterGameMode.BonusSupplyCrateItemString" }; }
	FieldValue<bool> bPvEAllowTribeWarField() { return { this, "AShooterGameMode.bPvEAllowTribeWar" }; }
	FieldValue<bool> bPvEAllowTribeWarCancelField() { return { this, "AShooterGameMode.bPvEAllowTribeWarCancel" }; }
	FieldValue<bool> bAllowCustomRecipesField() { return { this, "AShooterGameMode.bAllowCustomRecipes" }; }
	FieldValue<bool> bPassiveDefensesDamageRiderlessDinosField() { return { this, "AShooterGameMode.bPassiveDefensesDamageRiderlessDinos" }; }
	FieldValue<long double> LastBonusSupplyCrateItemGiveTimeField() { return { this, "AShooterGameMode.LastBonusSupplyCrateItemGiveTime" }; }
	FieldValue<bool> bEnableDeathTeamSpectatorField() { return { this, "AShooterGameMode.bEnableDeathTeamSpectator" }; }
	FieldValue<bool> bTribeStoreCharacterConfigurationField() { return { this, "AShooterGameMode.bTribeStoreCharacterConfiguration" }; }
	FieldValue<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >> PvEActiveTribeWarsField() { return { this, "AShooterGameMode.PvEActiveTribeWars" }; }
	FieldValue<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0> >> TribeAlliesField() { return { this, "AShooterGameMode.TribeAllies" }; }
	FieldValue<TMap<unsigned __int64, UPrimalPlayerData *, FDefaultSetAllocator, TDefaultMapKeyFuncs<unsigned __int64, UPrimalPlayerData *, 0> >> IDtoPlayerDatasField() { return { this, "AShooterGameMode.IDtoPlayerDatas" }; }
	FieldValue<int> MaxTribeLogsField() { return { this, "AShooterGameMode.MaxTribeLogs" }; }
	FieldValue<int> MaxPersonalTamedDinosField() { return { this, "AShooterGameMode.MaxPersonalTamedDinos" }; }
	FieldValue<int> PersonalTamedDinosSaddleStructureCostField() { return { this, "AShooterGameMode.PersonalTamedDinosSaddleStructureCost" }; }
	FieldValue<TArray<FString>> CachedGameLogField() { return { this, "AShooterGameMode.CachedGameLog" }; }
	FieldValue<bool> bDisableFriendlyFireField() { return { this, "AShooterGameMode.bDisableFriendlyFire" }; }
	FieldValue<bool> bAllowInactiveTribesField() { return { this, "AShooterGameMode.bAllowInactiveTribes" }; }
	FieldValue<bool> bForceMapPlayerLocationField() { return { this, "AShooterGameMode.bForceMapPlayerLocation" }; }
	FieldValue<float> DinoHarvestingDamageMultiplierField() { return { this, "AShooterGameMode.DinoHarvestingDamageMultiplier" }; }
	FieldValue<float> PlayerHarvestingDamageMultiplierField() { return { this, "AShooterGameMode.PlayerHarvestingDamageMultiplier" }; }
	FieldValue<float> DinoTurretDamageMultiplierField() { return { this, "AShooterGameMode.DinoTurretDamageMultiplier" }; }
	FieldValue<bool> bDisableLootCratesField() { return { this, "AShooterGameMode.bDisableLootCrates" }; }
	FieldValue<float> ExtinctionEventTimeIntervalField() { return { this, "AShooterGameMode.ExtinctionEventTimeInterval" }; }
	FieldValue<bool> bEnableExtraStructurePreventionVolumesField() { return { this, "AShooterGameMode.bEnableExtraStructurePreventionVolumes" }; }
	FieldValue<unsigned int> NextExtinctionEventUTCField() { return { this, "AShooterGameMode.NextExtinctionEventUTC" }; }
	FieldValue<bool> bForceAllowCaveFlyersField() { return { this, "AShooterGameMode.bForceAllowCaveFlyers" }; }
	FieldValue<bool> bDoExtinctionEventField() { return { this, "AShooterGameMode.bDoExtinctionEvent" }; }
	FieldValue<bool> bPreventOfflinePvPField() { return { this, "AShooterGameMode.bPreventOfflinePvP" }; }
	FieldValue<bool> bPvPDinoDecayField() { return { this, "AShooterGameMode.bPvPDinoDecay" }; }
	FieldValue<bool> bOverideStructurePlatformPreventionField() { return { this, "AShooterGameMode.bOverideStructurePlatformPrevention" }; }
	FieldValue<bool> bAllowAnyoneBabyImprintCuddleField() { return { this, "AShooterGameMode.bAllowAnyoneBabyImprintCuddle" }; }
	FieldValue<bool> bDisableImprintDinoBuffField() { return { this, "AShooterGameMode.bDisableImprintDinoBuff" }; }
	FieldValue<bool> bShowFloatingDamageTextField() { return { this, "AShooterGameMode.bShowFloatingDamageText" }; }
	FieldValue<bool> bOnlyDecayUnsnappedCoreStructuresField() { return { this, "AShooterGameMode.bOnlyDecayUnsnappedCoreStructures" }; }
	FieldValue<bool> bFastDecayUnsnappedCoreStructuresField() { return { this, "AShooterGameMode.bFastDecayUnsnappedCoreStructures" }; }
	FieldValue<bool> bDestroyUnconnectedWaterPipesField() { return { this, "AShooterGameMode.bDestroyUnconnectedWaterPipes" }; }
	FieldValue<bool> bAllowCrateSpawnsOnTopOfStructuresField() { return { this, "AShooterGameMode.bAllowCrateSpawnsOnTopOfStructures" }; }
	FieldValue<bool> bNotifyAdminCommandsInChatField() { return { this, "AShooterGameMode.bNotifyAdminCommandsInChat" }; }
	FieldValue<float> PreventOfflinePvPIntervalField() { return { this, "AShooterGameMode.PreventOfflinePvPInterval" }; }
	//FieldValue<TArray<FItemCraftingCostOverride>> OverrideItemCraftingCostsField() { return { this, "AShooterGameMode.OverrideItemCraftingCosts" }; }
	//FieldValue<TArray<FConfigItemCraftingCostOverride>> ConfigOverrideItemCraftingCostsField() { return { this, "AShooterGameMode.ConfigOverrideItemCraftingCosts" }; }
	//FieldValue<TArray<FConfigSupplyCrateItemsOverride>> ConfigOverrideSupplyCrateItemsField() { return { this, "AShooterGameMode.ConfigOverrideSupplyCrateItems" }; }
	//FieldValue<TArray<FConfigNPCSpawnEntriesContainer>> ConfigOverrideNPCSpawnEntriesContainerField() { return { this, "AShooterGameMode.ConfigOverrideNPCSpawnEntriesContainer" }; }
	//FieldValue<TArray<FConfigNPCSpawnEntriesContainer>> ConfigAddNPCSpawnEntriesContainerField() { return { this, "AShooterGameMode.ConfigAddNPCSpawnEntriesContainer" }; }
	//FieldValue<TArray<FConfigNPCSpawnEntriesContainer>> ConfigSubtractNPCSpawnEntriesContainerField() { return { this, "AShooterGameMode.ConfigSubtractNPCSpawnEntriesContainer" }; }
	FieldValue<float> BabyImprintingStatScaleMultiplierField() { return { this, "AShooterGameMode.BabyImprintingStatScaleMultiplier" }; }
	FieldValue<float> BabyCuddleIntervalMultiplierField() { return { this, "AShooterGameMode.BabyCuddleIntervalMultiplier" }; }
	FieldValue<float> BabyCuddleGracePeriodMultiplierField() { return { this, "AShooterGameMode.BabyCuddleGracePeriodMultiplier" }; }
	FieldValue<float> BabyCuddleLoseImprintQualitySpeedMultiplierField() { return { this, "AShooterGameMode.BabyCuddleLoseImprintQualitySpeedMultiplier" }; }
	FieldValue<float> HairGrowthSpeedMultiplierField() { return { this, "AShooterGameMode.HairGrowthSpeedMultiplier" }; }
	FieldValue<bool> bPreventDiseasesField() { return { this, "AShooterGameMode.bPreventDiseases" }; }
	FieldValue<bool> bNonPermanentDiseasesField() { return { this, "AShooterGameMode.bNonPermanentDiseases" }; }
	//FieldValue<UAllClustersInventory *> AllClustersInventoryField() { return { this, "AShooterGameMode.AllClustersInventory" }; }
	FieldValue<int> SaveForceRespawnDinosVersionField() { return { this, "AShooterGameMode.SaveForceRespawnDinosVersion" }; }
	FieldValue<unsigned __int64> ServerIDField() { return { this, "AShooterGameMode.ServerID" }; }
	FieldValue<int> LoadForceRespawnDinosVersionField() { return { this, "AShooterGameMode.LoadForceRespawnDinosVersion" }; }
	FieldValue<bool> bIsLoadedServerField() { return { this, "AShooterGameMode.bIsLoadedServer" }; }
	//FieldValue<TMap<FString, FTributePlayerTribeInfo, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FTributePlayerTribeInfo, 0> >> TributePlayerTribeInfosField() { return { this, "AShooterGameMode.TributePlayerTribeInfos" }; }
	FieldValue<TArray<int>> SupportedSpawnRegionsField() { return { this, "AShooterGameMode.SupportedSpawnRegions" }; }
	FieldValue<bool> bServerUseDinoListField() { return { this, "AShooterGameMode.bServerUseDinoList" }; }
	FieldValue<float> MaxAllowedRespawnIntervalField() { return { this, "AShooterGameMode.MaxAllowedRespawnInterval" }; }
	FieldValue<bool> bUseDinoLevelUpAnimationsField() { return { this, "AShooterGameMode.bUseDinoLevelUpAnimations" }; }
	FieldValue<bool> bDisableDinoTamingField() { return { this, "AShooterGameMode.bDisableDinoTaming" }; }
	FieldValue<bool> bDisableDinoRidingField() { return { this, "AShooterGameMode.bDisableDinoRiding" }; }
	FieldValue<float> MinimumDinoReuploadIntervalField() { return { this, "AShooterGameMode.MinimumDinoReuploadInterval" }; }
	FieldValue<int> SaveGameCustomVersionField() { return { this, "AShooterGameMode.SaveGameCustomVersion" }; }
	FieldValue<float> OverrideOfficialDifficultyField() { return { this, "AShooterGameMode.OverrideOfficialDifficulty" }; }
	FieldArray<float, 12> PlayerBaseStatMultipliersField() { return { this, "AShooterGameMode.PlayerBaseStatMultipliers" }; }
	FieldValue<int> NPCActiveCountTamedField() { return { this, "AShooterGameMode.NPCActiveCountTamed" }; }
	FieldValue<int> NPCActiveCountField() { return { this, "AShooterGameMode.NPCActiveCount" }; }
	FieldValue<int> NPCCountField() { return { this, "AShooterGameMode.NPCCount" }; }
	FieldValue<float> MatingSpeedMultiplierField() { return { this, "AShooterGameMode.MatingSpeedMultiplier" }; }
	FieldValue<float> FastDecayIntervalField() { return { this, "AShooterGameMode.FastDecayInterval" }; }
	FieldValue<bool> bUseSingleplayerSettingsField() { return { this, "AShooterGameMode.bUseSingleplayerSettings" }; }
	FieldValue<bool> bUseCorpseLocatorField() { return { this, "AShooterGameMode.bUseCorpseLocator" }; }
	FieldValue<bool> bDisableStructurePlacementCollisionField() { return { this, "AShooterGameMode.bDisableStructurePlacementCollision" }; }
	FieldValue<bool> bForceUseInventoryAppendsField() { return { this, "AShooterGameMode.bForceUseInventoryAppends" }; }
	FieldValue<float> SupplyCrateLootQualityMultiplierField() { return { this, "AShooterGameMode.SupplyCrateLootQualityMultiplier" }; }
	FieldValue<float> FishingLootQualityMultiplierField() { return { this, "AShooterGameMode.FishingLootQualityMultiplier" }; }
	FieldValue<float> CraftingSkillBonusMultiplierField() { return { this, "AShooterGameMode.CraftingSkillBonusMultiplier" }; }
	FieldValue<bool> bAllowPlatformSaddleMultiFloorsField() { return { this, "AShooterGameMode.bAllowPlatformSaddleMultiFloors" }; }
	FieldValue<bool> bAllowUnlimitedRespecsField() { return { this, "AShooterGameMode.bAllowUnlimitedRespecs" }; }
	FieldValue<float> FuelConsumptionIntervalMultiplierField() { return { this, "AShooterGameMode.FuelConsumptionIntervalMultiplier" }; }
	FieldValue<int> DestroyTamesOverLevelClampField() { return { this, "AShooterGameMode.DestroyTamesOverLevelClamp" }; }
	FieldValue<int> MaxAlliancesPerTribeField() { return { this, "AShooterGameMode.MaxAlliancesPerTribe" }; }
	FieldValue<int> MaxTribesPerAllianceField() { return { this, "AShooterGameMode.MaxTribesPerAlliance" }; }
	FieldValue<bool> bDisableDinoDecayClaimingField() { return { this, "AShooterGameMode.bDisableDinoDecayClaiming" }; }
	FieldValue<bool> bUseTameLimitForStructuresOnlyField() { return { this, "AShooterGameMode.bUseTameLimitForStructuresOnly" }; }
	FieldValue<bool> bLimitTurretsInRangeField() { return { this, "AShooterGameMode.bLimitTurretsInRange" }; }
	FieldValue<float> LimitTurretsRangeField() { return { this, "AShooterGameMode.LimitTurretsRange" }; }
	FieldValue<int> LimitTurretsNumField() { return { this, "AShooterGameMode.LimitTurretsNum" }; }
	FieldValue<bool> bAutoUnlockAllEngramsField() { return { this, "AShooterGameMode.bAutoUnlockAllEngrams" }; }
	FieldValue<long double> ServerLastForceRespawnWildDinosTimeField() { return { this, "AShooterGameMode.ServerLastForceRespawnWildDinosTime" }; }
	FieldValue<FString> UseStructurePreventionVolumeTagStringField() { return { this, "AShooterGameMode.UseStructurePreventionVolumeTagString" }; }
	FieldValue<float> BaseTemperatureMultiplierField() { return { this, "AShooterGameMode.BaseTemperatureMultiplier" }; }
	FieldValue<bool> bForceAllowAllStructuresField() { return { this, "AShooterGameMode.bForceAllowAllStructures" }; }
	FieldValue<bool> bForceAllowAscensionItemDownloadsField() { return { this, "AShooterGameMode.bForceAllowAscensionItemDownloads" }; }
	FieldValue<float> GlobalPoweredBatteryDurabilityDecreasePerSecondField() { return { this, "AShooterGameMode.GlobalPoweredBatteryDurabilityDecreasePerSecond" }; }
	FieldValue<float> SingleplayerSettingsCorpseLifespanMultiplierField() { return { this, "AShooterGameMode.SingleplayerSettingsCorpseLifespanMultiplier" }; }
	FieldValue<float> UseCorpseLifeSpanMultiplierField() { return { this, "AShooterGameMode.UseCorpseLifeSpanMultiplier" }; }
	FieldValue<FName> UseStructurePreventionVolumeTagField() { return { this, "AShooterGameMode.UseStructurePreventionVolumeTag" }; }
	FieldValue<bool> bHasCovertedToStoreField() { return { this, "AShooterGameMode.bHasCovertedToStore" }; }
	FieldValue<bool> bAllowStoredDatasField() { return { this, "AShooterGameMode.bAllowStoredDatas" }; }
	//FieldValue<FDataStore<unsigned int>> TribeDataStoreField() { return { this, "AShooterGameMode.TribeDataStore" }; }
	//FieldValue<FDataStore<unsigned __int64>> PlayerDataStoreField() { return { this, "AShooterGameMode.PlayerDataStore" }; }

	// Functions

	bool AllowAddXP(UPrimalCharacterStatusComponent * forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent *>(this, "AShooterGameMode.AllowAddXP", forComp); }
	void CheckArkTributeAvailability() { NativeCall<void>(this, "AShooterGameMode.CheckArkTributeAvailability"); }
	void InitGame(FString * MapName, FString * Options, FString * ErrorMessage) { NativeCall<void, FString *, FString *, FString *>(this, "AShooterGameMode.InitGame", MapName, Options, ErrorMessage); }
	void InitOptionBool(FString Commandline, FString Section, FString Option, bool bDefaultValue) { NativeCall<void, FString, FString, FString, bool>(this, "AShooterGameMode.InitOptionBool", Commandline, Section, Option, bDefaultValue); }
	void InitOptionString(FString Commandline, FString Section, FString Option) { NativeCall<void, FString, FString, FString>(this, "AShooterGameMode.InitOptionString", Commandline, Section, Option); }
	void InitOptionFloat(FString Commandline, FString Section, FString Option, float CurrentValue) { NativeCall<void, FString, FString, FString, float>(this, "AShooterGameMode.InitOptionFloat", Commandline, Section, Option, CurrentValue); }
	bool GetServerSettingsFloat(FString * Keyvalue, float * OutFloat) { return NativeCall<bool, FString *, float *>(this, "AShooterGameMode.GetServerSettingsFloat", Keyvalue, OutFloat); }
	void SingleplayerSetupValues() { NativeCall<void>(this, "AShooterGameMode.SingleplayerSetupValues"); }
	void InitOptionInteger(FString Commandline, FString Section, FString Option, int CurrentValue) { NativeCall<void, FString, FString, FString, int>(this, "AShooterGameMode.InitOptionInteger", Commandline, Section, Option, CurrentValue); }
	bool GetBoolOption(FString * Options, FString * ParseString, bool CurrentValue) { return NativeCall<bool, FString *, FString *, bool>(this, "AShooterGameMode.GetBoolOption", Options, ParseString, CurrentValue); }
	float GetFloatOption(FString * Options, FString * ParseString, float CurrentValue) { return NativeCall<float, FString *, FString *, float>(this, "AShooterGameMode.GetFloatOption", Options, ParseString, CurrentValue); }
	int GetIntOption(FString * Options, FString * ParseString, int CurrentValue) { return NativeCall<int, FString *, FString *, int>(this, "AShooterGameMode.GetIntOption", Options, ParseString, CurrentValue); }
	void InitOptions(FString Options) { NativeCall<void, FString>(this, "AShooterGameMode.InitOptions", Options); }
	bool GetBoolOptionIni(FString Section, FString OptionName) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.GetBoolOptionIni", Section, OptionName); }
	float GetFloatOptionIni(FString Section, FString OptionName) { return NativeCall<float, FString, FString>(this, "AShooterGameMode.GetFloatOptionIni", Section, OptionName); }
	int GetIntOptionIni(FString Section, FString OptionName) { return NativeCall<int, FString, FString>(this, "AShooterGameMode.GetIntOptionIni", Section, OptionName); }
	FString * GetStringOption(FString * result, FString Section, FString OptionName) { return NativeCall<FString *, FString *, FString, FString>(this, "AShooterGameMode.GetStringOption", result, Section, OptionName); }
	void SaveWorld() { NativeCall<void>(this, "AShooterGameMode.SaveWorld"); }
	void ClearSavesAndRestart() { NativeCall<void>(this, "AShooterGameMode.ClearSavesAndRestart"); }
	bool LoadWorld() { return NativeCall<bool>(this, "AShooterGameMode.LoadWorld"); }
	TSubclassOf<AGameSession> * GetGameSessionClass(TSubclassOf<AGameSession> * result) { return NativeCall<TSubclassOf<AGameSession> *, TSubclassOf<AGameSession> *>(this, "AShooterGameMode.GetGameSessionClass", result); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameMode.HandleMatchHasStarted"); }
	void HandleLeavingMap() { NativeCall<void>(this, "AShooterGameMode.HandleLeavingMap"); }
	void PreLogin(FString * Options, FString * Address, TSharedPtr<FUniqueNetId> * UniqueId, FString * authToken, FString * ErrorMessage) { NativeCall<void, FString *, FString *, TSharedPtr<FUniqueNetId> *, FString *, FString *>(this, "AShooterGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage); }
	void PostLogin(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AShooterGameMode.PostLogin", NewPlayer); }
	TArray<FString> * GetWhiteListedMap(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "AShooterGameMode.GetWhiteListedMap", result); }
	void Killed(AController * Killer, AController * KilledPlayer, APawn * KilledPawn, UDamageType * DamageType) { NativeCall<void, AController *, AController *, APawn *, UDamageType *>(this, "AShooterGameMode.Killed", Killer, KilledPlayer, KilledPawn, DamageType); }
	TSubclassOf<UObject> * GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject> * result, AController * InController) { return NativeCall<TSubclassOf<UObject> *, TSubclassOf<UObject> *, AController *>(this, "AShooterGameMode.GetDefaultPawnClassForController_Implementation", result, InController); }
	AActor * ChoosePlayerStart_Implementation(AController * Player) { return NativeCall<AActor *, AController *>(this, "AShooterGameMode.ChoosePlayerStart_Implementation", Player); }
	bool IsSpawnpointPreferred(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "AShooterGameMode.IsSpawnpointPreferred", SpawnPoint, Player); }
	bool IsFirstPlayerSpawn(APlayerController * NewPlayer) { return NativeCall<bool, APlayerController *>(this, "AShooterGameMode.IsFirstPlayerSpawn", NewPlayer); }
	void StartNewPlayer(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AShooterGameMode.StartNewPlayer", NewPlayer); }
	void StartNewShooterPlayer(APlayerController * NewPlayer, bool bForceCreateNewPlayerData, bool bIsFromLogin, FPrimalPlayerCharacterConfigStruct * charConfig, UPrimalPlayerData * ArkPlayerData) { NativeCall<void, APlayerController *, bool, bool, FPrimalPlayerCharacterConfigStruct *, UPrimalPlayerData *>(this, "AShooterGameMode.StartNewShooterPlayer", NewPlayer, bForceCreateNewPlayerData, bIsFromLogin, charConfig, ArkPlayerData); }
	void HandleTransferCharacterDialogResult(bool bAccept, AShooterPlayerController * NewPlayer) { NativeCall<void, bool, AShooterPlayerController *>(this, "AShooterGameMode.HandleTransferCharacterDialogResult", bAccept, NewPlayer); }
	void Logout(AController * Exiting) { NativeCall<void, AController *>(this, "AShooterGameMode.Logout", Exiting); }
	FVector * GetTracedSpawnLocation(FVector * result, FVector * SpawnLoc, float CharHalfHeight) { return NativeCall<FVector *, FVector *, FVector *, float>(this, "AShooterGameMode.GetTracedSpawnLocation", result, SpawnLoc, CharHalfHeight); }
	void SetMessageOfTheDay(FString * Message) { NativeCall<void, FString *>(this, "AShooterGameMode.SetMessageOfTheDay", Message); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "AShooterGameMode.ShowMessageOfTheDay"); }
	APawn * SpawnDefaultPawnFor(AController * NewPlayer, AActor * StartSpot) { return NativeCall<APawn *, AController *, AActor *>(this, "AShooterGameMode.SpawnDefaultPawnFor", NewPlayer, StartSpot); }
	FPrimalPlayerCharacterConfigStruct * ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct * result, FPrimalPlayerCharacterConfigStruct * charConfig) { return NativeCall<FPrimalPlayerCharacterConfigStruct *, FPrimalPlayerCharacterConfigStruct *, FPrimalPlayerCharacterConfigStruct *>(this, "AShooterGameMode.ValidateCharacterConfig", result, charConfig); }
	FString * GenerateProfileFileName(FString * result, FUniqueNetIdRepl * UniqueId, FString * NetworkAddresss, FString * PlayerName) { return NativeCall<FString *, FString *, FUniqueNetIdRepl *, FString *, FString *>(this, "AShooterGameMode.GenerateProfileFileName", result, UniqueId, NetworkAddresss, PlayerName); }
	UPrimalPlayerData * LoadPlayerData(AShooterPlayerState * PlayerState, bool bIsLoadingBackup) { return NativeCall<UPrimalPlayerData *, AShooterPlayerState *, bool>(this, "AShooterGameMode.LoadPlayerData", PlayerState, bIsLoadingBackup); }
	void DeletePlayerData(AShooterPlayerState * PlayerState) { NativeCall<void, AShooterPlayerState *>(this, "AShooterGameMode.DeletePlayerData", PlayerState); }
	bool GetOrLoadTribeData(int TribeID, FTribeData * LoadedTribeData) { return NativeCall<bool, int, FTribeData *>(this, "AShooterGameMode.GetOrLoadTribeData", TribeID, LoadedTribeData); }
	bool LoadTribeData(int TribeID, FTribeData * LoadedTribeData, bool bIsLoadingBackup, bool bDontCheckDirtyTribeWar) { return NativeCall<bool, int, FTribeData *, bool, bool>(this, "AShooterGameMode.LoadTribeData", TribeID, LoadedTribeData, bIsLoadingBackup, bDontCheckDirtyTribeWar); }
	UPrimalPlayerData * GetPlayerDataFor(AShooterPlayerController * PC, bool * bCreatedNewPlayerData, bool bForceCreateNewPlayerData, FPrimalPlayerCharacterConfigStruct * charConfig, bool bAutoCreateNewData, bool bDontSaveNewData) { return NativeCall<UPrimalPlayerData *, AShooterPlayerController *, bool *, bool, FPrimalPlayerCharacterConfigStruct *, bool, bool>(this, "AShooterGameMode.GetPlayerDataFor", PC, bCreatedNewPlayerData, bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData); }
	void CheckForRepopulation() { NativeCall<void>(this, "AShooterGameMode.CheckForRepopulation"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.Tick", DeltaSeconds); }
	bool StartSaveBackup() { return NativeCall<bool>(this, "AShooterGameMode.StartSaveBackup"); }
	void SendDatadogMetricEvent(FString * Title, FString * Message) { NativeCall<void, FString *, FString *>(this, "AShooterGameMode.SendDatadogMetricEvent", Title, Message); }
	void TickSaveBackup() { NativeCall<void>(this, "AShooterGameMode.TickSaveBackup"); }
	unsigned __int64 AddNewTribe(AShooterPlayerState * PlayerOwner, FString * TribeName, FTribeGovernment * TribeGovernment) { return NativeCall<unsigned __int64, AShooterPlayerState *, FString *, FTribeGovernment *>(this, "AShooterGameMode.AddNewTribe", PlayerOwner, TribeName, TribeGovernment); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.RemoveTribe", TribeID); }
	void RemovePlayerFromTribe(unsigned __int64 TribeID, unsigned __int64 PlayerDataID, bool bDontUpdatePlayerState) { NativeCall<void, unsigned __int64, unsigned __int64, bool>(this, "AShooterGameMode.RemovePlayerFromTribe", TribeID, PlayerDataID, bDontUpdatePlayerState); }
	int GetTribeIDOfPlayerID(unsigned __int64 PlayerDataID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetTribeIDOfPlayerID", PlayerDataID); }
	FTribeData * GetTribeData(FTribeData * result, unsigned __int64 TribeID) { return NativeCall<FTribeData *, FTribeData *, unsigned __int64>(this, "AShooterGameMode.GetTribeData", result, TribeID); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameMode.BeginPlay"); }
	void GetActorSaveGameTypes(TArray<TSubclassOf<AActor>> * saveGameTypes) { NativeCall<void, TArray<TSubclassOf<AActor>> *>(this, "AShooterGameMode.GetActorSaveGameTypes", saveGameTypes); }
	FString * InitNewPlayer(FString * result, APlayerController * NewPlayerController, TSharedPtr<FUniqueNetId> * UniqueId, FString * Options, FString * Portal) { return NativeCall<FString *, FString *, APlayerController *, TSharedPtr<FUniqueNetId> *, FString *, FString *>(this, "AShooterGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	void SendServerDirectMessage(FString * PlayerSteamID, FString * MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, FString * PlayerName) { NativeCall<void, FString *, FString *, FLinearColor, bool, int, int, FString *>(this, "AShooterGameMode.SendServerDirectMessage", PlayerSteamID, MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, PlayerName); }
	void SendServerChatMessage(FString * MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID) { NativeCall<void, FString *, FLinearColor, bool, int, int>(this, "AShooterGameMode.SendServerChatMessage", MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID); }
	void SendServerNotification(FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard) { NativeCall<void, FString *, FLinearColor, float, float, UTexture2D *, USoundBase *, int, int, bool>(this, "AShooterGameMode.SendServerNotification", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard); }
	void RemovePlayerData(AShooterPlayerState * PlayerState) { NativeCall<void, AShooterPlayerState *>(this, "AShooterGameMode.RemovePlayerData", PlayerState); }
	void InitGameState() { NativeCall<void>(this, "AShooterGameMode.InitGameState"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterGameMode.PreInitializeComponents"); }
	void CheckIsOfficialServer() { NativeCall<void>(this, "AShooterGameMode.CheckIsOfficialServer"); }
	void BeginUnloadingWorld() { NativeCall<void>(this, "AShooterGameMode.BeginUnloadingWorld"); }
	void GetServerNotification() { NativeCall<void>(this, "AShooterGameMode.GetServerNotification"); }
	void GetDynamicConfig() { NativeCall<void>(this, "AShooterGameMode.GetDynamicConfig"); }
	void PostAlarmNotification(FUniqueNetId * SteamID, FString * Title, FString * Message) { NativeCall<void, FUniqueNetId *, FString *, FString *>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotification(FString SteamID, FString * Title, FString * Message) { NativeCall<void, FString, FString *, FString *>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostServerMetrics() { NativeCall<void>(this, "AShooterGameMode.PostServerMetrics"); }
	void SavePlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.SavePlayersJoinNoCheckList"); }
	void LoadPlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.LoadPlayersJoinNoCheckList"); }
	bool IsPlayerAllowedToJoinNoCheck(FUniqueNetIdUInt64 * PlayerId) { return NativeCall<bool, FUniqueNetIdUInt64 *>(this, "AShooterGameMode.IsPlayerAllowedToJoinNoCheck", PlayerId); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController * ForPlayer) { return NativeCall<bool, AShooterPlayerController *>(this, "AShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck", ForPlayer); }
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController * ForPlayer) { return NativeCall<bool, AShooterPlayerController *>(this, "AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin", ForPlayer); }
	bool KickPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.KickPlayer", PlayerSteamName, PlayerSteamID); }
	void KickPlayerController(APlayerController * thePC, FString * KickMessage) { NativeCall<void, APlayerController *, FString *>(this, "AShooterGameMode.KickPlayerController", thePC, KickMessage); }
	bool BanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.BanPlayer", PlayerSteamName, PlayerSteamID); }
	bool UnbanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.UnbanPlayer", PlayerSteamName, PlayerSteamID); }
	void SaveBannedList() { NativeCall<void>(this, "AShooterGameMode.SaveBannedList"); }
	void LoadBannedList() { NativeCall<void>(this, "AShooterGameMode.LoadBannedList"); }
	FString * GetMapName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameMode.GetMapName", result); }
	void UpdateSaveBackupFiles() { NativeCall<void>(this, "AShooterGameMode.UpdateSaveBackupFiles"); }
	void LoadTribeIds_Process(unsigned int theTribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.LoadTribeIds_Process", theTribeID); }
	void LoadTribeIds() { NativeCall<void>(this, "AShooterGameMode.LoadTribeIds"); }
	void LoadPlayerIds_Process(unsigned __int64 InPlayerID, TArray<unsigned char> * ReadBytes) { NativeCall<void, unsigned __int64, TArray<unsigned char> *>(this, "AShooterGameMode.LoadPlayerIds_Process", InPlayerID, ReadBytes); }
	void LoadPlayerDataIds() { NativeCall<void>(this, "AShooterGameMode.LoadPlayerDataIds"); }
	void AddPlayerID(int playerDataID, unsigned __int64 netUniqueID) { NativeCall<void, int, unsigned __int64>(this, "AShooterGameMode.AddPlayerID", playerDataID, netUniqueID); }
	unsigned __int64 GetSteamIDForPlayerID(int playerDataID) { return NativeCall<unsigned __int64, int>(this, "AShooterGameMode.GetSteamIDForPlayerID", playerDataID); }
	int GetPlayerIDForSteamID(unsigned __int64 steamID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetPlayerIDForSteamID", steamID); }
	unsigned int GenerateTribeId() { return NativeCall<unsigned int>(this, "AShooterGameMode.GenerateTribeId"); }
	unsigned int GeneratePlayerDataId(unsigned __int64 NetUniqueID) { return NativeCall<unsigned int, unsigned __int64>(this, "AShooterGameMode.GeneratePlayerDataId", NetUniqueID); }
	float ModifyNPCSpawnLimits(FName DinoNameTag, float CurrentLimit) { return NativeCall<float, FName, float>(this, "AShooterGameMode.ModifyNPCSpawnLimits", DinoNameTag, CurrentLimit); }
	float GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem> HarvestItemClass) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.GetHarvestResourceItemAmountMultiplier", HarvestItemClass); }
	float GetDinoDamageMultiplier(APrimalDinoCharacter * ForDino) { return NativeCall<float, APrimalDinoCharacter *>(this, "AShooterGameMode.GetDinoDamageMultiplier", ForDino); }
	float GetDinoResistanceMultiplier(APrimalDinoCharacter * ForDino) { return NativeCall<float, APrimalDinoCharacter *>(this, "AShooterGameMode.GetDinoResistanceMultiplier", ForDino); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassHidden", ForItemClass); }
	bool IsEngramClassGiveToPlayer(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassGiveToPlayer", ForItemClass); }
	void ListenServerClampPlayerLocations() { NativeCall<void>(this, "AShooterGameMode.ListenServerClampPlayerLocations"); }
	FString * ValidateTribeName(FString * result, FString theTribeName) { return NativeCall<FString *, FString *, FString>(this, "AShooterGameMode.ValidateTribeName", result, theTribeName); }
	void AdjustDamage(AActor * Victim, float * Damage, FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, AActor *, float *, FDamageEvent *, AController *, AActor *>(this, "AShooterGameMode.AdjustDamage", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	void SetTimeOfDay(FString * timeString) { NativeCall<void, FString *>(this, "AShooterGameMode.SetTimeOfDay", timeString); }
	void KickAllPlayersAndReload() { NativeCall<void>(this, "AShooterGameMode.KickAllPlayersAndReload"); }
	bool PlayerCanRestart(APlayerController * Player) { return NativeCall<bool, APlayerController *>(this, "AShooterGameMode.PlayerCanRestart", Player); }
	bool HandleNewPlayer_Implementation(AShooterPlayerController * NewPlayer, UPrimalPlayerData * PlayerData, AShooterCharacter * PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController *, UPrimalPlayerData *, AShooterCharacter *, bool>(this, "AShooterGameMode.HandleNewPlayer_Implementation", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	bool IsPlayerAllowedToCheat(AShooterPlayerController * ForPlayer) { return NativeCall<bool, AShooterPlayerController *>(this, "AShooterGameMode.IsPlayerAllowedToCheat", ForPlayer); }
	void PrintToGameplayLog(FString * InString) { NativeCall<void, FString *>(this, "AShooterGameMode.PrintToGameplayLog", InString); }
	void PrintToServerGameLog(FString * InString, bool bSendChatToAllAdmins) { NativeCall<void, FString *, bool>(this, "AShooterGameMode.PrintToServerGameLog", InString, bSendChatToAllAdmins); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterGameMode.LoadedFromSaveGame"); }
	void RemoveInactivePlayersAndTribes() { NativeCall<void>(this, "AShooterGameMode.RemoveInactivePlayersAndTribes"); }
	void DDoSDetected() { NativeCall<void>(this, "AShooterGameMode.DDoSDetected"); }
	FString * GetSessionTimeString_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameMode.GetSessionTimeString_Implementation", result); }
	static bool AllowDamage(UWorld * ForWorld, int TargetingTeam1, int TargetingTeam2, bool bIgnoreDamageIfAllied) { return NativeCall<bool, UWorld *, int, int, bool>(nullptr, "AShooterGameMode.AllowDamage", ForWorld, TargetingTeam1, TargetingTeam2, bIgnoreDamageIfAllied); }
	bool IsTribeWar(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.IsTribeWar", TribeID1, TribeID2); }
	void UpdateTribeWars() { NativeCall<void>(this, "AShooterGameMode.UpdateTribeWars"); }
	void AddToTribeLog(int TribeId, FString * NewLog) { NativeCall<void, int, FString *>(this, "AShooterGameMode.AddToTribeLog", TribeId, NewLog); }
	TArray<APrimalDinoCharacter *> * GetOverlappingDinoCharactersOfTeamAndClass(TArray<APrimalDinoCharacter *> * result, FVector * AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, FVector *, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass", result, AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	int CountOverlappingDinoCharactersOfTeamAndClass(FVector * AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<int, FVector *, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass", AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	void IncrementNumDinos(int ForTeam, int ByAmount) { NativeCall<void, int, int>(this, "AShooterGameMode.IncrementNumDinos", ForTeam, ByAmount); }
	int GetNumDinosOnTeam(int OnTeam) { return NativeCall<int, int>(this, "AShooterGameMode.GetNumDinosOnTeam", OnTeam); }
	bool AllowTaming(int ForTeam) { return NativeCall<bool, int>(this, "AShooterGameMode.AllowTaming", ForTeam); }
	int ForceAddPlayerToTribe(AShooterPlayerState * ForPlayerState, FString * TribeName) { return NativeCall<int, AShooterPlayerState *, FString *>(this, "AShooterGameMode.ForceAddPlayerToTribe", ForPlayerState, TribeName); }
	int ForceCreateTribe(FString * TribeName, int TeamOverride) { return NativeCall<int, FString *, int>(this, "AShooterGameMode.ForceCreateTribe", TribeName, TeamOverride); }
	int GetNumberOfLivePlayersOnTribe(FString * TribeName) { return NativeCall<int, FString *>(this, "AShooterGameMode.GetNumberOfLivePlayersOnTribe", TribeName); }
	static bool TriggerLevelCustomEvents(UWorld * InWorld, FString * EventName) { return NativeCall<bool, UWorld *, FString *>(nullptr, "AShooterGameMode.TriggerLevelCustomEvents", InWorld, EventName); }
	void UpdateTribeAllianceData(FTribeAlliance * TribeAllianceData, TArray<unsigned int> * OldMembersArray, bool bIsAdd) { NativeCall<void, FTribeAlliance *, TArray<unsigned int> *, bool>(this, "AShooterGameMode.UpdateTribeAllianceData", TribeAllianceData, OldMembersArray, bIsAdd); }
	bool AreTribesAllied(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.AreTribesAllied", TribeID1, TribeID2); }
	void AddTribeWar(int MyTribeID, int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime, bool bForceApprove) { NativeCall<void, int, int, int, int, float, float, bool>(this, "AShooterGameMode.AddTribeWar", MyTribeID, EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime, bForceApprove); }
	void PostAlarmNotificationTribe(int TribeID, FString Title, FString Message) { NativeCall<void, int, FString, FString>(this, "AShooterGameMode.PostAlarmNotificationTribe", TribeID, Title, Message); }
	void SpawnedPawnFor(AController * PC, APawn * SpawnedPawn) { NativeCall<void, AController *, APawn *>(this, "AShooterGameMode.SpawnedPawnFor", PC, SpawnedPawn); }
	void SaveTributePlayerDatas(FString UniqueID) { NativeCall<void, FString>(this, "AShooterGameMode.SaveTributePlayerDatas", UniqueID); }
	void LoadTributePlayerDatas(FString UniqueID) { NativeCall<void, FString>(this, "AShooterGameMode.LoadTributePlayerDatas", UniqueID); }
	void DownloadTransferredPlayer(AShooterPlayerController * NewPlayer) { NativeCall<void, AShooterPlayerController *>(this, "AShooterGameMode.DownloadTransferredPlayer", NewPlayer); }
	void CheckForDupedDinos() { NativeCall<void>(this, "AShooterGameMode.CheckForDupedDinos"); }
};

struct ACustomGameMode : AShooterGameMode
{
};

// Game Data

struct UPrimalGameData : UObject
{
	FieldValue<FString> ModNameField() { return { this, "UPrimalGameData.ModName" }; }
	FieldValue<FString> ModDescriptionField() { return { this, "UPrimalGameData.ModDescription" }; }
	//FieldArray<FPrimalCharacterStatusValueDefinition, 12> StatusValueDefinitionsField() { return { this, "UPrimalGameData.StatusValueDefinitions" }; }
	//FieldArray<FPrimalCharacterStatusStateDefinition, 14> StatusStateDefinitionsField() { return { this, "UPrimalGameData.StatusStateDefinitions" }; }
	//FieldArray<FPrimalItemStatDefinition, 8> ItemStatDefinitionsField() { return { this, "UPrimalGameData.ItemStatDefinitions" }; }
	//FieldArray<FPrimalItemDefinition, 9> ItemTypeDefinitionsField() { return { this, "UPrimalGameData.ItemTypeDefinitions" }; }
	//FieldArray<FPrimalEquipmentDefinition, 9> EquipmentTypeDefinitionsField() { return { this, "UPrimalGameData.EquipmentTypeDefinitions" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> MasterItemListField() { return { this, "UPrimalGameData.MasterItemList" }; }
	//FieldValue<TArray<FPrimalItemQuality>> ItemQualityDefinitionsField() { return { this, "UPrimalGameData.ItemQualityDefinitions" }; }
	//FieldValue<TArray<TSubclassOf<UPrimalEngramEntry>>> EngramBlueprintClassesField() { return { this, "UPrimalGameData.EngramBlueprintClasses" }; }
	//FieldValue<TArray<TSubclassOf<UPrimalEngramEntry>>> AdditionalEngramBlueprintClassesField() { return { this, "UPrimalGameData.AdditionalEngramBlueprintClasses" }; }
	//FieldValue<TArray<TSubclassOf<UPrimalEngramEntry>>> RemoveEngramBlueprintClassesField() { return { this, "UPrimalGameData.RemoveEngramBlueprintClasses" }; }
	//FieldValue<TArray<FStatusValueModifierDescription>> StatusValueModifierDescriptionsField() { return { this, "UPrimalGameData.StatusValueModifierDescriptions" }; }
	FieldValue<TArray<FString>> PlayerSpawnRegionsField() { return { this, "UPrimalGameData.PlayerSpawnRegions" }; }
	FieldValue<USoundBase *> TutorialDisplaySoundField() { return { this, "UPrimalGameData.TutorialDisplaySound" }; }
	FieldValue<USoundBase *> Sound_StartItemDragField() { return { this, "UPrimalGameData.Sound_StartItemDrag" }; }
	FieldValue<USoundBase *> Sound_StopItemDragField() { return { this, "UPrimalGameData.Sound_StopItemDrag" }; }
	FieldValue<USoundBase *> Sound_CancelPlacingStructureField() { return { this, "UPrimalGameData.Sound_CancelPlacingStructure" }; }
	FieldValue<USoundBase *> Sound_ChooseStructureRotationField() { return { this, "UPrimalGameData.Sound_ChooseStructureRotation" }; }
	FieldValue<USoundBase *> Sound_FailPlacingStructureField() { return { this, "UPrimalGameData.Sound_FailPlacingStructure" }; }
	FieldValue<USoundBase *> Sound_ConfirmPlacingStructureField() { return { this, "UPrimalGameData.Sound_ConfirmPlacingStructure" }; }
	FieldValue<USoundBase *> Sound_StartPlacingStructureField() { return { this, "UPrimalGameData.Sound_StartPlacingStructure" }; }
	FieldValue<USoundBase *> Sound_CorpseDecomposeField() { return { this, "UPrimalGameData.Sound_CorpseDecompose" }; }
	FieldValue<USoundBase *> Sound_ApplyLevelUpField() { return { this, "UPrimalGameData.Sound_ApplyLevelUp" }; }
	FieldValue<USoundBase *> Sound_ApplyLevelPointField() { return { this, "UPrimalGameData.Sound_ApplyLevelPoint" }; }
	FieldValue<USoundBase *> Sound_LearnedEngramField() { return { this, "UPrimalGameData.Sound_LearnedEngram" }; }
	FieldValue<USoundBase *> Sound_ReconnectToCharacterField() { return { this, "UPrimalGameData.Sound_ReconnectToCharacter" }; }
	FieldValue<USoundBase *> Sound_DropAllItemsField() { return { this, "UPrimalGameData.Sound_DropAllItems" }; }
	FieldValue<USoundBase *> Sound_TransferAllItemsToRemoteField() { return { this, "UPrimalGameData.Sound_TransferAllItemsToRemote" }; }
	FieldValue<USoundBase *> Sound_TransferAllItemsFromRemoteField() { return { this, "UPrimalGameData.Sound_TransferAllItemsFromRemote" }; }
	FieldValue<USoundBase *> Sound_TransferItemToRemoteField() { return { this, "UPrimalGameData.Sound_TransferItemToRemote" }; }
	FieldValue<USoundBase *> Sound_TransferItemFromRemoteField() { return { this, "UPrimalGameData.Sound_TransferItemFromRemote" }; }
	FieldValue<USoundBase *> Sound_AddItemToSlotField() { return { this, "UPrimalGameData.Sound_AddItemToSlot" }; }
	FieldValue<USoundBase *> Sound_RemoveItemFromSlotField() { return { this, "UPrimalGameData.Sound_RemoveItemFromSlot" }; }
	FieldValue<USoundBase *> Sound_ClearCraftQueueField() { return { this, "UPrimalGameData.Sound_ClearCraftQueue" }; }
	FieldValue<USoundBase *> Sound_AddToCraftQueueField() { return { this, "UPrimalGameData.Sound_AddToCraftQueue" }; }
	FieldValue<USoundBase *> Sound_SetRadioFrequencyField() { return { this, "UPrimalGameData.Sound_SetRadioFrequency" }; }
	FieldValue<USoundBase *> Sound_AddPinToMapField() { return { this, "UPrimalGameData.Sound_AddPinToMap" }; }
	FieldValue<USoundBase *> Sound_RemovePinFromMapField() { return { this, "UPrimalGameData.Sound_RemovePinFromMap" }; }
	FieldValue<USoundBase *> Sound_ApplyDyeField() { return { this, "UPrimalGameData.Sound_ApplyDye" }; }
	FieldValue<USoundBase *> Sound_ApplyPaintField() { return { this, "UPrimalGameData.Sound_ApplyPaint" }; }
	FieldValue<USoundBase *> Sound_SetTextGenericField() { return { this, "UPrimalGameData.Sound_SetTextGeneric" }; }
	FieldValue<USoundBase *> Sound_SplitItemStackField() { return { this, "UPrimalGameData.Sound_SplitItemStack" }; }
	FieldValue<USoundBase *> Sound_MergeItemStackField() { return { this, "UPrimalGameData.Sound_MergeItemStack" }; }
	FieldValue<USoundBase *> Sound_InputPinDigitField() { return { this, "UPrimalGameData.Sound_InputPinDigit" }; }
	FieldValue<USoundBase *> Sound_PinValidatedField() { return { this, "UPrimalGameData.Sound_PinValidated" }; }
	FieldValue<USoundBase *> Sound_PinRejectedField() { return { this, "UPrimalGameData.Sound_PinRejected" }; }
	FieldValue<USoundBase *> Sound_TribeWarBeginField() { return { this, "UPrimalGameData.Sound_TribeWarBegin" }; }
	FieldValue<USoundBase *> Sound_TribeWarEndField() { return { this, "UPrimalGameData.Sound_TribeWarEnd" }; }
	FieldValue<USoundBase *> Sound_DropInventoryItemField() { return { this, "UPrimalGameData.Sound_DropInventoryItem" }; }
	FieldValue<USoundBase *> Sound_RefillWaterContainerField() { return { this, "UPrimalGameData.Sound_RefillWaterContainer" }; }
	FieldValue<TSubclassOf<UPrimalItem>> StarterNoteItemField() { return { this, "UPrimalGameData.StarterNoteItem" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> PrimaryResourcesField() { return { this, "UPrimalGameData.PrimaryResources" }; }
	FieldValue<TSubclassOf<ADroppedItem>> GenericDroppedItemTemplateField() { return { this, "UPrimalGameData.GenericDroppedItemTemplate" }; }
	FieldValue<UMaterialInterface *> PostProcess_KnockoutBlurField() { return { this, "UPrimalGameData.PostProcess_KnockoutBlur" }; }
	FieldValue<TArray<UMaterialInterface *>> BuffPostProcessEffectsField() { return { this, "UPrimalGameData.BuffPostProcessEffects" }; }
	FieldValue<TArray<UMaterialInterface *>> AdditionalBuffPostProcessEffectsField() { return { this, "UPrimalGameData.AdditionalBuffPostProcessEffects" }; }
	FieldValue<UTexture2D *> UnknownIconField() { return { this, "UPrimalGameData.UnknownIcon" }; }
	FieldValue<UMaterialInterface *> UnknownMaterialField() { return { this, "UPrimalGameData.UnknownMaterial" }; }
	FieldValue<UTexture2D *> WhiteTextureField() { return { this, "UPrimalGameData.WhiteTexture" }; }
	FieldValue<UTexture2D *> BlueprintBackgroundField() { return { this, "UPrimalGameData.BlueprintBackground" }; }
	FieldValue<UTexture2D *> BabyCuddleIconField() { return { this, "UPrimalGameData.BabyCuddleIcon" }; }
	FieldValue<UTexture2D *> ImprintedRiderIconField() { return { this, "UPrimalGameData.ImprintedRiderIcon" }; }
	FieldValue<UTexture2D *> WeaponAccessoryActivatedIconField() { return { this, "UPrimalGameData.WeaponAccessoryActivatedIcon" }; }
	FieldValue<UTexture2D *> EngramBackgroundField() { return { this, "UPrimalGameData.EngramBackground" }; }
	FieldValue<UTexture2D *> VoiceChatIconField() { return { this, "UPrimalGameData.VoiceChatIcon" }; }
	FieldValue<UTexture2D *> ItemButtonRecentlySelectedBackgroundField() { return { this, "UPrimalGameData.ItemButtonRecentlySelectedBackground" }; }
	FieldValue<float> GlobalGeneralArmorDegradationMultiplierField() { return { this, "UPrimalGameData.GlobalGeneralArmorDegradationMultiplier" }; }
	FieldValue<float> GlobalSpecificArmorDegradationMultiplierField() { return { this, "UPrimalGameData.GlobalSpecificArmorDegradationMultiplier" }; }
	FieldValue<float> GlobalSpecificArmorRatingMultiplierField() { return { this, "UPrimalGameData.GlobalSpecificArmorRatingMultiplier" }; }
	FieldValue<float> GlobalGeneralArmorRatingMultiplierField() { return { this, "UPrimalGameData.GlobalGeneralArmorRatingMultiplier" }; }
	FieldValue<float> EnemyFoundationPreventionRadiusField() { return { this, "UPrimalGameData.EnemyFoundationPreventionRadius" }; }
	FieldValue<TArray<UObject *>> ExtraResourcesField() { return { this, "UPrimalGameData.ExtraResources" }; }
	FieldValue<TArray<UObject *>> BaseExtraResourcesField() { return { this, "UPrimalGameData.BaseExtraResources" }; }
	FieldValue<TSubclassOf<UObject>> BaseExtraResourcesContainerField() { return { this, "UPrimalGameData.BaseExtraResourcesContainer" }; }
	FieldValue<USoundBase *> CombatMusicDayField() { return { this, "UPrimalGameData.CombatMusicDay" }; }
	FieldValue<USoundBase *> CombatMusicNightField() { return { this, "UPrimalGameData.CombatMusicNight" }; }
	FieldValue<USoundBase *> CombatMusicDay_HeavyField() { return { this, "UPrimalGameData.CombatMusicDay_Heavy" }; }
	FieldValue<USoundBase *> CombatMusicNight_HeavyField() { return { this, "UPrimalGameData.CombatMusicNight_Heavy" }; }
	FieldValue<USoundBase *> LevelUpStingerSoundField() { return { this, "UPrimalGameData.LevelUpStingerSound" }; }
	FieldValue<TSubclassOf<AGameMode>> DefaultGameModeField() { return { this, "UPrimalGameData.DefaultGameMode" }; }
	FieldArray<FLevelExperienceRamp, 4> LevelExperienceRampsField() { return { this, "UPrimalGameData.LevelExperienceRamps" }; }
	FieldArray<FLevelExperienceRamp, 4> SinglePlayerLevelExperienceRampsField() { return { this, "UPrimalGameData.SinglePlayerLevelExperienceRamps" }; }
	FieldValue<TArray<int>> PlayerLevelEngramPointsField() { return { this, "UPrimalGameData.PlayerLevelEngramPoints" }; }
	FieldValue<TArray<int>> PlayerLevelEngramPointsSPField() { return { this, "UPrimalGameData.PlayerLevelEngramPointsSP" }; }
	FieldValue<TArray<FString>> PreventBuildStructureReasonStringsField() { return { this, "UPrimalGameData.PreventBuildStructureReasonStrings" }; }
	//FieldValue<TArray<FClassRemapping>> Remap_NPCField() { return { this, "UPrimalGameData.Remap_NPC" }; }
	//FieldValue<TArray<FClassRemapping>> Remap_SupplyCratesField() { return { this, "UPrimalGameData.Remap_SupplyCrates" }; }
	//FieldValue<TArray<FClassRemapping>> Remap_ResourceComponentsField() { return { this, "UPrimalGameData.Remap_ResourceComponents" }; }
	//FieldValue<TArray<FClassRemapping>> Remap_NPCSpawnEntriesField() { return { this, "UPrimalGameData.Remap_NPCSpawnEntries" }; }
	//FieldValue<TArray<FClassRemapping>> Remap_EngramsField() { return { this, "UPrimalGameData.Remap_Engrams" }; }
	//FieldValue<TArray<FClassRemapping>> Remap_ItemsField() { return { this, "UPrimalGameData.Remap_Items" }; }
	//FieldValue<TArray<FClassAddition>> AdditionalStructureEngramsField() { return { this, "UPrimalGameData.AdditionalStructureEngrams" }; }
	//FieldValue<TArray<FBuffAddition>> AdditionalDefaultBuffsField() { return { this, "UPrimalGameData.AdditionalDefaultBuffs" }; }
	FieldValue<TSubclassOf<AActor>> ActorToSpawnUponEnemyCoreStructureDeathField() { return { this, "UPrimalGameData.ActorToSpawnUponEnemyCoreStructureDeath" }; }
	FieldValue<TArray<TSubclassOf<APrimalStructure>>> AdditionalStructuresToPlaceField() { return { this, "UPrimalGameData.AdditionalStructuresToPlace" }; }
	//FieldValue<TArray<TSubclassOf<UPrimalItem_Dye>>> MasterDyeListField() { return { this, "UPrimalGameData.MasterDyeList" }; }
	FieldValue<TArray<FColor>> MasterColorTableField() { return { this, "UPrimalGameData.MasterColorTable" }; }
	FieldValue<float> EnemyCoreStructureDeathActorRadiusBuildCheckField() { return { this, "UPrimalGameData.EnemyCoreStructureDeathActorRadiusBuildCheck" }; }
	FieldValue<TSubclassOf<APrimalStructureItemContainer>> DeathDestructionDepositInventoryClassField() { return { this, "UPrimalGameData.DeathDestructionDepositInventoryClass" }; }
	FieldValue<UTexture2D *> MateBoostIconField() { return { this, "UPrimalGameData.MateBoostIcon" }; }
	FieldValue<UTexture2D *> EggBoostIconField() { return { this, "UPrimalGameData.EggBoostIcon" }; }
	FieldValue<UTexture2D *> MatingIconField() { return { this, "UPrimalGameData.MatingIcon" }; }
	FieldValue<UTexture2D *> NearFeedIconField() { return { this, "UPrimalGameData.NearFeedIcon" }; }
	FieldValue<UTexture2D *> BuffedIconField() { return { this, "UPrimalGameData.BuffedIcon" }; }
	FieldValue<UTexture2D *> GamepadFaceButtonTopField() { return { this, "UPrimalGameData.GamepadFaceButtonTop" }; }
	FieldValue<UTexture2D *> GamepadFaceButtonBottomField() { return { this, "UPrimalGameData.GamepadFaceButtonBottom" }; }
	FieldValue<UTexture2D *> GamepadFaceButtonLeftField() { return { this, "UPrimalGameData.GamepadFaceButtonLeft" }; }
	FieldValue<UTexture2D *> GamepadFaceButtonRightField() { return { this, "UPrimalGameData.GamepadFaceButtonRight" }; }
	FieldValue<float> TribeXPSharePercentField() { return { this, "UPrimalGameData.TribeXPSharePercent" }; }
	FieldValue<int> OverrideServerPhysXSubstepsField() { return { this, "UPrimalGameData.OverrideServerPhysXSubsteps" }; }
	FieldValue<float> OverrideServerPhysXSubstepsDeltaTimeField() { return { this, "UPrimalGameData.OverrideServerPhysXSubstepsDeltaTime" }; }
	FieldValue<bool> bInitializedField() { return { this, "UPrimalGameData.bInitialized" }; }
	FieldArray<USoundBase *, 3> Sound_TamedDinosField() { return { this, "UPrimalGameData.Sound_TamedDinos" }; }
	FieldValue<USoundBase *> Sound_ItemStartCraftingField() { return { this, "UPrimalGameData.Sound_ItemStartCrafting" }; }
	FieldValue<USoundBase *> Sound_ItemFinishCraftingField() { return { this, "UPrimalGameData.Sound_ItemFinishCrafting" }; }
	FieldValue<USoundBase *> Sound_ItemStartRepairingField() { return { this, "UPrimalGameData.Sound_ItemStartRepairing" }; }
	FieldValue<USoundBase *> Sound_ItemFinishRepairingField() { return { this, "UPrimalGameData.Sound_ItemFinishRepairing" }; }
	FieldValue<float> MinPaintDurationConsumptionField() { return { this, "UPrimalGameData.MinPaintDurationConsumption" }; }
	FieldValue<float> MaxPaintDurationConsumptionField() { return { this, "UPrimalGameData.MaxPaintDurationConsumption" }; }
	FieldValue<float> MinDinoRadiusForPaintConsumptionField() { return { this, "UPrimalGameData.MinDinoRadiusForPaintConsumption" }; }
	FieldValue<float> MaxDinoRadiusForPaintConsumptionField() { return { this, "UPrimalGameData.MaxDinoRadiusForPaintConsumption" }; }
	//FieldValue<TArray<FDinoBabySetup>> DinoBabySetupsField() { return { this, "UPrimalGameData.DinoBabySetups" }; }
	//FieldValue<TArray<FDinoBabySetup>> DinoGestationSetupsField() { return { this, "UPrimalGameData.DinoGestationSetups" }; }
	FieldValue<TSubclassOf<UPrimalItem>> SoapItemTemplateField() { return { this, "UPrimalGameData.SoapItemTemplate" }; }
	FieldValue<UTexture2D *> NameTagWildcardAdminField() { return { this, "UPrimalGameData.NameTagWildcardAdmin" }; }
	FieldValue<UTexture2D *> NameTagServerAdminField() { return { this, "UPrimalGameData.NameTagServerAdmin" }; }
	FieldValue<UTexture2D *> NameTagTribeAdminField() { return { this, "UPrimalGameData.NameTagTribeAdmin" }; }
	FieldValue<TArray<UTexture2D *>> BadgeGroupsNameTagField() { return { this, "UPrimalGameData.BadgeGroupsNameTag" }; }
	FieldValue<TArray<FString>> AchievementIDsField() { return { this, "UPrimalGameData.AchievementIDs" }; }
	FieldValue<TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>> AchievementIDSetField() { return { this, "UPrimalGameData.AchievementIDSet" }; }
	FieldValue<TArray<float>> AdditionalEggWeightsToSpawnField() { return { this, "UPrimalGameData.AdditionalEggWeightsToSpawn" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> AdditionalEggItemsToSpawnField() { return { this, "UPrimalGameData.AdditionalEggItemsToSpawn" }; }
	FieldValue<TArray<float>> FertilizedAdditionalEggWeightsToSpawnField() { return { this, "UPrimalGameData.FertilizedAdditionalEggWeightsToSpawn" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> FertilizedAdditionalEggItemsToSpawnField() { return { this, "UPrimalGameData.FertilizedAdditionalEggItemsToSpawn" }; }
	FieldValue<FString> ItemAchievementsNameField() { return { this, "UPrimalGameData.ItemAchievementsName" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> ItemAchievementsListField() { return { this, "UPrimalGameData.ItemAchievementsList" }; }
	FieldValue<TArray<TSubclassOf<UPrimalItem>>> GlobalCuddleFoodListField() { return { this, "UPrimalGameData.GlobalCuddleFoodList" }; }
	FieldValue<USoundBase *> DinoIncrementedImprintingSoundField() { return { this, "UPrimalGameData.DinoIncrementedImprintingSound" }; }
	FieldValue<USoundBase *> HitMarkerCharacterSoundField() { return { this, "UPrimalGameData.HitMarkerCharacterSound" }; }
	FieldValue<USoundBase *> HitMarkerStructureSoundField() { return { this, "UPrimalGameData.HitMarkerStructureSound" }; }
	FieldValue<UMaterialInterface *> PostProcess_ColorLUTField() { return { this, "UPrimalGameData.PostProcess_ColorLUT" }; }
	FieldValue<USoundBase *> Sound_DossierUnlockedField() { return { this, "UPrimalGameData.Sound_DossierUnlocked" }; }
	FieldValue<USoundBase *> Sound_ItemUseOnItemField() { return { this, "UPrimalGameData.Sound_ItemUseOnItem" }; }
	FieldValue<USoundBase *> Sound_RemoveItemSkinField() { return { this, "UPrimalGameData.Sound_RemoveItemSkin" }; }
	FieldValue<USoundBase *> Sound_RemoveClipAmmoField() { return { this, "UPrimalGameData.Sound_RemoveClipAmmo" }; }
	FieldValue<float> ExplorerNoteXPGainField() { return { this, "UPrimalGameData.ExplorerNoteXPGain" }; }
	FieldArray<UTexture2D *[3], 23> BuffTypeBackgroundsField() { return { this, "UPrimalGameData.BuffTypeBackgrounds" }; }
	FieldArray<UTexture2D *[3], 23> BuffTypeForegroundsField() { return { this, "UPrimalGameData.BuffTypeForegrounds" }; }
	FieldValue<TSubclassOf<APrimalBuff>> ExplorerNoteXPBuffField() { return { this, "UPrimalGameData.ExplorerNoteXPBuff" }; }
	FieldValue<UTexture2D *> PerMapExplorerNoteLockedIconField() { return { this, "UPrimalGameData.PerMapExplorerNoteLockedIcon" }; }
	FieldValue<UTexture2D *> TamedDinoUnlockedIconField() { return { this, "UPrimalGameData.TamedDinoUnlockedIcon" }; }
	FieldValue<UTexture2D *> TamedDinoLockedIconField() { return { this, "UPrimalGameData.TamedDinoLockedIcon" }; }
	FieldValue<UTexture2D *> DinoOrderIconField() { return { this, "UPrimalGameData.DinoOrderIcon" }; }
	FieldValue<TArray<TSubclassOf<AActor>>> ServerExtraWorldSingletonActorClassesField() { return { this, "UPrimalGameData.ServerExtraWorldSingletonActorClasses" }; }
	FieldValue<bool> bForceServerUseDinoListField() { return { this, "UPrimalGameData.bForceServerUseDinoList" }; }
	FieldValue<TArray<TSubclassOf<UPrimalGameData>>> ExtraStackedGameDataClassesField() { return { this, "UPrimalGameData.ExtraStackedGameDataClasses" }; }
	FieldValue<TSubclassOf<UPrimalItem>> ExtraEggItemField() { return { this, "UPrimalGameData.ExtraEggItem" }; }
	FieldValue<USoundBase *> GenericWaterPostprocessAmbientSoundField() { return { this, "UPrimalGameData.GenericWaterPostprocessAmbientSound" }; }
	FieldValue<TSubclassOf<UPrimalPlayerData>> OverridePlayerDataClassField() { return { this, "UPrimalGameData.OverridePlayerDataClass" }; }
	FieldValue<TArray<FName>> AllDinosAchievementNameTagsField() { return { this, "UPrimalGameData.AllDinosAchievementNameTags" }; }
	FieldValue<USoundBase *> GenericArrowPickedUpSoundField() { return { this, "UPrimalGameData.GenericArrowPickedUpSound" }; }
	FieldValue<UTexture2D *> UnlockIconField() { return { this, "UPrimalGameData.UnlockIcon" }; }
	FieldValue<FColor> WheelFolderColorField() { return { this, "UPrimalGameData.WheelFolderColor" }; }
	FieldValue<FColor> WheelBackColorField() { return { this, "UPrimalGameData.WheelBackColor" }; }
	FieldValue<UTexture2D *> MaxInventoryIconField() { return { this, "UPrimalGameData.MaxInventoryIcon" }; }
	FieldValue<UTexture2D *> ItemSkinIconField() { return { this, "UPrimalGameData.ItemSkinIcon" }; }
	FieldValue<TArray<TEnumAsByte<enum ECollisionChannel>>> SkeletalPhysCustomBodyAdditionalIgnoresField() { return { this, "UPrimalGameData.SkeletalPhysCustomBodyAdditionalIgnores" }; }
	FieldValue<USoundBase *> ActionWheelClickSoundField() { return { this, "UPrimalGameData.ActionWheelClickSound" }; }
	FieldValue<USoundBase *> Sound_GenericBoardPassengerField() { return { this, "UPrimalGameData.Sound_GenericBoardPassenger" }; }
	FieldValue<USoundBase *> Sound_GenericUnboardPassengerField() { return { this, "UPrimalGameData.Sound_GenericUnboardPassenger" }; }
	FieldValue<USoundBase *> Sound_CraftingTabToggleField() { return { this, "UPrimalGameData.Sound_CraftingTabToggle" }; }
	FieldValue<TSubclassOf<UPrimalItem>> GenericBatteryItemClassField() { return { this, "UPrimalGameData.GenericBatteryItemClass" }; }
	//FieldValue<TMap<UClass *, UPrimalEngramEntry *, FDefaultSetAllocator, TDefaultMapKeyFuncs<UClass *, UPrimalEngramEntry *, 0> >> ItemEngramMapField() { return { this, "UPrimalGameData.ItemEngramMap" }; }
};

struct UGameInstance : UObject //, FExec
{
	/*FWorldContext *WorldContext;
	TArray<ULocalPlayer *, FDefaultAllocator> LocalPlayers;
	FString PIEMapName;*/
};

struct UShooterGameInstance : UGameInstance
{
	/*FName CurrentState;
	bool bCanUseUserGeneratedContent;
	bool bHasCommunicationPrivilige;
	TBaseDelegate_ThreeParams<void, FUniqueNetId const &, enum EUserPrivileges::Type, unsigned int> OnGetUserCommunicationPrivilegeCompleteDelegate;
	FString WelcomeScreenMap;
	FString MainMenuMap;
	FName PendingState;
	FShooterPendingMessage PendingMessage;
	FShooterPendingInvite PendingInvite;
	FString TravelURL;
	bool bIsOnline;
	bool bPendingEnableSplitscreen;
	bool bIsLicensed;
	int IgnorePairingChangeForControllerId;
	EOnlineServerConnectionStatus::Type CurrentConnectionStatus;
	TBaseDelegate_RetVal_OneParam<bool, float> TickDelegate;
	TBaseDelegate_TwoParams<void, FName, bool> OnEndSessionCompleteDelegate;
	TWeakObjectPtr<AStaticMeshActor, FWeakObjectPtr, FIndexToObject> RagdollKinematicActor;
	TWeakObjectPtr<ADayCycleManager, FWeakObjectPtr, FIndexToObject> DayCycleManager;
	TWeakObjectPtr<ASOTFNotification, FWeakObjectPtr, FIndexToObject> SOTFNotificationManager;
	int bOnReturnToMainMenuNotification;
	FString OnReturnToMainMenuNotificationMessage;
	FString OnReturnToMainMenuNotificationTitle;
	FString GlobalMainMenuMessage;
	FString GlobalMainMenuTitle;
	TBaseDelegate_OneParam<void, bool> GlobalMainMenuDialogDelegate;
	bool bHasReceivedNewsMessage;
	bool bHasOfficialStatusMessage;
	FString NewsMessage;
	FString OfficialStatusMessage;
	FWindowsCriticalSection TerrainGenerationMutex;
	FString TerrainGenerationProgressBarMsg;
	float SecondsSpentGeneratingTerrain;
	bool TerrainIsGenerating;*/
};
