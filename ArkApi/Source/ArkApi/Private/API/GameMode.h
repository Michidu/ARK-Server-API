#pragma once

#include "Base.h"

class UWorld
{
public:
	void SetbIsIdle(bool a0) { *(bool*)GetAddress(this, "UWorld", "bIsIdle") = a0; };
	bool GetbIsIdle() const { return *(bool*)GetAddress(this, "UWorld", "bIsIdle"); };
	TArray<AActor *, FDefaultAllocator> GetNetworkActors() const { return *(TArray<AActor *, FDefaultAllocator>*)GetAddress(this, "UWorld", "NetworkActors"); };
	void SetPlayerNum(int a0) { *(int*)GetAddress(this, "UWorld", "PlayerNum") = a0; };
	int GetPlayerNum() const { return *(int*)GetAddress(this, "UWorld", "PlayerNum"); };
	void SetTimeSeconds(double a0) { *(double*)GetAddress(this, "UWorld", "TimeSeconds") = a0; };
	double GetTimeSeconds() const { return *(double*)GetAddress(this, "UWorld", "TimeSeconds"); };
	void SetLoadedAtTimeSeconds(double a0) { *(double*)GetAddress(this, "UWorld", "LoadedAtTimeSeconds") = a0; };
	double GetLoadedAtTimeSeconds() const { return *(double*)GetAddress(this, "UWorld", "LoadedAtTimeSeconds"); };
	void SetRealTimeSeconds(double a0) { *(double*)GetAddress(this, "UWorld", "RealTimeSeconds") = a0; };
	double GetRealTimeSeconds() const { return *(double*)GetAddress(this, "UWorld", "RealTimeSeconds"); };
	void SetAudioTimeSeconds(double a0) { *(double*)GetAddress(this, "UWorld", "AudioTimeSeconds") = a0; };
	double GetAudioTimeSeconds() const { return *(double*)GetAddress(this, "UWorld", "AudioTimeSeconds"); };
	void SetDeltaTimeSeconds(float a0) { *(float*)GetAddress(this, "UWorld", "DeltaTimeSeconds") = a0; };
	float GetDeltaTimeSeconds() const { return *(float*)GetAddress(this, "UWorld", "DeltaTimeSeconds"); };
	void SetPauseDelay(float a0) { *(float*)GetAddress(this, "UWorld", "PauseDelay") = a0; };
	float GetPauseDelay() const { return *(float*)GetAddress(this, "UWorld", "PauseDelay"); };
	FIntVector GetOriginLocation() const { return *(FIntVector*)GetAddress(this, "UWorld", "OriginLocation"); };
	void SetRequestedOriginLocation(FIntVector a0) { *(FIntVector*)GetAddress(this, "UWorld", "RequestedOriginLocation") = a0; };
	FIntVector GetRequestedOriginLocation() const { return *(FIntVector*)GetAddress(this, "UWorld", "RequestedOriginLocation"); };
	void SetbOriginOffsetThisFrame(bool a0) { *(bool*)GetAddress(this, "UWorld", "bOriginOffsetThisFrame") = a0; };
	bool GetbOriginOffsetThisFrame() const { return *(bool*)GetAddress(this, "UWorld", "bOriginOffsetThisFrame"); };
	void SetCurrentDayTime(FString a0) { *(FString*)GetAddress(this, "UWorld", "CurrentDayTime") = a0; };
	FString GetCurrentDayTime() const { return *(FString*)GetAddress(this, "UWorld", "CurrentDayTime"); };
	ULevel* GetPersistentLevel() const { return *(ULevel**)GetAddress(this, "UWorld", "PersistentLevel"); };
	ULevel* GetCurrentLevel() const { return *(ULevel**)GetAddress(this, "UWorld", "CurrentLevel"); };
	TArray<AWeakObjectPtr<APlayerController>, FDefaultAllocator> GetPlayerControllerList() const { return *(TArray<AWeakObjectPtr<APlayerController>, FDefaultAllocator>*)GetAddress(this, "UWorld", "PlayerControllerList"); };
	TArray<AWeakObjectPtr<AController>, FDefaultAllocator> GetControllerList() const { return *(TArray<AWeakObjectPtr<AController>, FDefaultAllocator>*)GetAddress(this, "UWorld", "ControllerList"); };
	TArray<AWeakObjectPtr<APawn>, FDefaultAllocator> GetPawnList() const { return *(TArray<AWeakObjectPtr<APawn>, FDefaultAllocator>*)GetAddress(this, "UWorld", "PawnList"); };

	// Functions

	APlayerController* GetFirstPlayerController() { return static_cast<APlayerController*(_cdecl*)(DWORD64)>(GetAddress("UWorld", "GetFirstPlayerController"))((DWORD64)this); }
	//ULocalPlayer* GetFirstLocalPlayerFromController() { return static_cast<ULocalPlayer*(_cdecl*)(DWORD64)>(GetAddress("UWorld", "GetFirstLocalPlayerFromController"))((DWORD64)this); }
	float GetDefaultGravityZ() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UWorld", "GetDefaultGravityZ"))((DWORD64)this); }
	FString* GetMapName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("UWorld", "GetMapName"))((DWORD64)this, res); }
	void RemoveController(AController* a1) { static_cast<void(_cdecl*)(DWORD64, AController*)>(GetAddress("UWorld", "RemoveController"))((DWORD64)this, a1); }
	void CleanupActors() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UWorld", "CleanupActors"))((DWORD64)this); }
	bool DestroyActor(AActor* a1, bool a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, AActor*, bool, bool)>(GetAddress("UWorld", "DestroyActor"))((DWORD64)this, a1, a2, a3); }
	void RemoveActor(AActor* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, AActor*, bool)>(GetAddress("UWorld", "RemoveActor"))((DWORD64)this, a1, a2); }
	//AActor* SpawnActor(UClass* a1, const FVector* a2, const FRotator* a3, const FActorSpawnParameters& a4) { return static_cast<AActor*(_cdecl*)(DWORD64, UClass*, const FVector*, const FRotator*, const FActorSpawnParameters&)>(GetAddress("UWorld", "SpawnActor"))((DWORD64)this, a1, a2, a3, a4); }
	bool FindTeleportSpot(AActor* a1, FVector& a2, FRotator a3, const FVector& a4) { return static_cast<bool(_cdecl*)(DWORD64, AActor*, FVector&, FRotator, const FVector&)>(GetAddress("UWorld", "FindTeleportSpot"))((DWORD64)this, a1, a2, a3, a4); }
	int GetActorCount() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("UWorld", "GetActorCount"))((DWORD64)this); }
	int GetNetRelevantActorCount() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("UWorld", "GetNetRelevantActorCount"))((DWORD64)this); }
};

// Level

struct ULevelBase
{
	TTransArray<AActor *> GetActors() const { return *(TTransArray<AActor *>*)GetAddress(this, "ULevelBase", "Actors"); };
};

struct ULevel : ULevelBase
{
};

// Game Mode

struct AGameMode
{
	FName GetMatchState() const { return *(FName*)GetAddress(this, "AGameMode", "MatchState"); };
	void SetOptionsString(FString a0) { *(FString*)GetAddress(this, "AGameMode", "OptionsString") = a0; };
	FString GetOptionsString() const { return *(FString*)GetAddress(this, "AGameMode", "OptionsString"); };
	void SetNumSpectators(int a0) { *(int*)GetAddress(this, "AGameMode", "NumSpectators") = a0; };
	int GetNumSpectators() const { return *(int*)GetAddress(this, "AGameMode", "NumSpectators"); };
	void SetNumPlayers(int a0) { *(int*)GetAddress(this, "AGameMode", "NumPlayers") = a0; };
	int GetNumPlayers() const { return *(int*)GetAddress(this, "AGameMode", "NumPlayers"); };
	void SetNumBots(int a0) { *(int*)GetAddress(this, "AGameMode", "NumBots") = a0; };
	int GetNumBots() const { return *(int*)GetAddress(this, "AGameMode", "NumBots"); };
	void SetMinRespawnDelay(float a0) { *(float*)GetAddress(this, "AGameMode", "MinRespawnDelay") = a0; };
	float GetMinRespawnDelay() const { return *(float*)GetAddress(this, "AGameMode", "MinRespawnDelay"); };
	AGameSession* GetGameSession() const { return *(AGameSession**)GetAddress(this, "AGameMode", "GameSession"); };
	void SetNumTravellingPlayers(int a0) { *(int*)GetAddress(this, "AGameMode", "NumTravellingPlayers") = a0; };
	int GetNumTravellingPlayers() const { return *(int*)GetAddress(this, "AGameMode", "NumTravellingPlayers"); };
	void SetCurrentID(int a0) { *(int*)GetAddress(this, "AGameMode", "CurrentID") = a0; };
	int GetCurrentID() const { return *(int*)GetAddress(this, "AGameMode", "CurrentID"); };
	void SetDefaultPlayerName(FString a0) { *(FString*)GetAddress(this, "AGameMode", "DefaultPlayerName") = a0; };
	FString GetDefaultPlayerName() const { return *(FString*)GetAddress(this, "AGameMode", "DefaultPlayerName"); };
	void SetPlayerStarts(TArray<APlayerStart *, FDefaultAllocator> a0) { *(TArray<APlayerStart *, FDefaultAllocator>*)GetAddress(this, "AGameMode", "PlayerStarts") = a0; };
	TArray<APlayerStart *, FDefaultAllocator> GetPlayerStarts() const { return *(TArray<APlayerStart *, FDefaultAllocator>*)GetAddress(this, "AGameMode", "PlayerStarts"); };
	AGameState* GetGameState() const { return *(AGameState**)GetAddress(this, "AGameMode", "GameState"); };
	void SetInactivePlayerArray(TArray<APlayerState *, FDefaultAllocator> a0) { *(TArray<APlayerState *, FDefaultAllocator>*)GetAddress(this, "AGameMode", "InactivePlayerArray") = a0; };
	TArray<APlayerState *, FDefaultAllocator> GetInactivePlayerArray() const { return *(TArray<APlayerState *, FDefaultAllocator>*)GetAddress(this, "AGameMode", "InactivePlayerArray"); };

	// Functions

	bool ShouldSpawnAtStartSpot_Implementation(AController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AController*)>(GetAddress("AGameMode", "ShouldSpawnAtStartSpot_Implementation"))((DWORD64)this, a1); }
	AActor* ChoosePlayerStart_Implementation(AController* a1) { return static_cast<AActor*(_cdecl*)(DWORD64, AController*)>(GetAddress("AGameMode", "ChoosePlayerStart_Implementation"))((DWORD64)this, a1); }
	bool HasMatchStarted() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "HasMatchStarted"))((DWORD64)this); }
	bool IsMatchInProgress() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "IsMatchInProgress"))((DWORD64)this); }
	bool HasMatchEnded() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "HasMatchEnded"))((DWORD64)this); }
	void StartPlay() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "StartPlay"))((DWORD64)this); }
	void StartMatch() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "StartMatch"))((DWORD64)this); }
	void EndMatch() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "EndMatch"))((DWORD64)this); }
	void StartToLeaveMap() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "StartToLeaveMap"))((DWORD64)this); }
	void RestartGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "RestartGame"))((DWORD64)this); }
	bool IsFirstPlayerSpawn(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "IsFirstPlayerSpawn"))((DWORD64)this, a1); }
	void ReturnToMainMenuHost() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "ReturnToMainMenuHost"))((DWORD64)this); }
	void AbortMatch() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "AbortMatch"))((DWORD64)this); }
	void DDoSDetected() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "DDoSDetected"))((DWORD64)this); }
	void SetMatchState(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("AGameMode", "SetMatchState"))((DWORD64)this, a1); }
	void HandleMatchIsWaitingToStart() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "HandleMatchIsWaitingToStart"))((DWORD64)this); }
	bool ReadyToStartMatch() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "ReadyToStartMatch"))((DWORD64)this); }
	void HandleMatchHasStarted() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "HandleMatchHasStarted"))((DWORD64)this); }
	bool ReadyToEndMatch() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "ReadyToEndMatch"))((DWORD64)this); }
	void HandleMatchHasEnded() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "HandleMatchHasEnded"))((DWORD64)this); }
	void HandleLeavingMap() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "HandleLeavingMap"))((DWORD64)this); }
	void HandleMatchAborted() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "HandleMatchAborted"))((DWORD64)this); }
	void BeginUnloadingWorld() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "BeginUnloadingWorld"))((DWORD64)this); }
	void SetBandwidthLimit(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AGameMode", "SetBandwidthLimit"))((DWORD64)this, a1); }
	bool ShouldReset(AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, AActor*)>(GetAddress("AGameMode", "ShouldReset"))((DWORD64)this, a1); }
	void ResetLevel() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "ResetLevel"))((DWORD64)this); }
	bool ShouldStartInCinematicMode(bool& a1, bool& a2, bool& a3, bool& a4) { return static_cast<bool(_cdecl*)(DWORD64, bool&, bool&, bool&, bool&)>(GetAddress("AGameMode", "ShouldStartInCinematicMode"))((DWORD64)this, a1, a2, a3, a4); }
	void RemovePlayerControllerFromPlayerCount(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "RemovePlayerControllerFromPlayerCount"))((DWORD64)this, a1); }
	int GetNumPlayers() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "GetNumPlayers"))((DWORD64)this); }
	void ClearPause() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "ClearPause"))((DWORD64)this); }
	void ForceClearUnpauseDelegates(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("AGameMode", "ForceClearUnpauseDelegates"))((DWORD64)this, a1); }
	bool GrabOption(FString& a1, FString& a2) { return static_cast<bool(_cdecl*)(DWORD64, FString&, FString&)>(GetAddress("AGameMode", "GrabOption"))((DWORD64)this, a1, a2); }
	void GetKeyValue(const FString& a1, FString& a2, FString& a3) { static_cast<void(_cdecl*)(DWORD64, const FString&, FString&, FString&)>(GetAddress("AGameMode", "GetKeyValue"))((DWORD64)this, a1, a2, a3); }
	bool HasOption(const FString& a1, const FString& a2) { return static_cast<bool(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("AGameMode", "HasOption"))((DWORD64)this, a1, a2); }
	void NotifyPendingConnectionLost() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "NotifyPendingConnectionLost"))((DWORD64)this); }
	bool GetTravelType() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "GetTravelType"))((DWORD64)this); }
	void ProcessServerTravel(const FString& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, bool)>(GetAddress("AGameMode", "ProcessServerTravel"))((DWORD64)this, a1, a2); }
	APlayerController* ProcessClientTravel(FString& a1, FGuid a2, bool a3, bool a4) { return static_cast<APlayerController*(_cdecl*)(DWORD64, FString&, FGuid, bool, bool)>(GetAddress("AGameMode", "ProcessClientTravel"))((DWORD64)this, a1, a2, a3, a4); }
	APlayerController* SpawnPlayerController(const FVector& a1, const FRotator& a2) { return static_cast<APlayerController*(_cdecl*)(DWORD64, const FVector&, const FRotator&)>(GetAddress("AGameMode", "SpawnPlayerController"))((DWORD64)this, a1, a2); }
	bool MustSpectate(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "MustSpectate"))((DWORD64)this, a1); }
	void InitStartSpot(AActor* a1, AController* a2) { static_cast<void(_cdecl*)(DWORD64, AActor*, AController*)>(GetAddress("AGameMode", "InitStartSpot"))((DWORD64)this, a1, a2); }
	void AddPlayerStart(APlayerStart* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerStart*)>(GetAddress("AGameMode", "AddPlayerStart"))((DWORD64)this, a1); }
	void RemovePlayerStart(APlayerStart* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerStart*)>(GetAddress("AGameMode", "RemovePlayerStart"))((DWORD64)this, a1); }
	APawn* SpawnDefaultPawnFor(AController* a1, AActor* a2) { return static_cast<APawn*(_cdecl*)(DWORD64, AController*, AActor*)>(GetAddress("AGameMode", "SpawnDefaultPawnFor"))((DWORD64)this, a1, a2); }
	void ReplicateStreamingStatus(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "ReplicateStreamingStatus"))((DWORD64)this, a1); }
	void GenericPlayerInitialization(AController* a1) { static_cast<void(_cdecl*)(DWORD64, AController*)>(GetAddress("AGameMode", "GenericPlayerInitialization"))((DWORD64)this, a1); }
	void StartNewPlayer(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "StartNewPlayer"))((DWORD64)this, a1); }
	void Logout(AController* a1) { static_cast<void(_cdecl*)(DWORD64, AController*)>(GetAddress("AGameMode", "Logout"))((DWORD64)this, a1); }
	void SetPlayerDefaults(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AGameMode", "SetPlayerDefaults"))((DWORD64)this, a1); }
	bool CanSpectate(APlayerController* a1, APlayerState* a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, APlayerState*)>(GetAddress("AGameMode", "CanSpectate"))((DWORD64)this, a1, a2); }
	void ChangeName(AController* a1, const FString& a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, AController*, const FString&, bool)>(GetAddress("AGameMode", "ChangeName"))((DWORD64)this, a1, a2, a3); }
	void SendPlayer(APlayerController* a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, const FString&)>(GetAddress("AGameMode", "SendPlayer"))((DWORD64)this, a1, a2); }
	void Broadcast(AActor* a1, const FString& a2, FName a3) { static_cast<void(_cdecl*)(DWORD64, AActor*, const FString&, FName)>(GetAddress("AGameMode", "Broadcast"))((DWORD64)this, a1, a2, a3); }
	AActor* FindPlayerStart(AController* a1, const FString& a2) { return static_cast<AActor*(_cdecl*)(DWORD64, AController*, const FString&)>(GetAddress("AGameMode", "FindPlayerStart"))((DWORD64)this, a1, a2); }
	AActor* ChoosePlayerStart(AController* a1) { return static_cast<AActor*(_cdecl*)(DWORD64, AController*)>(GetAddress("AGameMode", "ChoosePlayerStart"))((DWORD64)this, a1); }
	bool PlayerCanRestart(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "PlayerCanRestart"))((DWORD64)this, a1); }
	void UpdateGameplayMuteList(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "UpdateGameplayMuteList"))((DWORD64)this, a1); }
	bool AllowCheats(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "AllowCheats"))((DWORD64)this, a1); }
	bool AllowPausing(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "AllowPausing"))((DWORD64)this, a1); }
	void AddInactivePlayer(APlayerState* a1, APlayerController* a2) { static_cast<void(_cdecl*)(DWORD64, APlayerState*, APlayerController*)>(GetAddress("AGameMode", "AddInactivePlayer"))((DWORD64)this, a1, a2); }
	bool FindInactivePlayer(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "FindInactivePlayer"))((DWORD64)this, a1); }
	void OverridePlayerState(APlayerController* a1, APlayerState* a2) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, APlayerState*)>(GetAddress("AGameMode", "OverridePlayerState"))((DWORD64)this, a1, a2); }
	void GetSeamlessTravelActorList(bool a1, TArray<AActor *, FDefaultAllocator>& a2) { static_cast<void(_cdecl*)(DWORD64, bool, TArray<AActor *, FDefaultAllocator>&)>(GetAddress("AGameMode", "GetSeamlessTravelActorList"))((DWORD64)this, a1, a2); }
	void SetSeamlessTravelViewTarget(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AGameMode", "SetSeamlessTravelViewTarget"))((DWORD64)this, a1); }
	void MatineeCancelled() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "MatineeCancelled"))((DWORD64)this); }
	void RestartPlayer(AController* a1) { static_cast<void(_cdecl*)(DWORD64, AController*)>(GetAddress("AGameMode", "RestartPlayer"))((DWORD64)this, a1); }
	void DefaultTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "DefaultTimer"))((DWORD64)this); }
	bool GetIsMapActor() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AGameMode", "GetIsMapActor"))((DWORD64)this); }
	void SpawnedPawnFor(AController* a1, APawn* a2) { static_cast<void(_cdecl*)(DWORD64, AController*, APawn*)>(GetAddress("AGameMode", "SpawnedPawnFor"))((DWORD64)this, a1, a2); }
	bool TeleportTo(const FVector& a1, const FRotator& a2, bool a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, const FRotator&, bool, bool)>(GetAddress("AGameMode", "TeleportTo"))((DWORD64)this, a1, a2, a3, a4); }
};

struct AShooterGameMode : AGameMode
{
	void SetLastRepopulationIndexToCheck(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "LastRepopulationIndexToCheck") = a0; };
	int GetLastRepopulationIndexToCheck() const { return *(int*)GetAddress(this, "AShooterGameMode", "LastRepopulationIndexToCheck"); };
	TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator> GetTribesIds() const { return *(TSet<unsigned int, DefaultKeyFuncs<unsigned int, 0>, FDefaultSetAllocator>*)GetAddress(this, "AShooterGameMode", "TribesIds"); };
	TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, unsigned __int64, 0>> GetPlayersIds() const { return *(TMap<int, unsigned __int64, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, unsigned __int64, 0>>*)GetAddress(this, "AShooterGameMode", "PlayersIds"); };
	FString GetLaunchOptions() const { return *(FString*)GetAddress(this, "AShooterGameMode", "LaunchOptions"); };
	TArray<FTribeData, FDefaultAllocator> GetTribesData() const { return *(TArray<FTribeData, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "TribesData"); };
	void SetbAutoCreateNewPlayerData(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAutoCreateNewPlayerData") = a0; };
	bool GetbAutoCreateNewPlayerData() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAutoCreateNewPlayerData"); };
	void SetbIsRestarting(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bIsRestarting") = a0; };
	bool GetbIsRestarting() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bIsRestarting"); };
	void SetbProximityVoiceChat(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bProximityVoiceChat") = a0; };
	bool GetbProximityVoiceChat() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bProximityVoiceChat"); };
	void SetbProximityChat(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bProximityChat") = a0; };
	bool GetbProximityChat() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bProximityChat"); };
	void SetbAutoRestoreBackups(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAutoRestoreBackups") = a0; };
	bool GetbAutoRestoreBackups() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAutoRestoreBackups"); };
	void SetDifficultyValue(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DifficultyValue") = a0; };
	float GetDifficultyValue() const { return *(float*)GetAddress(this, "AShooterGameMode", "DifficultyValue"); };
	void SetDifficultyValueMin(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DifficultyValueMin") = a0; };
	float GetDifficultyValueMin() const { return *(float*)GetAddress(this, "AShooterGameMode", "DifficultyValueMin"); };
	void SetDifficultyValueMax(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DifficultyValueMax") = a0; };
	float GetDifficultyValueMax() const { return *(float*)GetAddress(this, "AShooterGameMode", "DifficultyValueMax"); };
	void SetProximityRadius(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "ProximityRadius") = a0; };
	float GetProximityRadius() const { return *(float*)GetAddress(this, "AShooterGameMode", "ProximityRadius"); };
	void SetProximityRadiusUnconsiousScale(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "ProximityRadiusUnconsiousScale") = a0; };
	float GetProximityRadiusUnconsiousScale() const { return *(float*)GetAddress(this, "AShooterGameMode", "ProximityRadiusUnconsiousScale"); };
	void SetbIsOfficialServer(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bIsOfficialServer") = a0; };
	bool GetbIsOfficialServer() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bIsOfficialServer"); };
	void SetbServerAllowArkDownload(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerAllowArkDownload") = a0; };
	bool GetbServerAllowArkDownload() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerAllowArkDownload"); };
	void SetbServerAllowThirdPersonPlayer(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerAllowThirdPersonPlayer") = a0; };
	bool GetbServerAllowThirdPersonPlayer() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerAllowThirdPersonPlayer"); };
	void SetbUseExclusiveList(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bUseExclusiveList") = a0; };
	bool GetbUseExclusiveList() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bUseExclusiveList"); };
	void SetbAlwaysNotifyPlayerLeft(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAlwaysNotifyPlayerLeft") = a0; };
	bool GetbAlwaysNotifyPlayerLeft() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAlwaysNotifyPlayerLeft"); };
	void SetbAlwaysNotifyPlayerJoined(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAlwaysNotifyPlayerJoined") = a0; };
	bool GetbAlwaysNotifyPlayerJoined() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAlwaysNotifyPlayerJoined"); };
	void SetbServerHardcore(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerHardcore") = a0; };
	bool GetbServerHardcore() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerHardcore"); };
	void SetbServerPVE(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerPVE") = a0; };
	bool GetbServerPVE() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerPVE"); };
	void SetbServerCrosshair(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerCrosshair") = a0; };
	bool GetbServerCrosshair() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerCrosshair"); };
	void SetbServerForceNoHUD(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerForceNoHUD") = a0; };
	bool GetbServerForceNoHUD() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerForceNoHUD"); };
	void SetbMapPlayerLocation(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bMapPlayerLocation") = a0; };
	bool GetbMapPlayerLocation() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bMapPlayerLocation"); };
	void SetbAllowFlyerCarryPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowFlyerCarryPvE") = a0; };
	bool GetbAllowFlyerCarryPvE() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowFlyerCarryPvE"); };
	void SetbDisableStructureDecayPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableStructureDecayPvE") = a0; };
	bool GetbDisableStructureDecayPvE() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableStructureDecayPvE"); };
	void SetbDisableDinoDecayPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableDinoDecayPvE") = a0; };
	bool GetbDisableDinoDecayPvE() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableDinoDecayPvE"); };
	void SetbEnablePvPGamma(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bEnablePvPGamma") = a0; };
	bool GetbEnablePvPGamma() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bEnablePvPGamma"); };
	void SetbDisablePvEGamma(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisablePvEGamma") = a0; };
	bool GetbDisablePvEGamma() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisablePvEGamma"); };
	void SetbClampResourceHarvestDamage(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bClampResourceHarvestDamage") = a0; };
	bool GetbClampResourceHarvestDamage() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bClampResourceHarvestDamage"); };
	void SetbPreventStructurePainting(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventStructurePainting") = a0; };
	bool GetbPreventStructurePainting() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventStructurePainting"); };
	void SetbAllowCaveBuildingPvE(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowCaveBuildingPvE") = a0; };
	bool GetbAllowCaveBuildingPvE() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowCaveBuildingPvE"); };
	void SetbAdminLogging(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAdminLogging") = a0; };
	bool GetbAdminLogging() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAdminLogging"); };
	void SetbPvPStructureDecay(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPvPStructureDecay") = a0; };
	bool GetbPvPStructureDecay() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPvPStructureDecay"); };
	void SetbAutoDestroyStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAutoDestroyStructures") = a0; };
	bool GetbAutoDestroyStructures() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAutoDestroyStructures"); };
	void SetbForceAllStructureLocking(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bForceAllStructureLocking") = a0; };
	bool GetbForceAllStructureLocking() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bForceAllStructureLocking"); };
	void SetbAllowDeprecatedStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowDeprecatedStructures") = a0; };
	bool GetbAllowDeprecatedStructures() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowDeprecatedStructures"); };
	void SetbPreventTribeAlliances(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventTribeAlliances") = a0; };
	bool GetbPreventTribeAlliances() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventTribeAlliances"); };
	void SetbAllowHitMarkers(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowHitMarkers") = a0; };
	bool GetbAllowHitMarkers() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowHitMarkers"); };
	void SetbOnlyAutoDestroyCoreStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bOnlyAutoDestroyCoreStructures") = a0; };
	bool GetbOnlyAutoDestroyCoreStructures() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bOnlyAutoDestroyCoreStructures"); };
	void SetbPreventMateBoost(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventMateBoost") = a0; };
	bool GetbPreventMateBoost() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventMateBoost"); };
	void SetbTribeLogDestroyedEnemyStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bTribeLogDestroyedEnemyStructures") = a0; };
	bool GetbTribeLogDestroyedEnemyStructures() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bTribeLogDestroyedEnemyStructures"); };
	void SetbPvEAllowStructuresAtSupplyDrops(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPvEAllowStructuresAtSupplyDrops") = a0; };
	bool GetbPvEAllowStructuresAtSupplyDrops() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPvEAllowStructuresAtSupplyDrops"); };
	void SetTheMaxStructuresInRange(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "TheMaxStructuresInRange") = a0; };
	int GetTheMaxStructuresInRange() const { return *(int*)GetAddress(this, "AShooterGameMode", "TheMaxStructuresInRange"); };
	void SetRCONPort(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "RCONPort") = a0; };
	int GetRCONPort() const { return *(int*)GetAddress(this, "AShooterGameMode", "RCONPort"); };
	void SetDayCycleSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DayCycleSpeedScale") = a0; };
	float GetDayCycleSpeedScale() const { return *(float*)GetAddress(this, "AShooterGameMode", "DayCycleSpeedScale"); };
	void SetNightTimeSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "NightTimeSpeedScale") = a0; };
	float GetNightTimeSpeedScale() const { return *(float*)GetAddress(this, "AShooterGameMode", "NightTimeSpeedScale"); };
	void SetDayTimeSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DayTimeSpeedScale") = a0; };
	float GetDayTimeSpeedScale() const { return *(float*)GetAddress(this, "AShooterGameMode", "DayTimeSpeedScale"); };
	void SetPvEStructureDecayPeriodMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PvEStructureDecayPeriodMultiplier") = a0; };
	float GetPvEStructureDecayPeriodMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PvEStructureDecayPeriodMultiplier"); };
	void SetStructurePreventResourceRadiusMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "StructurePreventResourceRadiusMultiplier") = a0; };
	float GetStructurePreventResourceRadiusMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "StructurePreventResourceRadiusMultiplier"); };
	void SetPvEDinoDecayPeriodMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PvEDinoDecayPeriodMultiplier") = a0; };
	float GetPvEDinoDecayPeriodMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PvEDinoDecayPeriodMultiplier"); };
	void SetResourcesRespawnPeriodMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "ResourcesRespawnPeriodMultiplier") = a0; };
	float GetResourcesRespawnPeriodMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "ResourcesRespawnPeriodMultiplier"); };
	void SetMaxTamedDinos(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "MaxTamedDinos") = a0; };
	float GetMaxTamedDinos() const { return *(float*)GetAddress(this, "AShooterGameMode", "MaxTamedDinos"); };
	void SetListenServerTetherDistanceMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "ListenServerTetherDistanceMultiplier") = a0; };
	float GetListenServerTetherDistanceMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "ListenServerTetherDistanceMultiplier"); };
	void SetPerPlatformMaxStructuresMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PerPlatformMaxStructuresMultiplier") = a0; };
	float GetPerPlatformMaxStructuresMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PerPlatformMaxStructuresMultiplier"); };
	void SetAutoDestroyOldStructuresMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "AutoDestroyOldStructuresMultiplier") = a0; };
	float GetAutoDestroyOldStructuresMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "AutoDestroyOldStructuresMultiplier"); };
	void SetRCONServerGameLogBuffer(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "RCONServerGameLogBuffer") = a0; };
	float GetRCONServerGameLogBuffer() const { return *(float*)GetAddress(this, "AShooterGameMode", "RCONServerGameLogBuffer"); };
	void SetKickIdlePlayersPeriod(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "KickIdlePlayersPeriod") = a0; };
	float GetKickIdlePlayersPeriod() const { return *(float*)GetAddress(this, "AShooterGameMode", "KickIdlePlayersPeriod"); };
	void SetMateBoostEffectMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "MateBoostEffectMultiplier") = a0; };
	float GetMateBoostEffectMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "MateBoostEffectMultiplier"); };
	void SetAutoSavePeriodMinutes(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "AutoSavePeriodMinutes") = a0; };
	float GetAutoSavePeriodMinutes() const { return *(float*)GetAddress(this, "AShooterGameMode", "AutoSavePeriodMinutes"); };
	void SetXPMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "XPMultiplier") = a0; };
	float GetXPMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "XPMultiplier"); };
	void SetKillXPMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "KillXPMultiplier") = a0; };
	float GetKillXPMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "KillXPMultiplier"); };
	void SetHarvestXPMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "HarvestXPMultiplier") = a0; };
	float GetHarvestXPMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "HarvestXPMultiplier"); };
	void SetCraftXPMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "CraftXPMultiplier") = a0; };
	float GetCraftXPMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "CraftXPMultiplier"); };
	void SetGenericXPMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "GenericXPMultiplier") = a0; };
	float GetGenericXPMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "GenericXPMultiplier"); };
	void SetSpecialXPMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "SpecialXPMultiplier") = a0; };
	float GetSpecialXPMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "SpecialXPMultiplier"); };
	void SetRandomAutoSaveSpread(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "RandomAutoSaveSpread") = a0; };
	float GetRandomAutoSaveSpread() const { return *(float*)GetAddress(this, "AShooterGameMode", "RandomAutoSaveSpread"); };
	void SetSteamAPIKey(FString a0) { *(FString*)GetAddress(this, "AShooterGameMode", "SteamAPIKey") = a0; };
	FString GetSteamAPIKey() const { return *(FString*)GetAddress(this, "AShooterGameMode", "SteamAPIKey"); };
	void SetLastServerNotificationMessage(FString a0) { *(FString*)GetAddress(this, "AShooterGameMode", "LastServerNotificationMessage") = a0; };
	FString GetLastServerNotificationMessage() const { return *(FString*)GetAddress(this, "AShooterGameMode", "LastServerNotificationMessage"); };
	void SetLastServerNotificationRecievedAt(double a0) { *(double*)GetAddress(this, "AShooterGameMode", "LastServerNotificationRecievedAt") = a0; };
	double GetLastServerNotificationRecievedAt() const { return *(double*)GetAddress(this, "AShooterGameMode", "LastServerNotificationRecievedAt"); };
	void SetLastExecSaveTime(double a0) { *(double*)GetAddress(this, "AShooterGameMode", "LastExecSaveTime") = a0; };
	double GetLastExecSaveTime() const { return *(double*)GetAddress(this, "AShooterGameMode", "LastExecSaveTime"); };
	void SetLastTimeSavedWorld(double a0) { *(double*)GetAddress(this, "AShooterGameMode", "LastTimeSavedWorld") = a0; };
	double GetLastTimeSavedWorld() const { return *(double*)GetAddress(this, "AShooterGameMode", "LastTimeSavedWorld"); };
	void SetLastClaimedGameCode(FString a0) { *(FString*)GetAddress(this, "AShooterGameMode", "LastClaimedGameCode") = a0; };
	FString GetLastClaimedGameCode() const { return *(FString*)GetAddress(this, "AShooterGameMode", "LastClaimedGameCode"); };
	TArray<FString, FDefaultAllocator> GetArkGameCodes() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ArkGameCodes"); };
	void SetbIsCurrentlyRequestingKey(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bIsCurrentlyRequestingKey") = a0; };
	bool GetbIsCurrentlyRequestingKey() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bIsCurrentlyRequestingKey"); };
	void SetSaveDirectoryName(FString a0) { *(FString*)GetAddress(this, "AShooterGameMode", "SaveDirectoryName") = a0; };
	FString GetSaveDirectoryName() const { return *(FString*)GetAddress(this, "AShooterGameMode", "SaveDirectoryName"); };
	TArray<UPrimalPlayerData *, FDefaultAllocator> GetPlayerDatas() const { return *(TArray<UPrimalPlayerData *, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "PlayerDatas"); };
	void SetbPopulatingSpawnZones(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPopulatingSpawnZones") = a0; };
	bool GetbPopulatingSpawnZones() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPopulatingSpawnZones"); };
	void SetbRestartedAPlayer(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bRestartedAPlayer") = a0; };
	bool GetbRestartedAPlayer() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bRestartedAPlayer"); };
	void SetbForceRespawnDinos(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bForceRespawnDinos") = a0; };
	bool GetbForceRespawnDinos() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bForceRespawnDinos"); };
	void SetbFirstSaveWorld(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bFirstSaveWorld") = a0; };
	bool GetbFirstSaveWorld() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bFirstSaveWorld"); };
	void SetbAllowRaidDinoFeeding(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowRaidDinoFeeding") = a0; };
	bool GetbAllowRaidDinoFeeding() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowRaidDinoFeeding"); };
	void SetLastBackupTime(FDateTime a0) { *(FDateTime*)GetAddress(this, "AShooterGameMode", "LastBackupTime") = a0; };
	FDateTime GetLastBackupTime() const { return *(FDateTime*)GetAddress(this, "AShooterGameMode", "LastBackupTime"); };
	void SetLastSaveWorldTime(FDateTime a0) { *(FDateTime*)GetAddress(this, "AShooterGameMode", "LastSaveWorldTime") = a0; };
	FDateTime GetLastSaveWorldTime() const { return *(FDateTime*)GetAddress(this, "AShooterGameMode", "LastSaveWorldTime"); };
	void SetTamedDinoDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "TamedDinoDamageMultiplier") = a0; };
	float GetTamedDinoDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "TamedDinoDamageMultiplier"); };
	void SetDinoDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoDamageMultiplier") = a0; };
	float GetDinoDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoDamageMultiplier"); };
	void SetPlayerDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PlayerDamageMultiplier") = a0; };
	float GetPlayerDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PlayerDamageMultiplier"); };
	void SetStructureDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "StructureDamageMultiplier") = a0; };
	float GetStructureDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "StructureDamageMultiplier"); };
	void SetPlayerResistanceMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PlayerResistanceMultiplier") = a0; };
	float GetPlayerResistanceMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PlayerResistanceMultiplier"); };
	void SetDinoResistanceMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoResistanceMultiplier") = a0; };
	float GetDinoResistanceMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoResistanceMultiplier"); };
	void SetTamedDinoResistanceMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "TamedDinoResistanceMultiplier") = a0; };
	float GetTamedDinoResistanceMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "TamedDinoResistanceMultiplier"); };
	void SetStructureResistanceMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "StructureResistanceMultiplier") = a0; };
	float GetStructureResistanceMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "StructureResistanceMultiplier"); };
	void SetbJoinInProgressGamesAsSpectator(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bJoinInProgressGamesAsSpectator") = a0; };
	bool GetbJoinInProgressGamesAsSpectator() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bJoinInProgressGamesAsSpectator"); };
	void SetTamingSpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "TamingSpeedMultiplier") = a0; };
	float GetTamingSpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "TamingSpeedMultiplier"); };
	void SetHarvestAmountMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "HarvestAmountMultiplier") = a0; };
	float GetHarvestAmountMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "HarvestAmountMultiplier"); };
	void SetHarvestHealthMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "HarvestHealthMultiplier") = a0; };
	float GetHarvestHealthMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "HarvestHealthMultiplier"); };
	void SetPlayerCharacterWaterDrainMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterWaterDrainMultiplier") = a0; };
	float GetPlayerCharacterWaterDrainMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterWaterDrainMultiplier"); };
	void SetPlayerCharacterFoodDrainMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterFoodDrainMultiplier") = a0; };
	float GetPlayerCharacterFoodDrainMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterFoodDrainMultiplier"); };
	void SetDinoCharacterFoodDrainMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoCharacterFoodDrainMultiplier") = a0; };
	float GetDinoCharacterFoodDrainMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoCharacterFoodDrainMultiplier"); };
	void SetRaidDinoCharacterFoodDrainMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "RaidDinoCharacterFoodDrainMultiplier") = a0; };
	float GetRaidDinoCharacterFoodDrainMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "RaidDinoCharacterFoodDrainMultiplier"); };
	void SetPlayerCharacterStaminaDrainMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterStaminaDrainMultiplier") = a0; };
	float GetPlayerCharacterStaminaDrainMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterStaminaDrainMultiplier"); };
	void SetDinoCharacterStaminaDrainMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoCharacterStaminaDrainMultiplier") = a0; };
	float GetDinoCharacterStaminaDrainMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoCharacterStaminaDrainMultiplier"); };
	void SetPlayerCharacterHealthRecoveryMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterHealthRecoveryMultiplier") = a0; };
	float GetPlayerCharacterHealthRecoveryMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PlayerCharacterHealthRecoveryMultiplier"); };
	void SetDinoCharacterHealthRecoveryMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoCharacterHealthRecoveryMultiplier") = a0; };
	float GetDinoCharacterHealthRecoveryMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoCharacterHealthRecoveryMultiplier"); };
	void SetCarnivoreNaturalTargetingRangeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "CarnivoreNaturalTargetingRangeMultiplier") = a0; };
	float GetCarnivoreNaturalTargetingRangeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "CarnivoreNaturalTargetingRangeMultiplier"); };
	void SetCarnivorePlayerAggroMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "CarnivorePlayerAggroMultiplier") = a0; };
	float GetCarnivorePlayerAggroMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "CarnivorePlayerAggroMultiplier"); };
	void SetHerbivoreNaturalTargetingRangeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "HerbivoreNaturalTargetingRangeMultiplier") = a0; };
	float GetHerbivoreNaturalTargetingRangeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "HerbivoreNaturalTargetingRangeMultiplier"); };
	void SetHerbivorePlayerAggroMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "HerbivorePlayerAggroMultiplier") = a0; };
	float GetHerbivorePlayerAggroMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "HerbivorePlayerAggroMultiplier"); };
	void SetAIForceTargetPlayers(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "AIForceTargetPlayers") = a0; };
	bool GetAIForceTargetPlayers() const { return *(bool*)GetAddress(this, "AShooterGameMode", "AIForceTargetPlayers"); };
	void SetAIForceOverlapCheck(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "AIForceOverlapCheck") = a0; };
	bool GetAIForceOverlapCheck() const { return *(bool*)GetAddress(this, "AShooterGameMode", "AIForceOverlapCheck"); };
	void SetDinoCountMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoCountMultiplier") = a0; };
	float GetDinoCountMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoCountMultiplier"); };
	void SetbDisableSaveLoad(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableSaveLoad") = a0; };
	bool GetbDisableSaveLoad() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableSaveLoad"); };
	void SetbDisableXP(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableXP") = a0; };
	bool GetbDisableXP() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableXP"); };
	void SetbDisableDynamicMusic(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableDynamicMusic") = a0; };
	bool GetbDisableDynamicMusic() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableDynamicMusic"); };
	TArray<FPlayerDeathReason, FDefaultAllocator> GetPlayerDeathReasons() const { return *(TArray<FPlayerDeathReason, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "PlayerDeathReasons"); };

	/*void SetLevelExperienceRampOverrides(TArray<FLevelExperienceRamp, FDefaultAllocator> a0) { *(TArray<FLevelExperienceRamp, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "LevelExperienceRampOverrides") = a0; };
	TArray<FLevelExperienceRamp, FDefaultAllocator> GetLevelExperienceRampOverrides() const { return *(TArray<FLevelExperienceRamp, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "LevelExperienceRampOverrides"); };
	void SetOverridePlayerLevelEngramPoints(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverridePlayerLevelEngramPoints") = a0; };
	TArray<int, FDefaultAllocator> GetOverridePlayerLevelEngramPoints() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverridePlayerLevelEngramPoints"); };
	void SetExcludeItemIndices(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ExcludeItemIndices") = a0; };
	TArray<int, FDefaultAllocator> GetExcludeItemIndices() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ExcludeItemIndices"); };
	void SetOverrideEngramEntries(TArray<FEngramEntryOverride, FDefaultAllocator> a0) { *(TArray<FEngramEntryOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverrideEngramEntries") = a0; };
	TArray<FEngramEntryOverride, FDefaultAllocator> GetOverrideEngramEntries() const { return *(TArray<FEngramEntryOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverrideEngramEntries"); };
	void SetOverrideNamedEngramEntries(TArray<FEngramEntryOverride, FDefaultAllocator> a0) { *(TArray<FEngramEntryOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverrideNamedEngramEntries") = a0; };
	TArray<FEngramEntryOverride, FDefaultAllocator> GetOverrideNamedEngramEntries() const { return *(TArray<FEngramEntryOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverrideNamedEngramEntries"); };
	void SetPreventDinoTameClassNames(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "PreventDinoTameClassNames") = a0; };
	TArray<FString, FDefaultAllocator> GetPreventDinoTameClassNames() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "PreventDinoTameClassNames"); };
	void SetDinoSpawnWeightMultipliers(TArray<FDinoSpawnWeightMultiplier, FDefaultAllocator> a0) { *(TArray<FDinoSpawnWeightMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "DinoSpawnWeightMultipliers") = a0; };
	TArray<FDinoSpawnWeightMultiplier, FDefaultAllocator> GetDinoSpawnWeightMultipliers() const { return *(TArray<FDinoSpawnWeightMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "DinoSpawnWeightMultipliers"); };
	void SetDinoClassResistanceMultipliers(TArray<FClassMultiplier, FDefaultAllocator> a0) { *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "DinoClassResistanceMultipliers") = a0; };
	TArray<FClassMultiplier, FDefaultAllocator> GetDinoClassResistanceMultipliers() const { return *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "DinoClassResistanceMultipliers"); };
	void SetTamedDinoClassResistanceMultipliers(TArray<FClassMultiplier, FDefaultAllocator> a0) { *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "TamedDinoClassResistanceMultipliers") = a0; };
	TArray<FClassMultiplier, FDefaultAllocator> GetTamedDinoClassResistanceMultipliers() const { return *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "TamedDinoClassResistanceMultipliers"); };
	void SetDinoClassDamageMultipliers(TArray<FClassMultiplier, FDefaultAllocator> a0) { *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "DinoClassDamageMultipliers") = a0; };
	TArray<FClassMultiplier, FDefaultAllocator> GetDinoClassDamageMultipliers() const { return *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "DinoClassDamageMultipliers"); };
	void SetTamedDinoClassDamageMultipliers(TArray<FClassMultiplier, FDefaultAllocator> a0) { *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "TamedDinoClassDamageMultipliers") = a0; };
	TArray<FClassMultiplier, FDefaultAllocator> GetTamedDinoClassDamageMultipliers() const { return *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "TamedDinoClassDamageMultipliers"); };
	void SetHarvestResourceItemAmountClassMultipliers(TArray<FClassMultiplier, FDefaultAllocator> a0) { *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "HarvestResourceItemAmountClassMultipliers") = a0; };
	TArray<FClassMultiplier, FDefaultAllocator> GetHarvestResourceItemAmountClassMultipliers() const { return *(TArray<FClassMultiplier, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "HarvestResourceItemAmountClassMultipliers"); };
	void SetNPCReplacements(TArray<FClassNameReplacement, FDefaultAllocator> a0) { *(TArray<FClassNameReplacement, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "NPCReplacements") = a0; };
	TArray<FClassNameReplacement, FDefaultAllocator> GetNPCReplacements() const { return *(TArray<FClassNameReplacement, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "NPCReplacements"); };*/
	void SetPvPZoneStructureDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PvPZoneStructureDamageMultiplier") = a0; };
	float GetPvPZoneStructureDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PvPZoneStructureDamageMultiplier"); };
	void SetbOnlyAllowSpecifiedEngrams(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bOnlyAllowSpecifiedEngrams") = a0; };
	bool GetbOnlyAllowSpecifiedEngrams() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bOnlyAllowSpecifiedEngrams"); };
	void SetOverrideMaxExperiencePointsPlayer(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "OverrideMaxExperiencePointsPlayer") = a0; };
	int GetOverrideMaxExperiencePointsPlayer() const { return *(int*)GetAddress(this, "AShooterGameMode", "OverrideMaxExperiencePointsPlayer"); };
	void SetOverrideMaxExperiencePointsDino(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "OverrideMaxExperiencePointsDino") = a0; };
	int GetOverrideMaxExperiencePointsDino() const { return *(int*)GetAddress(this, "AShooterGameMode", "OverrideMaxExperiencePointsDino"); };
	void SetGlobalSpoilingTimeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "GlobalSpoilingTimeMultiplier") = a0; };
	float GetGlobalSpoilingTimeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "GlobalSpoilingTimeMultiplier"); };
	void SetGlobalItemDecompositionTimeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "GlobalItemDecompositionTimeMultiplier") = a0; };
	float GetGlobalItemDecompositionTimeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "GlobalItemDecompositionTimeMultiplier"); };
	void SetGlobalCorpseDecompositionTimeMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "GlobalCorpseDecompositionTimeMultiplier") = a0; };
	float GetGlobalCorpseDecompositionTimeMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "GlobalCorpseDecompositionTimeMultiplier"); };
	void SetMaxFallSpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "MaxFallSpeedMultiplier") = a0; };
	float GetMaxFallSpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "MaxFallSpeedMultiplier"); };
	void SetbAutoPvETimer(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAutoPvETimer") = a0; };
	bool GetbAutoPvETimer() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAutoPvETimer"); };
	void SetbAutoPvEUseSystemTime(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAutoPvEUseSystemTime") = a0; };
	bool GetbAutoPvEUseSystemTime() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAutoPvEUseSystemTime"); };
	void SetbUsingStructureDestructionTag(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bUsingStructureDestructionTag") = a0; };
	bool GetbUsingStructureDestructionTag() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bUsingStructureDestructionTag"); };
	void SetStructureDestructionTag(FName a0) { *(FName*)GetAddress(this, "AShooterGameMode", "StructureDestructionTag") = a0; };
	FName GetStructureDestructionTag() const { return *(FName*)GetAddress(this, "AShooterGameMode", "StructureDestructionTag"); };
	void SetAutoPvEStartTimeSeconds(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "AutoPvEStartTimeSeconds") = a0; };
	float GetAutoPvEStartTimeSeconds() const { return *(float*)GetAddress(this, "AShooterGameMode", "AutoPvEStartTimeSeconds"); };
	void SetAutoPvEStopTimeSeconds(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "AutoPvEStopTimeSeconds") = a0; };
	float GetAutoPvEStopTimeSeconds() const { return *(float*)GetAddress(this, "AShooterGameMode", "AutoPvEStopTimeSeconds"); };
	void SetTributeItemExpirationSeconds(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "TributeItemExpirationSeconds") = a0; };
	int GetTributeItemExpirationSeconds() const { return *(int*)GetAddress(this, "AShooterGameMode", "TributeItemExpirationSeconds"); };
	void SetTributeDinoExpirationSeconds(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "TributeDinoExpirationSeconds") = a0; };
	int GetTributeDinoExpirationSeconds() const { return *(int*)GetAddress(this, "AShooterGameMode", "TributeDinoExpirationSeconds"); };
	void SetTributeCharacterExpirationSeconds(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "TributeCharacterExpirationSeconds") = a0; };
	int GetTributeCharacterExpirationSeconds() const { return *(int*)GetAddress(this, "AShooterGameMode", "TributeCharacterExpirationSeconds"); };
	void SetPreventDownloadSurvivors(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "PreventDownloadSurvivors") = a0; };
	bool GetPreventDownloadSurvivors() const { return *(bool*)GetAddress(this, "AShooterGameMode", "PreventDownloadSurvivors"); };
	void SetPreventDownloadItems(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "PreventDownloadItems") = a0; };
	bool GetPreventDownloadItems() const { return *(bool*)GetAddress(this, "AShooterGameMode", "PreventDownloadItems"); };
	void SetPreventDownloadDinos(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "PreventDownloadDinos") = a0; };
	bool GetPreventDownloadDinos() const { return *(bool*)GetAddress(this, "AShooterGameMode", "PreventDownloadDinos"); };
	void SetbPreventUploadSurvivors(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventUploadSurvivors") = a0; };
	bool GetbPreventUploadSurvivors() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventUploadSurvivors"); };
	void SetbPreventUploadItems(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventUploadItems") = a0; };
	bool GetbPreventUploadItems() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventUploadItems"); };
	void SetbPreventUploadDinos(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventUploadDinos") = a0; };
	bool GetbPreventUploadDinos() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventUploadDinos"); };
	void SetMaxTributeItems(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxTributeItems") = a0; };
	int GetMaxTributeItems() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxTributeItems"); };
	void SetMaxTributeDinos(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxTributeDinos") = a0; };
	int GetMaxTributeDinos() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxTributeDinos"); };
	void SetMaxTributeCharacters(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxTributeCharacters") = a0; };
	int GetMaxTributeCharacters() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxTributeCharacters"); };
	void SetbIncreasePvPRespawnInterval(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bIncreasePvPRespawnInterval") = a0; };
	bool GetbIncreasePvPRespawnInterval() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bIncreasePvPRespawnInterval"); };
	void SetIncreasePvPRespawnIntervalCheckPeriod(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "IncreasePvPRespawnIntervalCheckPeriod") = a0; };
	float GetIncreasePvPRespawnIntervalCheckPeriod() const { return *(float*)GetAddress(this, "AShooterGameMode", "IncreasePvPRespawnIntervalCheckPeriod"); };
	void SetIncreasePvPRespawnIntervalMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "IncreasePvPRespawnIntervalMultiplier") = a0; };
	float GetIncreasePvPRespawnIntervalMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "IncreasePvPRespawnIntervalMultiplier"); };
	void SetIncreasePvPRespawnIntervalBaseAmount(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "IncreasePvPRespawnIntervalBaseAmount") = a0; };
	float GetIncreasePvPRespawnIntervalBaseAmount() const { return *(float*)GetAddress(this, "AShooterGameMode", "IncreasePvPRespawnIntervalBaseAmount"); };
	void SetResourceNoReplenishRadiusStructures(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "ResourceNoReplenishRadiusStructures") = a0; };
	float GetResourceNoReplenishRadiusStructures() const { return *(float*)GetAddress(this, "AShooterGameMode", "ResourceNoReplenishRadiusStructures"); };
	void SetResourceNoReplenishRadiusPlayers(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "ResourceNoReplenishRadiusPlayers") = a0; };
	float GetResourceNoReplenishRadiusPlayers() const { return *(float*)GetAddress(this, "AShooterGameMode", "ResourceNoReplenishRadiusPlayers"); };
	void SetCropGrowthSpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "CropGrowthSpeedMultiplier") = a0; };
	float GetCropGrowthSpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "CropGrowthSpeedMultiplier"); };
	void SetLayEggIntervalMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "LayEggIntervalMultiplier") = a0; };
	float GetLayEggIntervalMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "LayEggIntervalMultiplier"); };
	void SetPoopIntervalMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PoopIntervalMultiplier") = a0; };
	float GetPoopIntervalMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PoopIntervalMultiplier"); };
	void SetCropDecaySpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "CropDecaySpeedMultiplier") = a0; };
	float GetCropDecaySpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "CropDecaySpeedMultiplier"); };
	void SetbAllowChatFromDeadNonAdmins(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowChatFromDeadNonAdmins") = a0; };
	bool GetbAllowChatFromDeadNonAdmins() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowChatFromDeadNonAdmins"); };
	void SetbAllowDisablingSpectator(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowDisablingSpectator") = a0; };
	bool GetbAllowDisablingSpectator() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowDisablingSpectator"); };
	void SetbPvEDisableFriendlyFire(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPvEDisableFriendlyFire") = a0; };
	bool GetbPvEDisableFriendlyFire() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPvEDisableFriendlyFire"); };
	void SetbFlyerPlatformAllowUnalignedDinoBasing(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bFlyerPlatformAllowUnalignedDinoBasing") = a0; };
	bool GetbFlyerPlatformAllowUnalignedDinoBasing() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bFlyerPlatformAllowUnalignedDinoBasing"); };
	void SetMaxPerTribePlatformSaddleStructureLimit(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxPerTribePlatformSaddleStructureLimit") = a0; };
	int GetMaxPerTribePlatformSaddleStructureLimit() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxPerTribePlatformSaddleStructureLimit"); };
	void SetMaxPlatformSaddleStructureLimit(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxPlatformSaddleStructureLimit") = a0; };
	int GetMaxPlatformSaddleStructureLimit() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxPlatformSaddleStructureLimit"); };
	void SetMaxDinoBaseLevel(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxDinoBaseLevel") = a0; };
	int GetMaxDinoBaseLevel() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxDinoBaseLevel"); };
	void SetMaxNumberOfPlayersInTribe(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxNumberOfPlayersInTribe") = a0; };
	int GetMaxNumberOfPlayersInTribe() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxNumberOfPlayersInTribe"); };
	void SetMatingIntervalMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "MatingIntervalMultiplier") = a0; };
	float GetMatingIntervalMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "MatingIntervalMultiplier"); };
	void SetEggHatchSpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "EggHatchSpeedMultiplier") = a0; };
	float GetEggHatchSpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "EggHatchSpeedMultiplier"); };
	void SetBabyMatureSpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "BabyMatureSpeedMultiplier") = a0; };
	float GetBabyMatureSpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "BabyMatureSpeedMultiplier"); };
	void SetBabyFoodConsumptionSpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "BabyFoodConsumptionSpeedMultiplier") = a0; };
	float GetBabyFoodConsumptionSpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "BabyFoodConsumptionSpeedMultiplier"); };
	void SetCurrentPlatformSaddleStructures(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "CurrentPlatformSaddleStructures") = a0; };
	int GetCurrentPlatformSaddleStructures() const { return *(int*)GetAddress(this, "AShooterGameMode", "CurrentPlatformSaddleStructures"); };
	void SetbCustomGameModeAllowSpectatorJoinAfterMatchStart(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bCustomGameModeAllowSpectatorJoinAfterMatchStart") = a0; };
	bool GetbCustomGameModeAllowSpectatorJoinAfterMatchStart() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bCustomGameModeAllowSpectatorJoinAfterMatchStart"); };
	void SetGameplayLogFile(FOutputDeviceFile a0) { *(FOutputDeviceFile*)GetAddress(this, "AShooterGameMode", "GameplayLogFile") = a0; };
	FOutputDeviceFile GetGameplayLogFile() const { return *(FOutputDeviceFile*)GetAddress(this, "AShooterGameMode", "GameplayLogFile"); };
	void SetServerGameLogFile(FOutputDeviceFile a0) { *(FOutputDeviceFile*)GetAddress(this, "AShooterGameMode", "ServerGameLogFile") = a0; };
	FOutputDeviceFile GetServerGameLogFile() const { return *(FOutputDeviceFile*)GetAddress(this, "AShooterGameMode", "ServerGameLogFile"); };
	void SetbGameplayLogEnabled(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bGameplayLogEnabled") = a0; };
	bool GetbGameplayLogEnabled() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bGameplayLogEnabled"); };
	void SetbServerGameLogEnabled(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerGameLogEnabled") = a0; };
	bool GetbServerGameLogEnabled() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerGameLogEnabled"); };
	void SetBonusSupplyCrateItemGiveInterval(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "BonusSupplyCrateItemGiveInterval") = a0; };
	float GetBonusSupplyCrateItemGiveInterval() const { return *(float*)GetAddress(this, "AShooterGameMode", "BonusSupplyCrateItemGiveInterval"); };
	void SetStructureDamageRepairCooldown(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "StructureDamageRepairCooldown") = a0; };
	float GetStructureDamageRepairCooldown() const { return *(float*)GetAddress(this, "AShooterGameMode", "StructureDamageRepairCooldown"); };
	void SetCustomRecipeEffectivenessMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "CustomRecipeEffectivenessMultiplier") = a0; };
	float GetCustomRecipeEffectivenessMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "CustomRecipeEffectivenessMultiplier"); };
	void SetCustomRecipeSkillMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "CustomRecipeSkillMultiplier") = a0; };
	float GetCustomRecipeSkillMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "CustomRecipeSkillMultiplier"); };
	void SetBonusSupplyCrateItemString(FString a0) { *(FString*)GetAddress(this, "AShooterGameMode", "BonusSupplyCrateItemString") = a0; };
	FString GetBonusSupplyCrateItemString() const { return *(FString*)GetAddress(this, "AShooterGameMode", "BonusSupplyCrateItemString"); };
	void SetbPvEAllowTribeWar(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPvEAllowTribeWar") = a0; };
	bool GetbPvEAllowTribeWar() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPvEAllowTribeWar"); };
	void SetbPvEAllowTribeWarCancel(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPvEAllowTribeWarCancel") = a0; };
	bool GetbPvEAllowTribeWarCancel() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPvEAllowTribeWarCancel"); };
	void SetbAllowCustomRecipes(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowCustomRecipes") = a0; };
	bool GetbAllowCustomRecipes() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowCustomRecipes"); };
	void SetbPassiveDefensesDamageRiderlessDinos(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPassiveDefensesDamageRiderlessDinos") = a0; };
	bool GetbPassiveDefensesDamageRiderlessDinos() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPassiveDefensesDamageRiderlessDinos"); };
	void SetLastBonusSupplyCrateItemGiveTime(double a0) { *(double*)GetAddress(this, "AShooterGameMode", "LastBonusSupplyCrateItemGiveTime") = a0; };
	double GetLastBonusSupplyCrateItemGiveTime() const { return *(double*)GetAddress(this, "AShooterGameMode", "LastBonusSupplyCrateItemGiveTime"); };
	void SetbEnableDeathTeamSpectator(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bEnableDeathTeamSpectator") = a0; };
	bool GetbEnableDeathTeamSpectator() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bEnableDeathTeamSpectator"); };
	void SetbTribeStoreCharacterConfiguration(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bTribeStoreCharacterConfiguration") = a0; };
	bool GetbTribeStoreCharacterConfiguration() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bTribeStoreCharacterConfiguration"); };
	void SetPvEActiveTribeWars(TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>> a0) { *(TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>>*)GetAddress(this, "AShooterGameMode", "PvEActiveTribeWars") = a0; };
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>> GetPvEActiveTribeWars() const { return *(TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>>*)GetAddress(this, "AShooterGameMode", "PvEActiveTribeWars"); };
	void SetTribeAllies(TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>> a0) { *(TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>>*)GetAddress(this, "AShooterGameMode", "TribeAllies") = a0; };
	TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>> GetTribeAllies() const { return *(TMap<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, FDefaultSetAllocator, TDefaultMapKeyFuncs<int, TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>, 0>>*)GetAddress(this, "AShooterGameMode", "TribeAllies"); };
	void SetMaxTribeLogs(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "MaxTribeLogs") = a0; };
	int GetMaxTribeLogs() const { return *(int*)GetAddress(this, "AShooterGameMode", "MaxTribeLogs"); };
	void SetCachedGameLog(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "CachedGameLog") = a0; };
	TArray<FString, FDefaultAllocator> GetCachedGameLog() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "CachedGameLog"); };
	void SetbDisableFriendlyFire(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableFriendlyFire") = a0; };
	bool GetbDisableFriendlyFire() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableFriendlyFire"); };
	void SetbAllowInactiveTribes(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowInactiveTribes") = a0; };
	bool GetbAllowInactiveTribes() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowInactiveTribes"); };
	void SetbForceMapPlayerLocation(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bForceMapPlayerLocation") = a0; };
	bool GetbForceMapPlayerLocation() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bForceMapPlayerLocation"); };
	void SetDinoHarvestingDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoHarvestingDamageMultiplier") = a0; };
	float GetDinoHarvestingDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoHarvestingDamageMultiplier"); };
	void SetPlayerHarvestingDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PlayerHarvestingDamageMultiplier") = a0; };
	float GetPlayerHarvestingDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "PlayerHarvestingDamageMultiplier"); };
	void SetDinoTurretDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "DinoTurretDamageMultiplier") = a0; };
	float GetDinoTurretDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "DinoTurretDamageMultiplier"); };
	void SetbDisableLootCrates(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableLootCrates") = a0; };
	bool GetbDisableLootCrates() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableLootCrates"); };
	void SetExtinctionEventTimeInterval(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "ExtinctionEventTimeInterval") = a0; };
	float GetExtinctionEventTimeInterval() const { return *(float*)GetAddress(this, "AShooterGameMode", "ExtinctionEventTimeInterval"); };
	void SetbEnableExtraStructurePreventionVolumes(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bEnableExtraStructurePreventionVolumes") = a0; };
	bool GetbEnableExtraStructurePreventionVolumes() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bEnableExtraStructurePreventionVolumes"); };
	void SetNextExtinctionEventUTC(unsigned int a0) { *(unsigned int*)GetAddress(this, "AShooterGameMode", "NextExtinctionEventUTC") = a0; };
	unsigned int GetNextExtinctionEventUTC() const { return *(unsigned int*)GetAddress(this, "AShooterGameMode", "NextExtinctionEventUTC"); };
	void SetbForceAllowCaveFlyers(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bForceAllowCaveFlyers") = a0; };
	bool GetbForceAllowCaveFlyers() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bForceAllowCaveFlyers"); };
	void SetbDoExtinctionEvent(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDoExtinctionEvent") = a0; };
	bool GetbDoExtinctionEvent() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDoExtinctionEvent"); };
	void SetbPreventOfflinePvP(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventOfflinePvP") = a0; };
	bool GetbPreventOfflinePvP() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventOfflinePvP"); };
	void SetbPvPDinoDecay(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPvPDinoDecay") = a0; };
	bool GetbPvPDinoDecay() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPvPDinoDecay"); };
	void SetbOverideStructurePlatformPrevention(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bOverideStructurePlatformPrevention") = a0; };
	bool GetbOverideStructurePlatformPrevention() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bOverideStructurePlatformPrevention"); };
	void SetbAllowAnyoneBabyImprintCuddle(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bAllowAnyoneBabyImprintCuddle") = a0; };
	bool GetbAllowAnyoneBabyImprintCuddle() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bAllowAnyoneBabyImprintCuddle"); };
	void SetbDisableImprintDinoBuff(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDisableImprintDinoBuff") = a0; };
	bool GetbDisableImprintDinoBuff() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDisableImprintDinoBuff"); };
	void SetbShowFloatingDamageText(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bShowFloatingDamageText") = a0; };
	bool GetbShowFloatingDamageText() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bShowFloatingDamageText"); };
	void SetbOnlyDecayUnsnappedCoreStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bOnlyDecayUnsnappedCoreStructures") = a0; };
	bool GetbOnlyDecayUnsnappedCoreStructures() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bOnlyDecayUnsnappedCoreStructures"); };
	void SetbFastDecayUnsnappedCoreStructures(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bFastDecayUnsnappedCoreStructures") = a0; };
	bool GetbFastDecayUnsnappedCoreStructures() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bFastDecayUnsnappedCoreStructures"); };
	void SetbDestroyUnconnectedWaterPipes(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bDestroyUnconnectedWaterPipes") = a0; };
	bool GetbDestroyUnconnectedWaterPipes() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bDestroyUnconnectedWaterPipes"); };
	void SetPreventOfflinePvPInterval(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "PreventOfflinePvPInterval") = a0; };
	float GetPreventOfflinePvPInterval() const { return *(float*)GetAddress(this, "AShooterGameMode", "PreventOfflinePvPInterval"); };

	/*void SetOverrideItemCraftingCosts(TArray<FItemCraftingCostOverride, FDefaultAllocator> a0) { *(TArray<FItemCraftingCostOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverrideItemCraftingCosts") = a0; };
	TArray<FItemCraftingCostOverride, FDefaultAllocator> GetOverrideItemCraftingCosts() const { return *(TArray<FItemCraftingCostOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "OverrideItemCraftingCosts"); };
	void SetConfigOverrideItemCraftingCosts(TArray<FConfigItemCraftingCostOverride, FDefaultAllocator> a0) { *(TArray<FConfigItemCraftingCostOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigOverrideItemCraftingCosts") = a0; };
	TArray<FConfigItemCraftingCostOverride, FDefaultAllocator> GetConfigOverrideItemCraftingCosts() const { return *(TArray<FConfigItemCraftingCostOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigOverrideItemCraftingCosts"); };
	void SetConfigOverrideSupplyCrateItems(TArray<FConfigSupplyCrateItemsOverride, FDefaultAllocator> a0) { *(TArray<FConfigSupplyCrateItemsOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigOverrideSupplyCrateItems") = a0; };
	TArray<FConfigSupplyCrateItemsOverride, FDefaultAllocator> GetConfigOverrideSupplyCrateItems() const { return *(TArray<FConfigSupplyCrateItemsOverride, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigOverrideSupplyCrateItems"); };
	void SetConfigOverrideNPCSpawnEntriesContainer(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator> a0) { *(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigOverrideNPCSpawnEntriesContainer") = a0; };
	TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator> GetConfigOverrideNPCSpawnEntriesContainer() const { return *(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigOverrideNPCSpawnEntriesContainer"); };
	void SetConfigAddNPCSpawnEntriesContainer(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator> a0) { *(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigAddNPCSpawnEntriesContainer") = a0; };
	TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator> GetConfigAddNPCSpawnEntriesContainer() const { return *(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigAddNPCSpawnEntriesContainer"); };
	void SetConfigSubtractNPCSpawnEntriesContainer(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator> a0) { *(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigSubtractNPCSpawnEntriesContainer") = a0; };
	TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator> GetConfigSubtractNPCSpawnEntriesContainer() const { return *(TArray<FConfigNPCSpawnEntriesContainer, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "ConfigSubtractNPCSpawnEntriesContainer"); };*/
	void SetBabyImprintingStatScaleMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "BabyImprintingStatScaleMultiplier") = a0; };
	float GetBabyImprintingStatScaleMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "BabyImprintingStatScaleMultiplier"); };
	void SetBabyCuddleIntervalMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "BabyCuddleIntervalMultiplier") = a0; };
	float GetBabyCuddleIntervalMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "BabyCuddleIntervalMultiplier"); };
	void SetBabyCuddleGracePeriodMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "BabyCuddleGracePeriodMultiplier") = a0; };
	float GetBabyCuddleGracePeriodMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "BabyCuddleGracePeriodMultiplier"); };
	void SetBabyCuddleLoseImprintQualitySpeedMultiplier(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "BabyCuddleLoseImprintQualitySpeedMultiplier") = a0; };
	float GetBabyCuddleLoseImprintQualitySpeedMultiplier() const { return *(float*)GetAddress(this, "AShooterGameMode", "BabyCuddleLoseImprintQualitySpeedMultiplier"); };
	void SetbPreventDiseases(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bPreventDiseases") = a0; };
	bool GetbPreventDiseases() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bPreventDiseases"); };
	void SetbNonPermanentDiseases(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bNonPermanentDiseases") = a0; };
	bool GetbNonPermanentDiseases() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bNonPermanentDiseases"); };
	void SetSaveForceRespawnDinosVersion(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "SaveForceRespawnDinosVersion") = a0; };
	int GetSaveForceRespawnDinosVersion() const { return *(int*)GetAddress(this, "AShooterGameMode", "SaveForceRespawnDinosVersion"); };
	void SetServerID(unsigned __int64 a0) { *(unsigned __int64*)GetAddress(this, "AShooterGameMode", "ServerID") = a0; };
	unsigned __int64 GetServerID() const { return *(unsigned __int64*)GetAddress(this, "AShooterGameMode", "ServerID"); };
	void SetLoadForceRespawnDinosVersion(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "LoadForceRespawnDinosVersion") = a0; };
	int GetLoadForceRespawnDinosVersion() const { return *(int*)GetAddress(this, "AShooterGameMode", "LoadForceRespawnDinosVersion"); };
	void SetbIsLoadedServer(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bIsLoadedServer") = a0; };
	bool GetbIsLoadedServer() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bIsLoadedServer"); };
	void SetSupportedSpawnRegions(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "SupportedSpawnRegions") = a0; };
	TArray<int, FDefaultAllocator> GetSupportedSpawnRegions() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterGameMode", "SupportedSpawnRegions"); };
	void SetbServerUseDinoList(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bServerUseDinoList") = a0; };
	bool GetbServerUseDinoList() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bServerUseDinoList"); };
	void SetMaxAllowedRespawnInterval(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "MaxAllowedRespawnInterval") = a0; };
	float GetMaxAllowedRespawnInterval() const { return *(float*)GetAddress(this, "AShooterGameMode", "MaxAllowedRespawnInterval"); };
	void SetbUseDinoLevelUpAnimations(bool a0) { *(bool*)GetAddress(this, "AShooterGameMode", "bUseDinoLevelUpAnimations") = a0; };
	bool GetbUseDinoLevelUpAnimations() const { return *(bool*)GetAddress(this, "AShooterGameMode", "bUseDinoLevelUpAnimations"); };
	void SetMinimumDinoReuploadInterval(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "MinimumDinoReuploadInterval") = a0; };
	float GetMinimumDinoReuploadInterval() const { return *(float*)GetAddress(this, "AShooterGameMode", "MinimumDinoReuploadInterval"); };
	void SetNPCCount(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "NPCCount") = a0; };
	int GetNPCCount() const { return *(int*)GetAddress(this, "AShooterGameMode", "NPCCount"); };
	void SetNPCActiveCount(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "NPCActiveCount") = a0; };
	int GetNPCActiveCount() const { return *(int*)GetAddress(this, "AShooterGameMode", "NPCActiveCount"); };
	void SetSaveGameCustomVersion(int a0) { *(int*)GetAddress(this, "AShooterGameMode", "SaveGameCustomVersion") = a0; };
	int GetSaveGameCustomVersion() const { return *(int*)GetAddress(this, "AShooterGameMode", "SaveGameCustomVersion"); };
	void SetOverrideOfficialDifficulty(float a0) { *(float*)GetAddress(this, "AShooterGameMode", "OverrideOfficialDifficulty") = a0; };
	float GetOverrideOfficialDifficulty() const { return *(float*)GetAddress(this, "AShooterGameMode", "OverrideOfficialDifficulty"); };

	// Functions

	AActor* ChoosePlayerStart_Implementation(AController* a1) { return static_cast<AActor*(_cdecl*)(DWORD64, AController*)>(GetAddress("AShooterGameMode", "ChoosePlayerStart_Implementation"))((DWORD64)this, a1); }
	bool ShouldSpawnAtStartSpot_Implementation(AController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AController*)>(GetAddress("AShooterGameMode", "ShouldSpawnAtStartSpot_Implementation"))((DWORD64)this, a1); }
	float ModifyDamage(float a1, AActor* a2, const FDamageEvent& a3, AController* a4, AActor* a5) { return static_cast<float(_cdecl*)(DWORD64, float, AActor*, const FDamageEvent&, AController*, AActor*)>(GetAddress("AShooterGameMode", "ModifyDamage"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void Killed(AController* a1, AController* a2, APawn* a3, const UDamageType* a4) { static_cast<void(_cdecl*)(DWORD64, AController*, AController*, APawn*, const UDamageType*)>(GetAddress("AShooterGameMode", "Killed"))((DWORD64)this, a1, a2, a3, a4); }
	bool CanDealDamage(AShooterPlayerState* a1, AShooterPlayerState* a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerState*, AShooterPlayerState*)>(GetAddress("AShooterGameMode", "CanDealDamage"))((DWORD64)this, a1, a2); }
	bool AllowCheats(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AShooterGameMode", "AllowCheats"))((DWORD64)this, a1); }
	void CheckForRepopulation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "CheckForRepopulation"))((DWORD64)this); }
	void SetMessageOfTheDay(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterGameMode", "SetMessageOfTheDay"))((DWORD64)this, a1); }
	void ShowMessageOfTheDay() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "ShowMessageOfTheDay"))((DWORD64)this); }
	void SaveWorld() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "SaveWorld"))((DWORD64)this); }
	bool LoadWorld() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "LoadWorld"))((DWORD64)this); }
	void ClearSavesAndRestart() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "ClearSavesAndRestart"))((DWORD64)this); }
	void DeletePlayerData(AShooterPlayerState* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerState*)>(GetAddress("AShooterGameMode", "DeletePlayerData"))((DWORD64)this, a1); }
	void GetServerNotification() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "GetServerNotification"))((DWORD64)this); }
	bool KickPlayer(FString a1, FString a2) { return static_cast<bool(_cdecl*)(DWORD64, FString, FString)>(GetAddress("AShooterGameMode", "KickPlayer"))((DWORD64)this, a1, a2); }
	bool BanPlayer(FString a1, FString a2) { return static_cast<bool(_cdecl*)(DWORD64, FString, FString)>(GetAddress("AShooterGameMode", "BanPlayer"))((DWORD64)this, a1, a2); }
	bool UnbanPlayer(FString a1, FString a2) { return static_cast<bool(_cdecl*)(DWORD64, FString, FString)>(GetAddress("AShooterGameMode", "UnbanPlayer"))((DWORD64)this, a1, a2); }
	void KickAllPlayersAndReload() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "KickAllPlayersAndReload"))((DWORD64)this); }
	void SaveBannedList() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "SaveBannedList"))((DWORD64)this); }
	void LoadBannedList() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "LoadBannedList"))((DWORD64)this); }
	void SavePlayersJoinNoCheckList() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "SavePlayersJoinNoCheckList"))((DWORD64)this); }
	void LoadPlayersJoinNoCheckList() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "LoadPlayersJoinNoCheckList"))((DWORD64)this); }
	bool IsPlayerAllowedToJoinNoCheck(const FUniqueNetIdUInt64& a1) { return static_cast<bool(_cdecl*)(DWORD64, const FUniqueNetIdUInt64&)>(GetAddress("AShooterGameMode", "IsPlayerAllowedToJoinNoCheck"))((DWORD64)this, a1); }
	void CheckArkTributeAvailability() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "CheckArkTributeAvailability"))((DWORD64)this); }
	bool IsSpawnpointAllowed(APlayerStart* a1, AController* a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerStart*, AController*)>(GetAddress("AShooterGameMode", "IsSpawnpointAllowed"))((DWORD64)this, a1, a2); }
	bool IsSpawnpointPreferred(APlayerStart* a1, AController* a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerStart*, AController*)>(GetAddress("AShooterGameMode", "IsSpawnpointPreferred"))((DWORD64)this, a1, a2); }
	void HandleLeavingMap() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "HandleLeavingMap"))((DWORD64)this); }
	bool ReadyToStartMatch() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "ReadyToStartMatch"))((DWORD64)this); }
	void CheckIsOfficialServer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "CheckIsOfficialServer"))((DWORD64)this); }
	void StartNewPlayer(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AShooterGameMode", "StartNewPlayer"))((DWORD64)this, a1); }
	UPrimalPlayerData* GetPlayerData(const FString& a1) { return static_cast<UPrimalPlayerData*(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterGameMode", "GetPlayerData"))((DWORD64)this, a1); }
	APawn* SpawnDefaultPawnFor(AController* a1, AActor* a2) { return static_cast<APawn*(_cdecl*)(DWORD64, AController*, AActor*)>(GetAddress("AShooterGameMode", "SpawnDefaultPawnFor"))((DWORD64)this, a1, a2); }
	unsigned __int64 AddNewTribe(AShooterPlayerState* a1, const FString& a2, const FTribeGovernment& a3) { return static_cast<unsigned __int64(_cdecl*)(DWORD64, AShooterPlayerState*, const FString&, const FTribeGovernment&)>(GetAddress("AShooterGameMode", "AddNewTribe"))((DWORD64)this, a1, a2, a3); }
	void RemoveTribe(unsigned __int64 a1) { static_cast<void(_cdecl*)(DWORD64, unsigned __int64)>(GetAddress("AShooterGameMode", "RemoveTribe"))((DWORD64)this, a1); }
	void RemovePlayerFromTribe(unsigned __int64 a1, unsigned __int64 a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, unsigned __int64, unsigned __int64, bool)>(GetAddress("AShooterGameMode", "RemovePlayerFromTribe"))((DWORD64)this, a1, a2, a3); }
	int GetTribeIDOfPlayerID(unsigned __int64 a1) { return static_cast<int(_cdecl*)(DWORD64, unsigned __int64)>(GetAddress("AShooterGameMode", "GetTribeIDOfPlayerID"))((DWORD64)this, a1); }
	void HandleTransferCharacterDialogResult(bool a1, AShooterPlayerController* a2) { static_cast<void(_cdecl*)(DWORD64, bool, AShooterPlayerController*)>(GetAddress("AShooterGameMode", "HandleTransferCharacterDialogResult"))((DWORD64)this, a1, a2); }
	void Logout(AController* a1) { static_cast<void(_cdecl*)(DWORD64, AController*)>(GetAddress("AShooterGameMode", "Logout"))((DWORD64)this, a1); }
	bool IsFirstPlayerSpawn(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AShooterGameMode", "IsFirstPlayerSpawn"))((DWORD64)this, a1); }
	TArray<FString, FDefaultAllocator> GetWhiteListedMap() { return static_cast<TArray<FString, FDefaultAllocator>(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "GetWhiteListedMap"))((DWORD64)this); }
	bool GetOrLoadTribeData(int a1, FTribeData& a2) { return static_cast<bool(_cdecl*)(DWORD64, int, FTribeData&)>(GetAddress("AShooterGameMode", "GetOrLoadTribeData"))((DWORD64)this, a1, a2); }
	void LoadTribeIds() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "LoadTribeIds"))((DWORD64)this); }
	void LoadPlayerDataIds() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "LoadPlayerDataIds"))((DWORD64)this); }
	unsigned int GenerateTribeId() { return static_cast<unsigned int(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "GenerateTribeId"))((DWORD64)this); }
	unsigned int GeneratePlayerDataId(unsigned __int64 a1) { return static_cast<unsigned int(_cdecl*)(DWORD64, unsigned __int64)>(GetAddress("AShooterGameMode", "GeneratePlayerDataId"))((DWORD64)this, a1); }
	void SendServerChatMessage(const FString& a1, FLinearColor a2, bool a3, int a4, int a5) { static_cast<void(_cdecl*)(DWORD64, const FString&, FLinearColor, bool, int, int)>(GetAddress("AShooterGameMode", "SendServerChatMessage"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void SendServerDirectMessage(const FString& a1, const FString& a2, FLinearColor a3, bool a4, int a5, int a6, const FString& a7) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&, FLinearColor, bool, int, int, const FString&)>(GetAddress("AShooterGameMode", "SendServerDirectMessage"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7); }
	float GetDinoDamageMultiplier(APrimalDinoCharacter* a1) { return static_cast<float(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterGameMode", "GetDinoDamageMultiplier"))((DWORD64)this, a1); }
	float GetDinoResistanceMultiplier(APrimalDinoCharacter* a1) { return static_cast<float(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterGameMode", "GetDinoResistanceMultiplier"))((DWORD64)this, a1); }
	void ListenServerClampPlayerLocations() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "ListenServerClampPlayerLocations"))((DWORD64)this); }
	FString* ValidateTribeName(FString* res, FString a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, FString)>(GetAddress("AShooterGameMode", "ValidateTribeName"))((DWORD64)this, res, a1); }
	void AdjustDamage(AActor* a1, float& a2, const FDamageEvent& a3, AController* a4, AActor* a5) { static_cast<void(_cdecl*)(DWORD64, AActor*, float&, const FDamageEvent&, AController*, AActor*)>(GetAddress("AShooterGameMode", "AdjustDamage"))((DWORD64)this, a1, a2, a3, a4, a5); }
	bool AllowAddToTribe(AShooterPlayerState* a1, const FTribeData& a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerState*, const FTribeData&)>(GetAddress("AShooterGameMode", "AllowAddToTribe"))((DWORD64)this, a1, a2); }
	bool AllowClearTribe(AShooterPlayerState* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerState*)>(GetAddress("AShooterGameMode", "AllowClearTribe"))((DWORD64)this, a1); }
	bool AllowRenameTribe(AShooterPlayerState* a1, const FString& a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerState*, const FString&)>(GetAddress("AShooterGameMode", "AllowRenameTribe"))((DWORD64)this, a1, a2); }
	bool AllowNotifyRemotePlayerDeath(AShooterCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterCharacter*)>(GetAddress("AShooterGameMode", "AllowNotifyRemotePlayerDeath"))((DWORD64)this, a1); }
	bool AllowSpectatorJoinAfterMatchStart(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AShooterGameMode", "AllowSpectatorJoinAfterMatchStart"))((DWORD64)this, a1); }
	bool IsUsedSpawnPointStillSupported(APlayerStart* a1, AController* a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerStart*, AController*)>(GetAddress("AShooterGameMode", "IsUsedSpawnPointStillSupported"))((DWORD64)this, a1, a2); }
	void SetTimeOfDay(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterGameMode", "SetTimeOfDay"))((DWORD64)this, a1); }
	bool PlayerCanRestart(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AShooterGameMode", "PlayerCanRestart"))((DWORD64)this, a1); }
	void KickPlayerController(APlayerController* a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, const FString&)>(GetAddress("AShooterGameMode", "KickPlayerController"))((DWORD64)this, a1, a2); }
	bool HandleNewPlayer(AShooterPlayerController* a1, UPrimalPlayerData* a2, AShooterCharacter* a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, UPrimalPlayerData*, AShooterCharacter*, bool)>(GetAddress("AShooterGameMode", "HandleNewPlayer"))((DWORD64)this, a1, a2, a3, a4); }
	bool IsPlayerAllowedToCheat(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterGameMode", "IsPlayerAllowedToCheat"))((DWORD64)this, a1); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterGameMode", "IsPlayerControllerAllowedToJoinNoCheck"))((DWORD64)this, a1); }
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterGameMode", "IsPlayerControllerAllowedToExclusiveJoin"))((DWORD64)this, a1); }
	void PrintToGameplayLog(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterGameMode", "PrintToGameplayLog"))((DWORD64)this, a1); }
	void PrintToServerGameLog(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterGameMode", "PrintToServerGameLog"))((DWORD64)this, a1); }
	void LoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "LoadedFromSaveGame"))((DWORD64)this); }
	void RemoveInactivePlayersAndTribes() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "RemoveInactivePlayersAndTribes"))((DWORD64)this); }
	bool IsTribeWar(int a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, int, int)>(GetAddress("AShooterGameMode", "IsTribeWar"))((DWORD64)this, a1, a2); }
	void UpdateTribeWars() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterGameMode", "UpdateTribeWars"))((DWORD64)this); }
	void AddToTribeLog(int a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, int, const FString&)>(GetAddress("AShooterGameMode", "AddToTribeLog"))((DWORD64)this, a1, a2); }
	int ForceCreateTribe(const FString& a1, int a2) { return static_cast<int(_cdecl*)(DWORD64, const FString&, int)>(GetAddress("AShooterGameMode", "ForceCreateTribe"))((DWORD64)this, a1, a2); }
	int ForceAddPlayerToTribe(AShooterPlayerState* a1, const FString& a2) { return static_cast<int(_cdecl*)(DWORD64, AShooterPlayerState*, const FString&)>(GetAddress("AShooterGameMode", "ForceAddPlayerToTribe"))((DWORD64)this, a1, a2); }
	int GetNumberOfLivePlayersOnTribe(const FString& a1) { return static_cast<int(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterGameMode", "GetNumberOfLivePlayersOnTribe"))((DWORD64)this, a1); }
	bool TriggerLevelCustomEvents(UWorld* a1, const FString& a2) { return static_cast<bool(_cdecl*)(DWORD64, UWorld*, const FString&)>(GetAddress("AShooterGameMode", "TriggerLevelCustomEvents"))((DWORD64)this, a1, a2); }
	bool AreTribesAllied(int a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, int, int)>(GetAddress("AShooterGameMode", "AreTribesAllied"))((DWORD64)this, a1, a2); }
	void AddTribeWar(int a1, int a2, int a3, int a4, float a5, float a6, bool a7) { static_cast<void(_cdecl*)(DWORD64, int, int, int, int, float, float, bool)>(GetAddress("AShooterGameMode", "AddTribeWar"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7); }
	void AddPlayerID(int a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, int, unsigned __int64)>(GetAddress("AShooterGameMode", "AddPlayerID"))((DWORD64)this, a1, a2); }
	unsigned __int64 GetSteamIDForPlayerID(int a1) { return static_cast<unsigned __int64(_cdecl*)(DWORD64, int)>(GetAddress("AShooterGameMode", "GetSteamIDForPlayerID"))((DWORD64)this, a1); }
	void DownloadTransferredPlayer(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterGameMode", "DownloadTransferredPlayer"))((DWORD64)this, a1); }
};

struct ACustomGameMode : AShooterGameMode
{
};
