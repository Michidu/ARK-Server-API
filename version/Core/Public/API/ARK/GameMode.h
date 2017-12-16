#pragma once

class UWorld
{
public:
	TArray<TSubclassOf<AActor>> GetActorsClassesAllowedToSaveField() const
	{
		return GetNativeField<TArray<TSubclassOf<AActor>>>(this, "UWorld", "ActorsClassesAllowedToSave");
	}
	bool GetbIsIdleField() const { return GetNativeField<bool>(this, "UWorld", "bIsIdle"); }
	void SetbIsIdleField(bool newValue) { SetNativeField(this, "UWorld", "bIsIdle", newValue); }
	ULevel* GetPersistentLevelField() const { return GetNativeField<ULevel *>(this, "UWorld", "PersistentLevel"); }
	AGameState* GetGameStateField() const { return GetNativeField<AGameState *>(this, "UWorld", "GameState"); }
	TArray<UObject *> GetExtraReferencedObjectsField() const
	{
		return GetNativeField<TArray<UObject *>>(this, "UWorld", "ExtraReferencedObjects");
	}
	FString GetStreamingLevelsPrefixField() const
	{
		return GetNativeField<FString>(this, "UWorld", "StreamingLevelsPrefix");
	}
	void SetStreamingLevelsPrefixField(FString newValue)
	{
		SetNativeField(this, "UWorld", "StreamingLevelsPrefix", newValue);
	}
	ULevel* GetCurrentLevelPendingVisibilityField() const
	{
		return GetNativeField<ULevel *>(this, "UWorld", "CurrentLevelPendingVisibility");
	}
	void SetCurrentLevelPendingVisibilityField(ULevel* newValue)
	{
		SetNativeField(this, "UWorld", "CurrentLevelPendingVisibility", newValue);
	}
	TArray<FVector> GetViewLocationsRenderedLastFrameField() const
	{
		return GetNativeField<TArray<FVector>>(this, "UWorld", "ViewLocationsRenderedLastFrame");
	}
	AGameMode* GetAuthorityGameModeField() const
	{
		return GetNativeField<AGameMode *>(this, "UWorld", "AuthorityGameMode");
	}
	TArray<ULevel *> GetLevelsField() const { return GetNativeField<TArray<ULevel *>>(this, "UWorld", "Levels"); }
	TArray<AActor *> GetNetworkActorsField() const
	{
		return GetNativeField<TArray<AActor *>>(this, "UWorld", "NetworkActors");
	}
	ULevel* GetCurrentLevelField() const { return GetNativeField<ULevel *>(this, "UWorld", "CurrentLevel"); }
	int GetFrameCounterField() const { return GetNativeField<int>(this, "UWorld", "FrameCounter"); }
	void SetFrameCounterField(int newValue) { SetNativeField(this, "UWorld", "FrameCounter", newValue); }
	bool GetGamePreviewField() const { return GetNativeField<bool>(this, "UWorld", "GamePreview"); }
	void SetGamePreviewField(bool newValue) { SetNativeField(this, "UWorld", "GamePreview", newValue); }
	TArray<TWeakObjectPtr<AController>> GetControllerListField() const
	{
		return GetNativeField<TArray<TWeakObjectPtr<AController>>>(this, "UWorld", "ControllerList");
	}
	TArray<TWeakObjectPtr<APlayerController>> GetPlayerControllerListField() const
	{
		return GetNativeField<TArray<TWeakObjectPtr<APlayerController>>>(this, "UWorld", "PlayerControllerList");
	}
	TArray<TWeakObjectPtr<APawn>> GetPawnListField() const
	{
		return GetNativeField<TArray<TWeakObjectPtr<APawn>>>(this, "UWorld", "PawnList");
	}
	bool GetbPostTickComponentUpdateField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bPostTickComponentUpdate");
	}
	void SetbPostTickComponentUpdateField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bPostTickComponentUpdate", newValue);
	}
	int GetPlayerNumField() const { return GetNativeField<int>(this, "UWorld", "PlayerNum"); }
	void SetPlayerNumField(int newValue) { SetNativeField(this, "UWorld", "PlayerNum", newValue); }
	float GetTimeSinceLastPendingKillPurgeField() const
	{
		return GetNativeField<float>(this, "UWorld", "TimeSinceLastPendingKillPurge");
	}
	void SetTimeSinceLastPendingKillPurgeField(float newValue)
	{
		SetNativeField(this, "UWorld", "TimeSinceLastPendingKillPurge", newValue);
	}
	bool GetFullPurgeTriggeredField() const { return GetNativeField<bool>(this, "UWorld", "FullPurgeTriggered"); }
	void SetFullPurgeTriggeredField(bool newValue) { SetNativeField(this, "UWorld", "FullPurgeTriggered", newValue); }
	bool GetbShouldDelayGarbageCollectField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bShouldDelayGarbageCollect");
	}
	void SetbShouldDelayGarbageCollectField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bShouldDelayGarbageCollect", newValue);
	}
	bool GetbIsWorldInitializedField() const { return GetNativeField<bool>(this, "UWorld", "bIsWorldInitialized"); }
	void SetbIsWorldInitializedField(bool newValue) { SetNativeField(this, "UWorld", "bIsWorldInitialized", newValue); }
	int GetAllowLevelLoadOverrideField() const { return GetNativeField<int>(this, "UWorld", "AllowLevelLoadOverride"); }
	void SetAllowLevelLoadOverrideField(int newValue)
	{
		SetNativeField(this, "UWorld", "AllowLevelLoadOverride", newValue);
	}
	int GetStreamingVolumeUpdateDelayField() const
	{
		return GetNativeField<int>(this, "UWorld", "StreamingVolumeUpdateDelay");
	}
	void SetStreamingVolumeUpdateDelayField(int newValue)
	{
		SetNativeField(this, "UWorld", "StreamingVolumeUpdateDelay", newValue);
	}
	bool GetbIsLevelStreamingFrozenField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bIsLevelStreamingFrozen");
	}
	void SetbIsLevelStreamingFrozenField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bIsLevelStreamingFrozen", newValue);
	}
	bool GetbShouldForceUnloadStreamingLevelsField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bShouldForceUnloadStreamingLevels");
	}
	void SetbShouldForceUnloadStreamingLevelsField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bShouldForceUnloadStreamingLevels", newValue);
	}
	bool GetbShouldForceVisibleStreamingLevelsField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bShouldForceVisibleStreamingLevels");
	}
	void SetbShouldForceVisibleStreamingLevelsField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bShouldForceVisibleStreamingLevels", newValue);
	}
	bool GetbDoDelayedUpdateCullDistanceVolumesField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bDoDelayedUpdateCullDistanceVolumes");
	}
	void SetbDoDelayedUpdateCullDistanceVolumesField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bDoDelayedUpdateCullDistanceVolumes", newValue);
	}
	bool GetbIsRunningConstructionScriptField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bIsRunningConstructionScript");
	}
	void SetbIsRunningConstructionScriptField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bIsRunningConstructionScript", newValue);
	}
	bool GetbShouldSimulatePhysicsField() const { return GetNativeField<bool>(this, "UWorld", "bShouldSimulatePhysics"); }
	void SetbShouldSimulatePhysicsField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bShouldSimulatePhysics", newValue);
	}
	FName GetDebugDrawTraceTagField() const { return GetNativeField<FName>(this, "UWorld", "DebugDrawTraceTag"); }
	void SetDebugDrawTraceTagField(FName newValue) { SetNativeField(this, "UWorld", "DebugDrawTraceTag", newValue); }
	long double GetLastTimeUnbuiltLightingWasEncounteredField() const
	{
		return GetNativeField<long double>(this, "UWorld", "LastTimeUnbuiltLightingWasEncountered");
	}
	void SetLastTimeUnbuiltLightingWasEncounteredField(long double newValue)
	{
		SetNativeField(this, "UWorld", "LastTimeUnbuiltLightingWasEncountered", newValue);
	}
	long double GetTimeSecondsField() const { return GetNativeField<long double>(this, "UWorld", "TimeSeconds"); }
	void SetTimeSecondsField(long double newValue) { SetNativeField(this, "UWorld", "TimeSeconds", newValue); }
	long double GetLoadedAtTimeSecondsField() const
	{
		return GetNativeField<long double>(this, "UWorld", "LoadedAtTimeSeconds");
	}
	void SetLoadedAtTimeSecondsField(long double newValue)
	{
		SetNativeField(this, "UWorld", "LoadedAtTimeSeconds", newValue);
	}
	long double GetRealTimeSecondsField() const { return GetNativeField<long double>(this, "UWorld", "RealTimeSeconds"); }
	void SetRealTimeSecondsField(long double newValue) { SetNativeField(this, "UWorld", "RealTimeSeconds", newValue); }
	long double GetAudioTimeSecondsField() const
	{
		return GetNativeField<long double>(this, "UWorld", "AudioTimeSeconds");
	}
	void SetAudioTimeSecondsField(long double newValue) { SetNativeField(this, "UWorld", "AudioTimeSeconds", newValue); }
	float GetDeltaTimeSecondsField() const { return GetNativeField<float>(this, "UWorld", "DeltaTimeSeconds"); }
	void SetDeltaTimeSecondsField(float newValue) { SetNativeField(this, "UWorld", "DeltaTimeSeconds", newValue); }
	float GetPauseDelayField() const { return GetNativeField<float>(this, "UWorld", "PauseDelay"); }
	void SetPauseDelayField(float newValue) { SetNativeField(this, "UWorld", "PauseDelay", newValue); }
	bool GetbBlockAllOnNextLevelStreamingProcessField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bBlockAllOnNextLevelStreamingProcess");
	}
	void SetbBlockAllOnNextLevelStreamingProcessField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bBlockAllOnNextLevelStreamingProcess", newValue);
	}
	FIntVector GetOriginLocationField() const { return GetNativeField<FIntVector>(this, "UWorld", "OriginLocation"); }
	void SetOriginLocationField(FIntVector newValue) { SetNativeField(this, "UWorld", "OriginLocation", newValue); }
	FIntVector GetRequestedOriginLocationField() const
	{
		return GetNativeField<FIntVector>(this, "UWorld", "RequestedOriginLocation");
	}
	void SetRequestedOriginLocationField(FIntVector newValue)
	{
		SetNativeField(this, "UWorld", "RequestedOriginLocation", newValue);
	}
	bool GetbOriginOffsetThisFrameField() const { return GetNativeField<bool>(this, "UWorld", "bOriginOffsetThisFrame"); }
	void SetbOriginOffsetThisFrameField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bOriginOffsetThisFrame", newValue);
	}
	bool GetbFlushingLevelStreamingField() const
	{
		return GetNativeField<bool>(this, "UWorld", "bFlushingLevelStreaming");
	}
	void SetbFlushingLevelStreamingField(bool newValue)
	{
		SetNativeField(this, "UWorld", "bFlushingLevelStreaming", newValue);
	}
	long double GetForceBlockLoadTimeoutField() const
	{
		return GetNativeField<long double>(this, "UWorld", "ForceBlockLoadTimeout");
	}
	void SetForceBlockLoadTimeoutField(long double newValue)
	{
		SetNativeField(this, "UWorld", "ForceBlockLoadTimeout", newValue);
	}
	FString GetNextURLField() const { return GetNativeField<FString>(this, "UWorld", "NextURL"); }
	void SetNextURLField(FString newValue) { SetNativeField(this, "UWorld", "NextURL", newValue); }
	float GetNextSwitchCountdownField() const { return GetNativeField<float>(this, "UWorld", "NextSwitchCountdown"); }
	void SetNextSwitchCountdownField(float newValue) { SetNativeField(this, "UWorld", "NextSwitchCountdown", newValue); }
	FName GetCommittedPersistentLevelNameField() const
	{
		return GetNativeField<FName>(this, "UWorld", "CommittedPersistentLevelName");
	}
	void SetCommittedPersistentLevelNameField(FName newValue)
	{
		SetNativeField(this, "UWorld", "CommittedPersistentLevelName", newValue);
	}
	FString GetCurrentDayTimeField() const { return GetNativeField<FString>(this, "UWorld", "CurrentDayTime"); }
	void SetCurrentDayTimeField(FString newValue) { SetNativeField(this, "UWorld", "CurrentDayTime", newValue); }

	// Functions

	AActor* SpawnActor(UClass* Class, FVector* Location, FRotator* Rotation, FActorSpawnParameters* SpawnParameters)
	{
		return NativeCall<AActor *, UClass *, FVector *, FRotator *, FActorSpawnParameters *>(
			(DWORD64)this, "UWorld", "SpawnActor", Class, Location, Rotation, SpawnParameters);
	}
	bool DestroyActor(AActor* ThisActor, bool bNetForce, bool bShouldModifyLevel)
	{
		return NativeCall<bool, AActor *, bool, bool>((DWORD64)this, "UWorld", "DestroyActor", ThisActor, bNetForce,
		                                              bShouldModifyLevel);
	}
	bool FindTeleportSpot() { return NativeCall<bool>((DWORD64)this, "UWorld", "FindTeleportSpot"); }
	bool EncroachingBlockingGeometry() { return NativeCall<bool>((DWORD64)this, "UWorld", "EncroachingBlockingGeometry"); }
	bool IsPaused() { return NativeCall<bool>((DWORD64)this, "UWorld", "IsPaused"); }
	void ProcessLevelStreamingVolumes(FVector* OverrideViewLocation)
	{
		NativeCall<void, FVector *>((DWORD64)this, "UWorld", "ProcessLevelStreamingVolumes", OverrideViewLocation);
	}
	void CleanupActors() { NativeCall<void>((DWORD64)this, "UWorld", "CleanupActors"); }
	void UpdateAllReflectionCaptures() { NativeCall<void>((DWORD64)this, "UWorld", "UpdateAllReflectionCaptures"); }
	void FinishDestroy() { NativeCall<void>((DWORD64)this, "UWorld", "FinishDestroy"); }
	void PostLoad() { NativeCall<void>((DWORD64)this, "UWorld", "PostLoad"); }
	bool PreSaveRoot(const wchar_t* Filename, TArray<FString>* AdditionalPackagesToCook)
	{
		return NativeCall<bool, const wchar_t *, TArray<FString> *>((DWORD64)this, "UWorld", "PreSaveRoot", Filename,
		                                                            AdditionalPackagesToCook);
	}
	void PostSaveRoot(bool bCleanupIsRequired)
	{
		NativeCall<void, bool>((DWORD64)this, "UWorld", "PostSaveRoot", bCleanupIsRequired);
	}
	void SetupParameterCollectionInstances()
	{
		NativeCall<void>((DWORD64)this, "UWorld", "SetupParameterCollectionInstances");
	}
	void RemoveActor(AActor* Actor, bool bShouldModifyLevel)
	{
		NativeCall<void, AActor *, bool>((DWORD64)this, "UWorld", "RemoveActor", Actor, bShouldModifyLevel);
	}
	bool AllowAudioPlayback() { return NativeCall<bool>((DWORD64)this, "UWorld", "AllowAudioPlayback"); }
	void ClearWorldComponents() { NativeCall<void>((DWORD64)this, "UWorld", "ClearWorldComponents"); }
	void UpdateWorldComponents(bool bRerunConstructionScripts, bool bCurrentLevelOnly)
	{
		NativeCall<void, bool, bool>((DWORD64)this, "UWorld", "UpdateWorldComponents", bRerunConstructionScripts,
		                             bCurrentLevelOnly);
	}
	void UpdateCullDistanceVolumes() { NativeCall<void>((DWORD64)this, "UWorld", "UpdateCullDistanceVolumes"); }
	void ModifyLevel(ULevel* Level) { NativeCall<void, ULevel *>((DWORD64)this, "UWorld", "ModifyLevel", Level); }
	void EnsureCollisionTreeIsBuilt() { NativeCall<void>((DWORD64)this, "UWorld", "EnsureCollisionTreeIsBuilt"); }
	void AddToWorld(ULevel* Level, FTransform* LevelTransform, bool bAlwaysConsiderTimeLimit)
	{
		NativeCall<void, ULevel *, FTransform *, bool>((DWORD64)this, "UWorld", "AddToWorld", Level, LevelTransform,
		                                               bAlwaysConsiderTimeLimit);
	}
	void RemoveFromWorld(ULevel* Level) { NativeCall<void, ULevel *>((DWORD64)this, "UWorld", "RemoveFromWorld", Level); }
	bool AreAlwaysLoadedLevelsLoaded() { return NativeCall<bool>((DWORD64)this, "UWorld", "AreAlwaysLoadedLevelsLoaded"); }
	bool AllowLevelLoadRequests() { return NativeCall<bool>((DWORD64)this, "UWorld", "AllowLevelLoadRequests"); }
	void CleanupWorld(bool bSessionEnded, bool bCleanupResources, UWorld* NewWorld)
	{
		NativeCall<void, bool, bool, UWorld *>((DWORD64)this, "UWorld", "CleanupWorld", bSessionEnded, bCleanupResources,
		                                       NewWorld);
	}
	APlayerController* GetFirstPlayerController()
	{
		return NativeCall<APlayerController *>((DWORD64)this, "UWorld", "GetFirstPlayerController");
	}
	float GetDefaultGravityZ() { return NativeCall<float>((DWORD64)this, "UWorld", "GetDefaultGravityZ"); }
	FString* GetMapName(FString* result)
	{
		return NativeCall<FString *, FString *>((DWORD64)this, "UWorld", "GetMapName", result);
	}
	bool IsPreparingMapChange() { return NativeCall<bool>((DWORD64)this, "UWorld", "IsPreparingMapChange"); }
	bool SetNewWorldOrigin() { return NativeCall<bool>((DWORD64)this, "UWorld", "SetNewWorldOrigin"); }
	void NavigateTo() { NativeCall<void>((DWORD64)this, "UWorld", "NavigateTo"); }
	void SeamlessTravel() { NativeCall<void>((DWORD64)this, "UWorld", "SeamlessTravel"); }
	bool IsInSeamlessTravel() { return NativeCall<bool>((DWORD64)this, "UWorld", "IsInSeamlessTravel"); }
	void UpdateConstraintActors() { NativeCall<void>((DWORD64)this, "UWorld", "UpdateConstraintActors"); }
	int GetActorCount() { return NativeCall<int>((DWORD64)this, "UWorld", "GetActorCount"); }
	int GetNetRelevantActorCount() { return NativeCall<int>((DWORD64)this, "UWorld", "GetNetRelevantActorCount"); }
	bool ContainsLevel(ULevel* InLevel)
	{
		return NativeCall<bool, ULevel *>((DWORD64)this, "UWorld", "ContainsLevel", InLevel);
	}
	FString* GetLocalURL(FString* result)
	{
		return NativeCall<FString *, FString *>((DWORD64)this, "UWorld", "GetLocalURL", result);
	}
	FString* GetAddressURL(FString* result)
	{
		return NativeCall<FString *, FString *>((DWORD64)this, "UWorld", "GetAddressURL", result);
	}
	void ServerTravel(FString* FURL, bool bAbsolute, bool bShouldSkipGameNotify)
	{
		NativeCall<void, FString *, bool, bool>((DWORD64)this, "UWorld", "ServerTravel", FURL, bAbsolute,
		                                        bShouldSkipGameNotify);
	}
	void StartAsyncTrace() { NativeCall<void>((DWORD64)this, "UWorld", "StartAsyncTrace"); }
	void FinishAsyncTrace() { NativeCall<void>((DWORD64)this, "UWorld", "FinishAsyncTrace"); }
	void SetupPhysicsTickFunctions(float DeltaSeconds)
	{
		NativeCall<void, float>((DWORD64)this, "UWorld", "SetupPhysicsTickFunctions", DeltaSeconds);
	}
	void FinishPhysicsSim() { NativeCall<void>((DWORD64)this, "UWorld", "FinishPhysicsSim"); }
};

// Level

struct ULevelBase
{
	//TTransArray<AActor *> GetActorsField() const { return GetNativeField<TTransArray<AActor *>>(this, "ULevelBase", "Actors"); }
};

struct ULevel : ULevelBase
{
};

// Game Mode

struct AGameMode
{
	FName GetMatchStateField() const { return GetNativeField<FName>(this, "AGameMode", "MatchState"); }
	void SetMatchStateField(FName newValue) { SetNativeField(this, "AGameMode", "MatchState", newValue); }
	FString GetOptionsStringField() const { return GetNativeField<FString>(this, "AGameMode", "OptionsString"); }
	void SetOptionsStringField(FString newValue) { SetNativeField(this, "AGameMode", "OptionsString", newValue); }
	TSubclassOf<APawn> GetDefaultPawnClassField() const
	{
		return GetNativeField<TSubclassOf<APawn>>(this, "AGameMode", "DefaultPawnClass");
	}
	void SetDefaultPawnClassField(TSubclassOf<APawn> newValue)
	{
		SetNativeField(this, "AGameMode", "DefaultPawnClass", newValue);
	}
	int GetNumSpectatorsField() const { return GetNativeField<int>(this, "AGameMode", "NumSpectators"); }
	void SetNumSpectatorsField(int newValue) { SetNativeField(this, "AGameMode", "NumSpectators", newValue); }
	int GetNumPlayersField() const { return GetNativeField<int>(this, "AGameMode", "NumPlayers"); }
	void SetNumPlayersField(int newValue) { SetNativeField(this, "AGameMode", "NumPlayers", newValue); }
	int GetNumBotsField() const { return GetNativeField<int>(this, "AGameMode", "NumBots"); }
	void SetNumBotsField(int newValue) { SetNativeField(this, "AGameMode", "NumBots", newValue); }
	float GetMinRespawnDelayField() const { return GetNativeField<float>(this, "AGameMode", "MinRespawnDelay"); }
	void SetMinRespawnDelayField(float newValue) { SetNativeField(this, "AGameMode", "MinRespawnDelay", newValue); }
	AGameSession* GetGameSessionField() const { return GetNativeField<AGameSession *>(this, "AGameMode", "GameSession"); }
	void SetGameSessionField(AGameSession* newValue) { SetNativeField(this, "AGameMode", "GameSession", newValue); }
	int GetNumTravellingPlayersField() const { return GetNativeField<int>(this, "AGameMode", "NumTravellingPlayers"); }
	void SetNumTravellingPlayersField(int newValue)
	{
		SetNativeField(this, "AGameMode", "NumTravellingPlayers", newValue);
	}
	int GetCurrentIDField() const { return GetNativeField<int>(this, "AGameMode", "CurrentID"); }
	void SetCurrentIDField(int newValue) { SetNativeField(this, "AGameMode", "CurrentID", newValue); }
	FString GetDefaultPlayerNameField() const { return GetNativeField<FString>(this, "AGameMode", "DefaultPlayerName"); }
	void SetDefaultPlayerNameField(FString newValue) { SetNativeField(this, "AGameMode", "DefaultPlayerName", newValue); }
	TArray<APlayerStart *> GetPlayerStartsField() const
	{
		return GetNativeField<TArray<APlayerStart *>>(this, "AGameMode", "PlayerStarts");
	}
	void SetPlayerStartsField(TArray<APlayerStart *> newValue)
	{
		SetNativeField(this, "AGameMode", "PlayerStarts", newValue);
	}
	TSubclassOf<APlayerController> GetPlayerControllerClassField() const
	{
		return GetNativeField<TSubclassOf<APlayerController>>(this, "AGameMode", "PlayerControllerClass");
	}
	void SetPlayerControllerClassField(TSubclassOf<APlayerController> newValue)
	{
		SetNativeField(this, "AGameMode", "PlayerControllerClass", newValue);
	}
	TSubclassOf<APlayerState> GetPlayerStateClassField() const
	{
		return GetNativeField<TSubclassOf<APlayerState>>(this, "AGameMode", "PlayerStateClass");
	}
	void SetPlayerStateClassField(TSubclassOf<APlayerState> newValue)
	{
		SetNativeField(this, "AGameMode", "PlayerStateClass", newValue);
	}
	TSubclassOf<AGameState> GetGameStateClassField() const
	{
		return GetNativeField<TSubclassOf<AGameState>>(this, "AGameMode", "GameStateClass");
	}
	void SetGameStateClassField(TSubclassOf<AGameState> newValue)
	{
		SetNativeField(this, "AGameMode", "GameStateClass", newValue);
	}
	AGameState* GetGameStateField() const { return GetNativeField<AGameState *>(this, "AGameMode", "GameState"); }
	void SetGameStateField(AGameState* newValue) { SetNativeField(this, "AGameMode", "GameState", newValue); }
	TArray<APlayerState *> GetInactivePlayerArrayField() const
	{
		return GetNativeField<TArray<APlayerState *>>(this, "AGameMode", "InactivePlayerArray");
	}
	void SetInactivePlayerArrayField(TArray<APlayerState *> newValue)
	{
		SetNativeField(this, "AGameMode", "InactivePlayerArray", newValue);
	}
	float GetInactivePlayerStateLifeSpanField() const
	{
		return GetNativeField<float>(this, "AGameMode", "InactivePlayerStateLifeSpan");
	}
	void SetInactivePlayerStateLifeSpanField(float newValue)
	{
		SetNativeField(this, "AGameMode", "InactivePlayerStateLifeSpan", newValue);
	}

	// Functions

	FString* GetNetworkNumber(FString* result)
	{
		return NativeCall<FString *, FString *>((DWORD64)this, "AGameMode", "GetNetworkNumber", result);
	}
	void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
	{
		NativeCall<void, APlayerController *, APlayerController *>((DWORD64)this, "AGameMode", "SwapPlayerControllers", OldPC,
		                                                           NewPC);
	}
	void ForceClearUnpauseDelegates(AActor* PauseActor)
	{
		NativeCall<void, AActor *>((DWORD64)this, "AGameMode", "ForceClearUnpauseDelegates", PauseActor);
	}
	void InitGame(FString* MapName, FString* Options, FString* ErrorMessage)
	{
		NativeCall<void, FString *, FString *, FString *>((DWORD64)this, "AGameMode", "InitGame", MapName, Options,
		                                                  ErrorMessage);
	}
	void RestartGame() { NativeCall<void>((DWORD64)this, "AGameMode", "RestartGame"); }
	void ReturnToMainMenuHost() { NativeCall<void>((DWORD64)this, "AGameMode", "ReturnToMainMenuHost"); }
	void PostLogin(APlayerController* NewPlayer)
	{
		NativeCall<void, APlayerController *>((DWORD64)this, "AGameMode", "PostLogin", NewPlayer);
	}
	bool ShouldStartInCinematicMode(bool* OutHidePlayer, bool* OutHideHUD, bool* OutDisableMovement,
	                                bool* OutDisableTurning)
	{
		return NativeCall<bool, bool *, bool *, bool *, bool *>((DWORD64)this, "AGameMode", "ShouldStartInCinematicMode",
		                                                        OutHidePlayer, OutHideHUD, OutDisableMovement,
		                                                        OutDisableTurning);
	}
	void SetPlayerDefaults(APawn* PlayerPawn)
	{
		NativeCall<void, APawn *>((DWORD64)this, "AGameMode", "SetPlayerDefaults", PlayerPawn);
	}
	void Logout(AController* Exiting) { NativeCall<void, AController *>((DWORD64)this, "AGameMode", "Logout", Exiting); }
	void InitGameState() { NativeCall<void>((DWORD64)this, "AGameMode", "InitGameState"); }
	AActor* FindPlayerStart(AController* Player, FString* IncomingName)
	{
		return NativeCall<AActor *, AController *, FString *>((DWORD64)this, "AGameMode", "FindPlayerStart", Player,
		                                                      IncomingName);
	}
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "AGameMode", "PreInitializeComponents"); }
	void RestartPlayer(AController* NewPlayer)
	{
		NativeCall<void, AController *>((DWORD64)this, "AGameMode", "RestartPlayer", NewPlayer);
	}
	void StartPlay() { NativeCall<void>((DWORD64)this, "AGameMode", "StartPlay"); }
	void HandleMatchIsWaitingToStart() { NativeCall<void>((DWORD64)this, "AGameMode", "HandleMatchIsWaitingToStart"); }
	bool ReadyToStartMatch() { return NativeCall<bool>((DWORD64)this, "AGameMode", "ReadyToStartMatch"); }
	void StartMatch() { NativeCall<void>((DWORD64)this, "AGameMode", "StartMatch"); }
	void HandleMatchHasStarted() { NativeCall<void>((DWORD64)this, "AGameMode", "HandleMatchHasStarted"); }
	void EndMatch() { NativeCall<void>((DWORD64)this, "AGameMode", "EndMatch"); }
	void HandleMatchHasEnded() { NativeCall<void>((DWORD64)this, "AGameMode", "HandleMatchHasEnded"); }
	void StartToLeaveMap() { NativeCall<void>((DWORD64)this, "AGameMode", "StartToLeaveMap"); }
	void AbortMatch() { NativeCall<void>((DWORD64)this, "AGameMode", "AbortMatch"); }
	bool HasMatchStarted() { return NativeCall<bool>((DWORD64)this, "AGameMode", "HasMatchStarted"); }
	bool IsMatchInProgress() { return NativeCall<bool>((DWORD64)this, "AGameMode", "IsMatchInProgress"); }
	bool HasMatchEnded() { return NativeCall<bool>((DWORD64)this, "AGameMode", "HasMatchEnded"); }
	void SetMatchState(FName NewState) { NativeCall<void, FName>((DWORD64)this, "AGameMode", "SetMatchState", NewState); }
	void ResetLevel() { NativeCall<void>((DWORD64)this, "AGameMode", "ResetLevel"); }
	void HandleSeamlessTravelPlayer(AController** C)
	{
		NativeCall<void, AController **>((DWORD64)this, "AGameMode", "HandleSeamlessTravelPlayer", C);
	}
	void SetSeamlessTravelViewTarget(APlayerController* PC)
	{
		NativeCall<void, APlayerController *>((DWORD64)this, "AGameMode", "SetSeamlessTravelViewTarget", PC);
	}
	void ProcessServerTravel(FString* URL, bool bAbsolute)
	{
		NativeCall<void, FString *, bool>((DWORD64)this, "AGameMode", "ProcessServerTravel", URL, bAbsolute);
	}
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor *>* ActorList)
	{
		NativeCall<void, bool, TArray<AActor *> *>((DWORD64)this, "AGameMode", "GetSeamlessTravelActorList", bToEntry,
		                                           ActorList);
	}
	void SetBandwidthLimit(float AsyncIOBandwidthLimit)
	{
		NativeCall<void, float>((DWORD64)this, "AGameMode", "SetBandwidthLimit", AsyncIOBandwidthLimit);
	}
	bool MustSpectate(APlayerController* NewPlayerController)
	{
		return NativeCall<bool, APlayerController *>((DWORD64)this, "AGameMode", "MustSpectate", NewPlayerController);
	}
	void RemovePlayerControllerFromPlayerCount(APlayerController* PC)
	{
		NativeCall<void, APlayerController *>((DWORD64)this, "AGameMode", "RemovePlayerControllerFromPlayerCount", PC);
	}
	int GetNumPlayers() { return NativeCall<int>((DWORD64)this, "AGameMode", "GetNumPlayers"); }
	void ClearPause() { NativeCall<void>((DWORD64)this, "AGameMode", "ClearPause"); }
	bool GrabOption(FString* Options, FString* Result)
	{
		return NativeCall<bool, FString *, FString *>((DWORD64)this, "AGameMode", "GrabOption", Options, Result);
	}
	void GetKeyValue(FString* Pair, FString* Key, FString* Value)
	{
		NativeCall<void, FString *, FString *, FString *>((DWORD64)this, "AGameMode", "GetKeyValue", Pair, Key, Value);
	}
	FString* ParseOption(FString* result, FString* Options, FString* InKey)
	{
		return NativeCall<FString *, FString *, FString *, FString *>((DWORD64)this, "AGameMode", "ParseOption", result,
		                                                              Options, InKey);
	}
	bool HasOption(FString* Options, FString* InKey)
	{
		return NativeCall<bool, FString *, FString *>((DWORD64)this, "AGameMode", "HasOption", Options, InKey);
	}
	FString* GetDefaultGameClassPath(FString* result, FString* MapName, FString* Options, FString* Portal)
	{
		return NativeCall<FString *, FString *, FString *, FString *, FString *>(
			(DWORD64)this, "AGameMode", "GetDefaultGameClassPath", result, MapName, Options, Portal);
	}
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result)
	{
		return NativeCall<TSubclassOf<AGameSession> *, TSubclassOf<AGameSession> *>(
			(DWORD64)this, "AGameMode", "GetGameSessionClass", result);
	}
	APlayerController* ProcessClientTravel()
	{
		return NativeCall<APlayerController *>((DWORD64)this, "AGameMode", "ProcessClientTravel");
	}
	APlayerController* SpawnPlayerController(FVector* SpawnLocation, FRotator* SpawnRotation)
	{
		return NativeCall<APlayerController *, FVector *, FRotator *>((DWORD64)this, "AGameMode", "SpawnPlayerController",
		                                                              SpawnLocation, SpawnRotation);
	}
	TSubclassOf<UObject>*
	GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject>* result, AController* InController)
	{
		return NativeCall<TSubclassOf<UObject> *, TSubclassOf<UObject> *, AController *>(
			(DWORD64)this, "AGameMode", "GetDefaultPawnClassForController_Implementation", result, InController);
	}
	APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot)
	{
		return NativeCall<APawn *, AController *, AActor *>((DWORD64)this, "AGameMode", "SpawnDefaultPawnFor", NewPlayer,
		                                                    StartSpot);
	}
	void GenericPlayerInitialization(AController* C)
	{
		NativeCall<void, AController *>((DWORD64)this, "AGameMode", "GenericPlayerInitialization", C);
	}
	void StartNewPlayer(APlayerController* NewPlayer)
	{
		NativeCall<void, APlayerController *>((DWORD64)this, "AGameMode", "StartNewPlayer", NewPlayer);
	}
	void ChangeName(AController* Other, FString* S, bool bNameChange)
	{
		NativeCall<void, AController *, FString *, bool>((DWORD64)this, "AGameMode", "ChangeName", Other, S, bNameChange);
	}
	void SendPlayer(APlayerController* aPlayer, FString* FURL)
	{
		NativeCall<void, APlayerController *, FString *>((DWORD64)this, "AGameMode", "SendPlayer", aPlayer, FURL);
	}
	void Broadcast(AActor* Sender, FString* Msg, FName Type)
	{
		NativeCall<void, AActor *, FString *, FName>((DWORD64)this, "AGameMode", "Broadcast", Sender, Msg, Type);
	}
	bool ShouldSpawnAtStartSpot_Implementation(AController* Player)
	{
		return NativeCall<bool, AController *>((DWORD64)this, "AGameMode", "ShouldSpawnAtStartSpot_Implementation", Player);
	}
	void AddPlayerStart(APlayerStart* NewPlayerStart)
	{
		NativeCall<void, APlayerStart *>((DWORD64)this, "AGameMode", "AddPlayerStart", NewPlayerStart);
	}
	void RemovePlayerStart(APlayerStart* RemovedPlayerStart)
	{
		NativeCall<void, APlayerStart *>((DWORD64)this, "AGameMode", "RemovePlayerStart", RemovedPlayerStart);
	}
	AActor* ChoosePlayerStart_Implementation(AController* Player)
	{
		return NativeCall<AActor *, AController *>((DWORD64)this, "AGameMode", "ChoosePlayerStart_Implementation", Player);
	}
	bool PlayerCanRestart(APlayerController* Player)
	{
		return NativeCall<bool, APlayerController *>((DWORD64)this, "AGameMode", "PlayerCanRestart", Player);
	}
	void UpdateGameplayMuteList(APlayerController* aPlayer)
	{
		NativeCall<void, APlayerController *>((DWORD64)this, "AGameMode", "UpdateGameplayMuteList", aPlayer);
	}
	bool AllowCheats(APlayerController* P)
	{
		return NativeCall<bool, APlayerController *>((DWORD64)this, "AGameMode", "AllowCheats", P);
	}
	bool AllowPausing(APlayerController* PC)
	{
		return NativeCall<bool, APlayerController *>((DWORD64)this, "AGameMode", "AllowPausing", PC);
	}
	void AddInactivePlayer(APlayerState* PlayerState, APlayerController* PC)
	{
		NativeCall<void, APlayerState *, APlayerController *>((DWORD64)this, "AGameMode", "AddInactivePlayer", PlayerState,
		                                                      PC);
	}
	bool FindInactivePlayer(APlayerController* PC)
	{
		return NativeCall<bool, APlayerController *>((DWORD64)this, "AGameMode", "FindInactivePlayer", PC);
	}
	void OverridePlayerState(APlayerController* PC, APlayerState* OldPlayerState)
	{
		NativeCall<void, APlayerController *, APlayerState *>((DWORD64)this, "AGameMode", "OverridePlayerState", PC,
		                                                      OldPlayerState);
	}
	void PostSeamlessTravel() { NativeCall<void>((DWORD64)this, "AGameMode", "PostSeamlessTravel"); }
	AActor* ChoosePlayerStart(AController* Player)
	{
		return NativeCall<AActor *, AController *>((DWORD64)this, "AGameMode", "ChoosePlayerStart", Player);
	}
};

struct AShooterGameMode : AGameMode
{
	int GetLastRepopulationIndexToCheckField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "LastRepopulationIndexToCheck");
	}
	void SetLastRepopulationIndexToCheckField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastRepopulationIndexToCheck", newValue);
	}
	FString GetAlarmNotificationKeyField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "AlarmNotificationKey");
	}
	void SetAlarmNotificationKeyField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AlarmNotificationKey", newValue);
	}
	FString GetAlarmNotificationURLField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "AlarmNotificationURL");
	}
	void SetAlarmNotificationURLField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AlarmNotificationURL", newValue);
	}
	FString GetBanFileNameField() const { return GetNativeField<FString>(this, "AShooterGameMode", "BanFileName"); }
	void SetBanFileNameField(FString newValue) { SetNativeField(this, "AShooterGameMode", "BanFileName", newValue); }
	//TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0>> GetBannedMapField() const { return GetNativeField<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0>>>(this, "AShooterGameMode", "BannedMap"); }
	long double GetLastTimeCheckedForSaveBackupField() const
	{
		return GetNativeField<long double>(this, "AShooterGameMode", "LastTimeCheckedForSaveBackup");
	}
	void SetLastTimeCheckedForSaveBackupField(long double newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastTimeCheckedForSaveBackup", newValue);
	}
	int GetLastDayOfYearBackedUpField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "LastDayOfYearBackedUp");
	}
	void SetLastDayOfYearBackedUpField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastDayOfYearBackedUp", newValue);
	}
	long double GetTimeLastStartedDoingRemoteBackupField() const
	{
		return GetNativeField<long double>(this, "AShooterGameMode", "TimeLastStartedDoingRemoteBackup");
	}
	void SetTimeLastStartedDoingRemoteBackupField(long double newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TimeLastStartedDoingRemoteBackup", newValue);
	}
	bool GetInitiatedArkTributeAvailabilityCheckField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "InitiatedArkTributeAvailabilityCheck");
	}
	void SetInitiatedArkTributeAvailabilityCheckField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "InitiatedArkTributeAvailabilityCheck", newValue);
	}
	URCONServer* GetRCONSocketField() const
	{
		return GetNativeField<URCONServer *>(this, "AShooterGameMode", "RCONSocket");
	}
	void SetRCONSocketField(URCONServer* newValue) { SetNativeField(this, "AShooterGameMode", "RCONSocket", newValue); }
	FString GetPlayersJoinNoCheckFilenameField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "PlayersJoinNoCheckFilename");
	}
	void SetPlayersJoinNoCheckFilenameField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayersJoinNoCheckFilename", newValue);
	}
	FString GetPlayersExclusiveCheckFilenameField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "PlayersExclusiveCheckFilename");
	}
	void SetPlayersExclusiveCheckFilenameField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayersExclusiveCheckFilename", newValue);
	}
	int GetTerrainGeneratorVersionField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "TerrainGeneratorVersion");
	}
	void SetTerrainGeneratorVersionField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TerrainGeneratorVersion", newValue);
	}
	//TArray<FUniqueNetIdUInt64> GetPlayersJoinNoCheckField() const { return GetNativeField<TArray<FUniqueNetIdUInt64>>(this, "AShooterGameMode", "PlayersJoinNoCheck"); }
	//TArray<FUniqueNetIdUInt64> GetPlayersExclusiveListField() const { return GetNativeField<TArray<FUniqueNetIdUInt64>>(this, "AShooterGameMode", "PlayersExclusiveList"); }
	TArray<APlayerStart *> GetUsedPlayerStartsField() const
	{
		return GetNativeField<TArray<APlayerStart *>>(this, "AShooterGameMode", "UsedPlayerStarts");
	}
	void SetUsedPlayerStartsField(TArray<APlayerStart *> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "UsedPlayerStarts", newValue);
	}
	void* GetGameBackupPipeReadField() const
	{
		return GetNativeField<void *>(this, "AShooterGameMode", "GameBackupPipeRead");
	}
	void SetGameBackupPipeReadField(void* newValue)
	{
		SetNativeField(this, "AShooterGameMode", "GameBackupPipeRead", newValue);
	}
	void* GetGameBackupPipeWriteField() const
	{
		return GetNativeField<void *>(this, "AShooterGameMode", "GameBackupPipeWrite");
	}
	void SetGameBackupPipeWriteField(void* newValue)
	{
		SetNativeField(this, "AShooterGameMode", "GameBackupPipeWrite", newValue);
	}
	//TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator> GetTribesIdsField() const { return GetNativeField<TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>>(this, "AShooterGameMode", "TribesIds"); }
	//TMap<int, unsigned __int64> GetPlayersIdsField() const { return GetNativeField<TMap<int, unsigned __int64>>(this, "AShooterGameMode", "PlayersIds"); }
	FString GetLaunchOptionsField() const { return GetNativeField<FString>(this, "AShooterGameMode", "LaunchOptions"); }
	void SetLaunchOptionsField(FString newValue) { SetNativeField(this, "AShooterGameMode", "LaunchOptions", newValue); }
	TArray<FTribeData> GetTribesDataField() const
	{
		return GetNativeField<TArray<FTribeData>>(this, "AShooterGameMode", "TribesData");
	}
	void SetTribesDataField(TArray<FTribeData> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TribesData", newValue);
	}
	FString GetPGMapNameField() const { return GetNativeField<FString>(this, "AShooterGameMode", "PGMapName"); }
	void SetPGMapNameField(FString newValue) { SetNativeField(this, "AShooterGameMode", "PGMapName", newValue); }
	FString GetPGTerrainPropertiesStringField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "PGTerrainPropertiesString");
	}
	void SetPGTerrainPropertiesStringField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PGTerrainPropertiesString", newValue);
	}
	//TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0>> GetPGTerrainPropertiesField() const { return GetNativeField<TMap<FString, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FString, FString, 0>>>(this, "AShooterGameMode", "PGTerrainProperties"); }
	bool GetbAutoCreateNewPlayerDataField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAutoCreateNewPlayerData");
	}
	void SetbAutoCreateNewPlayerDataField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAutoCreateNewPlayerData", newValue);
	}
	bool GetbIsRestartingField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bIsRestarting"); }
	void SetbIsRestartingField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bIsRestarting", newValue); }
	bool GetbProximityVoiceChatField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bProximityVoiceChat");
	}
	void SetbProximityVoiceChatField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bProximityVoiceChat", newValue);
	}
	bool GetbProximityChatField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bProximityChat"); }
	void SetbProximityChatField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bProximityChat", newValue); }
	bool GetbAutoRestoreBackupsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAutoRestoreBackups");
	}
	void SetbAutoRestoreBackupsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAutoRestoreBackups", newValue);
	}
	float GetDifficultyValueField() const { return GetNativeField<float>(this, "AShooterGameMode", "DifficultyValue"); }
	void SetDifficultyValueField(float newValue) { SetNativeField(this, "AShooterGameMode", "DifficultyValue", newValue); }
	float GetDifficultyValueMinField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DifficultyValueMin");
	}
	void SetDifficultyValueMinField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DifficultyValueMin", newValue);
	}
	float GetDifficultyValueMaxField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DifficultyValueMax");
	}
	void SetDifficultyValueMaxField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DifficultyValueMax", newValue);
	}
	float GetProximityRadiusField() const { return GetNativeField<float>(this, "AShooterGameMode", "ProximityRadius"); }
	void SetProximityRadiusField(float newValue) { SetNativeField(this, "AShooterGameMode", "ProximityRadius", newValue); }
	float GetProximityRadiusUnconsiousScaleField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "ProximityRadiusUnconsiousScale");
	}
	void SetProximityRadiusUnconsiousScaleField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "ProximityRadiusUnconsiousScale", newValue);
	}
	TSubclassOf<UCheatManager> GetCheatClassField() const
	{
		return GetNativeField<TSubclassOf<UCheatManager>>(this, "AShooterGameMode", "CheatClass");
	}
	void SetCheatClassField(TSubclassOf<UCheatManager> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CheatClass", newValue);
	}
	bool GetbIsOfficialServerField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bIsOfficialServer"); }
	void SetbIsOfficialServerField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bIsOfficialServer", newValue);
	}
	bool GetbServerAllowArkDownloadField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bServerAllowArkDownload");
	}
	void SetbServerAllowArkDownloadField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bServerAllowArkDownload", newValue);
	}
	bool GetbServerAllowThirdPersonPlayerField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bServerAllowThirdPersonPlayer");
	}
	void SetbServerAllowThirdPersonPlayerField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bServerAllowThirdPersonPlayer", newValue);
	}
	bool GetbUseExclusiveListField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bUseExclusiveList"); }
	void SetbUseExclusiveListField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bUseExclusiveList", newValue);
	}
	bool GetbAlwaysNotifyPlayerLeftField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAlwaysNotifyPlayerLeft");
	}
	void SetbAlwaysNotifyPlayerLeftField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAlwaysNotifyPlayerLeft", newValue);
	}
	bool GetbAlwaysNotifyPlayerJoinedField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAlwaysNotifyPlayerJoined");
	}
	void SetbAlwaysNotifyPlayerJoinedField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAlwaysNotifyPlayerJoined", newValue);
	}
	bool GetbServerHardcoreField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bServerHardcore"); }
	void SetbServerHardcoreField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bServerHardcore", newValue); }
	bool GetbServerPVEField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bServerPVE"); }
	void SetbServerPVEField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bServerPVE", newValue); }
	bool GetbServerCrosshairField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bServerCrosshair"); }
	void SetbServerCrosshairField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bServerCrosshair", newValue);
	}
	bool GetbServerForceNoHUDField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bServerForceNoHUD"); }
	void SetbServerForceNoHUDField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bServerForceNoHUD", newValue);
	}
	bool GetbMapPlayerLocationField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bMapPlayerLocation");
	}
	void SetbMapPlayerLocationField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bMapPlayerLocation", newValue);
	}
	bool GetbAllowFlyerCarryPvEField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowFlyerCarryPvE");
	}
	void SetbAllowFlyerCarryPvEField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowFlyerCarryPvE", newValue);
	}
	bool GetbDisableStructureDecayPvEField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDisableStructureDecayPvE");
	}
	void SetbDisableStructureDecayPvEField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisableStructureDecayPvE", newValue);
	}
	bool GetbDisableDinoDecayPvEField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDisableDinoDecayPvE");
	}
	void SetbDisableDinoDecayPvEField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisableDinoDecayPvE", newValue);
	}
	bool GetbEnablePvPGammaField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bEnablePvPGamma"); }
	void SetbEnablePvPGammaField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bEnablePvPGamma", newValue); }
	bool GetbDisablePvEGammaField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bDisablePvEGamma"); }
	void SetbDisablePvEGammaField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisablePvEGamma", newValue);
	}
	bool GetbClampResourceHarvestDamageField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bClampResourceHarvestDamage");
	}
	void SetbClampResourceHarvestDamageField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bClampResourceHarvestDamage", newValue);
	}
	bool GetbPreventStructurePaintingField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPreventStructurePainting");
	}
	void SetbPreventStructurePaintingField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventStructurePainting", newValue);
	}
	bool GetbAllowCaveBuildingPvEField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowCaveBuildingPvE");
	}
	void SetbAllowCaveBuildingPvEField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowCaveBuildingPvE", newValue);
	}
	bool GetbAdminLoggingField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bAdminLogging"); }
	void SetbAdminLoggingField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bAdminLogging", newValue); }
	bool GetbPvPStructureDecayField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPvPStructureDecay");
	}
	void SetbPvPStructureDecayField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPvPStructureDecay", newValue);
	}
	bool GetbAutoDestroyStructuresField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAutoDestroyStructures");
	}
	void SetbAutoDestroyStructuresField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAutoDestroyStructures", newValue);
	}
	bool GetbForceAllStructureLockingField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bForceAllStructureLocking");
	}
	void SetbForceAllStructureLockingField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bForceAllStructureLocking", newValue);
	}
	bool GetbAllowDeprecatedStructuresField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowDeprecatedStructures");
	}
	void SetbAllowDeprecatedStructuresField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowDeprecatedStructures", newValue);
	}
	bool GetbPreventTribeAlliancesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPreventTribeAlliances");
	}
	void SetbPreventTribeAlliancesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventTribeAlliances", newValue);
	}
	bool GetbAllowHitMarkersField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bAllowHitMarkers"); }
	void SetbAllowHitMarkersField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowHitMarkers", newValue);
	}
	bool GetbOnlyAutoDestroyCoreStructuresField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bOnlyAutoDestroyCoreStructures");
	}
	void SetbOnlyAutoDestroyCoreStructuresField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bOnlyAutoDestroyCoreStructures", newValue);
	}
	bool GetbPreventMateBoostField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bPreventMateBoost"); }
	void SetbPreventMateBoostField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventMateBoost", newValue);
	}
	bool GetbTribeLogDestroyedEnemyStructuresField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bTribeLogDestroyedEnemyStructures");
	}
	void SetbTribeLogDestroyedEnemyStructuresField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bTribeLogDestroyedEnemyStructures", newValue);
	}
	bool GetbPvEAllowStructuresAtSupplyDropsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPvEAllowStructuresAtSupplyDrops");
	}
	void SetbPvEAllowStructuresAtSupplyDropsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPvEAllowStructuresAtSupplyDrops", newValue);
	}
	int GetTheMaxStructuresInRangeField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "TheMaxStructuresInRange");
	}
	void SetTheMaxStructuresInRangeField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TheMaxStructuresInRange", newValue);
	}
	int GetRCONPortField() const { return GetNativeField<int>(this, "AShooterGameMode", "RCONPort"); }
	void SetRCONPortField(int newValue) { SetNativeField(this, "AShooterGameMode", "RCONPort", newValue); }
	float GetDayCycleSpeedScaleField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DayCycleSpeedScale");
	}
	void SetDayCycleSpeedScaleField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DayCycleSpeedScale", newValue);
	}
	float GetNightTimeSpeedScaleField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "NightTimeSpeedScale");
	}
	void SetNightTimeSpeedScaleField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "NightTimeSpeedScale", newValue);
	}
	float GetDayTimeSpeedScaleField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DayTimeSpeedScale");
	}
	void SetDayTimeSpeedScaleField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DayTimeSpeedScale", newValue);
	}
	float GetPvEStructureDecayPeriodMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PvEStructureDecayPeriodMultiplier");
	}
	void SetPvEStructureDecayPeriodMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PvEStructureDecayPeriodMultiplier", newValue);
	}
	float GetStructurePreventResourceRadiusMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "StructurePreventResourceRadiusMultiplier");
	}
	void SetStructurePreventResourceRadiusMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "StructurePreventResourceRadiusMultiplier", newValue);
	}
	float GetPvEDinoDecayPeriodMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PvEDinoDecayPeriodMultiplier");
	}
	void SetPvEDinoDecayPeriodMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PvEDinoDecayPeriodMultiplier", newValue);
	}
	float GetResourcesRespawnPeriodMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "ResourcesRespawnPeriodMultiplier");
	}
	void SetResourcesRespawnPeriodMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "ResourcesRespawnPeriodMultiplier", newValue);
	}
	float GetMaxTamedDinosField() const { return GetNativeField<float>(this, "AShooterGameMode", "MaxTamedDinos"); }
	void SetMaxTamedDinosField(float newValue) { SetNativeField(this, "AShooterGameMode", "MaxTamedDinos", newValue); }
	float GetListenServerTetherDistanceMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "ListenServerTetherDistanceMultiplier");
	}
	void SetListenServerTetherDistanceMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "ListenServerTetherDistanceMultiplier", newValue);
	}
	float GetPerPlatformMaxStructuresMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PerPlatformMaxStructuresMultiplier");
	}
	void SetPerPlatformMaxStructuresMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PerPlatformMaxStructuresMultiplier", newValue);
	}
	float GetAutoDestroyOldStructuresMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "AutoDestroyOldStructuresMultiplier");
	}
	void SetAutoDestroyOldStructuresMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AutoDestroyOldStructuresMultiplier", newValue);
	}
	float GetRCONServerGameLogBufferField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "RCONServerGameLogBuffer");
	}
	void SetRCONServerGameLogBufferField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "RCONServerGameLogBuffer", newValue);
	}
	float GetKickIdlePlayersPeriodField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "KickIdlePlayersPeriod");
	}
	void SetKickIdlePlayersPeriodField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "KickIdlePlayersPeriod", newValue);
	}
	float GetMateBoostEffectMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "MateBoostEffectMultiplier");
	}
	void SetMateBoostEffectMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MateBoostEffectMultiplier", newValue);
	}
	float GetAutoSavePeriodMinutesField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "AutoSavePeriodMinutes");
	}
	void SetAutoSavePeriodMinutesField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AutoSavePeriodMinutes", newValue);
	}
	float GetXPMultiplierField() const { return GetNativeField<float>(this, "AShooterGameMode", "XPMultiplier"); }
	void SetXPMultiplierField(float newValue) { SetNativeField(this, "AShooterGameMode", "XPMultiplier", newValue); }
	float GetKillXPMultiplierField() const { return GetNativeField<float>(this, "AShooterGameMode", "KillXPMultiplier"); }
	void SetKillXPMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "KillXPMultiplier", newValue);
	}
	float GetHarvestXPMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "HarvestXPMultiplier");
	}
	void SetHarvestXPMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "HarvestXPMultiplier", newValue);
	}
	float GetCraftXPMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "CraftXPMultiplier");
	}
	void SetCraftXPMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CraftXPMultiplier", newValue);
	}
	float GetGenericXPMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "GenericXPMultiplier");
	}
	void SetGenericXPMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "GenericXPMultiplier", newValue);
	}
	float GetSpecialXPMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "SpecialXPMultiplier");
	}
	void SetSpecialXPMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "SpecialXPMultiplier", newValue);
	}
	float GetRandomAutoSaveSpreadField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "RandomAutoSaveSpread");
	}
	void SetRandomAutoSaveSpreadField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "RandomAutoSaveSpread", newValue);
	}
	FString GetSteamAPIKeyField() const { return GetNativeField<FString>(this, "AShooterGameMode", "SteamAPIKey"); }
	void SetSteamAPIKeyField(FString newValue) { SetNativeField(this, "AShooterGameMode", "SteamAPIKey", newValue); }
	FString GetLastServerNotificationMessageField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "LastServerNotificationMessage");
	}
	void SetLastServerNotificationMessageField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastServerNotificationMessage", newValue);
	}
	long double GetLastServerNotificationRecievedAtField() const
	{
		return GetNativeField<long double>(this, "AShooterGameMode", "LastServerNotificationRecievedAt");
	}
	void SetLastServerNotificationRecievedAtField(long double newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastServerNotificationRecievedAt", newValue);
	}
	long double GetLastExecSaveTimeField() const
	{
		return GetNativeField<long double>(this, "AShooterGameMode", "LastExecSaveTime");
	}
	void SetLastExecSaveTimeField(long double newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastExecSaveTime", newValue);
	}
	long double GetLastTimeSavedWorldField() const
	{
		return GetNativeField<long double>(this, "AShooterGameMode", "LastTimeSavedWorld");
	}
	void SetLastTimeSavedWorldField(long double newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastTimeSavedWorld", newValue);
	}
	FString GetLastClaimedGameCodeField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "LastClaimedGameCode");
	}
	void SetLastClaimedGameCodeField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastClaimedGameCode", newValue);
	}
	TArray<FString> GetArkGameCodesField() const
	{
		return GetNativeField<TArray<FString>>(this, "AShooterGameMode", "ArkGameCodes");
	}
	void SetArkGameCodesField(TArray<FString> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "ArkGameCodes", newValue);
	}
	bool GetbIsCurrentlyRequestingKeyField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bIsCurrentlyRequestingKey");
	}
	void SetbIsCurrentlyRequestingKeyField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bIsCurrentlyRequestingKey", newValue);
	}
	FString GetSaveDirectoryNameField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "SaveDirectoryName");
	}
	void SetSaveDirectoryNameField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "SaveDirectoryName", newValue);
	}
	TArray<UPrimalPlayerData *> GetPlayerDatasField() const
	{
		return GetNativeField<TArray<UPrimalPlayerData *>>(this, "AShooterGameMode", "PlayerDatas");
	}
	void SetPlayerDatasField(TArray<UPrimalPlayerData *> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerDatas", newValue);
	}
	int GetNPCZoneManagerModField() const { return GetNativeField<int>(this, "AShooterGameMode", "NPCZoneManagerMod"); }
	void SetNPCZoneManagerModField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "NPCZoneManagerMod", newValue);
	}
	bool GetbPopulatingSpawnZonesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPopulatingSpawnZones");
	}
	void SetbPopulatingSpawnZonesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPopulatingSpawnZones", newValue);
	}
	bool GetbRestartedAPlayerField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bRestartedAPlayer"); }
	void SetbRestartedAPlayerField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bRestartedAPlayer", newValue);
	}
	bool GetbForceRespawnDinosField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bForceRespawnDinos");
	}
	void SetbForceRespawnDinosField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bForceRespawnDinos", newValue);
	}
	bool GetbFirstSaveWorldField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bFirstSaveWorld"); }
	void SetbFirstSaveWorldField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bFirstSaveWorld", newValue); }
	bool GetbAllowRaidDinoFeedingField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowRaidDinoFeeding");
	}
	void SetbAllowRaidDinoFeedingField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowRaidDinoFeeding", newValue);
	}
	FDateTime GetLastBackupTimeField() const
	{
		return GetNativeField<FDateTime>(this, "AShooterGameMode", "LastBackupTime");
	}
	void SetLastBackupTimeField(FDateTime newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastBackupTime", newValue);
	}
	FDateTime GetLastSaveWorldTimeField() const
	{
		return GetNativeField<FDateTime>(this, "AShooterGameMode", "LastSaveWorldTime");
	}
	void SetLastSaveWorldTimeField(FDateTime newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastSaveWorldTime", newValue);
	}
	float GetTamedDinoDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "TamedDinoDamageMultiplier");
	}
	void SetTamedDinoDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TamedDinoDamageMultiplier", newValue);
	}
	float GetDinoDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoDamageMultiplier");
	}
	void SetDinoDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoDamageMultiplier", newValue);
	}
	float GetPlayerDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PlayerDamageMultiplier");
	}
	void SetPlayerDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerDamageMultiplier", newValue);
	}
	float GetStructureDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "StructureDamageMultiplier");
	}
	void SetStructureDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "StructureDamageMultiplier", newValue);
	}
	float GetPlayerResistanceMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PlayerResistanceMultiplier");
	}
	void SetPlayerResistanceMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerResistanceMultiplier", newValue);
	}
	float GetDinoResistanceMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoResistanceMultiplier");
	}
	void SetDinoResistanceMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoResistanceMultiplier", newValue);
	}
	float GetTamedDinoResistanceMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "TamedDinoResistanceMultiplier");
	}
	void SetTamedDinoResistanceMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TamedDinoResistanceMultiplier", newValue);
	}
	float GetStructureResistanceMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "StructureResistanceMultiplier");
	}
	void SetStructureResistanceMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "StructureResistanceMultiplier", newValue);
	}
	bool GetbJoinInProgressGamesAsSpectatorField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bJoinInProgressGamesAsSpectator");
	}
	void SetbJoinInProgressGamesAsSpectatorField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bJoinInProgressGamesAsSpectator", newValue);
	}
	float GetTamingSpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "TamingSpeedMultiplier");
	}
	void SetTamingSpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TamingSpeedMultiplier", newValue);
	}
	float GetHarvestAmountMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "HarvestAmountMultiplier");
	}
	void SetHarvestAmountMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "HarvestAmountMultiplier", newValue);
	}
	float GetHarvestHealthMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "HarvestHealthMultiplier");
	}
	void SetHarvestHealthMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "HarvestHealthMultiplier", newValue);
	}
	float GetPlayerCharacterWaterDrainMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PlayerCharacterWaterDrainMultiplier");
	}
	void SetPlayerCharacterWaterDrainMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerCharacterWaterDrainMultiplier", newValue);
	}
	float GetPlayerCharacterFoodDrainMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PlayerCharacterFoodDrainMultiplier");
	}
	void SetPlayerCharacterFoodDrainMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerCharacterFoodDrainMultiplier", newValue);
	}
	float GetDinoCharacterFoodDrainMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoCharacterFoodDrainMultiplier");
	}
	void SetDinoCharacterFoodDrainMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoCharacterFoodDrainMultiplier", newValue);
	}
	float GetRaidDinoCharacterFoodDrainMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "RaidDinoCharacterFoodDrainMultiplier");
	}
	void SetRaidDinoCharacterFoodDrainMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "RaidDinoCharacterFoodDrainMultiplier", newValue);
	}
	float GetPlayerCharacterStaminaDrainMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PlayerCharacterStaminaDrainMultiplier");
	}
	void SetPlayerCharacterStaminaDrainMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerCharacterStaminaDrainMultiplier", newValue);
	}
	float GetDinoCharacterStaminaDrainMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoCharacterStaminaDrainMultiplier");
	}
	void SetDinoCharacterStaminaDrainMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoCharacterStaminaDrainMultiplier", newValue);
	}
	float GetPlayerCharacterHealthRecoveryMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PlayerCharacterHealthRecoveryMultiplier");
	}
	void SetPlayerCharacterHealthRecoveryMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerCharacterHealthRecoveryMultiplier", newValue);
	}
	float GetDinoCharacterHealthRecoveryMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoCharacterHealthRecoveryMultiplier");
	}
	void SetDinoCharacterHealthRecoveryMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoCharacterHealthRecoveryMultiplier", newValue);
	}
	float GetCarnivoreNaturalTargetingRangeMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "CarnivoreNaturalTargetingRangeMultiplier");
	}
	void SetCarnivoreNaturalTargetingRangeMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CarnivoreNaturalTargetingRangeMultiplier", newValue);
	}
	float GetCarnivorePlayerAggroMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "CarnivorePlayerAggroMultiplier");
	}
	void SetCarnivorePlayerAggroMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CarnivorePlayerAggroMultiplier", newValue);
	}
	float GetHerbivoreNaturalTargetingRangeMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "HerbivoreNaturalTargetingRangeMultiplier");
	}
	void SetHerbivoreNaturalTargetingRangeMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "HerbivoreNaturalTargetingRangeMultiplier", newValue);
	}
	float GetHerbivorePlayerAggroMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "HerbivorePlayerAggroMultiplier");
	}
	void SetHerbivorePlayerAggroMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "HerbivorePlayerAggroMultiplier", newValue);
	}
	bool GetAIForceTargetPlayersField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "AIForceTargetPlayers");
	}
	void SetAIForceTargetPlayersField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AIForceTargetPlayers", newValue);
	}
	bool GetAIForceOverlapCheckField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "AIForceOverlapCheck");
	}
	void SetAIForceOverlapCheckField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AIForceOverlapCheck", newValue);
	}
	float GetDinoCountMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoCountMultiplier");
	}
	void SetDinoCountMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoCountMultiplier", newValue);
	}
	bool GetbDisableSaveLoadField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bDisableSaveLoad"); }
	void SetbDisableSaveLoadField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisableSaveLoad", newValue);
	}
	bool GetbDisableXPField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bDisableXP"); }
	void SetbDisableXPField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bDisableXP", newValue); }
	bool GetbDisableDynamicMusicField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDisableDynamicMusic");
	}
	void SetbDisableDynamicMusicField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisableDynamicMusic", newValue);
	}
	TArray<FPlayerDeathReason> GetPlayerDeathReasonsField() const
	{
		return GetNativeField<TArray<FPlayerDeathReason>>(this, "AShooterGameMode", "PlayerDeathReasons");
	}
	void SetPlayerDeathReasonsField(TArray<FPlayerDeathReason> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerDeathReasons", newValue);
	}

	/*TArray<FLevelExperienceRamp> GetLevelExperienceRampOverridesField() const { return GetNativeField<TArray<FLevelExperienceRamp>>(this, "AShooterGameMode", "LevelExperienceRampOverrides"); }
	void SetLevelExperienceRampOverridesField(TArray<FLevelExperienceRamp> newValue) { SetNativeField(this, "AShooterGameMode", "LevelExperienceRampOverrides", newValue); }
	TArray<int> GetOverridePlayerLevelEngramPointsField() const { return GetNativeField<TArray<int>>(this, "AShooterGameMode", "OverridePlayerLevelEngramPoints"); }
	void SetOverridePlayerLevelEngramPointsField(TArray<int> newValue) { SetNativeField(this, "AShooterGameMode", "OverridePlayerLevelEngramPoints", newValue); }
	TArray<int> GetExcludeItemIndicesField() const { return GetNativeField<TArray<int>>(this, "AShooterGameMode", "ExcludeItemIndices"); }
	void SetExcludeItemIndicesField(TArray<int> newValue) { SetNativeField(this, "AShooterGameMode", "ExcludeItemIndices", newValue); }
	TArray<FEngramEntryOverride> GetOverrideEngramEntriesField() const { return GetNativeField<TArray<FEngramEntryOverride>>(this, "AShooterGameMode", "OverrideEngramEntries"); }
	void SetOverrideEngramEntriesField(TArray<FEngramEntryOverride> newValue) { SetNativeField(this, "AShooterGameMode", "OverrideEngramEntries", newValue); }
	TArray<FEngramEntryOverride> GetOverrideNamedEngramEntriesField() const { return GetNativeField<TArray<FEngramEntryOverride>>(this, "AShooterGameMode", "OverrideNamedEngramEntries"); }
	void SetOverrideNamedEngramEntriesField(TArray<FEngramEntryOverride> newValue) { SetNativeField(this, "AShooterGameMode", "OverrideNamedEngramEntries", newValue); }
	TArray<FString> GetPreventDinoTameClassNamesField() const { return GetNativeField<TArray<FString>>(this, "AShooterGameMode", "PreventDinoTameClassNames"); }
	void SetPreventDinoTameClassNamesField(TArray<FString> newValue) { SetNativeField(this, "AShooterGameMode", "PreventDinoTameClassNames", newValue); }
	TArray<FDinoSpawnWeightMultiplier> GetDinoSpawnWeightMultipliersField() const { return GetNativeField<TArray<FDinoSpawnWeightMultiplier>>(this, "AShooterGameMode", "DinoSpawnWeightMultipliers"); }
	void SetDinoSpawnWeightMultipliersField(TArray<FDinoSpawnWeightMultiplier> newValue) { SetNativeField(this, "AShooterGameMode", "DinoSpawnWeightMultipliers", newValue); }
	TArray<FClassMultiplier> GetDinoClassResistanceMultipliersField() const { return GetNativeField<TArray<FClassMultiplier>>(this, "AShooterGameMode", "DinoClassResistanceMultipliers"); }
	void SetDinoClassResistanceMultipliersField(TArray<FClassMultiplier> newValue) { SetNativeField(this, "AShooterGameMode", "DinoClassResistanceMultipliers", newValue); }
	TArray<FClassMultiplier> GetTamedDinoClassResistanceMultipliersField() const { return GetNativeField<TArray<FClassMultiplier>>(this, "AShooterGameMode", "TamedDinoClassResistanceMultipliers"); }
	void SetTamedDinoClassResistanceMultipliersField(TArray<FClassMultiplier> newValue) { SetNativeField(this, "AShooterGameMode", "TamedDinoClassResistanceMultipliers", newValue); }
	TArray<FClassMultiplier> GetDinoClassDamageMultipliersField() const { return GetNativeField<TArray<FClassMultiplier>>(this, "AShooterGameMode", "DinoClassDamageMultipliers"); }
	void SetDinoClassDamageMultipliersField(TArray<FClassMultiplier> newValue) { SetNativeField(this, "AShooterGameMode", "DinoClassDamageMultipliers", newValue); }
	TArray<FClassMultiplier> GetTamedDinoClassDamageMultipliersField() const { return GetNativeField<TArray<FClassMultiplier>>(this, "AShooterGameMode", "TamedDinoClassDamageMultipliers"); }
	void SetTamedDinoClassDamageMultipliersField(TArray<FClassMultiplier> newValue) { SetNativeField(this, "AShooterGameMode", "TamedDinoClassDamageMultipliers", newValue); }
	TArray<FClassMultiplier> GetHarvestResourceItemAmountClassMultipliersField() const { return GetNativeField<TArray<FClassMultiplier>>(this, "AShooterGameMode", "HarvestResourceItemAmountClassMultipliers"); }
	void SetHarvestResourceItemAmountClassMultipliersField(TArray<FClassMultiplier> newValue) { SetNativeField(this, "AShooterGameMode", "HarvestResourceItemAmountClassMultipliers", newValue); }
	TArray<FClassNameReplacement> GetNPCReplacementsField() const { return GetNativeField<TArray<FClassNameReplacement>>(this, "AShooterGameMode", "NPCReplacements"); }
	void SetNPCReplacementsField(TArray<FClassNameReplacement> newValue) { SetNativeField(this, "AShooterGameMode", "NPCReplacements", newValue); }*/
	float GetPvPZoneStructureDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PvPZoneStructureDamageMultiplier");
	}
	void SetPvPZoneStructureDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PvPZoneStructureDamageMultiplier", newValue);
	}
	bool GetbOnlyAllowSpecifiedEngramsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bOnlyAllowSpecifiedEngrams");
	}
	void SetbOnlyAllowSpecifiedEngramsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bOnlyAllowSpecifiedEngrams", newValue);
	}
	int GetOverrideMaxExperiencePointsPlayerField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "OverrideMaxExperiencePointsPlayer");
	}
	void SetOverrideMaxExperiencePointsPlayerField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "OverrideMaxExperiencePointsPlayer", newValue);
	}
	int GetOverrideMaxExperiencePointsDinoField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "OverrideMaxExperiencePointsDino");
	}
	void SetOverrideMaxExperiencePointsDinoField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "OverrideMaxExperiencePointsDino", newValue);
	}
	float GetGlobalSpoilingTimeMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "GlobalSpoilingTimeMultiplier");
	}
	void SetGlobalSpoilingTimeMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "GlobalSpoilingTimeMultiplier", newValue);
	}
	float GetGlobalItemDecompositionTimeMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "GlobalItemDecompositionTimeMultiplier");
	}
	void SetGlobalItemDecompositionTimeMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "GlobalItemDecompositionTimeMultiplier", newValue);
	}
	float GetGlobalCorpseDecompositionTimeMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "GlobalCorpseDecompositionTimeMultiplier");
	}
	void SetGlobalCorpseDecompositionTimeMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "GlobalCorpseDecompositionTimeMultiplier", newValue);
	}
	float GetMaxFallSpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "MaxFallSpeedMultiplier");
	}
	void SetMaxFallSpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MaxFallSpeedMultiplier", newValue);
	}
	bool GetbAutoPvETimerField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bAutoPvETimer"); }
	void SetbAutoPvETimerField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bAutoPvETimer", newValue); }
	bool GetbAutoPvEUseSystemTimeField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAutoPvEUseSystemTime");
	}
	void SetbAutoPvEUseSystemTimeField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAutoPvEUseSystemTime", newValue);
	}
	bool GetbUsingStructureDestructionTagField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bUsingStructureDestructionTag");
	}
	void SetbUsingStructureDestructionTagField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bUsingStructureDestructionTag", newValue);
	}
	FName GetStructureDestructionTagField() const
	{
		return GetNativeField<FName>(this, "AShooterGameMode", "StructureDestructionTag");
	}
	void SetStructureDestructionTagField(FName newValue)
	{
		SetNativeField(this, "AShooterGameMode", "StructureDestructionTag", newValue);
	}
	float GetAutoPvEStartTimeSecondsField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "AutoPvEStartTimeSeconds");
	}
	void SetAutoPvEStartTimeSecondsField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AutoPvEStartTimeSeconds", newValue);
	}
	float GetAutoPvEStopTimeSecondsField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "AutoPvEStopTimeSeconds");
	}
	void SetAutoPvEStopTimeSecondsField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "AutoPvEStopTimeSeconds", newValue);
	}
	int GetTributeItemExpirationSecondsField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "TributeItemExpirationSeconds");
	}
	void SetTributeItemExpirationSecondsField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TributeItemExpirationSeconds", newValue);
	}
	int GetTributeDinoExpirationSecondsField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "TributeDinoExpirationSeconds");
	}
	void SetTributeDinoExpirationSecondsField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TributeDinoExpirationSeconds", newValue);
	}
	int GetTributeCharacterExpirationSecondsField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "TributeCharacterExpirationSeconds");
	}
	void SetTributeCharacterExpirationSecondsField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "TributeCharacterExpirationSeconds", newValue);
	}
	bool GetPreventDownloadSurvivorsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "PreventDownloadSurvivors");
	}
	void SetPreventDownloadSurvivorsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PreventDownloadSurvivors", newValue);
	}
	bool GetPreventDownloadItemsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "PreventDownloadItems");
	}
	void SetPreventDownloadItemsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PreventDownloadItems", newValue);
	}
	bool GetPreventDownloadDinosField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "PreventDownloadDinos");
	}
	void SetPreventDownloadDinosField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PreventDownloadDinos", newValue);
	}
	bool GetbPreventUploadSurvivorsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPreventUploadSurvivors");
	}
	void SetbPreventUploadSurvivorsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventUploadSurvivors", newValue);
	}
	bool GetbPreventUploadItemsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPreventUploadItems");
	}
	void SetbPreventUploadItemsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventUploadItems", newValue);
	}
	bool GetbPreventUploadDinosField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPreventUploadDinos");
	}
	void SetbPreventUploadDinosField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventUploadDinos", newValue);
	}
	int GetMaxTributeItemsField() const { return GetNativeField<int>(this, "AShooterGameMode", "MaxTributeItems"); }
	void SetMaxTributeItemsField(int newValue) { SetNativeField(this, "AShooterGameMode", "MaxTributeItems", newValue); }
	int GetMaxTributeDinosField() const { return GetNativeField<int>(this, "AShooterGameMode", "MaxTributeDinos"); }
	void SetMaxTributeDinosField(int newValue) { SetNativeField(this, "AShooterGameMode", "MaxTributeDinos", newValue); }
	int GetMaxTributeCharactersField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "MaxTributeCharacters");
	}
	void SetMaxTributeCharactersField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MaxTributeCharacters", newValue);
	}
	bool GetbIncreasePvPRespawnIntervalField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bIncreasePvPRespawnInterval");
	}
	void SetbIncreasePvPRespawnIntervalField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bIncreasePvPRespawnInterval", newValue);
	}
	float GetIncreasePvPRespawnIntervalCheckPeriodField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "IncreasePvPRespawnIntervalCheckPeriod");
	}
	void SetIncreasePvPRespawnIntervalCheckPeriodField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "IncreasePvPRespawnIntervalCheckPeriod", newValue);
	}
	float GetIncreasePvPRespawnIntervalMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "IncreasePvPRespawnIntervalMultiplier");
	}
	void SetIncreasePvPRespawnIntervalMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "IncreasePvPRespawnIntervalMultiplier", newValue);
	}
	float GetIncreasePvPRespawnIntervalBaseAmountField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "IncreasePvPRespawnIntervalBaseAmount");
	}
	void SetIncreasePvPRespawnIntervalBaseAmountField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "IncreasePvPRespawnIntervalBaseAmount", newValue);
	}
	float GetResourceNoReplenishRadiusStructuresField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "ResourceNoReplenishRadiusStructures");
	}
	void SetResourceNoReplenishRadiusStructuresField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "ResourceNoReplenishRadiusStructures", newValue);
	}
	float GetResourceNoReplenishRadiusPlayersField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "ResourceNoReplenishRadiusPlayers");
	}
	void SetResourceNoReplenishRadiusPlayersField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "ResourceNoReplenishRadiusPlayers", newValue);
	}
	float GetCropGrowthSpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "CropGrowthSpeedMultiplier");
	}
	void SetCropGrowthSpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CropGrowthSpeedMultiplier", newValue);
	}
	float GetLayEggIntervalMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "LayEggIntervalMultiplier");
	}
	void SetLayEggIntervalMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LayEggIntervalMultiplier", newValue);
	}
	float GetPoopIntervalMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PoopIntervalMultiplier");
	}
	void SetPoopIntervalMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PoopIntervalMultiplier", newValue);
	}
	float GetCropDecaySpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "CropDecaySpeedMultiplier");
	}
	void SetCropDecaySpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CropDecaySpeedMultiplier", newValue);
	}
	bool GetbAllowChatFromDeadNonAdminsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowChatFromDeadNonAdmins");
	}
	void SetbAllowChatFromDeadNonAdminsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowChatFromDeadNonAdmins", newValue);
	}
	bool GetbAllowDisablingSpectatorField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowDisablingSpectator");
	}
	void SetbAllowDisablingSpectatorField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowDisablingSpectator", newValue);
	}
	bool GetbPvEDisableFriendlyFireField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPvEDisableFriendlyFire");
	}
	void SetbPvEDisableFriendlyFireField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPvEDisableFriendlyFire", newValue);
	}
	bool GetbFlyerPlatformAllowUnalignedDinoBasingField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bFlyerPlatformAllowUnalignedDinoBasing");
	}
	void SetbFlyerPlatformAllowUnalignedDinoBasingField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bFlyerPlatformAllowUnalignedDinoBasing", newValue);
	}
	int GetMaxPerTribePlatformSaddleStructureLimitField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "MaxPerTribePlatformSaddleStructureLimit");
	}
	void SetMaxPerTribePlatformSaddleStructureLimitField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MaxPerTribePlatformSaddleStructureLimit", newValue);
	}
	int GetMaxPlatformSaddleStructureLimitField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "MaxPlatformSaddleStructureLimit");
	}
	void SetMaxPlatformSaddleStructureLimitField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MaxPlatformSaddleStructureLimit", newValue);
	}
	int GetMaxDinoBaseLevelField() const { return GetNativeField<int>(this, "AShooterGameMode", "MaxDinoBaseLevel"); }
	void SetMaxDinoBaseLevelField(int newValue) { SetNativeField(this, "AShooterGameMode", "MaxDinoBaseLevel", newValue); }
	int GetMaxNumberOfPlayersInTribeField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "MaxNumberOfPlayersInTribe");
	}
	void SetMaxNumberOfPlayersInTribeField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MaxNumberOfPlayersInTribe", newValue);
	}
	float GetMatingIntervalMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "MatingIntervalMultiplier");
	}
	void SetMatingIntervalMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MatingIntervalMultiplier", newValue);
	}
	float GetEggHatchSpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "EggHatchSpeedMultiplier");
	}
	void SetEggHatchSpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "EggHatchSpeedMultiplier", newValue);
	}
	float GetBabyMatureSpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "BabyMatureSpeedMultiplier");
	}
	void SetBabyMatureSpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BabyMatureSpeedMultiplier", newValue);
	}
	float GetBabyFoodConsumptionSpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "BabyFoodConsumptionSpeedMultiplier");
	}
	void SetBabyFoodConsumptionSpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BabyFoodConsumptionSpeedMultiplier", newValue);
	}
	int GetCurrentPlatformSaddleStructuresField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "CurrentPlatformSaddleStructures");
	}
	void SetCurrentPlatformSaddleStructuresField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CurrentPlatformSaddleStructures", newValue);
	}

	/*float[12] GetPerLevelStatsMultiplier_PlayerField() const { return GetNativeField<float[12]>(this, "AShooterGameMode", "PerLevelStatsMultiplier_Player"); }
	void SetPerLevelStatsMultiplier_PlayerField(float[12] newValue) { SetNativeField(this, "AShooterGameMode", "PerLevelStatsMultiplier_Player", newValue); }
	float[12] GetPerLevelStatsMultiplier_DinoTamedField() const { return GetNativeField<float[12]>(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoTamed"); }
	void SetPerLevelStatsMultiplier_DinoTamedField(float[12] newValue) { SetNativeField(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoTamed", newValue); }
	float[12] GetPerLevelStatsMultiplier_DinoTamed_AddField() const { return GetNativeField<float[12]>(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoTamed_Add"); }
	void SetPerLevelStatsMultiplier_DinoTamed_AddField(float[12] newValue) { SetNativeField(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoTamed_Add", newValue); }
	float[12] GetPerLevelStatsMultiplier_DinoTamed_AffinityField() const { return GetNativeField<float[12]>(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoTamed_Affinity"); }
	void SetPerLevelStatsMultiplier_DinoTamed_AffinityField(float[12] newValue) { SetNativeField(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoTamed_Affinity", newValue); }
	float[12] GetPerLevelStatsMultiplier_DinoWildField() const { return GetNativeField<float[12]>(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoWild"); }
	void SetPerLevelStatsMultiplier_DinoWildField(float[12] newValue) { SetNativeField(this, "AShooterGameMode", "PerLevelStatsMultiplier_DinoWild", newValue); }*/
	bool GetbCustomGameModeAllowSpectatorJoinAfterMatchStartField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bCustomGameModeAllowSpectatorJoinAfterMatchStart");
	}
	void SetbCustomGameModeAllowSpectatorJoinAfterMatchStartField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bCustomGameModeAllowSpectatorJoinAfterMatchStart", newValue);
	}
	bool GetbGameplayLogEnabledField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bGameplayLogEnabled");
	}
	void SetbGameplayLogEnabledField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bGameplayLogEnabled", newValue);
	}
	bool GetbServerGameLogEnabledField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bServerGameLogEnabled");
	}
	void SetbServerGameLogEnabledField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bServerGameLogEnabled", newValue);
	}
	TSubclassOf<UPrimalItem> GetBonusSupplyCrateItemClassField() const
	{
		return GetNativeField<TSubclassOf<UPrimalItem>>(this, "AShooterGameMode", "BonusSupplyCrateItemClass");
	}
	void SetBonusSupplyCrateItemClassField(TSubclassOf<UPrimalItem> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BonusSupplyCrateItemClass", newValue);
	}
	float GetBonusSupplyCrateItemGiveIntervalField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "BonusSupplyCrateItemGiveInterval");
	}
	void SetBonusSupplyCrateItemGiveIntervalField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BonusSupplyCrateItemGiveInterval", newValue);
	}
	float GetStructureDamageRepairCooldownField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "StructureDamageRepairCooldown");
	}
	void SetStructureDamageRepairCooldownField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "StructureDamageRepairCooldown", newValue);
	}
	float GetCustomRecipeEffectivenessMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "CustomRecipeEffectivenessMultiplier");
	}
	void SetCustomRecipeEffectivenessMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CustomRecipeEffectivenessMultiplier", newValue);
	}
	float GetCustomRecipeSkillMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "CustomRecipeSkillMultiplier");
	}
	void SetCustomRecipeSkillMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CustomRecipeSkillMultiplier", newValue);
	}
	FString GetBonusSupplyCrateItemStringField() const
	{
		return GetNativeField<FString>(this, "AShooterGameMode", "BonusSupplyCrateItemString");
	}
	void SetBonusSupplyCrateItemStringField(FString newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BonusSupplyCrateItemString", newValue);
	}
	bool GetbPvEAllowTribeWarField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bPvEAllowTribeWar"); }
	void SetbPvEAllowTribeWarField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPvEAllowTribeWar", newValue);
	}
	bool GetbPvEAllowTribeWarCancelField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPvEAllowTribeWarCancel");
	}
	void SetbPvEAllowTribeWarCancelField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPvEAllowTribeWarCancel", newValue);
	}
	bool GetbAllowCustomRecipesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowCustomRecipes");
	}
	void SetbAllowCustomRecipesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowCustomRecipes", newValue);
	}
	bool GetbPassiveDefensesDamageRiderlessDinosField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPassiveDefensesDamageRiderlessDinos");
	}
	void SetbPassiveDefensesDamageRiderlessDinosField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPassiveDefensesDamageRiderlessDinos", newValue);
	}
	long double GetLastBonusSupplyCrateItemGiveTimeField() const
	{
		return GetNativeField<long double>(this, "AShooterGameMode", "LastBonusSupplyCrateItemGiveTime");
	}
	void SetLastBonusSupplyCrateItemGiveTimeField(long double newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LastBonusSupplyCrateItemGiveTime", newValue);
	}
	bool GetbEnableDeathTeamSpectatorField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bEnableDeathTeamSpectator");
	}
	void SetbEnableDeathTeamSpectatorField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bEnableDeathTeamSpectator", newValue);
	}
	bool GetbTribeStoreCharacterConfigurationField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bTribeStoreCharacterConfiguration");
	}
	void SetbTribeStoreCharacterConfigurationField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bTribeStoreCharacterConfiguration", newValue);
	}
	//TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>> GetPvEActiveTribeWarsField() const { return GetNativeField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>>>(this, "AShooterGameMode", "PvEActiveTribeWars"); }
	//TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>> GetTribeAlliesField() const { return GetNativeField<TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>>>(this, "AShooterGameMode", "TribeAllies"); }
	int GetMaxTribeLogsField() const { return GetNativeField<int>(this, "AShooterGameMode", "MaxTribeLogs"); }
	void SetMaxTribeLogsField(int newValue) { SetNativeField(this, "AShooterGameMode", "MaxTribeLogs", newValue); }
	TArray<FString> GetCachedGameLogField() const
	{
		return GetNativeField<TArray<FString>>(this, "AShooterGameMode", "CachedGameLog");
	}
	void SetCachedGameLogField(TArray<FString> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "CachedGameLog", newValue);
	}
	bool GetbDisableFriendlyFireField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDisableFriendlyFire");
	}
	void SetbDisableFriendlyFireField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisableFriendlyFire", newValue);
	}
	bool GetbAllowInactiveTribesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowInactiveTribes");
	}
	void SetbAllowInactiveTribesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowInactiveTribes", newValue);
	}
	bool GetbForceMapPlayerLocationField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bForceMapPlayerLocation");
	}
	void SetbForceMapPlayerLocationField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bForceMapPlayerLocation", newValue);
	}
	float GetDinoHarvestingDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoHarvestingDamageMultiplier");
	}
	void SetDinoHarvestingDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoHarvestingDamageMultiplier", newValue);
	}
	float GetPlayerHarvestingDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PlayerHarvestingDamageMultiplier");
	}
	void SetPlayerHarvestingDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PlayerHarvestingDamageMultiplier", newValue);
	}
	float GetDinoTurretDamageMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "DinoTurretDamageMultiplier");
	}
	void SetDinoTurretDamageMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "DinoTurretDamageMultiplier", newValue);
	}
	bool GetbDisableLootCratesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDisableLootCrates");
	}
	void SetbDisableLootCratesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisableLootCrates", newValue);
	}
	float GetExtinctionEventTimeIntervalField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "ExtinctionEventTimeInterval");
	}
	void SetExtinctionEventTimeIntervalField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "ExtinctionEventTimeInterval", newValue);
	}
	bool GetbEnableExtraStructurePreventionVolumesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bEnableExtraStructurePreventionVolumes");
	}
	void SetbEnableExtraStructurePreventionVolumesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bEnableExtraStructurePreventionVolumes", newValue);
	}
	unsigned int GetNextExtinctionEventUTCField() const
	{
		return GetNativeField<unsigned int>(this, "AShooterGameMode", "NextExtinctionEventUTC");
	}
	void SetNextExtinctionEventUTCField(unsigned int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "NextExtinctionEventUTC", newValue);
	}
	bool GetbForceAllowCaveFlyersField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bForceAllowCaveFlyers");
	}
	void SetbForceAllowCaveFlyersField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bForceAllowCaveFlyers", newValue);
	}
	bool GetbDoExtinctionEventField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDoExtinctionEvent");
	}
	void SetbDoExtinctionEventField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDoExtinctionEvent", newValue);
	}
	bool GetbPreventOfflinePvPField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bPreventOfflinePvP");
	}
	void SetbPreventOfflinePvPField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventOfflinePvP", newValue);
	}
	bool GetbPvPDinoDecayField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bPvPDinoDecay"); }
	void SetbPvPDinoDecayField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bPvPDinoDecay", newValue); }
	bool GetbOverideStructurePlatformPreventionField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bOverideStructurePlatformPrevention");
	}
	void SetbOverideStructurePlatformPreventionField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bOverideStructurePlatformPrevention", newValue);
	}
	bool GetbAllowAnyoneBabyImprintCuddleField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowAnyoneBabyImprintCuddle");
	}
	void SetbAllowAnyoneBabyImprintCuddleField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowAnyoneBabyImprintCuddle", newValue);
	}
	bool GetbDisableImprintDinoBuffField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDisableImprintDinoBuff");
	}
	void SetbDisableImprintDinoBuffField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDisableImprintDinoBuff", newValue);
	}
	bool GetbShowFloatingDamageTextField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bShowFloatingDamageText");
	}
	void SetbShowFloatingDamageTextField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bShowFloatingDamageText", newValue);
	}
	bool GetbOnlyDecayUnsnappedCoreStructuresField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bOnlyDecayUnsnappedCoreStructures");
	}
	void SetbOnlyDecayUnsnappedCoreStructuresField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bOnlyDecayUnsnappedCoreStructures", newValue);
	}
	bool GetbFastDecayUnsnappedCoreStructuresField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bFastDecayUnsnappedCoreStructures");
	}
	void SetbFastDecayUnsnappedCoreStructuresField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bFastDecayUnsnappedCoreStructures", newValue);
	}
	bool GetbDestroyUnconnectedWaterPipesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bDestroyUnconnectedWaterPipes");
	}
	void SetbDestroyUnconnectedWaterPipesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bDestroyUnconnectedWaterPipes", newValue);
	}
	bool GetbAllowCrateSpawnsOnTopOfStructuresField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bAllowCrateSpawnsOnTopOfStructures");
	}
	void SetbAllowCrateSpawnsOnTopOfStructuresField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bAllowCrateSpawnsOnTopOfStructures", newValue);
	}
	float GetPreventOfflinePvPIntervalField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "PreventOfflinePvPInterval");
	}
	void SetPreventOfflinePvPIntervalField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "PreventOfflinePvPInterval", newValue);
	}

	/*TArray<FItemCraftingCostOverride> GetOverrideItemCraftingCostsField() const { return GetNativeField<TArray<FItemCraftingCostOverride>>(this, "AShooterGameMode", "OverrideItemCraftingCosts"); }
	void SetOverrideItemCraftingCostsField(TArray<FItemCraftingCostOverride> newValue) { SetNativeField(this, "AShooterGameMode", "OverrideItemCraftingCosts", newValue); }
	TArray<FConfigItemCraftingCostOverride> GetConfigOverrideItemCraftingCostsField() const { return GetNativeField<TArray<FConfigItemCraftingCostOverride>>(this, "AShooterGameMode", "ConfigOverrideItemCraftingCosts"); }
	void SetConfigOverrideItemCraftingCostsField(TArray<FConfigItemCraftingCostOverride> newValue) { SetNativeField(this, "AShooterGameMode", "ConfigOverrideItemCraftingCosts", newValue); }
	TArray<FConfigSupplyCrateItemsOverride> GetConfigOverrideSupplyCrateItemsField() const { return GetNativeField<TArray<FConfigSupplyCrateItemsOverride>>(this, "AShooterGameMode", "ConfigOverrideSupplyCrateItems"); }
	void SetConfigOverrideSupplyCrateItemsField(TArray<FConfigSupplyCrateItemsOverride> newValue) { SetNativeField(this, "AShooterGameMode", "ConfigOverrideSupplyCrateItems", newValue); }
	TArray<FConfigNPCSpawnEntriesContainer> GetConfigOverrideNPCSpawnEntriesContainerField() const { return GetNativeField<TArray<FConfigNPCSpawnEntriesContainer>>(this, "AShooterGameMode", "ConfigOverrideNPCSpawnEntriesContainer"); }
	void SetConfigOverrideNPCSpawnEntriesContainerField(TArray<FConfigNPCSpawnEntriesContainer> newValue) { SetNativeField(this, "AShooterGameMode", "ConfigOverrideNPCSpawnEntriesContainer", newValue); }
	TArray<FConfigNPCSpawnEntriesContainer> GetConfigAddNPCSpawnEntriesContainerField() const { return GetNativeField<TArray<FConfigNPCSpawnEntriesContainer>>(this, "AShooterGameMode", "ConfigAddNPCSpawnEntriesContainer"); }
	void SetConfigAddNPCSpawnEntriesContainerField(TArray<FConfigNPCSpawnEntriesContainer> newValue) { SetNativeField(this, "AShooterGameMode", "ConfigAddNPCSpawnEntriesContainer", newValue); }
	TArray<FConfigNPCSpawnEntriesContainer> GetConfigSubtractNPCSpawnEntriesContainerField() const { return GetNativeField<TArray<FConfigNPCSpawnEntriesContainer>>(this, "AShooterGameMode", "ConfigSubtractNPCSpawnEntriesContainer"); }
	void SetConfigSubtractNPCSpawnEntriesContainerField(TArray<FConfigNPCSpawnEntriesContainer> newValue) { SetNativeField(this, "AShooterGameMode", "ConfigSubtractNPCSpawnEntriesContainer", newValue); }
	float GetBabyImprintingStatScaleMultiplierField() const { return GetNativeField<float>(this, "AShooterGameMode", "BabyImprintingStatScaleMultiplier"); }*/
	void SetBabyImprintingStatScaleMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BabyImprintingStatScaleMultiplier", newValue);
	}
	float GetBabyCuddleIntervalMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "BabyCuddleIntervalMultiplier");
	}
	void SetBabyCuddleIntervalMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BabyCuddleIntervalMultiplier", newValue);
	}
	float GetBabyCuddleGracePeriodMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "BabyCuddleGracePeriodMultiplier");
	}
	void SetBabyCuddleGracePeriodMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BabyCuddleGracePeriodMultiplier", newValue);
	}
	float GetBabyCuddleLoseImprintQualitySpeedMultiplierField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "BabyCuddleLoseImprintQualitySpeedMultiplier");
	}
	void SetBabyCuddleLoseImprintQualitySpeedMultiplierField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "BabyCuddleLoseImprintQualitySpeedMultiplier", newValue);
	}
	bool GetbPreventDiseasesField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bPreventDiseases"); }
	void SetbPreventDiseasesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bPreventDiseases", newValue);
	}
	bool GetbNonPermanentDiseasesField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bNonPermanentDiseases");
	}
	void SetbNonPermanentDiseasesField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bNonPermanentDiseases", newValue);
	}
	int GetSaveForceRespawnDinosVersionField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "SaveForceRespawnDinosVersion");
	}
	void SetSaveForceRespawnDinosVersionField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "SaveForceRespawnDinosVersion", newValue);
	}
	unsigned __int64 GetServerIDField() const
	{
		return GetNativeField<unsigned __int64>(this, "AShooterGameMode", "ServerID");
	}
	void SetServerIDField(unsigned __int64 newValue) { SetNativeField(this, "AShooterGameMode", "ServerID", newValue); }
	int GetLoadForceRespawnDinosVersionField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "LoadForceRespawnDinosVersion");
	}
	void SetLoadForceRespawnDinosVersionField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "LoadForceRespawnDinosVersion", newValue);
	}
	bool GetbIsLoadedServerField() const { return GetNativeField<bool>(this, "AShooterGameMode", "bIsLoadedServer"); }
	void SetbIsLoadedServerField(bool newValue) { SetNativeField(this, "AShooterGameMode", "bIsLoadedServer", newValue); }
	TArray<int> GetSupportedSpawnRegionsField() const
	{
		return GetNativeField<TArray<int>>(this, "AShooterGameMode", "SupportedSpawnRegions");
	}
	void SetSupportedSpawnRegionsField(TArray<int> newValue)
	{
		SetNativeField(this, "AShooterGameMode", "SupportedSpawnRegions", newValue);
	}
	bool GetbServerUseDinoListField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bServerUseDinoList");
	}
	void SetbServerUseDinoListField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bServerUseDinoList", newValue);
	}
	float GetMaxAllowedRespawnIntervalField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "MaxAllowedRespawnInterval");
	}
	void SetMaxAllowedRespawnIntervalField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MaxAllowedRespawnInterval", newValue);
	}
	bool GetbUseDinoLevelUpAnimationsField() const
	{
		return GetNativeField<bool>(this, "AShooterGameMode", "bUseDinoLevelUpAnimations");
	}
	void SetbUseDinoLevelUpAnimationsField(bool newValue)
	{
		SetNativeField(this, "AShooterGameMode", "bUseDinoLevelUpAnimations", newValue);
	}
	float GetMinimumDinoReuploadIntervalField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "MinimumDinoReuploadInterval");
	}
	void SetMinimumDinoReuploadIntervalField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "MinimumDinoReuploadInterval", newValue);
	}
	int GetNPCCountField() const { return GetNativeField<int>(this, "AShooterGameMode", "NPCCount"); }
	void SetNPCCountField(int newValue) { SetNativeField(this, "AShooterGameMode", "NPCCount", newValue); }
	int GetNPCActiveCountField() const { return GetNativeField<int>(this, "AShooterGameMode", "NPCActiveCount"); }
	void SetNPCActiveCountField(int newValue) { SetNativeField(this, "AShooterGameMode", "NPCActiveCount", newValue); }
	int GetSaveGameCustomVersionField() const
	{
		return GetNativeField<int>(this, "AShooterGameMode", "SaveGameCustomVersion");
	}
	void SetSaveGameCustomVersionField(int newValue)
	{
		SetNativeField(this, "AShooterGameMode", "SaveGameCustomVersion", newValue);
	}
	float GetOverrideOfficialDifficultyField() const
	{
		return GetNativeField<float>(this, "AShooterGameMode", "OverrideOfficialDifficulty");
	}
	void SetOverrideOfficialDifficultyField(float newValue)
	{
		SetNativeField(this, "AShooterGameMode", "OverrideOfficialDifficulty", newValue);
	}

	// Functions

	bool AllowAddXP(UPrimalCharacterStatusComponent* forComp)
	{
		return NativeCall<bool, UPrimalCharacterStatusComponent *>((DWORD64)this, "AShooterGameMode", "AllowAddXP", forComp);
	}
	void CheckArkTributeAvailability()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "CheckArkTributeAvailability");
	}
	void ArkTributeAvailabilityRequestComplete()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "ArkTributeAvailabilityRequestComplete");
	}
	void InitGame(FString* MapName, FString* Options, FString* ErrorMessage)
	{
		NativeCall<void, FString *, FString *, FString *>((DWORD64)this, "AShooterGameMode", "InitGame", MapName, Options,
		                                                  ErrorMessage);
	}
	void InitOptionBool() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "InitOptionBool"); }
	void InitOptionString() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "InitOptionString"); }
	void InitOptionFloat() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "InitOptionFloat"); }
	void InitOptionInteger() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "InitOptionInteger"); }
	bool GetBoolOption(FString* Options, FString* ParseString, bool CurrentValue)
	{
		return NativeCall<bool, FString *, FString *, bool>((DWORD64)this, "AShooterGameMode", "GetBoolOption", Options,
		                                                    ParseString, CurrentValue);
	}
	float GetFloatOption(FString* Options, FString* ParseString, float CurrentValue)
	{
		return NativeCall<float, FString *, FString *, float>((DWORD64)this, "AShooterGameMode", "GetFloatOption", Options,
		                                                      ParseString, CurrentValue);
	}
	int GetIntOption(FString* Options, FString* ParseString, int CurrentValue)
	{
		return NativeCall<int, FString *, FString *, int>((DWORD64)this, "AShooterGameMode", "GetIntOption", Options,
		                                                  ParseString, CurrentValue);
	}
	void InitOptions() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "InitOptions"); }
	float GetFloatOptionIni() { return NativeCall<float>((DWORD64)this, "AShooterGameMode", "GetFloatOptionIni"); }
	int GetIntOptionIni() { return NativeCall<int>((DWORD64)this, "AShooterGameMode", "GetIntOptionIni"); }
	FString* GetStringOption() { return NativeCall<FString *>((DWORD64)this, "AShooterGameMode", "GetStringOption"); }
	void SaveWorld() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "SaveWorld"); }
	void ClearSavesAndRestart() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "ClearSavesAndRestart"); }
	bool LoadWorld() { return NativeCall<bool>((DWORD64)this, "AShooterGameMode", "LoadWorld"); }
	TSubclassOf<AGameSession>* GetGameSessionClass(TSubclassOf<AGameSession>* result)
	{
		return NativeCall<TSubclassOf<AGameSession> *, TSubclassOf<AGameSession> *>(
			(DWORD64)this, "AShooterGameMode", "GetGameSessionClass", result);
	}
	void HandleMatchHasStarted() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "HandleMatchHasStarted"); }
	void HandleLeavingMap() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "HandleLeavingMap"); }
	void PostLogin(APlayerController* NewPlayer)
	{
		NativeCall<void, APlayerController *>((DWORD64)this, "AShooterGameMode", "PostLogin", NewPlayer);
	}
	TArray<FString>* GetWhiteListedMap(TArray<FString>* result)
	{
		return NativeCall<TArray<FString> *, TArray<FString> *>((DWORD64)this, "AShooterGameMode", "GetWhiteListedMap",
		                                                        result);
	}
	void Killed(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, UDamageType* DamageType)
	{
		NativeCall<void, AController *, AController *, APawn *, UDamageType *>(
			(DWORD64)this, "AShooterGameMode", "Killed", Killer, KilledPlayer, KilledPawn, DamageType);
	}
	TSubclassOf<UObject>*
	GetDefaultPawnClassForController_Implementation(TSubclassOf<UObject>* result, AController* InController)
	{
		return NativeCall<TSubclassOf<UObject> *, TSubclassOf<UObject> *, AController *>(
			(DWORD64)this, "AShooterGameMode", "GetDefaultPawnClassForController_Implementation", result, InController);
	}
	AActor* ChoosePlayerStart_Implementation(AController* Player)
	{
		return NativeCall<AActor *, AController *>((DWORD64)this, "AShooterGameMode", "ChoosePlayerStart_Implementation",
		                                           Player);
	}
	bool IsSpawnpointPreferred(APlayerStart* SpawnPoint, AController* Player)
	{
		return NativeCall<bool, APlayerStart *, AController *>((DWORD64)this, "AShooterGameMode", "IsSpawnpointPreferred",
		                                                       SpawnPoint, Player);
	}
	bool IsFirstPlayerSpawn(APlayerController* NewPlayer)
	{
		return NativeCall<bool, APlayerController *>((DWORD64)this, "AShooterGameMode", "IsFirstPlayerSpawn", NewPlayer);
	}
	UPrimalPlayerData* GetPlayerData(FString* PlayerDataID)
	{
		return NativeCall<UPrimalPlayerData *, FString *>((DWORD64)this, "AShooterGameMode", "GetPlayerData", PlayerDataID);
	}
	void StartNewPlayer(APlayerController* NewPlayer)
	{
		NativeCall<void, APlayerController *>((DWORD64)this, "AShooterGameMode", "StartNewPlayer", NewPlayer);
	}
	void StartNewShooterPlayer(APlayerController* NewPlayer, bool bForceCreateNewPlayerData, bool bIsFromLogin,
	                           FPrimalPlayerCharacterConfigStruct* charConfig, UPrimalPlayerData* ArkPlayerData)
	{
		NativeCall<void, APlayerController *, bool, bool, FPrimalPlayerCharacterConfigStruct *, UPrimalPlayerData *>(
			(DWORD64)this, "AShooterGameMode", "StartNewShooterPlayer", NewPlayer, bForceCreateNewPlayerData, bIsFromLogin,
			charConfig, ArkPlayerData);
	}
	void HandleTransferCharacterDialogResult(bool bAccept, AShooterPlayerController* NewPlayer)
	{
		NativeCall<void, bool, AShooterPlayerController *>((DWORD64)this, "AShooterGameMode",
		                                                   "HandleTransferCharacterDialogResult", bAccept, NewPlayer);
	}
	void Logout(AController* Exiting)
	{
		NativeCall<void, AController *>((DWORD64)this, "AShooterGameMode", "Logout", Exiting);
	}
	FVector* GetTracedSpawnLocation(FVector* result, FVector* SpawnLoc, float CharHalfHeight)
	{
		return NativeCall<FVector *, FVector *, FVector *, float>((DWORD64)this, "AShooterGameMode", "GetTracedSpawnLocation",
		                                                          result, SpawnLoc, CharHalfHeight);
	}
	void SetMessageOfTheDay(FString* Message)
	{
		NativeCall<void, FString *>((DWORD64)this, "AShooterGameMode", "SetMessageOfTheDay", Message);
	}
	void ShowMessageOfTheDay() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "ShowMessageOfTheDay"); }
	APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot)
	{
		return NativeCall<APawn *, AController *, AActor *>((DWORD64)this, "AShooterGameMode", "SpawnDefaultPawnFor",
		                                                    NewPlayer, StartSpot);
	}
	FPrimalPlayerCharacterConfigStruct*
	ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct* result, FPrimalPlayerCharacterConfigStruct* charConfig)
	{
		return NativeCall<FPrimalPlayerCharacterConfigStruct *, FPrimalPlayerCharacterConfigStruct *,
		                  FPrimalPlayerCharacterConfigStruct *>((DWORD64)this, "AShooterGameMode", "ValidateCharacterConfig",
		                                                        result, charConfig);
	}
	FString* GenerateProfileFileName(FString* result, FUniqueNetIdRepl* UniqueId, FString* NetworkAddresss,
	                                 FString* PlayerName)
	{
		return NativeCall<FString *, FString *, FUniqueNetIdRepl *, FString *, FString *>(
			(DWORD64)this, "AShooterGameMode", "GenerateProfileFileName", result, UniqueId, NetworkAddresss, PlayerName);
	}
	UPrimalPlayerData* LoadPlayerData(AShooterPlayerState* PlayerState, bool bIsLoadingBackup)
	{
		return NativeCall<UPrimalPlayerData *, AShooterPlayerState *, bool>((DWORD64)this, "AShooterGameMode",
		                                                                    "LoadPlayerData", PlayerState, bIsLoadingBackup);
	}
	void DeletePlayerData(AShooterPlayerState* PlayerState)
	{
		NativeCall<void, AShooterPlayerState *>((DWORD64)this, "AShooterGameMode", "DeletePlayerData", PlayerState);
	}
	//TSharedPtr<FWriteFileTaskInfo, 0> * SavePlayerData(TSharedPtr<FWriteFileTaskInfo, 0> * result, UPrimalPlayerData * PlayerData) { return NativeCall<TSharedPtr<FWriteFileTaskInfo, 0> *, TSharedPtr<FWriteFileTaskInfo, 0> *, UPrimalPlayerData *>((DWORD64)this, "AShooterGameMode", "SavePlayerData", result, PlayerData); }
	//TSharedPtr<FWriteFileTaskInfo, 0> * SaveTribeData() { return NativeCall<TSharedPtr<FWriteFileTaskInfo, 0> *>((DWORD64)this, "AShooterGameMode", "SaveTribeData"); }
	bool GetOrLoadTribeData(int TribeID, FTribeData* LoadedTribeData)
	{
		return NativeCall<bool, int, FTribeData *>((DWORD64)this, "AShooterGameMode", "GetOrLoadTribeData", TribeID,
		                                           LoadedTribeData);
	}
	bool LoadTribeData(int TribeID, FTribeData* LoadedTribeData, bool bIsLoadingBackup, bool bDontCheckDirtyTribeWar)
	{
		return NativeCall<bool, int, FTribeData *, bool, bool>((DWORD64)this, "AShooterGameMode", "LoadTribeData", TribeID,
		                                                       LoadedTribeData, bIsLoadingBackup, bDontCheckDirtyTribeWar);
	}
	UPrimalPlayerData* GetPlayerDataFor(AShooterPlayerController* PC, bool* bCreatedNewPlayerData,
	                                    bool bForceCreateNewPlayerData, FPrimalPlayerCharacterConfigStruct* charConfig,
	                                    bool bAutoCreateNewData, bool bDontSaveNewData)
	{
		return NativeCall<UPrimalPlayerData *, AShooterPlayerController *, bool *, bool, FPrimalPlayerCharacterConfigStruct *,
		                  bool, bool>((DWORD64)this, "AShooterGameMode", "GetPlayerDataFor", PC, bCreatedNewPlayerData,
		                              bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData);
	}
	void CheckForRepopulation() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "CheckForRepopulation"); }
	void ForceRepopulateFoliageAtPoint()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "ForceRepopulateFoliageAtPoint");
	}
	void Tick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "AShooterGameMode", "Tick", DeltaSeconds); }
	bool StartSaveBackup() { return NativeCall<bool>((DWORD64)this, "AShooterGameMode", "StartSaveBackup"); }
	void SendDatadogMetricEvent(FString* Title, FString* Message)
	{
		NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterGameMode", "SendDatadogMetricEvent", Title, Message);
	}
	void TickSaveBackup() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "TickSaveBackup"); }
	unsigned __int64 AddNewTribe(AShooterPlayerState* PlayerOwner, FString* TribeName, FTribeGovernment* TribeGovernment)
	{
		return NativeCall<unsigned __int64, AShooterPlayerState *, FString *, FTribeGovernment *>(
			(DWORD64)this, "AShooterGameMode", "AddNewTribe", PlayerOwner, TribeName, TribeGovernment);
	}
	void RemoveTribe(unsigned __int64 TribeID)
	{
		NativeCall<void, unsigned __int64>((DWORD64)this, "AShooterGameMode", "RemoveTribe", TribeID);
	}
	void UpdateTribeData() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "UpdateTribeData"); }
	void RemovePlayerFromTribe(unsigned __int64 TribeID, unsigned __int64 PlayerDataID, bool bDontUpdatePlayerState)
	{
		NativeCall<void, unsigned __int64, unsigned __int64, bool>((DWORD64)this, "AShooterGameMode", "RemovePlayerFromTribe",
		                                                           TribeID, PlayerDataID, bDontUpdatePlayerState);
	}
	int GetTribeIDOfPlayerID(unsigned __int64 PlayerDataID)
	{
		return NativeCall<int, unsigned __int64>((DWORD64)this, "AShooterGameMode", "GetTribeIDOfPlayerID", PlayerDataID);
	}
	FTribeData* GetTribeData(FTribeData* result, unsigned __int64 TribeID)
	{
		return NativeCall<FTribeData *, FTribeData *, unsigned __int64>((DWORD64)this, "AShooterGameMode", "GetTribeData",
		                                                                result, TribeID);
	}
	void BeginPlay() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "BeginPlay"); }
	void GetActorSaveGameTypes(TArray<TSubclassOf<AActor>>* saveGameTypes)
	{
		NativeCall<void, TArray<TSubclassOf<AActor>> *>((DWORD64)this, "AShooterGameMode", "GetActorSaveGameTypes",
		                                                saveGameTypes);
	}
	void SendServerDirectMessage() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "SendServerDirectMessage"); }
	void SendServerChatMessage() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "SendServerChatMessage"); }
	void SendServerNotification(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime,
	                            DWORD64 MessageIcon, DWORD64 SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID,
	                            bool bDoBillboard)
	{
		NativeCall<void, FString *, FLinearColor, float, float, DWORD64, DWORD64, int, int, bool>(
			(DWORD64)this, "AShooterGameMode", "SendServerNotification", MessageText, MessageColor, DisplayScale, DisplayTime,
			MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard);
	}
	void RemovePlayerData(AShooterPlayerState* PlayerState)
	{
		NativeCall<void, AShooterPlayerState *>((DWORD64)this, "AShooterGameMode", "RemovePlayerData", PlayerState);
	}
	void InitGameState() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "InitGameState"); }
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "PreInitializeComponents"); }
	void CheckIsOfficialServer() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "CheckIsOfficialServer"); }
	void BeginUnloadingWorld() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "BeginUnloadingWorld"); }
	void HttpServerNotificationRequestComplete()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "HttpServerNotificationRequestComplete");
	}
	void HttpGetDynamicConfigComplete()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "HttpGetDynamicConfigComplete");
	}
	void PostAlarmNotification(FUniqueNetId* SteamID, FString* Title, FString* Message)
	{
		NativeCall<void, FUniqueNetId *, FString *, FString *>((DWORD64)this, "AShooterGameMode", "PostAlarmNotification",
		                                                       SteamID, Title, Message);
	}
	void PostAlarmNotification() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "PostAlarmNotification"); }
	void SavePlayersJoinNoCheckList()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "SavePlayersJoinNoCheckList");
	}
	void LoadPlayersJoinNoCheckList()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "LoadPlayersJoinNoCheckList");
	}
	//bool IsPlayerAllowedToJoinNoCheck(FUniqueNetIdUInt64 * PlayerId) { return NativeCall<bool, FUniqueNetIdUInt64 *>((DWORD64)this, "AShooterGameMode", "IsPlayerAllowedToJoinNoCheck", PlayerId); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController* ForPlayer)
	{
		return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "AShooterGameMode",
		                                                    "IsPlayerControllerAllowedToJoinNoCheck", ForPlayer);
	}
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController* ForPlayer)
	{
		return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "AShooterGameMode",
		                                                    "IsPlayerControllerAllowedToExclusiveJoin", ForPlayer);
	}
	bool KickPlayer() { return NativeCall<bool>((DWORD64)this, "AShooterGameMode", "KickPlayer"); }
	void KickPlayerController(APlayerController* thePC, FString* KickMessage)
	{
		NativeCall<void, APlayerController *, FString *>((DWORD64)this, "AShooterGameMode", "KickPlayerController", thePC,
		                                                 KickMessage);
	}
	bool BanPlayer() { return NativeCall<bool>((DWORD64)this, "AShooterGameMode", "BanPlayer"); }
	bool UnbanPlayer() { return NativeCall<bool>((DWORD64)this, "AShooterGameMode", "UnbanPlayer"); }
	void SaveBannedList() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "SaveBannedList"); }
	void LoadBannedList() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "LoadBannedList"); }
	FString* GeneratePGMapFolderName()
	{
		return NativeCall<FString *>((DWORD64)this, "AShooterGameMode", "GeneratePGMapFolderName");
	}
	FString* GetMapName(FString* result)
	{
		return NativeCall<FString *, FString *>((DWORD64)this, "AShooterGameMode", "GetMapName", result);
	}
	void UpdateSaveBackupFiles() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "UpdateSaveBackupFiles"); }
	void LoadTribeIds() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "LoadTribeIds"); }
	void LoadPlayerDataIds() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "LoadPlayerDataIds"); }
	void AddPlayerID(int playerDataID, unsigned __int64 netUniqueID)
	{
		NativeCall<void, int, unsigned __int64>((DWORD64)this, "AShooterGameMode", "AddPlayerID", playerDataID, netUniqueID);
	}
	unsigned __int64 GetSteamIDForPlayerID(int playerDataID)
	{
		return NativeCall<unsigned __int64, int>((DWORD64)this, "AShooterGameMode", "GetSteamIDForPlayerID", playerDataID);
	}
	unsigned int GenerateTribeId()
	{
		return NativeCall<unsigned int>((DWORD64)this, "AShooterGameMode", "GenerateTribeId");
	}
	unsigned int GeneratePlayerDataId(unsigned __int64 NetUniqueID)
	{
		return NativeCall<unsigned int, unsigned __int64>((DWORD64)this, "AShooterGameMode", "GeneratePlayerDataId",
		                                                  NetUniqueID);
	}
	float GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem> HarvestItemClass)
	{
		return NativeCall<float, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterGameMode",
		                                                   "GetHarvestResourceItemAmountMultiplier", HarvestItemClass);
	}
	float GetDinoDamageMultiplier(APrimalDinoCharacter* ForDino)
	{
		return NativeCall<float, APrimalDinoCharacter *>((DWORD64)this, "AShooterGameMode", "GetDinoDamageMultiplier",
		                                                 ForDino);
	}
	float GetDinoResistanceMultiplier(APrimalDinoCharacter* ForDino)
	{
		return NativeCall<float, APrimalDinoCharacter *>((DWORD64)this, "AShooterGameMode", "GetDinoResistanceMultiplier",
		                                                 ForDino);
	}
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass)
	{
		return NativeCall<bool, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterGameMode", "IsEngramClassHidden",
		                                                  ForItemClass);
	}
	bool IsEngramClassGiveToPlayer(TSubclassOf<UPrimalItem> ForItemClass)
	{
		return NativeCall<bool, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterGameMode", "IsEngramClassGiveToPlayer",
		                                                  ForItemClass);
	}
	void ListenServerClampPlayerLocations()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "ListenServerClampPlayerLocations");
	}
	FString* ValidateTribeName() { return NativeCall<FString *>((DWORD64)this, "AShooterGameMode", "ValidateTribeName"); }
	void AdjustDamage(AActor* Victim, float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator,
	                  AActor* DamageCauser)
	{
		NativeCall<void, AActor *, float *, FDamageEvent *, AController *, AActor *>(
			(DWORD64)this, "AShooterGameMode", "AdjustDamage", Victim, Damage, DamageEvent, EventInstigator, DamageCauser);
	}
	void SetTimeOfDay(FString* timeString)
	{
		NativeCall<void, FString *>((DWORD64)this, "AShooterGameMode", "SetTimeOfDay", timeString);
	}
	void KickAllPlayersAndReload() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "KickAllPlayersAndReload"); }
	bool PlayerCanRestart(APlayerController* Player)
	{
		return NativeCall<bool, APlayerController *>((DWORD64)this, "AShooterGameMode", "PlayerCanRestart", Player);
	}
	bool HandleNewPlayer_Implementation(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData,
	                                    AShooterCharacter* PlayerCharacter, bool bIsFromLogin)
	{
		return NativeCall<bool, AShooterPlayerController *, UPrimalPlayerData *, AShooterCharacter *, bool>(
			(DWORD64)this, "AShooterGameMode", "HandleNewPlayer_Implementation", NewPlayer, PlayerData, PlayerCharacter,
			bIsFromLogin);
	}
	bool IsPlayerAllowedToCheat(AShooterPlayerController* ForPlayer)
	{
		return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "AShooterGameMode", "IsPlayerAllowedToCheat",
		                                                    ForPlayer);
	}
	void PrintToGameplayLog(FString* InString)
	{
		NativeCall<void, FString *>((DWORD64)this, "AShooterGameMode", "PrintToGameplayLog", InString);
	}
	void PrintToServerGameLog(FString* InString)
	{
		NativeCall<void, FString *>((DWORD64)this, "AShooterGameMode", "PrintToServerGameLog", InString);
	}
	void LoadedFromSaveGame() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "LoadedFromSaveGame"); }
	void RemoveInactivePlayersAndTribes()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "RemoveInactivePlayersAndTribes");
	}
	void DDoSDetected() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "DDoSDetected"); }
	FString* GetSessionTimeString_Implementation(FString* result)
	{
		return NativeCall<FString *, FString *>((DWORD64)this, "AShooterGameMode", "GetSessionTimeString_Implementation",
		                                        result);
	}
	bool IsTribeWar(int TribeID1, int TribeID2)
	{
		return NativeCall<bool, int, int>((DWORD64)this, "AShooterGameMode", "IsTribeWar", TribeID1, TribeID2);
	}
	void UpdateTribeWars() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "UpdateTribeWars"); }
	void AddToTribeLog(int TribeId, FString* NewLog)
	{
		NativeCall<void, int, FString *>((DWORD64)this, "AShooterGameMode", "AddToTribeLog", TribeId, NewLog);
	}
	TArray<APrimalDinoCharacter *>* GetOverlappingDinoCharactersOfTeamAndClass(
		TArray<APrimalDinoCharacter *>* result, FVector* AtLocation, float OverlapRange,
		TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass)
	{
		return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, FVector *, float, TSubclassOf<
			                  APrimalDinoCharacter>, int, bool, bool>((DWORD64)this, "AShooterGameMode",
			                                                          "GetOverlappingDinoCharactersOfTeamAndClass", result,
			                                                          AtLocation, OverlapRange, DinoClass, DinoTeam,
			                                                          bExactClassMatch, bIgnoreClass);
	}
	int CountOverlappingDinoCharactersOfTeamAndClass(FVector* AtLocation, float OverlapRange,
	                                                 TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam,
	                                                 bool bExactClassMatch, bool bIgnoreClass)
	{
		return NativeCall<int, FVector *, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(
			(DWORD64)this, "AShooterGameMode", "CountOverlappingDinoCharactersOfTeamAndClass", AtLocation, OverlapRange,
			DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass);
	}
	int ForceAddPlayerToTribe(AShooterPlayerState* ForPlayerState, FString* TribeName)
	{
		return NativeCall<int, AShooterPlayerState *, FString *>((DWORD64)this, "AShooterGameMode", "ForceAddPlayerToTribe",
		                                                         ForPlayerState, TribeName);
	}
	int ForceCreateTribe(FString* TribeName, int TeamOverride)
	{
		return NativeCall<int, FString *, int>((DWORD64)this, "AShooterGameMode", "ForceCreateTribe", TribeName,
		                                       TeamOverride);
	}
	int GetNumberOfLivePlayersOnTribe(FString* TribeName)
	{
		return NativeCall<int, FString *>((DWORD64)this, "AShooterGameMode", "GetNumberOfLivePlayersOnTribe", TribeName);
	}
	void UpdateTribeAllianceData(FTribeAlliance* TribeAllianceData, TArray<unsigned int>* OldMembersArray, bool bIsAdd)
	{
		NativeCall<void, FTribeAlliance *, TArray<unsigned int> *, bool>((DWORD64)this, "AShooterGameMode",
		                                                                 "UpdateTribeAllianceData", TribeAllianceData,
		                                                                 OldMembersArray, bIsAdd);
	}
	bool AreTribesAllied(int TribeID1, int TribeID2)
	{
		return NativeCall<bool, int, int>((DWORD64)this, "AShooterGameMode", "AreTribesAllied", TribeID1, TribeID2);
	}
	void AddTribeWar(int MyTribeID, int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime,
	                 float WarEndTime, bool bForceApprove)
	{
		NativeCall<void, int, int, int, int, float, float, bool>((DWORD64)this, "AShooterGameMode", "AddTribeWar", MyTribeID,
		                                                         EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime,
		                                                         WarEndTime, bForceApprove);
	}
	void PostAlarmNotificationTribe()
	{
		NativeCall<void>((DWORD64)this, "AShooterGameMode", "PostAlarmNotificationTribe");
	}
	void SpawnedPawnFor(AController* PC, APawn* SpawnedPawn)
	{
		NativeCall<void, AController *, APawn *>((DWORD64)this, "AShooterGameMode", "SpawnedPawnFor", PC, SpawnedPawn);
	}
	void SaveTributePlayerDatas() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "SaveTributePlayerDatas"); }
	void LoadTributePlayerDatas() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "LoadTributePlayerDatas"); }
	void DownloadTransferredPlayer(AShooterPlayerController* NewPlayer)
	{
		NativeCall<void, AShooterPlayerController *>((DWORD64)this, "AShooterGameMode", "DownloadTransferredPlayer",
		                                             NewPlayer);
	}
	void CheckForDupedDinos() { NativeCall<void>((DWORD64)this, "AShooterGameMode", "CheckForDupedDinos"); }
	bool HandleNewPlayer(AShooterPlayerController* NewPlayer, UPrimalPlayerData* PlayerData,
	                     AShooterCharacter* PlayerCharacter, bool bIsFromLogin)
	{
		return NativeCall<bool, AShooterPlayerController *, UPrimalPlayerData *, AShooterCharacter *, bool>(
			(DWORD64)this, "AShooterGameMode", "HandleNewPlayer", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin);
	}
};

struct ACustomGameMode : AShooterGameMode
{
};
