#pragma once

struct FDamageEvent
{
	float& ImpulseField() { return *GetNativePointerField<float*>(this, "FDamageEvent.Impulse"); }
	float& OriginalDamageField() { return *GetNativePointerField<float*>(this, "FDamageEvent.OriginalDamage"); }
	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.InstanceBodyIndex"); }
	TSubclassOf<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageEvent.DamageTypeClass"); }

	// Functions

	void GetBestHitInfo(AActor* HitActor, AActor* HitInstigator, FHitResult* OutHitInfo, FVector* OutImpulseDir) { NativeCall<void, AActor*, AActor*, FHitResult*, FVector*>(this, "FDamageEvent.GetBestHitInfo", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamageEvent.StaticStruct"); }
};

struct UPhysicalMaterial
{
};

struct FBodyInstance
{

};

struct __declspec(align(8)) FHitResult
{
	unsigned __int32 bBlockingHit : 1;
	unsigned __int32 bStartPenetrating : 1;
	unsigned __int32 bVolatileCollision : 1;
	float Time;
	FVector_NetQuantize Location;
	FVector_NetQuantizeNormal Normal;
	FVector_NetQuantize ImpactPoint;
	FVector_NetQuantizeNormal ImpactNormal;
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize TraceEnd;
	float PenetrationDepth;
	int Item;
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;
	TWeakObjectPtr<AActor> Actor;
	TWeakObjectPtr<UPrimitiveComponent> Component;
	FBodyInstance* BodyInstance;
	FName BoneName;
	int FaceIndex;

	// Functions

	void operator=(FHitResult* __that) { NativeCall<void, FHitResult*>(this, "FHitResult.operator=", __that); }
	AActor* GetActor() { return NativeCall<AActor*>(this, "FHitResult.GetActor"); }
	UPrimitiveComponent* GetComponent() { return NativeCall<UPrimitiveComponent*>(this, "FHitResult.GetComponent"); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FHitResult.StaticStruct"); }
};

struct FOverlapInfo
{
	bool bFromSweep;
	FHitResult OverlapInfo;
	void* CachedCompPtr;
};

struct FInternetAddr
{
};

struct FSocket
{
	ESocketType& SocketTypeField() { return *GetNativePointerField<ESocketType*>(this, "FSocket.SocketType"); }
	FString& SocketDescriptionField() { return *GetNativePointerField<FString*>(this, "FSocket.SocketDescription"); }

};

struct FSocketBSD : FSocket
{
	unsigned __int64& SocketField() { return *GetNativePointerField<unsigned __int64*>(this, "FSocketBSD.Socket"); }
	FDateTime& LastActivityTimeField() { return *GetNativePointerField<FDateTime*>(this, "FSocketBSD.LastActivityTime"); }

	// Functions

	bool Close() { return NativeCall<bool>(this, "FSocketBSD.Close"); }
	bool Bind(FInternetAddr* Addr) { return NativeCall<bool, FInternetAddr*>(this, "FSocketBSD.Bind", Addr); }
	bool Connect(FInternetAddr* Addr) { return NativeCall<bool, FInternetAddr*>(this, "FSocketBSD.Connect", Addr); }
	bool Listen(int MaxBacklog) { return NativeCall<bool, int>(this, "FSocketBSD.Listen", MaxBacklog); }
	bool HasPendingConnection(bool* bHasPendingConnection) { return NativeCall<bool, bool*>(this, "FSocketBSD.HasPendingConnection", bHasPendingConnection); }
	bool HasPendingData(unsigned int* PendingDataSize) { return NativeCall<bool, unsigned int*>(this, "FSocketBSD.HasPendingData", PendingDataSize); }
	FSocket* Accept(FString* SocketDescription) { return NativeCall<FSocket*, FString*>(this, "FSocketBSD.Accept", SocketDescription); }
	FSocket* Accept(FInternetAddr* OutAddr, FString* SocketDescription) { return NativeCall<FSocket*, FInternetAddr*, FString*>(this, "FSocketBSD.Accept", OutAddr, SocketDescription); }
	bool SendTo(const char* Data, int Count, int* BytesSent, FInternetAddr* Destination) { return NativeCall<bool, const char*, int, int*, FInternetAddr*>(this, "FSocketBSD.SendTo", Data, Count, BytesSent, Destination); }
	bool Send(const char* Data, int Count, int* BytesSent) { return NativeCall<bool, const char*, int, int*>(this, "FSocketBSD.Send", Data, Count, BytesSent); }
	bool RecvFrom(char* Data, int BufferSize, int* BytesRead, FInternetAddr* Source, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char*, int, int*, FInternetAddr*, ESocketReceiveFlags::Type>(this, "FSocketBSD.RecvFrom", Data, BufferSize, BytesRead, Source, Flags); }
	bool Recv(char* Data, int BufferSize, int* BytesRead, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char*, int, int*, ESocketReceiveFlags::Type>(this, "FSocketBSD.Recv", Data, BufferSize, BytesRead, Flags); }
	ESocketConnectionState GetConnectionState() { return NativeCall<ESocketConnectionState>(this, "FSocketBSD.GetConnectionState"); }
	void GetAddress(FInternetAddr* OutAddr) { NativeCall<void, FInternetAddr*>(this, "FSocketBSD.GetAddress", OutAddr); }
	bool SetNonBlocking(bool bIsNonBlocking) { return NativeCall<bool, bool>(this, "FSocketBSD.SetNonBlocking", bIsNonBlocking); }
	bool SetBroadcast(bool bAllowBroadcast) { return NativeCall<bool, bool>(this, "FSocketBSD.SetBroadcast", bAllowBroadcast); }
	bool JoinMulticastGroup(FInternetAddr* GroupAddress) { return NativeCall<bool, FInternetAddr*>(this, "FSocketBSD.JoinMulticastGroup", GroupAddress); }
	bool LeaveMulticastGroup(FInternetAddr* GroupAddress) { return NativeCall<bool, FInternetAddr*>(this, "FSocketBSD.LeaveMulticastGroup", GroupAddress); }
	bool SetMulticastLoopback(bool bLoopback) { return NativeCall<bool, bool>(this, "FSocketBSD.SetMulticastLoopback", bLoopback); }
	bool SetMulticastTtl(char TimeToLive) { return NativeCall<bool, char>(this, "FSocketBSD.SetMulticastTtl", TimeToLive); }
	bool SetReuseAddr(bool bAllowReuse) { return NativeCall<bool, bool>(this, "FSocketBSD.SetReuseAddr", bAllowReuse); }
	bool SetLinger(bool bShouldLinger, int Timeout) { return NativeCall<bool, bool, int>(this, "FSocketBSD.SetLinger", bShouldLinger, Timeout); }
	bool SetSendBufferSize(int Size, int* NewSize) { return NativeCall<bool, int, int*>(this, "FSocketBSD.SetSendBufferSize", Size, NewSize); }
	bool SetReceiveBufferSize(int Size, int* NewSize) { return NativeCall<bool, int, int*>(this, "FSocketBSD.SetReceiveBufferSize", Size, NewSize); }
	int GetPortNo() { return NativeCall<int>(this, "FSocketBSD.GetPortNo"); }
};

struct RCONClientConnection
{
	FSocket* SocketField() { return *GetNativePointerField<FSocket * *>(this, "RCONClientConnection.Socket"); }
	UShooterCheatManager* CheatManagerField() { return *GetNativePointerField<UShooterCheatManager * *>(this, "RCONClientConnection.CheatManager"); }
	bool& IsAuthenticatedField() { return *GetNativePointerField<bool*>(this, "RCONClientConnection.IsAuthenticated"); }
	bool& IsClosedField() { return *GetNativePointerField<bool*>(this, "RCONClientConnection.IsClosed"); }
	TArray<signed char>& DataBufferField() { return *GetNativePointerField<TArray<signed char>*>(this, "RCONClientConnection.DataBuffer"); }
	unsigned int& CurrentPacketSizeField() { return *GetNativePointerField<unsigned int*>(this, "RCONClientConnection.CurrentPacketSize"); }
	long double& LastReceiveTimeField() { return *GetNativePointerField<long double*>(this, "RCONClientConnection.LastReceiveTime"); }
	long double& LastSendKeepAliveTimeField() { return *GetNativePointerField<long double*>(this, "RCONClientConnection.LastSendKeepAliveTime"); }
	FString& ServerPasswordField() { return *GetNativePointerField<FString*>(this, "RCONClientConnection.ServerPassword"); }

	// Functions

	void Tick(long double WorldTime, UWorld* InWorld) { NativeCall<void, long double, UWorld*>(this, "RCONClientConnection.Tick", WorldTime, InWorld); }
	void ProcessRCONPacket(RCONPacket* Packet, UWorld* InWorld) { NativeCall<void, RCONPacket*, UWorld*>(this, "RCONClientConnection.ProcessRCONPacket", Packet, InWorld); }
	void SendMessageW(int Id, int Type, FString* OutGoingMessage) { NativeCall<void, int, int, FString*>(this, "RCONClientConnection.SendMessageW", Id, Type, OutGoingMessage); }
	void Close() { NativeCall<void>(this, "RCONClientConnection.Close"); }
};

struct RCONPacket
{
	int Length;
	int Id;
	int Type;
	FString Body;
};

struct UGameInstance;

struct UGameplayStatics
{

	// Functions

	static float BPPointPlaneDist(FVector* Point, FVector* PlaneBase, FVector* PlaneNormal) { return NativeCall<float, FVector*, FVector*, FVector*>(nullptr, "UGameplayStatics.BPPointPlaneDist", Point, PlaneBase, PlaneNormal); }
	static void ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse) { NativeCall<void, AActor*, float, AController*, AActor*, TSubclassOf<UDamageType>, float>(nullptr, "UGameplayStatics.ApplyDamage", DamagedActor, BaseDamage, EventInstigator, DamageCauser, DamageTypeClass, Impulse); }
	static void ApplyPointDamage(AActor* DamagedActor, float BaseDamage, FVector* HitFromDirection, FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse, bool bForceCollisionCheck, ECollisionChannel ForceCollisionCheckTraceChannel) { NativeCall<void, AActor*, float, FVector*, FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>, float, bool, ECollisionChannel>(nullptr, "UGameplayStatics.ApplyPointDamage", DamagedActor, BaseDamage, HitFromDirection, HitInfo, EventInstigator, DamageCauser, DamageTypeClass, Impulse, bForceCollisionCheck, ForceCollisionCheckTraceChannel); }
	static bool ApplyRadialDamage(UObject* WorldContextObject, float BaseDamage, FVector* Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor*>* IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse) { return NativeCall<bool, UObject*, float, FVector*, float, TSubclassOf<UDamageType>, TArray<AActor*>*, AActor*, AController*, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyRadialDamage", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse); }
	static bool ApplyRadialDamageIgnoreDamageActors(UObject* WorldContextObject, float BaseDamage, FVector* Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor*>* IgnoreActors, TArray<AActor*>* IgnoreDamageActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse) { return NativeCall<bool, UObject*, float, FVector*, float, TSubclassOf<UDamageType>, TArray<AActor*>*, TArray<AActor*>*, AActor*, AController*, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyRadialDamageIgnoreDamageActors", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, IgnoreDamageActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse); }
	static bool ApplyRadialDamageWithFalloff(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, FVector* Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor*>* IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, ECollisionChannel DamagePreventionChannel, float Impulse, TArray<AActor*>* IgnoreDamageActors, int NumAdditionalAttempts) { return NativeCall<bool, UObject*, float, float, FVector*, float, float, float, TSubclassOf<UDamageType>, TArray<AActor*>*, AActor*, AController*, ECollisionChannel, float, TArray<AActor*>*, int>(nullptr, "UGameplayStatics.ApplyRadialDamageWithFalloff", WorldContextObject, BaseDamage, MinimumDamage, Origin, DamageInnerRadius, DamageOuterRadius, DamageFalloff, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, DamagePreventionChannel, Impulse, IgnoreDamageActors, NumAdditionalAttempts); }
	static bool AreAnyListenersWithinRange(FVector Location, float MaximumRange) { return NativeCall<bool, FVector, float>(nullptr, "UGameplayStatics.AreAnyListenersWithinRange", Location, MaximumRange); }
	static FVector* BPPointPlaneProject(FVector* result, FVector* Point, FVector* PlaneBase, FVector* PlaneNorm) { return NativeCall<FVector*, FVector*, FVector*, FVector*, FVector*>(nullptr, "UGameplayStatics.BPPointPlaneProject", result, Point, PlaneBase, PlaneNorm); }
	static AActor* BeginSpawningActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, FTransform* SpawnTransform, bool bNoCollisionFail) { return NativeCall<AActor*, UObject*, UBlueprint*, FTransform*, bool>(nullptr, "UGameplayStatics.BeginSpawningActorFromBlueprint", WorldContextObject, Blueprint, SpawnTransform, bNoCollisionFail); }
	static AActor* BeginSpawningActorFromClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform* SpawnTransform, bool bNoCollisionFail) { return NativeCall<AActor*, UObject*, TSubclassOf<AActor>, FTransform*, bool>(nullptr, "UGameplayStatics.BeginSpawningActorFromClass", WorldContextObject, ActorClass, SpawnTransform, bNoCollisionFail); }
	static void BreakHitResult(FHitResult* Hit, FVector* Location, FVector* Normal, FVector* ImpactPoint, FVector* ImpactNormal, UPhysicalMaterial** PhysMat, AActor** HitActor, UPrimitiveComponent** HitComponent, FName* HitBoneName, int* HitItem, bool* BlockingHit) { NativeCall<void, FHitResult*, FVector*, FVector*, FVector*, FVector*, UPhysicalMaterial**, AActor**, UPrimitiveComponent**, FName*, int*, bool*>(nullptr, "UGameplayStatics.BreakHitResult", Hit, Location, Normal, ImpactPoint, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem, BlockingHit); }
	static void BreakHitResult_OLD(FHitResult* Hit, FVector* Location, FVector* Normal, FVector* ImpactPoint, FVector* ImpactNormal, UPhysicalMaterial** PhysMat, AActor** HitActor, UPrimitiveComponent** HitComponent, FName* HitBoneName, int* HitItem) { NativeCall<void, FHitResult*, FVector*, FVector*, FVector*, FVector*, UPhysicalMaterial**, AActor**, UPrimitiveComponent**, FName*, int*>(nullptr, "UGameplayStatics.BreakHitResult_OLD", Hit, Location, Normal, ImpactPoint, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem); }
	static APlayerController* CreatePlayer(UObject* WorldContextObject, int ControllerId, bool bSpawnPawn) { return NativeCall<APlayerController*, UObject*, int, bool>(nullptr, "UGameplayStatics.CreatePlayer", WorldContextObject, ControllerId, bSpawnPawn); }
	static void DeactivateReverbEffect(FName TagName) { NativeCall<void, FName>(nullptr, "UGameplayStatics.DeactivateReverbEffect", TagName); }
	static bool DeleteGameInSlot(FString* SlotName, const int UserIndex) { return NativeCall<bool, FString*, const int>(nullptr, "UGameplayStatics.DeleteGameInSlot", SlotName, UserIndex); }
	static bool DoesSaveGameExist(FString* SlotName, const int UserIndex) { return NativeCall<bool, FString*, const int>(nullptr, "UGameplayStatics.DoesSaveGameExist", SlotName, UserIndex); }
	static void EnableLiveStreaming(bool Enable) { NativeCall<void, bool>(nullptr, "UGameplayStatics.EnableLiveStreaming", Enable); }
	static AActor* FinishSpawningActor(AActor* Actor, FTransform* SpawnTransform) { return NativeCall<AActor*, AActor*, FTransform*>(nullptr, "UGameplayStatics.FinishSpawningActor", Actor, SpawnTransform); }
	static void GetAccurateRealTime(UObject* WorldContextObject, int* Seconds, float* PartialSeconds) { NativeCall<void, UObject*, int*, float*>(nullptr, "UGameplayStatics.GetAccurateRealTime", WorldContextObject, Seconds, PartialSeconds); }
	static FVector* GetActorArrayAverageLocation(FVector* result, TArray<AActor*>* Actors) { return NativeCall<FVector*, FVector*, TArray<AActor*>*>(nullptr, "UGameplayStatics.GetActorArrayAverageLocation", result, Actors); }
	static void GetActorArrayBounds(TArray<AActor*>* Actors, bool bOnlyCollidingComponents, FVector* Center, FVector* BoxExtent) { NativeCall<void, TArray<AActor*>*, bool, FVector*, FVector*>(nullptr, "UGameplayStatics.GetActorArrayBounds", Actors, bOnlyCollidingComponents, Center, BoxExtent); }
	static void GetAllActorsOfClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>* OutActors) { NativeCall<void, UObject*, TSubclassOf<AActor>, TArray<AActor*>*>(nullptr, "UGameplayStatics.GetAllActorsOfClass", WorldContextObject, ActorClass, OutActors); }
	static void GetAllActorsWithInterface(UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*>* OutActors) { NativeCall<void, UObject*, TSubclassOf<UInterface>, TArray<AActor*>*>(nullptr, "UGameplayStatics.GetAllActorsWithInterface", WorldContextObject, Interface, OutActors); }
	static float GetAudioTimeSeconds(UObject* WorldContextObject) { return NativeCall<float, UObject*>(nullptr, "UGameplayStatics.GetAudioTimeSeconds", WorldContextObject); }
	static UGameInstance* GetGameInstance(UObject* WorldContextObject) { return NativeCall<UGameInstance*, UObject*>(nullptr, "UGameplayStatics.GetGameInstance", WorldContextObject); }
	static AGameMode* GetGameMode(UObject* WorldContextObject) { return NativeCall<AGameMode*, UObject*>(nullptr, "UGameplayStatics.GetGameMode", WorldContextObject); }
	static AGameState* GetGameState(UObject* WorldContextObject) { return NativeCall<AGameState*, UObject*>(nullptr, "UGameplayStatics.GetGameState", WorldContextObject); }
	static float GetGlobalTimeDilation(UObject* WorldContextObject) { return NativeCall<float, UObject*>(nullptr, "UGameplayStatics.GetGlobalTimeDilation", WorldContextObject); }
	static UClass* GetObjectClass(UObject* Object) { return NativeCall<UClass*, UObject*>(nullptr, "UGameplayStatics.GetObjectClass", Object); }
	static FString* GetPlatformName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UGameplayStatics.GetPlatformName", result); }
	static APlayerCameraManager* GetPlayerCameraManager(UObject* WorldContextObject, int PlayerIndex) { return NativeCall<APlayerCameraManager*, UObject*, int>(nullptr, "UGameplayStatics.GetPlayerCameraManager", WorldContextObject, PlayerIndex); }
	static ACharacter* GetPlayerCharacter(UObject* WorldContextObject, int PlayerIndex) { return NativeCall<ACharacter*, UObject*, int>(nullptr, "UGameplayStatics.GetPlayerCharacter", WorldContextObject, PlayerIndex); }
	static APlayerController* GetPlayerController(UObject* WorldContextObject, int PlayerIndex) { return NativeCall<APlayerController*, UObject*, int>(nullptr, "UGameplayStatics.GetPlayerController", WorldContextObject, PlayerIndex); }
	static APawn* GetPlayerPawn(UObject* WorldContextObject, int PlayerIndex) { return NativeCall<APawn*, UObject*, int>(nullptr, "UGameplayStatics.GetPlayerPawn", WorldContextObject, PlayerIndex); }
	static float GetRealTimeSeconds(UObject* WorldContextObject) { return NativeCall<float, UObject*>(nullptr, "UGameplayStatics.GetRealTimeSeconds", WorldContextObject); }
	static EPhysicalSurface GetSurfaceType(FHitResult* Hit) { return NativeCall<EPhysicalSurface, FHitResult*>(nullptr, "UGameplayStatics.GetSurfaceType", Hit); }
	static float GetWorldDeltaSeconds(UObject* WorldContextObject) { return NativeCall<float, UObject*>(nullptr, "UGameplayStatics.GetWorldDeltaSeconds", WorldContextObject); }
	static FIntVector* GetWorldOriginLocation(FIntVector* result, UObject* WorldContextObject) { return NativeCall<FIntVector*, FIntVector*, UObject*>(nullptr, "UGameplayStatics.GetWorldOriginLocation", result, WorldContextObject); }
	static bool IsGamePaused(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UGameplayStatics.IsGamePaused", WorldContextObject); }
	static bool IsGameWorld(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UGameplayStatics.IsGameWorld", WorldContextObject); }
	static void LoadStreamLevel(UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, FName, bool, bool, FLatentActionInfo>(nullptr, "UGameplayStatics.LoadStreamLevel", WorldContextObject, LevelName, bMakeVisibleAfterLoad, bShouldBlockOnLoad, LatentInfo); }
	static void OpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString Options) { NativeCall<void, UObject*, FName, bool, FString>(nullptr, "UGameplayStatics.OpenLevel", WorldContextObject, LevelName, bAbsolute, Options); }
	static void PlayDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext* Context, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) { NativeCall<void, UObject*, UDialogueWave*, FDialogueContext*, FVector, float, float, float, USoundAttenuation*>(nullptr, "UGameplayStatics.PlayDialogueAtLocation", WorldContextObject, Dialogue, Context, Location, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings); }
	static UAudioComponent* PlayDialogueAttached(UDialogueWave* Dialogue, FDialogueContext* Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) { return NativeCall<UAudioComponent*, UDialogueWave*, FDialogueContext*, USceneComponent*, FName, FVector, EAttachLocation::Type, bool, float, float, float, USoundAttenuation*>(nullptr, "UGameplayStatics.PlayDialogueAttached", Dialogue, Context, AttachToComponent, AttachPointName, Location, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings); }
	static void PlaySound(UObject* WorldContextObject, USoundCue* InSoundCue, USceneComponent* AttachComponent, FName AttachName, bool bFollow, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, UObject*, USoundCue*, USceneComponent*, FName, bool, float, float>(nullptr, "UGameplayStatics.PlaySound", WorldContextObject, InSoundCue, AttachComponent, AttachName, bFollow, VolumeMultiplier, PitchMultiplier); }
	static void PlaySoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAlwaysPlay) { NativeCall<void, UObject*, USoundBase*, FVector, float, float, float, USoundAttenuation*, bool>(nullptr, "UGameplayStatics.PlaySoundAtLocation", WorldContextObject, Sound, Location, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, bAlwaysPlay); }
	static UAudioComponent* PlaySoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAlwaysPlay) { return NativeCall<UAudioComponent*, USoundBase*, USceneComponent*, FName, FVector, EAttachLocation::Type, bool, float, float, float, USoundAttenuation*, bool>(nullptr, "UGameplayStatics.PlaySoundAttached", Sound, AttachToComponent, AttachPointName, Location, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, bAlwaysPlay); }
	static void PopSoundMixModifier(USoundMix* InSoundMixModifier) { NativeCall<void, USoundMix*>(nullptr, "UGameplayStatics.PopSoundMixModifier", InSoundMixModifier); }
	static void PushSoundMixModifier(USoundMix* InSoundMixModifier) { NativeCall<void, USoundMix*>(nullptr, "UGameplayStatics.PushSoundMixModifier", InSoundMixModifier); }
	static void SetBaseSoundMix(USoundMix* InSoundMix) { NativeCall<void, USoundMix*>(nullptr, "UGameplayStatics.SetBaseSoundMix", InSoundMix); }
	static bool SetGamePaused(UObject* WorldContextObject, bool bPaused) { return NativeCall<bool, UObject*, bool>(nullptr, "UGameplayStatics.SetGamePaused", WorldContextObject, bPaused); }
	static void SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation) { NativeCall<void, UObject*, float>(nullptr, "UGameplayStatics.SetGlobalTimeDilation", WorldContextObject, TimeDilation); }
	static void SetWorldOriginLocation(UObject* WorldContextObject, FIntVector NewLocation) { NativeCall<void, UObject*, FIntVector>(nullptr, "UGameplayStatics.SetWorldOriginLocation", WorldContextObject, NewLocation); }
	static void UnloadStreamLevel(UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, FName, FLatentActionInfo>(nullptr, "UGameplayStatics.UnloadStreamLevel", WorldContextObject, LevelName, LatentInfo); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UGameplayStatics.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesUGameplayStatics() { NativeCall<void>(nullptr, "UGameplayStatics.StaticRegisterNativesUGameplayStatics"); }
};

struct FItemMultiplier
{
	TSubclassOf<UPrimalItem> ItemClass;
	float ItemMultiplier;
};

struct APrimalBuff
{
	float& DeactivationLifespanField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivationLifespan"); }
	FName& InstigatorAttachmentSocketField() { return *GetNativePointerField<FName*>(this, "APrimalBuff.InstigatorAttachmentSocket"); }
	float& RemoteForcedFleeDurationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.RemoteForcedFleeDuration"); }
	FVector& AoETraceToTargetsStartOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.AoETraceToTargetsStartOffset"); }
	TWeakObjectPtr<AActor>& TargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalBuff.Target"); }
	TWeakObjectPtr<UPrimalItem>& InstigatorItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem>*>(this, "APrimalBuff.InstigatorItem"); }
	float& SlowInstigatorFallingAddZVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingAddZVelocity"); }
	float& SlowInstigatorFallingDampenZVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingDampenZVelocity"); }
	float& DeactivateAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivateAfterTime"); }
	float& WeaponRecoilMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.WeaponRecoilMultiplier"); }
	float& ReceiveDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ReceiveDamageMultiplier"); }
	float& MeleeDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MeleeDamageMultiplier"); }
	float& DepleteInstigatorItemDurabilityPerSecondField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DepleteInstigatorItemDurabilityPerSecond"); }
	FieldArray<float, 12> ValuesToAddPerSecondField() { return { this, "APrimalBuff.ValuesToAddPerSecond" }; }
	float& CharacterAdd_DefaultHyperthermicInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHyperthermicInsulation"); }
	float& CharacterAdd_DefaultHypothermicInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHypothermicInsulation"); }
	float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
	float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
	float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
	float& ViewMinExposureMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMinExposureMultiplier"); }
	float& ViewMaxExposureMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMaxExposureMultiplier"); }
	float& XPtoAddField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAdd"); }
	float& XPtoAddRateField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAddRate"); }
	bool& bDeactivateAfterAddingXPField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDeactivateAfterAddingXP"); }
	float& SubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxSpeedModifier"); }
	float& UnsubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxSpeedModifier"); }
	long double& BuffStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.BuffStartTime"); }
	UMaterialInterface* BuffPostProcessEffectField() { return *GetNativePointerField<UMaterialInterface * *>(this, "APrimalBuff.BuffPostProcessEffect"); }
	TArray<TSubclassOf<AActor>>& PreventActorClassesTargetingField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "APrimalBuff.PreventActorClassesTargeting"); }
	TArray<float>& PreventActorClassesTargetingRangesField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalBuff.PreventActorClassesTargetingRanges"); }
	TSubclassOf<APrimalBuff>& AOEOtherBuffToApplyField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalBuff.AOEOtherBuffToApply"); }
	float& AOEBuffRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffRange"); }
	float& CharacterAOEBuffDamageField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffDamage"); }
	float& CharacterAOEBuffResistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffResistance"); }
	float& Maximum2DVelocityForStaminaRecoveryField() { return *GetNativePointerField<float*>(this, "APrimalBuff.Maximum2DVelocityForStaminaRecovery"); }
	TArray<UMaterialInterface*> PostprocessBlendablesToExcludeField() { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuff.PostprocessBlendablesToExclude"); }
	TArray<TWeakObjectPtr<APrimalCharacter>>& BuffedCharactersField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalCharacter>>*>(this, "APrimalBuff.BuffedCharacters"); }
	long double& LastItemDurabilityDepletionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastItemDurabilityDepletionTime"); }
	TSubclassOf<APrimalBuff>& BuffToGiveOnDeactivationField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalBuff.BuffToGiveOnDeactivation"); }
	TArray<TSubclassOf<APrimalBuff>>& BuffClassesToCancelOnActivationField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>>*>(this, "APrimalBuff.BuffClassesToCancelOnActivation"); }
	TArray<TSubclassOf<APrimalBuff>>& ActivePreventsBuffClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalBuff>>*>(this, "APrimalBuff.ActivePreventsBuffClasses"); }
	TArray<TSubclassOf<APrimalCharacter>>& BuffRequiresOwnerClassField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalCharacter>>*>(this, "APrimalBuff.BuffRequiresOwnerClass"); }
	TArray<TSubclassOf<APrimalCharacter>>& BuffPreventsOwnerClassField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalCharacter>>*>(this, "APrimalBuff.BuffPreventsOwnerClass"); }
	float& XPEarningMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPEarningMultiplier"); }
	bool& bUseBPSetupForInstigatorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPSetupForInstigator"); }
	bool& bUseBPDeactivatedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPDeactivated"); }
	bool& bUseBPCustomAllowAddBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPCustomAllowAddBuff"); }
	FVector& staticPathingDestinationField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.staticPathingDestination"); }
	long double& TickingDeactivationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TickingDeactivationTime"); }
	UPrimalBuffPersistentData* MyBuffPersistentDataField() { return *GetNativePointerField<UPrimalBuffPersistentData * *>(this, "APrimalBuff.MyBuffPersistentData"); }
	TSubclassOf<UPrimalBuffPersistentData>& BuffPersistentDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalBuffPersistentData>*>(this, "APrimalBuff.BuffPersistentDataClass"); }
	TWeakObjectPtr<AActor>& DamageCauserField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalBuff.DamageCauser"); }
	USoundBase* ExtraActivationSoundToPlayField() { return *GetNativePointerField<USoundBase * *>(this, "APrimalBuff.ExtraActivationSoundToPlay"); }
	bool& bPersistentBuffSurvivesLevelUpField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bPersistentBuffSurvivesLevelUp"); }
	float& AoEApplyDamageField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamage"); }
	float& AoEApplyDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamageInterval"); }
	TSubclassOf<UDamageType>& AoEApplyDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalBuff.AoEApplyDamageType"); }
	TSubclassOf<APrimalBuff>& ForceNetworkSpatializationMaxLimitBuffTypeField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "APrimalBuff.ForceNetworkSpatializationMaxLimitBuffType"); }
	int& ForceNetworkSpatializationBuffMaxLimitNumField() { return *GetNativePointerField<int*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitNum"); }
	float& ForceNetworkSpatializationBuffMaxLimitRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitRange"); }
	float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.InsulationRange"); }
	float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.HyperThermiaInsulation"); }
	float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.HypoThermiaInsulation"); }
	FVector& AoEBuffLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.AoEBuffLocOffset"); }
	TArray<TSubclassOf<AActor>>& AoEClassesToIncludeField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "APrimalBuff.AoEClassesToInclude"); }
	TArray<TSubclassOf<AActor>>& AoEClassesToExcludeField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "APrimalBuff.AoEClassesToExclude"); }
	bool& bUseBPExcludeAoEActorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPExcludeAoEActor"); }
	bool& bOverrideBuffDescriptionField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideBuffDescription"); }
	bool& bOnlyTickWhenPossessedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOnlyTickWhenPossessed"); }
	bool& bDestroyWhenUnpossessedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDestroyWhenUnpossessed"); }
	long double& LastAoEApplyDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastAoEApplyDamageTime"); }
	float& OnlyForInstigatorSoundFadeInTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.OnlyForInstigatorSoundFadeInTime"); }
	bool& bUseBuffTickServerField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBuffTickServer"); }
	bool& bUseBuffTickClientField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBuffTickClient"); }
	float& BuffTickServerMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMaxTime"); }
	float& BuffTickServerMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMinTime"); }
	float& BuffTickClientMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMaxTime"); }
	float& BuffTickClientMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMinTime"); }
	long double& LastBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeServer"); }
	long double& LastBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeClient"); }
	long double& NextBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeServer"); }
	long double& NextBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeClient"); }
	bool& bTickFunctionDisabledField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bTickFunctionDisabled"); }
	bool& bWasStasisedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bWasStasised"); }
	int& AddBuffMaxNumStacksField() { return *GetNativePointerField<int*>(this, "APrimalBuff.AddBuffMaxNumStacks"); }
	USoundBase* DeactivatedSoundField() { return *GetNativePointerField<USoundBase * *>(this, "APrimalBuff.DeactivatedSound"); }
	bool& bDeactivatedSoundOnlyLocalField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDeactivatedSoundOnlyLocal"); }
	bool& bDisableBloomField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableBloom"); }
	bool& bBPOverrideCharacterNewFallVelocityField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBPOverrideCharacterNewFallVelocity"); }
	bool& bBPModifyCharacterFOVField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBPModifyCharacterFOV"); }
	bool& bDisableLightShaftsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableLightShafts"); }
	float& PostProcessInterpSpeedDownField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedDown"); }
	float& PostProcessInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedUp"); }
	float& TPVCameraSpeedInterpolationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.TPVCameraSpeedInterpolationMultiplier"); }
	bool& bIsCarryBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bIsCarryBuff"); }
	long double& TimeForNextAOECheckField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TimeForNextAOECheck"); }
	float& AOEBuffIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMin"); }
	float& AOEBuffIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMax"); }
	float& MaximumVelocityZForSlowingFallField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MaximumVelocityZForSlowingFall"); }
	int& FNameIntField() { return *GetNativePointerField<int*>(this, "APrimalBuff.FNameInt"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bSlowInstigatorFalling() { return { this, "APrimalBuff.bSlowInstigatorFalling" }; }
	BitFieldValue<bool, unsigned __int32> bDeactivateOnJump() { return { this, "APrimalBuff.bDeactivateOnJump" }; }
	BitFieldValue<bool, unsigned __int32> bPreventJump() { return { this, "APrimalBuff.bPreventJump" }; }
	BitFieldValue<bool, unsigned __int32> bDeactivated() { return { this, "APrimalBuff.bDeactivated" }; }
	BitFieldValue<bool, unsigned __int32> bUsesInstigator() { return { this, "APrimalBuff.bUsesInstigator" }; }
	BitFieldValue<bool, unsigned __int32> bFollowTarget() { return { this, "APrimalBuff.bFollowTarget" }; }
	BitFieldValue<bool, unsigned __int32> bAddCharacterValues() { return { this, "APrimalBuff.bAddCharacterValues" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyAddCharacterValuesUnderwater() { return { this, "APrimalBuff.bOnlyAddCharacterValuesUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bDisableIfCharacterUnderwater() { return { this, "APrimalBuff.bDisableIfCharacterUnderwater" }; }
	BitFieldValue<bool, unsigned __int32> bUseInstigatorItem() { return { this, "APrimalBuff.bUseInstigatorItem" }; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnTargetStasis() { return { this, "APrimalBuff.bDestroyOnTargetStasis" }; }
	BitFieldValue<bool, unsigned __int32> bAoETraceToTargets() { return { this, "APrimalBuff.bAoETraceToTargets" }; }
	BitFieldValue<bool, unsigned __int32> bAOEOnlyApplyOtherBuffToWildDinos() { return { this, "APrimalBuff.bAOEOnlyApplyOtherBuffToWildDinos" }; }
	BitFieldValue<bool, unsigned __int32> bAoEIgnoreDinosTargetingInstigator() { return { this, "APrimalBuff.bAoEIgnoreDinosTargetingInstigator" }; }
	BitFieldValue<bool, unsigned __int32> bAoEOnlyOnDinosTargetingInstigator() { return { this, "APrimalBuff.bAoEOnlyOnDinosTargetingInstigator" }; }
	BitFieldValue<bool, unsigned __int32> bBuffForceNoTick() { return { this, "APrimalBuff.bBuffForceNoTick" }; }
	BitFieldValue<bool, unsigned __int32> bBuffForceNoTickDedicated() { return { this, "APrimalBuff.bBuffForceNoTickDedicated" }; }
	BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth() { return { this, "APrimalBuff.bCustomDepthStencilIgnoreHealth" }; }
	BitFieldValue<bool, unsigned __int32> bUseActivateSoundFadeInDuration() { return { this, "APrimalBuff.bUseActivateSoundFadeInDuration" }; }
	BitFieldValue<bool, unsigned __int32> bDinoIgnoreBuffPostprocessEffectWhenRidden() { return { this, "APrimalBuff.bDinoIgnoreBuffPostprocessEffectWhenRidden" }; }
	BitFieldValue<bool, unsigned __int32> bPlayerIgnoreBuffPostprocessEffectWhenRidingDino() { return { this, "APrimalBuff.bPlayerIgnoreBuffPostprocessEffectWhenRidingDino" }; }
	BitFieldValue<bool, unsigned __int32> bRemoteForcedFlee() { return { this, "APrimalBuff.bRemoteForcedFlee" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyActivateSoundForInstigator() { return { this, "APrimalBuff.bOnlyActivateSoundForInstigator" }; }
	BitFieldValue<bool, unsigned __int32> bAOEBuffCarnosOnly() { return { this, "APrimalBuff.bAOEBuffCarnosOnly" }; }
	BitFieldValue<bool, unsigned __int32> bModifyMaxSpeed() { return { this, "APrimalBuff.bModifyMaxSpeed" }; }
	BitFieldValue<bool, unsigned __int32> bDisplayHUDProgressBar() { return { this, "APrimalBuff.bDisplayHUDProgressBar" }; }
	BitFieldValue<bool, unsigned __int32> bForceUsePreventTargeting() { return { this, "APrimalBuff.bForceUsePreventTargeting" }; }
	BitFieldValue<bool, unsigned __int32> bForceUsePreventTargetingTurret() { return { this, "APrimalBuff.bForceUsePreventTargetingTurret" }; }
	BitFieldValue<bool, unsigned __int32> bBPOverrideWeaponBob() { return { this, "APrimalBuff.bBPOverrideWeaponBob" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPModifyPlayerBoneModifiers() { return { this, "APrimalBuff.bUseBPModifyPlayerBoneModifiers" }; }
	BitFieldValue<bool, unsigned __int32> bDediServerUseBPModifyPlayerBoneModifiers() { return { this, "APrimalBuff.bDediServerUseBPModifyPlayerBoneModifiers" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNonDedicatedPlayerPostAnimUpdate() { return { this, "APrimalBuff.bUseBPNonDedicatedPlayerPostAnimUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsCharacterHardAttached() { return { this, "APrimalBuff.bUseBPIsCharacterHardAttached" }; }
	BitFieldValue<bool, unsigned __int32> bDoCharacterDetachment() { return { this, "APrimalBuff.bDoCharacterDetachment" }; }
	BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeRiding() { return { this, "APrimalBuff.bDoCharacterDetachmentIncludeRiding" }; }
	BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeCarrying() { return { this, "APrimalBuff.bDoCharacterDetachmentIncludeCarrying" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPInitializedCharacterAnimScriptInstance() { return { this, "APrimalBuff.bUseBPInitializedCharacterAnimScriptInstance" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPCanBeCarried() { return { this, "APrimalBuff.bUseBPCanBeCarried" }; }
	BitFieldValue<bool, unsigned __int32> bUsePostAdjustDamage() { return { this, "APrimalBuff.bUsePostAdjustDamage" }; }
	BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnPlayers() { return { this, "APrimalBuff.bAOEApplyOtherBuffOnPlayers" }; }
	BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnDinos() { return { this, "APrimalBuff.bAOEApplyOtherBuffOnDinos" }; }
	BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffIgnoreSameTeam() { return { this, "APrimalBuff.bAOEApplyOtherBuffIgnoreSameTeam" }; }
	BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffRequireSameTeam() { return { this, "APrimalBuff.bAOEApplyOtherBuffRequireSameTeam" }; }
	BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUD() { return { this, "APrimalBuff.bBuffDrawFloatingHUD" }; }
	BitFieldValue<bool, unsigned __int32> bAddResetsBuffTime() { return { this, "APrimalBuff.bAddResetsBuffTime" }; }
	BitFieldValue<bool, unsigned __int32> bAoEBuffAllowIfAlreadyBuffed() { return { this, "APrimalBuff.bAoEBuffAllowIfAlreadyBuffed" }; }
	BitFieldValue<bool, unsigned __int32> bNetResetBuffStart() { return { this, "APrimalBuff.bNetResetBuffStart" }; }
	BitFieldValue<bool, unsigned __int32> bImmobilizeTarget() { return { this, "APrimalBuff.bImmobilizeTarget" }; }
	BitFieldValue<bool, unsigned __int32> bForcePlayerProne() { return { this, "APrimalBuff.bForcePlayerProne" }; }
	BitFieldValue<bool, unsigned __int32> bHideBuffFromHUD() { return { this, "APrimalBuff.bHideBuffFromHUD" }; }
	BitFieldValue<bool, unsigned __int32> bHideTimerFromHUD() { return { this, "APrimalBuff.bHideTimerFromHUD" }; }
	BitFieldValue<bool, unsigned __int32> bBPAddMultiUseEntries() { return { this, "APrimalBuff.bBPAddMultiUseEntries" }; }
	BitFieldValue<bool, unsigned __int32> bIsBuffPersistent() { return { this, "APrimalBuff.bIsBuffPersistent" }; }
	BitFieldValue<bool, unsigned __int32> bBPUseBumpedByPawn() { return { this, "APrimalBuff.bBPUseBumpedByPawn" }; }
	BitFieldValue<bool, unsigned __int32> bBPUseBumpedPawn() { return { this, "APrimalBuff.bBPUseBumpedPawn" }; }
	BitFieldValue<bool, unsigned __int32> bAllowBuffWhenInstigatorDead() { return { this, "APrimalBuff.bAllowBuffWhenInstigatorDead" }; }
	BitFieldValue<bool, unsigned __int32> bNotifyDamage() { return { this, "APrimalBuff.bNotifyDamage" }; }
	BitFieldValue<bool, unsigned __int32> bAllowBuffStasis() { return { this, "APrimalBuff.bAllowBuffStasis" }; }
	BitFieldValue<bool, unsigned __int32> bApplyStatModifierToPlayers() { return { this, "APrimalBuff.bApplyStatModifierToPlayers" }; }
	BitFieldValue<bool, unsigned __int32> bApplyStatModifierToDinos() { return { this, "APrimalBuff.bApplyStatModifierToDinos" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnWildDino() { return { this, "APrimalBuff.bPreventOnWildDino" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnDino() { return { this, "APrimalBuff.bPreventOnDino" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnPlayer() { return { this, "APrimalBuff.bPreventOnPlayer" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnBigDino() { return { this, "APrimalBuff.bPreventOnBigDino" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnBossDino() { return { this, "APrimalBuff.bPreventOnBossDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsDisease() { return { this, "APrimalBuff.bIsDisease" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventAddingOtherBuff() { return { this, "APrimalBuff.bUseBPPreventAddingOtherBuff" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning() { return { this, "APrimalBuff.bUseBPPreventRunning" }; }
	BitFieldValue<bool, unsigned __int32> bAoEApplyDamageAllTargetables() { return { this, "APrimalBuff.bAoEApplyDamageAllTargetables" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPActivated() { return { this, "APrimalBuff.bUseBPActivated" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventFlight() { return { this, "APrimalBuff.bUseBPPreventFlight" }; }
	BitFieldValue<bool, unsigned __int32> bRequireController() { return { this, "APrimalBuff.bRequireController" }; }
	BitFieldValue<bool, unsigned __int32> bDontPlayInstigatorActiveSoundOnDino() { return { this, "APrimalBuff.bDontPlayInstigatorActiveSoundOnDino" }; }
	BitFieldValue<bool, unsigned __int32> bAddExtendBuffTime() { return { this, "APrimalBuff.bAddExtendBuffTime" }; }
	BitFieldValue<bool, unsigned __int32> bUseTickingDeactivation() { return { this, "APrimalBuff.bUseTickingDeactivation" }; }
	BitFieldValue<bool, unsigned __int32> bCheckPreventInput() { return { this, "APrimalBuff.bCheckPreventInput" }; }
	BitFieldValue<bool, unsigned __int32> bBPDrawBuffStatusHUD() { return { this, "APrimalBuff.bBPDrawBuffStatusHUD" }; }
	BitFieldValue<bool, unsigned __int32> bEnableStaticPathing() { return { this, "APrimalBuff.bEnableStaticPathing" }; }
	BitFieldValue<bool, unsigned __int32> bHUDFormatTimerAsTimecode() { return { this, "APrimalBuff.bHUDFormatTimerAsTimecode" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventThrowingItem() { return { this, "APrimalBuff.bUseBPPreventThrowingItem" }; }
	BitFieldValue<bool, unsigned __int32> bPreventInputDoesOffset() { return { this, "APrimalBuff.bPreventInputDoesOffset" }; }
	BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained() { return { this, "APrimalBuff.bNotifyExperienceGained" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyTickWhenVisible() { return { this, "APrimalBuff.bOnlyTickWhenVisible" }; }
	BitFieldValue<bool, unsigned __int32> bBPAdjustStatusValueModification() { return { this, "APrimalBuff.bBPAdjustStatusValueModification" }; }
	BitFieldValue<bool, unsigned __int32> bWasDestroyed() { return { this, "APrimalBuff.bWasDestroyed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffActivated() { return { this, "APrimalBuff.bUseBPNotifyOtherBuffActivated" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffDeactivated() { return { this, "APrimalBuff.bUseBPNotifyOtherBuffDeactivated" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventFirstPerson() { return { this, "APrimalBuff.bUseBPPreventFirstPerson" }; }
	BitFieldValue<bool, unsigned __int32> bForceAddUnderwaterCharacterStatusValues() { return { this, "APrimalBuff.bForceAddUnderwaterCharacterStatusValues" }; }

	// Functions

	bool TemplateAllowActorSpawn(UWorld* World, FVector* AtLocation, FRotator* AtRotation, FActorSpawnParameters* SpawnParameters) { return NativeCall<bool, UWorld*, FVector*, FRotator*, FActorSpawnParameters*>(this, "APrimalBuff.TemplateAllowActorSpawn", World, AtLocation, AtRotation, SpawnParameters); }
	void Deactivate() { NativeCall<void>(this, "APrimalBuff.Deactivate"); }
	void NetDeactivate_Implementation() { NativeCall<void>(this, "APrimalBuff.NetDeactivate_Implementation"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalBuff.BeginPlay"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty>*>(this, "APrimalBuff.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void AddDamageStatusValueModifier(APrimalCharacter* addToCharacter, EPrimalCharacterStatusValue::Type ValueType, bool bSpeedToAddInSeconds, bool bContinueOnUnchangedValue, bool bResetExistingModifierDescriptionIndex, bool bSetValue, bool bSetAdditionalValue, float LimitExistingModifierDescriptionToMaxAmount, float damageMultiplierAmountToAdd, float speedToAdd, int StatusValueModifierDescriptionIndex, bool bUsePercentualDamage, bool bMakeUntameable, float percentualDamage, TSubclassOf<UDamageType> ScaleValueByCharacterDamageType) { NativeCall<void, APrimalCharacter*, EPrimalCharacterStatusValue::Type, bool, bool, bool, bool, bool, float, float, float, int, bool, bool, float, TSubclassOf<UDamageType>>(this, "APrimalBuff.AddDamageStatusValueModifier", addToCharacter, ValueType, bSpeedToAddInSeconds, bContinueOnUnchangedValue, bResetExistingModifierDescriptionIndex, bSetValue, bSetAdditionalValue, LimitExistingModifierDescriptionToMaxAmount, damageMultiplierAmountToAdd, speedToAdd, StatusValueModifierDescriptionIndex, bUsePercentualDamage, bMakeUntameable, percentualDamage, ScaleValueByCharacterDamageType); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff.SetupForInstigator"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff.Tick", DeltaSeconds); }
	void ProcessStaticPathing(bool triggerRunning) { NativeCall<void, bool>(this, "APrimalBuff.ProcessStaticPathing", triggerRunning); }
	FVector* UpdateStaticPathingDestination(FVector* result, FVector locOverride, float randomOffsetMultiplier, bool useRandomNegativeXDir, bool orientRandOffsetByRotation, FRotator randOffsetByRotation, float GroundCheckSpreadOverride) { return NativeCall<FVector*, FVector*, FVector, float, bool, bool, FRotator, float>(this, "APrimalBuff.UpdateStaticPathingDestination", result, locOverride, randomOffsetMultiplier, useRandomNegativeXDir, orientRandOffsetByRotation, randOffsetByRotation, GroundCheckSpreadOverride); }
	void EnableTickFunction() { NativeCall<void>(this, "APrimalBuff.EnableTickFunction"); }
	bool AOEBuffCanAffect(APrimalCharacter* forChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalBuff.AOEBuffCanAffect", forChar); }
	void InstigatorJumped() { NativeCall<void>(this, "APrimalBuff.InstigatorJumped"); }
	void Destroyed() { NativeCall<void>(this, "APrimalBuff.Destroyed"); }
	void NetResetBuffStart_Implementation() { NativeCall<void>(this, "APrimalBuff.NetResetBuffStart_Implementation"); }
	bool ResetBuffStart() { return NativeCall<bool>(this, "APrimalBuff.ResetBuffStart"); }
	APrimalBuff* AddBuff(APrimalCharacter* ForCharacter, AActor* DamageCauser) { return NativeCall<APrimalBuff*, APrimalCharacter*, AActor*>(this, "APrimalBuff.AddBuff", ForCharacter, DamageCauser); }
	static APrimalBuff* StaticAddBuff(TSubclassOf<APrimalBuff> BuffClass, APrimalCharacter* ForCharacter, UPrimalItem* AssociatedItem, AActor* DamageCauser, bool bForceOnClient) { return NativeCall<APrimalBuff*, TSubclassOf<APrimalBuff>, APrimalCharacter*, UPrimalItem*, AActor*, bool>(nullptr, "APrimalBuff.StaticAddBuff", BuffClass, ForCharacter, AssociatedItem, DamageCauser, bForceOnClient); }
	bool ExcludePostProcessBlendableMaterial(UMaterialInterface* BlendableMaterialInterface) { return NativeCall<bool, UMaterialInterface*>(this, "APrimalBuff.ExcludePostProcessBlendableMaterial", BlendableMaterialInterface); }
	bool PreventActorTargeting_Implementation(AActor* ByActor) { return NativeCall<bool, AActor*>(this, "APrimalBuff.PreventActorTargeting_Implementation", ByActor); }
	bool PreventRunning() { return NativeCall<bool>(this, "APrimalBuff.PreventRunning"); }
	bool ExcludeAoEActor(AActor* ActorToConsider) { return NativeCall<bool, AActor*>(this, "APrimalBuff.ExcludeAoEActor", ActorToConsider); }
	bool HideBuffFromHUD_Implementation() { return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD_Implementation"); }
	void Stasis() { NativeCall<void>(this, "APrimalBuff.Stasis"); }
	void Unstasis() { NativeCall<void>(this, "APrimalBuff.Unstasis"); }
	bool ExtendBuffTime(float AmountOfAdditionalTime) { return NativeCall<bool, float>(this, "APrimalBuff.ExtendBuffTime", AmountOfAdditionalTime); }
	int GetBuffType_Implementation() { return NativeCall<int>(this, "APrimalBuff.GetBuffType_Implementation"); }
	bool ReduceBuffTime(float AmountOfTimeToReduce) { return NativeCall<bool, float>(this, "APrimalBuff.ReduceBuffTime", AmountOfTimeToReduce); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBuff.StaticClass"); }
	static void StaticRegisterNativesAPrimalBuff() { NativeCall<void>(nullptr, "APrimalBuff.StaticRegisterNativesAPrimalBuff"); }
	void BPDrawBuffStatusHUD(AShooterHUD* HUD, float XPos, float YPos, float ScaleMult) { NativeCall<void, AShooterHUD*, float, float, float>(this, "APrimalBuff.BPDrawBuffStatusHUD", HUD, XPos, YPos, ScaleMult); }
	float BuffAdjustDamage(float Damage, FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { return NativeCall<float, float, FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffAdjustDamage", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
	void BuffPostAdjustDamage(float Damage, FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { NativeCall<void, float, FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffPostAdjustDamage", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
	void BuffTickClient(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickClient", DeltaTime); }
	void BuffTickServer(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickServer", DeltaTime); }
	void DrawBuffFloatingHUD(int BuffIndex, AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, int, AShooterHUD*, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD", BuffIndex, HUD, CenterX, CenterY, DrawScale); }
	void NotifyDamage(float DamageAmount, TSubclassOf<UDamageType> DamageClass, AController* EventInstigator, AActor* TheDamageCauser) { NativeCall<void, float, TSubclassOf<UDamageType>, AController*, AActor*>(this, "APrimalBuff.NotifyDamage", DamageAmount, DamageClass, EventInstigator, TheDamageCauser); }
	bool PreventActorTargeting(AActor* ByActor) { return NativeCall<bool, AActor*>(this, "APrimalBuff.PreventActorTargeting", ByActor); }
	void SetBuffCauser(AActor* CausedBy) { NativeCall<void, AActor*>(this, "APrimalBuff.SetBuffCauser", CausedBy); }
};

struct UPrimalEngramEntry : UObject
{
	int& RequiredCharacterLevelField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredCharacterLevel"); }
	int& RequiredEngramPointsField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredEngramPoints"); }
	TSubclassOf<UPrimalItem>& BluePrintEntryField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalEngramEntry.BluePrintEntry"); }
	FString& ExtraEngramDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalEngramEntry.ExtraEngramDescription"); }
	TArray<FEngramEntries>& EngramRequirementSetsField() { return *GetNativePointerField<TArray<FEngramEntries>*>(this, "UPrimalEngramEntry.EngramRequirementSets"); }
	int& MyEngramIndexField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.MyEngramIndex"); }
	TEnumAsByte<enum EEngramGroup::Type>& EngramGroupField() { return *GetNativePointerField<TEnumAsByte<enum EEngramGroup::Type>*>(this, "UPrimalEngramEntry.EngramGroup"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bGiveBlueprintToPlayerInventory() { return { this, "UPrimalEngramEntry.bGiveBlueprintToPlayerInventory" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeManuallyUnlocked() { return { this, "UPrimalEngramEntry.bCanBeManuallyUnlocked" }; }

	// Functions

	UObject* GetObjectW() { return NativeCall<UObject*>(this, "UPrimalEngramEntry.GetObjectW"); }
	FString* GetEntryString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalEngramEntry.GetEntryString", result); }
	UTexture2D* GetEntryIcon(UObject* AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "UPrimalEngramEntry.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	bool MeetsEngramRequirements(AShooterPlayerState* aPlayerState, bool bOnlyCheckLevel, bool bDontCheckEngramPreRequirements) { return NativeCall<bool, AShooterPlayerState*, bool, bool>(this, "UPrimalEngramEntry.MeetsEngramRequirements", aPlayerState, bOnlyCheckLevel, bDontCheckEngramPreRequirements); }
	bool MeetsEngramChainRequirements(AShooterPlayerState* aPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "UPrimalEngramEntry.MeetsEngramChainRequirements", aPlayerState); }
	FString* GetEngramDescription(FString* result, AShooterPlayerState* aPlayerState) { return NativeCall<FString*, FString*, AShooterPlayerState*>(this, "UPrimalEngramEntry.GetEngramDescription", result, aPlayerState); }
	FString* GetEngramName(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalEngramEntry.GetEngramName", result); }
	int GetRequiredEngramPoints() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredEngramPoints"); }
	int GetRequiredLevel() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredLevel"); }
	bool UseEngramRequirementSets() { return NativeCall<bool>(this, "UPrimalEngramEntry.UseEngramRequirementSets"); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "UPrimalEngramEntry.IsEngramClassHidden", ForItemClass); }
	void GetAllChainedPreReqs(AShooterPlayerState* aPlayerState, TArray<TSubclassOf<UPrimalEngramEntry>>* TestedEntries) { NativeCall<void, AShooterPlayerState*, TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalEngramEntry.GetAllChainedPreReqs", aPlayerState, TestedEntries); }
	int GetChainRequiredEngramPoints(TArray<TSubclassOf<UPrimalEngramEntry>>* TestedEntries) { return NativeCall<int, TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalEngramEntry.GetChainRequiredEngramPoints", TestedEntries); }
	void ClearHiddenEngramRequirements() { NativeCall<void>(this, "UPrimalEngramEntry.ClearHiddenEngramRequirements"); }
};

struct FDinoAncestorsEntry
{
	FString MaleName;
	unsigned int MaleDinoID1;
	unsigned int MaleDinoID2;
	FString FemaleName;
	unsigned int FemaleDinoID1;
	unsigned int FemaleDinoID2;
};

struct FCraftingResourceRequirement
{
	float BaseResourceRequirement;
	TSubclassOf<UPrimalItem> ResourceItemType;
	bool bCraftingRequireExactResourceType;
};

struct UKismetSystemLibrary
{
	// Functions

	static FDebugFloatHistory* AddFloatHistorySample(FDebugFloatHistory* result, float Value, FDebugFloatHistory* FloatHistory) { return NativeCall<FDebugFloatHistory*, FDebugFloatHistory*, float, FDebugFloatHistory*>(nullptr, "UKismetSystemLibrary.AddFloatHistorySample", result, Value, FloatHistory); }
	static bool BoxOverlapActors_NEW(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.BoxOverlapActors_NEW", WorldContextObject, BoxPos, BoxExtent, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool BoxOverlapComponents_NEW(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.BoxOverlapComponents_NEW", WorldContextObject, BoxPos, BoxExtent, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool BoxTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceMulti", WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool BoxTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceMultiForObjects", WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool BoxTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceSingle", WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool BoxTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceSingleForObjects", WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool CapsuleOverlapActors_NEW(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapActors_NEW", WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool CapsuleOverlapComponents_NEW(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapComponents_NEW", WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool CapsuleTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceMultiForObjects", WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool CapsuleTraceMulti_NEW(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceMulti_NEW", WorldContextObject, Start, End, Radius, HalfHeight, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool CapsuleTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceSingleForObjects", WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool CapsuleTraceSingle_NEW(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceSingle_NEW", WorldContextObject, Start, End, Radius, HalfHeight, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool ComponentOverlapActors_NEW(UPrimitiveComponent* Component, FTransform* ComponentTransform, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UPrimitiveComponent*, FTransform*, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.ComponentOverlapActors_NEW", Component, ComponentTransform, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool ComponentOverlapComponents_NEW(UPrimitiveComponent* Component, FTransform* ComponentTransform, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UPrimitiveComponent*, FTransform*, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.ComponentOverlapComponents_NEW", Component, ComponentTransform, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static char MakeLiteralByte(char Value) { return NativeCall<char, char>(nullptr, "UKismetSystemLibrary.MakeLiteralByte", Value); }
	static void CreateCopyForUndoBuffer(UObject* ObjectToModify) { NativeCall<void, UObject*>(nullptr, "UKismetSystemLibrary.CreateCopyForUndoBuffer", ObjectToModify); }
	static void Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, float, FLatentActionInfo>(nullptr, "UKismetSystemLibrary.Delay", WorldContextObject, Duration, LatentInfo); }
	static bool DoesImplementInterface(UObject* TestObject, TSubclassOf<UInterface> Interface) { return NativeCall<bool, UObject*, TSubclassOf<UInterface>>(nullptr, "UKismetSystemLibrary.DoesImplementInterface", TestObject, Interface); }
	static void DrawDebugArrow(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, float ArrowSize, FLinearColor Color, float LifeTime) { NativeCall<void, UObject*, FVector, FVector, float, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugArrow", WorldContextObject, LineStart, LineEnd, ArrowSize, Color, LifeTime); }
	static void DrawDebugBox(UObject* WorldContextObject, FVector Center, FVector Extent, FLinearColor Color, FRotator Rotation, float LifeTime) { NativeCall<void, UObject*, FVector, FVector, FLinearColor, FRotator, float>(nullptr, "UKismetSystemLibrary.DrawDebugBox", WorldContextObject, Center, Extent, Color, Rotation, LifeTime); }
	static void DrawDebugCapsule(UObject* WorldContextObject, FVector Center, float HalfHeight, float Radius, FRotator Rotation, FLinearColor Color, float LifeTime) { NativeCall<void, UObject*, FVector, float, float, FRotator, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugCapsule", WorldContextObject, Center, HalfHeight, Radius, Rotation, Color, LifeTime); }
	static void DrawDebugCone(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, FLinearColor Color) { NativeCall<void, UObject*, FVector, FVector, float, float, float, int, FLinearColor>(nullptr, "UKismetSystemLibrary.DrawDebugCone", WorldContextObject, Origin, Direction, Length, AngleWidth, AngleHeight, NumSides, Color); }
	static void DrawDebugConeInDegrees(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, FLinearColor Color, float LifeTime) { NativeCall<void, UObject*, FVector, FVector, float, float, float, int, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugConeInDegrees", WorldContextObject, Origin, Direction, Length, AngleWidth, AngleHeight, NumSides, Color, LifeTime); }
	static void DrawDebugCoordinateSystem(UObject* WorldContextObject, FVector AxisLoc, FRotator AxisRot, float Scale, float LifeTime) { NativeCall<void, UObject*, FVector, FRotator, float, float>(nullptr, "UKismetSystemLibrary.DrawDebugCoordinateSystem", WorldContextObject, AxisLoc, AxisRot, Scale, LifeTime); }
	static void DrawDebugCylinder(UObject* WorldContextObject, FVector Start, FVector End, float Radius, int Segments, FLinearColor Color, float LifeTime) { NativeCall<void, UObject*, FVector, FVector, float, int, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugCylinder", WorldContextObject, Start, End, Radius, Segments, Color, LifeTime); }
	static void DrawDebugFloatHistoryLocation(UObject* WorldContextObject, FDebugFloatHistory* FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float LifeTime) { NativeCall<void, UObject*, FDebugFloatHistory*, FVector, FVector2D, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugFloatHistoryLocation", WorldContextObject, FloatHistory, DrawLocation, DrawSize, DrawColor, LifeTime); }
	static void DrawDebugFloatHistoryTransform(UObject* WorldContextObject, FDebugFloatHistory* FloatHistory, FTransform* DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float LifeTime) { NativeCall<void, UObject*, FDebugFloatHistory*, FTransform*, FVector2D, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugFloatHistoryTransform", WorldContextObject, FloatHistory, DrawTransform, DrawSize, DrawColor, LifeTime); }
	static void DrawDebugFrustum(UObject* WorldContextObject, FTransform* FrustumTransform, FLinearColor FrustumColor, float Duration) { NativeCall<void, UObject*, FTransform*, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugFrustum", WorldContextObject, FrustumTransform, FrustumColor, Duration); }
	static void DrawDebugLine(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, FLinearColor Color, float LifeTime, float Thickness) { NativeCall<void, UObject*, FVector, FVector, FLinearColor, float, float>(nullptr, "UKismetSystemLibrary.DrawDebugLine", WorldContextObject, LineStart, LineEnd, Color, LifeTime, Thickness); }
	static void DrawDebugLineTraceHitResult(UObject* WorldContextObject, FHitResult* Hit, FVector* TraceStart, FVector* TraceEnd, FLinearColor StartColor, FLinearColor HitColor, float LineThickness, float HitSize, bool bDrawHitNormal, FLinearColor HitNormalColor, float HitNormalLength, float Duration) { NativeCall<void, UObject*, FHitResult*, FVector*, FVector*, FLinearColor, FLinearColor, float, float, bool, FLinearColor, float, float>(nullptr, "UKismetSystemLibrary.DrawDebugLineTraceHitResult", WorldContextObject, Hit, TraceStart, TraceEnd, StartColor, HitColor, LineThickness, HitSize, bDrawHitNormal, HitNormalColor, HitNormalLength, Duration); }
	static void DrawDebugPlane(UObject* WorldContextObject, FPlane* P, FVector Loc, float Size, FLinearColor Color, float LifeTime) { NativeCall<void, UObject*, FPlane*, FVector, float, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugPlane", WorldContextObject, P, Loc, Size, Color, LifeTime); }
	static void DrawDebugPoint(UObject* WorldContextObject, FVector Position, float Size, FLinearColor PointColor, float LifeTime) { NativeCall<void, UObject*, FVector, float, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugPoint", WorldContextObject, Position, Size, PointColor, LifeTime); }
	static void DrawDebugSphere(UObject* WorldContextObject, FVector Center, float Radius, int Segments, FLinearColor Color, float LifeTime) { NativeCall<void, UObject*, FVector, float, int, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugSphere", WorldContextObject, Center, Radius, Segments, Color, LifeTime); }
	static void DrawDebugString(UObject* WorldContextObject, FVector TextLocation, FString* Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration) { NativeCall<void, UObject*, FVector, FString*, AActor*, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugString", WorldContextObject, TextLocation, Text, TestBaseActor, TextColor, Duration); }
	static void ExecuteConsoleCommand(UObject* WorldContextObject, FString* Command, APlayerController* Player) { NativeCall<void, UObject*, FString*, APlayerController*>(nullptr, "UKismetSystemLibrary.ExecuteConsoleCommand", WorldContextObject, Command, Player); }
	static void FlushDebugStrings(UObject* WorldContextObject) { NativeCall<void, UObject*>(nullptr, "UKismetSystemLibrary.FlushDebugStrings", WorldContextObject); }
	static void FlushPersistentDebugLines(UObject* WorldContextObject) { NativeCall<void, UObject*>(nullptr, "UKismetSystemLibrary.FlushPersistentDebugLines", WorldContextObject); }
	static void Generic_SetStructurePropertyByName(UObject* OwnerObject, FName StructPropertyName, const void* SrcStructAddr) { NativeCall<void, UObject*, FName, const void*>(nullptr, "UKismetSystemLibrary.Generic_SetStructurePropertyByName", OwnerObject, StructPropertyName, SrcStructAddr); }
	static void GetActorBounds(AActor* Actor, FVector* Origin, FVector* BoxExtent) { NativeCall<void, AActor*, FVector*, FVector*>(nullptr, "UKismetSystemLibrary.GetActorBounds", Actor, Origin, BoxExtent); }
	static void GetActorListFromComponentList(TArray<UPrimitiveComponent*>* ComponentList, UClass* ActorClassFilter, TArray<AActor*>* OutActorList) { NativeCall<void, TArray<UPrimitiveComponent*>*, UClass*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.GetActorListFromComponentList", ComponentList, ActorClassFilter, OutActorList); }
	static void GetComponentBounds(USceneComponent* Component, FVector* Origin, FVector* BoxExtent, float* SphereRadius) { NativeCall<void, USceneComponent*, FVector*, FVector*, float*>(nullptr, "UKismetSystemLibrary.GetComponentBounds", Component, Origin, BoxExtent, SphereRadius); }
	static FString* GetDisplayName(FString* result, UObject* Object) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UKismetSystemLibrary.GetDisplayName", result, Object); }
	static FString* GetEngineVersion(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetEngineVersion", result); }
	static FString* GetGameName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetGameName", result); }
	static long double GetGameTimeInSeconds(UObject* WorldContextObject) { return NativeCall<long double, UObject*>(nullptr, "UKismetSystemLibrary.GetGameTimeInSeconds", WorldContextObject); }
	static FString* GetPlatformUserName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetPlatformUserName", result); }
	static int GetRenderingDetailMode() { return NativeCall<int>(nullptr, "UKismetSystemLibrary.GetRenderingDetailMode"); }
	static int GetRenderingMaterialQualityLevel() { return NativeCall<int>(nullptr, "UKismetSystemLibrary.GetRenderingMaterialQualityLevel"); }
	static FString* GetUniqueDeviceId(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetUniqueDeviceId", result); }
	static bool IsClient(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UKismetSystemLibrary.IsClient", WorldContextObject); }
	static bool IsDedicatedServer(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UKismetSystemLibrary.IsDedicatedServer", WorldContextObject); }
	static bool IsListenServer(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UKismetSystemLibrary.IsListenServer", WorldContextObject); }
	static bool IsServer(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UKismetSystemLibrary.IsServer", WorldContextObject); }
	static bool IsStandalone(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UKismetSystemLibrary.IsStandalone", WorldContextObject); }
	static bool IsValid(UObject* Object) { return NativeCall<bool, UObject*>(nullptr, "UKismetSystemLibrary.IsValid", Object); }
	static void K2_ClearTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_ClearTimer", Object, FunctionName); }
	static float K2_GetTimerElapsedTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerElapsedTime", Object, FunctionName); }
	static float K2_GetTimerRemainingTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerRemainingTime", Object, FunctionName); }
	static bool K2_IsTimerActive(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerActive", Object, FunctionName); }
	static bool K2_IsTimerPaused(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerPaused", Object, FunctionName); }
	static void K2_PauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_PauseTimer", Object, FunctionName); }
	static void K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping) { NativeCall<void, UObject*, FString, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimer", Object, FunctionName, Time, bLooping); }
	static void K2_SetTimerDelegate(FBlueprintTimerDynamicDelegate Delegate, float Time, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerDelegate", Delegate, Time, bLooping); }
	static void K2_SetTimerForNextTick(UObject* Object, FString FunctionName, bool bLooping) { NativeCall<void, UObject*, FString, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTick", Object, FunctionName, bLooping); }
	static void K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate Delegate, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTickDelegate", Delegate, bLooping); }
	static bool K2_TimerExists(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_TimerExists", Object, FunctionName); }
	static void K2_UnPauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_UnPauseTimer", Object, FunctionName); }
	static void LaunchURL(FString* URL) { NativeCall<void, FString*>(nullptr, "UKismetSystemLibrary.LaunchURL", URL); }
	static bool LineTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.LineTraceMultiForObjects", WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool LineTraceMulti_NEW(UObject* WorldContextObject, FVector Start, FVector End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.LineTraceMulti_NEW", WorldContextObject, Start, End, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool LineTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.LineTraceSingleForObjects", WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool LineTraceSingle_NEW(UObject* WorldContextObject, FVector Start, FVector End, ECollisionChannel TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, ECollisionChannel, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.LineTraceSingle_NEW", WorldContextObject, Start, End, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static FName* MakeLiteralName(FName* result, FName Value) { return NativeCall<FName*, FName*, FName>(nullptr, "UKismetSystemLibrary.MakeLiteralName", result, Value); }
	void MakeLiteralString(TArray<wchar_t>* Other) { NativeCall<void, TArray<wchar_t>*>(this, "UKismetSystemLibrary.MakeLiteralString", Other); }
	static FText* MakeLiteralText(FText* result, FText Value) { return NativeCall<FText*, FText*, FText>(nullptr, "UKismetSystemLibrary.MakeLiteralText", result, Value); }
	static void RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, float, FLatentActionInfo>(nullptr, "UKismetSystemLibrary.RetriggerableDelay", WorldContextObject, Duration, LatentInfo); }
	static void SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value) { NativeCall<void, UObject*, FName, bool>(nullptr, "UKismetSystemLibrary.SetBoolPropertyByName", Object, PropertyName, Value); }
	static void SetBytePropertyByName(UObject* Object, FName PropertyName, char Value) { NativeCall<void, UObject*, FName, char>(nullptr, "UKismetSystemLibrary.SetBytePropertyByName", Object, PropertyName, Value); }
	static void SetClassPropertyByName(UObject* Object, FName PropertyName, TSubclassOf<UObject> Value) { NativeCall<void, UObject*, FName, TSubclassOf<UObject>>(nullptr, "UKismetSystemLibrary.SetClassPropertyByName", Object, PropertyName, Value); }
	static void SetDoublePropertyByName(UObject* Object, FName PropertyName, long double Value) { NativeCall<void, UObject*, FName, long double>(nullptr, "UKismetSystemLibrary.SetDoublePropertyByName", Object, PropertyName, Value); }
	static void SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value) { NativeCall<void, UObject*, FName, float>(nullptr, "UKismetSystemLibrary.SetFloatPropertyByName", Object, PropertyName, Value); }
	static void SetIntPropertyByName(UObject* Object, FName PropertyName, int Value) { NativeCall<void, UObject*, FName, int>(nullptr, "UKismetSystemLibrary.SetIntPropertyByName", Object, PropertyName, Value); }
	static void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, FLinearColor* Value) { NativeCall<void, UObject*, FName, FLinearColor*>(nullptr, "UKismetSystemLibrary.SetLinearColorPropertyByName", Object, PropertyName, Value); }
	static void SetNamePropertyByName(UObject* Object, FName PropertyName, FName* Value) { NativeCall<void, UObject*, FName, FName*>(nullptr, "UKismetSystemLibrary.SetNamePropertyByName", Object, PropertyName, Value); }
	static void SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value) { NativeCall<void, UObject*, FName, UObject*>(nullptr, "UKismetSystemLibrary.SetObjectPropertyByName", Object, PropertyName, Value); }
	static void SetRotatorPropertyByName(UObject* Object, FName PropertyName, FRotator* Value) { NativeCall<void, UObject*, FName, FRotator*>(nullptr, "UKismetSystemLibrary.SetRotatorPropertyByName", Object, PropertyName, Value); }
	static void SetStringPropertyByName(UObject* Object, FName PropertyName, FString* Value) { NativeCall<void, UObject*, FName, FString*>(nullptr, "UKismetSystemLibrary.SetStringPropertyByName", Object, PropertyName, Value); }
	static void SetSupressViewportTransitionMessage(UObject* WorldContextObject, bool bState) { NativeCall<void, UObject*, bool>(nullptr, "UKismetSystemLibrary.SetSupressViewportTransitionMessage", WorldContextObject, bState); }
	static void SetTextPropertyByName(UObject* Object, FName PropertyName, FText* Value) { NativeCall<void, UObject*, FName, FText*>(nullptr, "UKismetSystemLibrary.SetTextPropertyByName", Object, PropertyName, Value); }
	static void SetTransformPropertyByName(UObject* Object, FName PropertyName, FTransform* Value) { NativeCall<void, UObject*, FName, FTransform*>(nullptr, "UKismetSystemLibrary.SetTransformPropertyByName", Object, PropertyName, Value); }
	static void SetVectorPropertyByName(UObject* Object, FName PropertyName, FVector* Value) { NativeCall<void, UObject*, FName, FVector*>(nullptr, "UKismetSystemLibrary.SetVectorPropertyByName", Object, PropertyName, Value); }
	static void ShowAdBanner(bool bShowOnBottomOfScreen) { NativeCall<void, bool>(nullptr, "UKismetSystemLibrary.ShowAdBanner", bShowOnBottomOfScreen); }
	static void ShowPlatformSpecificAchievementsScreen(APlayerController* SpecificPlayer) { NativeCall<void, APlayerController*>(nullptr, "UKismetSystemLibrary.ShowPlatformSpecificAchievementsScreen", SpecificPlayer); }
	static void ShowPlatformSpecificLeaderboardScreen(FString* CategoryName) { NativeCall<void, FString*>(nullptr, "UKismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen", CategoryName); }
	static bool SphereOverlapActorsSimple(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TEnumAsByte<enum EObjectTypeQuery> ObjectType, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, TEnumAsByte<enum EObjectTypeQuery>, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapActorsSimple", WorldContextObject, SpherePos, SphereRadius, ObjectType, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool SphereOverlapActors_NEW(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapActors_NEW", WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool SphereOverlapComponents_NEW(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapComponents_NEW", WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool SphereTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceMultiForObjects", WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool SphereTraceMulti_NEW(UObject* WorldContextObject, FVector Start, FVector End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceMulti_NEW", WorldContextObject, Start, End, Radius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool SphereTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceSingleForObjects", WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool SphereTraceSingle_NEW(UObject* WorldContextObject, FVector Start, FVector End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceSingle_NEW", WorldContextObject, Start, End, Radius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UKismetSystemLibrary.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesUKismetSystemLibrary() { NativeCall<void>(nullptr, "UKismetSystemLibrary.StaticRegisterNativesUKismetSystemLibrary"); }
	static EPrimalCharacterStatusValue::Type MakeLiteralInt(int InInteger) { return NativeCall<EPrimalCharacterStatusValue::Type, int>(nullptr, "UKismetSystemLibrary.MakeLiteralInt", InInteger); }
};

struct FOverlapResult
{
	TWeakObjectPtr<AActor> Actor;
	TWeakObjectPtr<UPrimitiveComponent> Component;
	int ItemIndex;
	unsigned __int32 bBlockingHit : 1;

	// Functions

	AActor* GetActor() { return NativeCall<AActor*>(this, "FOverlapResult.GetActor"); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FOverlapResult.StaticStruct"); }
};

struct UVictoryCore
{
	static bool OverlappingActors(UWorld* theWorld, TArray<FOverlapResult>* Overlaps, FVector Origin, float Radius, int CollisionGroups, AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, UWorld*, TArray<FOverlapResult>*, FVector, float, int, AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActors", theWorld, Overlaps, Origin, Radius, CollisionGroups, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static FRotator* RLerp(FRotator* result, FRotator A, FRotator B, float Alpha, bool bShortestPath) { return NativeCall<FRotator*, FRotator*, FRotator, FRotator, float, bool>(nullptr, "UVictoryCore.RLerp", result, A, B, Alpha, bShortestPath); }
	static int GetWeightedRandomIndex(TArray<float>* pArray, float ForceRand) { return NativeCall<int, TArray<float>*, float>(nullptr, "UVictoryCore.GetWeightedRandomIndex", pArray, ForceRand); }
	static bool OverlappingActorsTrace(UWorld* theWorld, TArray<FOverlapResult>* Overlaps, FVector Origin, float Radius, ECollisionChannel TraceChannel, AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, UWorld*, TArray<FOverlapResult>*, FVector, float, ECollisionChannel, AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActorsTrace", theWorld, Overlaps, Origin, Radius, TraceChannel, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static UPhysicalMaterial* TracePhysMaterial(UWorld* theWorld, FVector StartPos, FVector EndPos, AActor* IgnoreActor) { return NativeCall<UPhysicalMaterial*, UWorld*, FVector, FVector, AActor*>(nullptr, "UVictoryCore.TracePhysMaterial", theWorld, StartPos, EndPos, IgnoreActor); }
	static float ClampRotAxis(float BaseAxis, float DesiredAxis, float MaxDiff) { return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.ClampRotAxis", BaseAxis, DesiredAxis, MaxDiff); }
	static FVector* ClampLocation(FVector* result, FVector BaseLocation, FVector DesiredLocation, float MaxDiff, bool bTraceClampLocation, UWorld* TraceWorld, FVector* TraceFromLocation) { return NativeCall<FVector*, FVector*, FVector, FVector, float, bool, UWorld*, FVector*>(nullptr, "UVictoryCore.ClampLocation", result, BaseLocation, DesiredLocation, MaxDiff, bTraceClampLocation, TraceWorld, TraceFromLocation); }
	static int BPGetWeightedRandomIndex(TArray<float>* pArray, float ForceRand) { return NativeCall<int, TArray<float>*, float>(nullptr, "UVictoryCore.BPGetWeightedRandomIndex", pArray, ForceRand); }
	static void MultiTraceProjectSphere(UObject* WorldContextObject, TArray<FHitResult>* OutResults, FVector* Origin, ECollisionChannel TraceChannel, int HorizResolution, int VertResolution, float StartDistance, float EndDistance, float NorthConeSubtractAngle, float SouthConeSubtractAngle, int PctChanceToTrace, int MaxTraceCount, bool bDrawDebugLines, float DebugDrawDuration) { NativeCall<void, UObject*, TArray<FHitResult>*, FVector*, ECollisionChannel, int, int, float, float, float, float, int, int, bool, float>(nullptr, "UVictoryCore.MultiTraceProjectSphere", WorldContextObject, OutResults, Origin, TraceChannel, HorizResolution, VertResolution, StartDistance, EndDistance, NorthConeSubtractAngle, SouthConeSubtractAngle, PctChanceToTrace, MaxTraceCount, bDrawDebugLines, DebugDrawDuration); }
	static FRotator* BPRotatorLerp(FRotator* result, FRotator* A, FRotator* B, const float* Alpha) { return NativeCall<FRotator*, FRotator*, FRotator*, FRotator*, const float*>(nullptr, "UVictoryCore.BPRotatorLerp", result, A, B, Alpha); }
	static bool BPFastTrace(UWorld* theWorld, FVector TraceEnd, FVector TraceStart, AActor* ActorToIgnore) { return NativeCall<bool, UWorld*, FVector, FVector, AActor*>(nullptr, "UVictoryCore.BPFastTrace", theWorld, TraceEnd, TraceStart, ActorToIgnore); }
	static bool VTraceIgnoreFoliage(UWorld* theWorld, FVector* Start, FVector* End, FHitResult* HitOut, AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FVector* BoxExtent, FName TraceTag, AActor* OtherActorToIgnore, TArray<AActor*>* OtherActorsToIgnore, FQuat* Rot, AActor* AnotherActorToIgnore, bool bIgnoreFoliage) { return NativeCall<bool, UWorld*, FVector*, FVector*, FHitResult*, AActor*, ECollisionChannel, int, bool, bool, FVector*, FName, AActor*, TArray<AActor*>*, FQuat*, AActor*, bool>(nullptr, "UVictoryCore.VTraceIgnoreFoliage", theWorld, Start, End, HitOut, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, OtherActorToIgnore, OtherActorsToIgnore, Rot, AnotherActorToIgnore, bIgnoreFoliage); }
	static void SetSessionPrefix(FString* InPrefix) { NativeCall<void, FString*>(nullptr, "UVictoryCore.SetSessionPrefix", InPrefix); }
	static FColor* GetTeamColor(FColor* result, const int TargetingTeam) { return NativeCall<FColor*, FColor*, const int>(nullptr, "UVictoryCore.GetTeamColor", result, TargetingTeam); }
	static FString* FormatAsTime(FString* result, int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds) { return NativeCall<FString*, FString*, int, bool, bool, bool>(nullptr, "UVictoryCore.FormatAsTime", result, InTime, UseLeadingZero, bForceLeadingZeroHour, bShowSeconds); }
	static bool CalculateInterceptPosition(FVector* StartPosition, FVector* StartVelocity, float ProjectileVelocity, FVector* TargetPosition, FVector* TargetVelocity, FVector* InterceptPosition) { return NativeCall<bool, FVector*, FVector*, float, FVector*, FVector*, FVector*>(nullptr, "UVictoryCore.CalculateInterceptPosition", StartPosition, StartVelocity, ProjectileVelocity, TargetPosition, TargetVelocity, InterceptPosition); }
	static int GetSecondsIntoDay() { return NativeCall<int>(nullptr, "UVictoryCore.GetSecondsIntoDay"); }
	static bool StaticCheckForCommand(FString CommandName) { return NativeCall<bool, FString>(nullptr, "UVictoryCore.StaticCheckForCommand", CommandName); }
	static bool GetGroundLocation(UWorld* forWorld, FVector* theGroundLoc, FVector* StartLoc, FVector* OffsetUp, FVector* OffsetDown) { return NativeCall<bool, UWorld*, FVector*, FVector*, FVector*, FVector*>(nullptr, "UVictoryCore.GetGroundLocation", forWorld, theGroundLoc, StartLoc, OffsetUp, OffsetDown); }
	static void CallGlobalLevelEvent(UWorld* forWorld, FName EventName) { NativeCall<void, UWorld*, FName>(nullptr, "UVictoryCore.CallGlobalLevelEvent", forWorld, EventName); }
	static FVector2D* BPProjectWorldToScreenPosition(FVector2D* result, FVector* WorldLocation, APlayerController* ThePC) { return NativeCall<FVector2D*, FVector2D*, FVector*, APlayerController*>(nullptr, "UVictoryCore.BPProjectWorldToScreenPosition", result, WorldLocation, ThePC); }
	static TArray<AActor*>* ServerOctreeOverlapActors(TArray<AActor*>* result, UWorld* theWorld, FVector AtLoc, float Radius, EServerOctreeGroup::Type OctreeType, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, UWorld*, FVector, float, EServerOctreeGroup::Type, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActors", result, theWorld, AtLoc, Radius, OctreeType, bForceActorLocationDistanceCheck); }
	static TArray<AActor*>* ServerOctreeOverlapActorsBitMask(TArray<AActor*>* result, UWorld* theWorld, FVector AtLoc, float Radius, int OctreeTypeBitMask, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, UWorld*, FVector, float, int, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsBitMask", result, theWorld, AtLoc, Radius, OctreeTypeBitMask, bForceActorLocationDistanceCheck); }
	static TArray<AActor*>* ServerOctreeOverlapActorsClass(TArray<AActor*>* result, UWorld* theWorld, FVector AtLoc, float Radius, EServerOctreeGroup::Type OctreeType, TSubclassOf<AActor> ActorClass, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, UWorld*, FVector, float, EServerOctreeGroup::Type, TSubclassOf<AActor>, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsClass", result, theWorld, AtLoc, Radius, OctreeType, ActorClass, bForceActorLocationDistanceCheck); }
	static TArray<AActor*>* ServerOctreeOverlapActorsClassBitMask(TArray<AActor*>* result, UWorld* theWorld, FVector AtLoc, float Radius, int OctreeTypeBitMask, TSubclassOf<AActor> ActorClass, bool bForceActorLocationDistanceCheck) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, UWorld*, FVector, float, int, TSubclassOf<AActor>, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsClassBitMask", result, theWorld, AtLoc, Radius, OctreeTypeBitMask, ActorClass, bForceActorLocationDistanceCheck); }
	static FRotator* BPRTransform(FRotator* result, FRotator* R, FRotator* RBasis) { return NativeCall<FRotator*, FRotator*, FRotator*, FRotator*>(nullptr, "UVictoryCore.BPRTransform", result, R, RBasis); }
	static FRotator* BPRTransformInverse(FRotator* result, FRotator* R, FRotator* RBasis) { return NativeCall<FRotator*, FRotator*, FRotator*, FRotator*>(nullptr, "UVictoryCore.BPRTransformInverse", result, R, RBasis); }
	static bool FindWorldActors(UWorld* fWorld, TArray<AActor*>* fContainer, TSubclassOf<AActor> fType, FName fTag) { return NativeCall<bool, UWorld*, TArray<AActor*>*, TSubclassOf<AActor>, FName>(nullptr, "UVictoryCore.FindWorldActors", fWorld, fContainer, fType, fTag); }
	static TArray<TWeakObjectPtr<APrimalDinoCharacter>>* RemoveInvalidObjectsInContainer(TArray<TWeakObjectPtr<APrimalDinoCharacter>>* result, TArray<TWeakObjectPtr<APrimalDinoCharacter>> fContainer) { return NativeCall<TArray<TWeakObjectPtr<APrimalDinoCharacter>>*, TArray<TWeakObjectPtr<APrimalDinoCharacter>>*, TArray<TWeakObjectPtr<APrimalDinoCharacter>>>(nullptr, "UVictoryCore.RemoveInvalidObjectsInContainer", result, fContainer); }
	static void FinishSpawning(AActor* Actor) { NativeCall<void, AActor*>(nullptr, "UVictoryCore.FinishSpawning", Actor); }
	static int GetWeightedRandomIndexFromArray(TArray<float> pArray, float ForceRand) { return NativeCall<int, TArray<float>, float>(nullptr, "UVictoryCore.GetWeightedRandomIndexFromArray", pArray, ForceRand); }
	static AActor* GetClosestActorArray(FVector ToPoint, TArray<AActor*>* ActorArray) { return NativeCall<AActor*, FVector, TArray<AActor*>*>(nullptr, "UVictoryCore.GetClosestActorArray", ToPoint, ActorArray); }
	static bool VTraceSingleBP(UWorld* theWorld, FHitResult* OutHit, FVector* Start, FVector* End, ECollisionChannel TraceChannel, int CollisionGroups, FName TraceTag, bool bTraceComplex, AActor* ActorToIgnore) { return NativeCall<bool, UWorld*, FHitResult*, FVector*, FVector*, ECollisionChannel, int, FName, bool, AActor*>(nullptr, "UVictoryCore.VTraceSingleBP", theWorld, OutHit, Start, End, TraceChannel, CollisionGroups, TraceTag, bTraceComplex, ActorToIgnore); }
	static bool VTraceMulti(UWorld* theWorld, TArray<FHitResult>* OutHits, FVector* Start, FVector* End, AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, FVector* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, AActor* AdditionalIgnoreActor, AActor* AnotherIgnoreActor, bool bJustDoSphereOverlapAtStartLoc, TArray<AActor*>* ExtraIgnoreActors) { return NativeCall<bool, UWorld*, TArray<FHitResult>*, FVector*, FVector*, AActor*, int, float, FVector*, bool, ECollisionChannel, bool, FName, bool, bool, AActor*, AActor*, bool, TArray<AActor*>*>(nullptr, "UVictoryCore.VTraceMulti", theWorld, OutHits, Start, End, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, AdditionalIgnoreActor, AnotherIgnoreActor, bJustDoSphereOverlapAtStartLoc, ExtraIgnoreActors); }
	static bool IsGamePadConnected() { return NativeCall<bool>(nullptr, "UVictoryCore.IsGamePadConnected"); }
	static int IsChildOfClasses(TSubclassOf<UObject> childClass, TArray<TSubclassOf<UObject>>* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, TArray<TSubclassOf<UObject>>*>(nullptr, "UVictoryCore.IsChildOfClasses", childClass, ParentClassesArray); }
	static FString* GetLastMapPlayed(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetLastMapPlayed", result); }
	static void SetLastMapPlayed(FString* NewLastMapPlayed) { NativeCall<void, FString*>(nullptr, "UVictoryCore.SetLastMapPlayed", NewLastMapPlayed); }
	static void SetLastHostedMapPlayed(FString* NewLastHostedMapPlayed) { NativeCall<void, FString*>(nullptr, "UVictoryCore.SetLastHostedMapPlayed", NewLastHostedMapPlayed); }
	static bool OwnsScorchedEarth() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsScorchedEarth"); }
	static bool OwnsDLC(FString DLCName) { return NativeCall<bool, FString>(nullptr, "UVictoryCore.OwnsDLC", DLCName); }
	static bool OwnsSteamAppID(int AppID) { return NativeCall<bool, int>(nullptr, "UVictoryCore.OwnsSteamAppID", AppID); }
	static void OpenStorePageForDLC(FString DLCName) { NativeCall<void, FString>(nullptr, "UVictoryCore.OpenStorePageForDLC", DLCName); }
	static FVector* LeadTargetPosition(FVector* result, FVector* ProjLocation, float ProjSpeed, FVector* TargetLocation, FVector* TargetVelocity) { return NativeCall<FVector*, FVector*, FVector*, float, FVector*, FVector*>(nullptr, "UVictoryCore.LeadTargetPosition", result, ProjLocation, ProjSpeed, TargetLocation, TargetVelocity); }
	static void AddToActorList(UWorld* ForWorld, int ActorListNum, AActor* ActorRef) { NativeCall<void, UWorld*, int, AActor*>(nullptr, "UVictoryCore.AddToActorList", ForWorld, ActorListNum, ActorRef); }
	static bool IsWorkshopIDSubscribed(FString* WorkshopID) { return NativeCall<bool, FString*>(nullptr, "UVictoryCore.IsWorkshopIDSubscribed", WorkshopID); }
	static FTransform* InverseTransform(FTransform* result, FTransform* TransformIn) { return NativeCall<FTransform*, FTransform*, FTransform*>(nullptr, "UVictoryCore.InverseTransform", result, TransformIn); }
	static UClass* BPLoadClass(FString* PathName) { return NativeCall<UClass*, FString*>(nullptr, "UVictoryCore.BPLoadClass", PathName); }
	static bool VTraceAgainstActorExpensive(UWorld* theWorld, FVector* Start, FVector* End, FHitResult* HitOut, AActor* ActorToTraceAgainst, ECollisionChannel Channel, int CollisionGroups, float SphereRadius, bool bReturnPhysMaterial, bool bTraceComplex, FVector* BoxExtent, FName TraceTag, bool bSort) { return NativeCall<bool, UWorld*, FVector*, FVector*, FHitResult*, AActor*, ECollisionChannel, int, float, bool, bool, FVector*, FName, bool>(nullptr, "UVictoryCore.VTraceAgainstActorExpensive", theWorld, Start, End, HitOut, ActorToTraceAgainst, Channel, CollisionGroups, SphereRadius, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, bSort); }
	static FString* GetClassString(FString* result, UClass* Class) { return NativeCall<FString*, FString*, UClass*>(nullptr, "UVictoryCore.GetClassString", result, Class); }
	static FString* GetClassPathName(FString* result, UObject* ForObject) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UVictoryCore.GetClassPathName", result, ForObject); }
	static FString* GetTotalCoversionIdAsString(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetTotalCoversionIdAsString", result); }
	static AActor* SpawnActorInWorld(UWorld* ForWorld, TSubclassOf<AActor> AnActorClass, FVector AtLocation, FRotator AtRotation, USceneComponent* attachToComponent, int dataIndex, FName attachSocketName, AActor* OwnerActor, APawn* InstigatorPawn) { return NativeCall<AActor*, UWorld*, TSubclassOf<AActor>, FVector, FRotator, USceneComponent*, int, FName, AActor*, APawn*>(nullptr, "UVictoryCore.SpawnActorInWorld", ForWorld, AnActorClass, AtLocation, AtRotation, attachToComponent, dataIndex, attachSocketName, OwnerActor, InstigatorPawn); }
	static bool GetOverlappedHarvestActors(UWorld* ForWorld, FVector* AtLoc, float AtRadius, TArray<AActor*>* OutHarvestActors, TArray<UActorComponent*>* OutHarvestComponents, TArray<FVector>* OutHarvestLocations, TArray<int>* OutHitBodyIndices) { return NativeCall<bool, UWorld*, FVector*, float, TArray<AActor*>*, TArray<UActorComponent*>*, TArray<FVector>*, TArray<int>*>(nullptr, "UVictoryCore.GetOverlappedHarvestActors", ForWorld, AtLoc, AtRadius, OutHarvestActors, OutHarvestComponents, OutHarvestLocations, OutHitBodyIndices); }
	static FName* GetHitBoneNameFromDamageEvent(FName* result, APrimalCharacter* Character, AController* HitInstigator, FDamageEvent* DamageEvent, bool bIsPointDamage, FHitResult* PointHitResult, FName MatchCollisionPresetName) { return NativeCall<FName*, FName*, APrimalCharacter*, AController*, FDamageEvent*, bool, FHitResult*, FName>(nullptr, "UVictoryCore.GetHitBoneNameFromDamageEvent", result, Character, HitInstigator, DamageEvent, bIsPointDamage, PointHitResult, MatchCollisionPresetName); }
	static FHitResult* MakeHitResult(FHitResult* result, FVector* Location, FVector* Normal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int HitItem, bool bBlockingHit) { return NativeCall<FHitResult*, FHitResult*, FVector*, FVector*, UPhysicalMaterial*, AActor*, UPrimitiveComponent*, FName, int, bool>(nullptr, "UVictoryCore.MakeHitResult", result, Location, Normal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem, bBlockingHit); }
	static float GetAngleBetweenVectors(FVector* VectorA, FVector* VectorB, FVector* AroundAxis) { return NativeCall<float, FVector*, FVector*, FVector*>(nullptr, "UVictoryCore.GetAngleBetweenVectors", VectorA, VectorB, AroundAxis); }
	static bool AreRotatorsNearlyEqual(FRotator* RotatorA, FRotator* RotatorB, float WithinError) { return NativeCall<bool, FRotator*, FRotator*, float>(nullptr, "UVictoryCore.AreRotatorsNearlyEqual", RotatorA, RotatorB, WithinError); }
	static void SetBoolArrayElemTrue(TArray<bool>* TheArray, int TheIndex) { NativeCall<void, TArray<bool>*, int>(nullptr, "UVictoryCore.SetBoolArrayElemTrue", TheArray, TheIndex); }
	static void SetBoolArrayElemFalse(TArray<bool>* TheArray, int TheIndex) { NativeCall<void, TArray<bool>*, int>(nullptr, "UVictoryCore.SetBoolArrayElemFalse", TheArray, TheIndex); }
};

struct UDamageType : UObject
{
	float& ImpulseMinimumZPercentField() { return *GetNativePointerField<float*>(this, "UDamageType.ImpulseMinimumZPercent"); }
	float& DestructibleImpulseScaleField() { return *GetNativePointerField<float*>(this, "UDamageType.DestructibleImpulseScale"); }
	float& ImpulseRagdollScaleField() { return *GetNativePointerField<float*>(this, "UDamageType.ImpulseRagdollScale"); }
	float& DefaultImpulseField() { return *GetNativePointerField<float*>(this, "UDamageType.DefaultImpulse"); }
	float& PointDamageArmorEffectivenessField() { return *GetNativePointerField<float*>(this, "UDamageType.PointDamageArmorEffectiveness"); }
	float& GeneralDamageArmorEffectivenessField() { return *GetNativePointerField<float*>(this, "UDamageType.GeneralDamageArmorEffectiveness"); }
	float& ArmorDurabilityDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UDamageType.ArmorDurabilityDegradationMultiplier"); }
	float& RadialPartiallyObstructedDamagePercentField() { return *GetNativePointerField<float*>(this, "UDamageType.RadialPartiallyObstructedDamagePercent"); }

	// Bit fields
	BitFieldValue<bool, unsigned __int32> bIsPhysicalDamage() { return { this, "UDamageType.bIsPhysicalDamage" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPerBoneDamageAdjustment() { return { this, "UDamageType.bAllowPerBoneDamageAdjustment" }; }
	BitFieldValue<bool, unsigned __int32> bCausedByWorld() { return { this, "UDamageType.bCausedByWorld" }; }
	BitFieldValue<bool, unsigned __int32> bScaleMomentumByMass() { return { this, "UDamageType.bScaleMomentumByMass" }; }
	BitFieldValue<bool, unsigned __int32> bIsPassiveDamage() { return { this, "UDamageType.bIsPassiveDamage" }; }
	BitFieldValue<bool, unsigned __int32> bRadialDamageVelChange() { return { this, "UDamageType.bRadialDamageVelChange" }; }
	BitFieldValue<bool, unsigned __int32> bImpulseAffectsLivePawns() { return { this, "UDamageType.bImpulseAffectsLivePawns" }; }

	// Functions
	static UClass* GetPrivateStaticClass(const wchar_t* Package) { return NativeCall<UClass*, const wchar_t*>(nullptr, "UDamageType.GetPrivateStaticClass", Package); }
	static void StaticRegisterNativesUDamageType() { NativeCall<void>(nullptr, "UDamageType.StaticRegisterNativesUDamageType"); }
};

struct FDinoAttackInfo
{
	FName& AttackNameField() { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.AttackName"); }
	float& AttackWeightField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWeight"); }
	float& AttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRange"); }
	float& MinAttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MinAttackRange"); }
	float& ActivateAttackRangeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.ActivateAttackRange"); }
	float& AttackIntervalField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackInterval"); }
	TArray<int>& ChildStateIndexesField() { return *GetNativePointerField<TArray<int>*>(this, "FDinoAttackInfo.ChildStateIndexes"); }
	float& AttackWithJumpChanceField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWithJumpChance"); }
	long double& LastAttackTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.LastAttackTime"); }
	long double& RiderLastAttackTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.RiderLastAttackTime"); }
	float& AttackSelectionExpirationTimeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackSelectionExpirationTime"); }
	long double& AttackSelectionTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.AttackSelectionTime"); }
	float& AttackRotationRangeDegreesField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationRangeDegrees"); }
	float& AttackRotationGroundSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationGroundSpeedMultiplier"); }
	FRotator& AttackRotationRateField() { return *GetNativePointerField<FRotator*>(this, "FDinoAttackInfo.AttackRotationRate"); }
	TArray<FName>& MeleeSwingSocketsField() { return *GetNativePointerField<TArray<FName>*>(this, "FDinoAttackInfo.MeleeSwingSockets"); }
	FName& RangedSocketField() { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.RangedSocket"); }
	int& MeleeDamageAmountField() { return *GetNativePointerField<int*>(this, "FDinoAttackInfo.MeleeDamageAmount"); }
	float& MeleeDamageImpulseField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeDamageImpulse"); }
	float& MeleeSwingRadiusField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeSwingRadius"); }
	TSubclassOf<UDamageType>& MeleeDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDinoAttackInfo.MeleeDamageType"); }
	float& AttackOffsetField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackOffset"); }
	float& StaminaCostField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.StaminaCost"); }
	float& RiderAttackIntervalField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.RiderAttackInterval"); }
	float& DotProductCheckMinField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMin"); }
	float& DotProductCheckMaxField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMax"); }
	TArray<UAnimMontage*> AttackAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "FDinoAttackInfo.AttackAnimations"); }
	TArray<float>& AttackAnimationWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FDinoAttackInfo.AttackAnimationWeights"); }
	TArray<float>& AttackAnimationsTimeFromEndToConsiderFinishedField() { return *GetNativePointerField<TArray<float>*>(this, "FDinoAttackInfo.AttackAnimationsTimeFromEndToConsiderFinished"); }
	float& AttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRunningSpeedModifier"); }
	float& SwimmingAttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SwimmingAttackRunningSpeedModifier"); }
	float& SetAttackTargetTimeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SetAttackTargetTime"); }
	TArray<FVector>& LastSocketPositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FDinoAttackInfo.LastSocketPositions"); }
	long double& LastProjectileSpawnTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.LastProjectileSpawnTime"); }

	// Functions

	FDinoAttackInfo* operator=(FDinoAttackInfo* __that) { return NativeCall<FDinoAttackInfo*, FDinoAttackInfo*>(this, "FDinoAttackInfo.operator=", __that); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDinoAttackInfo.StaticStruct"); }
};