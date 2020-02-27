#pragma once

struct FAvailableMission
{
	TSubclassOf<AMissionType>& MissionClassField() { return *GetNativePointerField<TSubclassOf<AMissionType>*>(this, "FAvailableMission.MissionClass"); }
	FVector& DispatcherLocationField() { return *GetNativePointerField<FVector*>(this, "FAvailableMission.DispatcherLocation"); }

	// Functions

	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FAvailableMission.StaticStruct"); }
	void FScriptStruct_ShooterGame_StaticRegisterNativesFAvailableMission() { NativeCall<void>(this, "FAvailableMission.FScriptStruct_ShooterGame_StaticRegisterNativesFAvailableMission"); }
};

struct FDamageEvent
{
	//FDamageEventVtbl* vfptrField() { return *GetNativePointerField<FDamageEventVtbl**>(this, "FDamageEvent.vfptr"); }
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

struct FHitResult
{
	float& TimeField() { return *GetNativePointerField<float*>(this, "FHitResult.Time"); }
	FVector_NetQuantize& LocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.Location"); }
	FVector_NetQuantizeNormal& NormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.Normal"); }
	FVector_NetQuantize& ImpactPointField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.ImpactPoint"); }
	FVector_NetQuantizeNormal& ImpactNormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.ImpactNormal"); }
	FVector_NetQuantize& TraceStartField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceStart"); }
	FVector_NetQuantize& TraceEndField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceEnd"); }
	float& PenetrationDepthField() { return *GetNativePointerField<float*>(this, "FHitResult.PenetrationDepth"); }
	int& ItemField() { return *GetNativePointerField<int*>(this, "FHitResult.Item"); }
	TWeakObjectPtr<UPhysicalMaterial>& PhysMaterialField() { return *GetNativePointerField<TWeakObjectPtr<UPhysicalMaterial>*>(this, "FHitResult.PhysMaterial"); }
	TWeakObjectPtr<AActor>& ActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "FHitResult.Actor"); }
	TWeakObjectPtr<UPrimitiveComponent>& ComponentField() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent>*>(this, "FHitResult.Component"); }
	FBodyInstance* BodyInstanceField() { return *GetNativePointerField<FBodyInstance**>(this, "FHitResult.BodyInstance"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FHitResult.BoneName"); }
	int& FaceIndexField() { return *GetNativePointerField<int*>(this, "FHitResult.FaceIndex"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bBlockingHit() { return { this, "FHitResult.bBlockingHit" }; }
	BitFieldValue<bool, unsigned __int32> bStartPenetrating() { return { this, "FHitResult.bStartPenetrating" }; }
	BitFieldValue<bool, unsigned __int32> bVolatileCollision() { return { this, "FHitResult.bVolatileCollision" }; }

	// Functions

	FHitResult* operator=(FHitResult* __that) { return NativeCall<FHitResult*, FHitResult*>(this, "FHitResult.operator=", __that); }
	AActor* GetActor() { return NativeCall<AActor*>(this, "FHitResult.GetActor"); }
	UPrimitiveComponent* GetComponent() { return NativeCall<UPrimitiveComponent*>(this, "FHitResult.GetComponent"); }
	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FHitResult.StaticStruct"); }
};

struct FOverlapInfo
{
	bool& bFromSweepField() { return *GetNativePointerField<bool*>(this, "FOverlapInfo.bFromSweep"); }
	FHitResult& OverlapInfoField() { return *GetNativePointerField<FHitResult*>(this, "FOverlapInfo.OverlapInfo"); }
	void* CachedCompPtrField() { return *GetNativePointerField<void**>(this, "FOverlapInfo.CachedCompPtr"); }

	// Functions

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
	bool Bind(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.Bind", Addr); }
	bool Connect(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.Connect", Addr); }
	bool Listen(int MaxBacklog) { return NativeCall<bool, int>(this, "FSocketBSD.Listen", MaxBacklog); }
	bool HasPendingConnection(bool * bHasPendingConnection) { return NativeCall<bool, bool *>(this, "FSocketBSD.HasPendingConnection", bHasPendingConnection); }
	bool HasPendingData(unsigned int * PendingDataSize) { return NativeCall<bool, unsigned int *>(this, "FSocketBSD.HasPendingData", PendingDataSize); }
	FSocket * Accept(FString * SocketDescription) { return NativeCall<FSocket *, FString *>(this, "FSocketBSD.Accept", SocketDescription); }
	FSocket * Accept(FInternetAddr * OutAddr, FString * SocketDescription) { return NativeCall<FSocket *, FInternetAddr *, FString *>(this, "FSocketBSD.Accept", OutAddr, SocketDescription); }
	bool SendTo(const char * Data, int Count, int * BytesSent, FInternetAddr * Destination) { return NativeCall<bool, const char *, int, int *, FInternetAddr *>(this, "FSocketBSD.SendTo", Data, Count, BytesSent, Destination); }
	bool Send(const char * Data, int Count, int * BytesSent) { return NativeCall<bool, const char *, int, int *>(this, "FSocketBSD.Send", Data, Count, BytesSent); }
	bool RecvFrom(char * Data, int BufferSize, int * BytesRead, FInternetAddr * Source, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, FInternetAddr *, ESocketReceiveFlags::Type>(this, "FSocketBSD.RecvFrom", Data, BufferSize, BytesRead, Source, Flags); }
	bool Recv(char * Data, int BufferSize, int * BytesRead, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, ESocketReceiveFlags::Type>(this, "FSocketBSD.Recv", Data, BufferSize, BytesRead, Flags); }
	ESocketConnectionState GetConnectionState() { return NativeCall<ESocketConnectionState>(this, "FSocketBSD.GetConnectionState"); }
	void GetAddress(FInternetAddr * OutAddr) { NativeCall<void, FInternetAddr *>(this, "FSocketBSD.GetAddress", OutAddr); }
	bool SetNonBlocking(bool bIsNonBlocking) { return NativeCall<bool, bool>(this, "FSocketBSD.SetNonBlocking", bIsNonBlocking); }
	bool SetBroadcast(bool bAllowBroadcast) { return NativeCall<bool, bool>(this, "FSocketBSD.SetBroadcast", bAllowBroadcast); }
	bool JoinMulticastGroup(FInternetAddr * GroupAddress) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.JoinMulticastGroup", GroupAddress); }
	bool LeaveMulticastGroup(FInternetAddr * GroupAddress) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.LeaveMulticastGroup", GroupAddress); }
	bool SetMulticastLoopback(bool bLoopback) { return NativeCall<bool, bool>(this, "FSocketBSD.SetMulticastLoopback", bLoopback); }
	bool SetMulticastTtl(char TimeToLive) { return NativeCall<bool, char>(this, "FSocketBSD.SetMulticastTtl", TimeToLive); }
	bool SetReuseAddr(bool bAllowReuse) { return NativeCall<bool, bool>(this, "FSocketBSD.SetReuseAddr", bAllowReuse); }
	bool SetLinger(bool bShouldLinger, int Timeout) { return NativeCall<bool, bool, int>(this, "FSocketBSD.SetLinger", bShouldLinger, Timeout); }
	bool SetSendBufferSize(int Size, int * NewSize) { return NativeCall<bool, int, int *>(this, "FSocketBSD.SetSendBufferSize", Size, NewSize); }
	bool SetReceiveBufferSize(int Size, int * NewSize) { return NativeCall<bool, int, int *>(this, "FSocketBSD.SetReceiveBufferSize", Size, NewSize); }
	int GetPortNo() { return NativeCall<int>(this, "FSocketBSD.GetPortNo"); }
};

struct RCONClientConnection
{
	FSocket* SocketField() { return *GetNativePointerField<FSocket**>(this, "RCONClientConnection.Socket"); }
	UShooterCheatManager* CheatManagerField() { return *GetNativePointerField<UShooterCheatManager**>(this, "RCONClientConnection.CheatManager"); }
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

	static APlayerController* GetPlayerController(UObject* WorldContextObject, int PlayerIndex) { return NativeCall<APlayerController*, UObject*, int>(nullptr, "UGameplayStatics.GetPlayerController", WorldContextObject, PlayerIndex); }
	static APlayerController* CreatePlayer(UObject* WorldContextObject, int ControllerId, bool bSpawnPawn) { return NativeCall<APlayerController*, UObject*, int, bool>(nullptr, "UGameplayStatics.CreatePlayer", WorldContextObject, ControllerId, bSpawnPawn); }
	static void SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation) { NativeCall<void, UObject*, float>(nullptr, "UGameplayStatics.SetGlobalTimeDilation", WorldContextObject, TimeDilation); }
	static bool SetGamePaused(UObject* WorldContextObject, bool bPaused) { return NativeCall<bool, UObject*, bool>(nullptr, "UGameplayStatics.SetGamePaused", WorldContextObject, bPaused); }
	static bool ApplyRadialDamage(UObject* WorldContextObject, float BaseDamage, FVector* Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor*>* IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse) { return NativeCall<bool, UObject*, float, FVector*, float, TSubclassOf<UDamageType>, TArray<AActor*>*, AActor*, AController*, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyRadialDamage", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse); }
	static bool ApplyRadialDamageIgnoreDamageActors(UObject* WorldContextObject, float BaseDamage, FVector* Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor*>* IgnoreActors, TArray<AActor*>* IgnoreDamageActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel, float Impulse) { return NativeCall<bool, UObject*, float, FVector*, float, TSubclassOf<UDamageType>, TArray<AActor*>*, TArray<AActor*>*, AActor*, AController*, bool, ECollisionChannel, float>(nullptr, "UGameplayStatics.ApplyRadialDamageIgnoreDamageActors", WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, IgnoreDamageActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel, Impulse); }
	static bool ApplyRadialDamageWithFalloff(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, FVector* Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, TArray<AActor*>* IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, ECollisionChannel DamagePreventionChannel, float Impulse, TArray<AActor*>* IgnoreDamageActors, int NumAdditionalAttempts) { return NativeCall<bool, UObject*, float, float, FVector*, float, float, float, TSubclassOf<UDamageType>, TArray<AActor*>*, AActor*, AController*, ECollisionChannel, float, TArray<AActor*>*, int>(nullptr, "UGameplayStatics.ApplyRadialDamageWithFalloff", WorldContextObject, BaseDamage, MinimumDamage, Origin, DamageInnerRadius, DamageOuterRadius, DamageFalloff, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, DamagePreventionChannel, Impulse, IgnoreDamageActors, NumAdditionalAttempts); }
	static void ApplyPointDamage(AActor* DamagedActor, float BaseDamage, FVector* HitFromDirection, FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse, bool bForceCollisionCheck, ECollisionChannel ForceCollisionCheckTraceChannel) { NativeCall<void, AActor*, float, FVector*, FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>, float, bool, ECollisionChannel>(nullptr, "UGameplayStatics.ApplyPointDamage", DamagedActor, BaseDamage, HitFromDirection, HitInfo, EventInstigator, DamageCauser, DamageTypeClass, Impulse, bForceCollisionCheck, ForceCollisionCheckTraceChannel); }
	static void ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, float Impulse) { NativeCall<void, AActor*, float, AController*, AActor*, TSubclassOf<UDamageType>, float>(nullptr, "UGameplayStatics.ApplyDamage", DamagedActor, BaseDamage, EventInstigator, DamageCauser, DamageTypeClass, Impulse); }
	static AActor* BeginSpawningActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, FTransform* SpawnTransform, bool bNoCollisionFail) { return NativeCall<AActor*, UObject*, UBlueprint*, FTransform*, bool>(nullptr, "UGameplayStatics.BeginSpawningActorFromBlueprint", WorldContextObject, Blueprint, SpawnTransform, bNoCollisionFail); }
	static AActor* BeginSpawningActorFromClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform* SpawnTransform, bool bNoCollisionFail) { return NativeCall<AActor*, UObject*, TSubclassOf<AActor>, FTransform*, bool>(nullptr, "UGameplayStatics.BeginSpawningActorFromClass", WorldContextObject, ActorClass, SpawnTransform, bNoCollisionFail); }
	static AActor* FinishSpawningActor(AActor* Actor, FTransform* SpawnTransform) { return NativeCall<AActor*, AActor*, FTransform*>(nullptr, "UGameplayStatics.FinishSpawningActor", Actor, SpawnTransform); }
	static void LoadStreamLevel(UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, FName, bool, bool, FLatentActionInfo>(nullptr, "UGameplayStatics.LoadStreamLevel", WorldContextObject, LevelName, bMakeVisibleAfterLoad, bShouldBlockOnLoad, LatentInfo); }
	static void UnloadStreamLevel(UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, FName, FLatentActionInfo>(nullptr, "UGameplayStatics.UnloadStreamLevel", WorldContextObject, LevelName, LatentInfo); }
	static void OpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString Options) { NativeCall<void, UObject*, FName, bool, FString>(nullptr, "UGameplayStatics.OpenLevel", WorldContextObject, LevelName, bAbsolute, Options); }
	static FVector* GetActorArrayAverageLocation(FVector* result, TArray<AActor*>* Actors) { return NativeCall<FVector*, FVector*, TArray<AActor*>*>(nullptr, "UGameplayStatics.GetActorArrayAverageLocation", result, Actors); }
	static void GetActorArrayBounds(TArray<AActor*>* Actors, bool bOnlyCollidingComponents, FVector* Center, FVector* BoxExtent) { NativeCall<void, TArray<AActor*>*, bool, FVector*, FVector*>(nullptr, "UGameplayStatics.GetActorArrayBounds", Actors, bOnlyCollidingComponents, Center, BoxExtent); }
	static void GetAllActorsOfClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>* OutActors) { NativeCall<void, UObject*, TSubclassOf<AActor>, TArray<AActor*>*>(nullptr, "UGameplayStatics.GetAllActorsOfClass", WorldContextObject, ActorClass, OutActors); }
	static void GetAllActorsWithInterface(UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*>* OutActors) { NativeCall<void, UObject*, TSubclassOf<UInterface>, TArray<AActor*>*>(nullptr, "UGameplayStatics.GetAllActorsWithInterface", WorldContextObject, Interface, OutActors); }
	static void BreakHitResult(FHitResult* Hit, FVector* Location, FVector* Normal, FVector* ImpactPoint, FVector* ImpactNormal, UPhysicalMaterial** PhysMat, AActor** HitActor, UPrimitiveComponent** HitComponent, FName* HitBoneName, int* HitItem, bool* BlockingHit) { NativeCall<void, FHitResult*, FVector*, FVector*, FVector*, FVector*, UPhysicalMaterial**, AActor**, UPrimitiveComponent**, FName*, int*, bool*>(nullptr, "UGameplayStatics.BreakHitResult", Hit, Location, Normal, ImpactPoint, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem, BlockingHit); }
	static void BreakHitResult_OLD(FHitResult* Hit, FVector* Location, FVector* Normal, FVector* ImpactPoint, FVector* ImpactNormal, UPhysicalMaterial** PhysMat, AActor** HitActor, UPrimitiveComponent** HitComponent, FName* HitBoneName, int* HitItem) { NativeCall<void, FHitResult*, FVector*, FVector*, FVector*, FVector*, UPhysicalMaterial**, AActor**, UPrimitiveComponent**, FName*, int*>(nullptr, "UGameplayStatics.BreakHitResult_OLD", Hit, Location, Normal, ImpactPoint, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem); }
	static EPhysicalSurface GetSurfaceType(FHitResult* Hit) { return NativeCall<EPhysicalSurface, FHitResult*>(nullptr, "UGameplayStatics.GetSurfaceType", Hit); }
	static bool AreAnyListenersWithinRange(FVector Location, float MaximumRange) { return NativeCall<bool, FVector, float>(nullptr, "UGameplayStatics.AreAnyListenersWithinRange", Location, MaximumRange); }
	static void PlayDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext* Context, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) { NativeCall<void, UObject*, UDialogueWave*, FDialogueContext*, FVector, float, float, float, USoundAttenuation*>(nullptr, "UGameplayStatics.PlayDialogueAtLocation", WorldContextObject, Dialogue, Context, Location, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings); }
	static UAudioComponent* PlayDialogueAttached(UDialogueWave* Dialogue, FDialogueContext* Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) { return NativeCall<UAudioComponent*, UDialogueWave*, FDialogueContext*, USceneComponent*, FName, FVector, EAttachLocation::Type, bool, float, float, float, USoundAttenuation*>(nullptr, "UGameplayStatics.PlayDialogueAttached", Dialogue, Context, AttachToComponent, AttachPointName, Location, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings); }
	static void PlaySound(UObject* WorldContextObject, USoundCue* InSoundCue, USceneComponent* AttachComponent, FName AttachName, bool bFollow, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, UObject*, USoundCue*, USceneComponent*, FName, bool, float, float>(nullptr, "UGameplayStatics.PlaySound", WorldContextObject, InSoundCue, AttachComponent, AttachName, bFollow, VolumeMultiplier, PitchMultiplier); }
	//static USaveGame* CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass) { return NativeCall<USaveGame*, TSubclassOf<USaveGame>>(nullptr, "UGameplayStatics.CreateSaveGameObject", SaveGameClass); }
	//static USaveGame* CreateSaveGameObjectFromBlueprint(UBlueprint* SaveGameBlueprint) { return NativeCall<USaveGame*, UBlueprint*>(nullptr, "UGameplayStatics.CreateSaveGameObjectFromBlueprint", SaveGameBlueprint); }
	//static bool SaveGameToSlot(USaveGame* SaveGameObject, FString* SlotName, const int UserIndex) { return NativeCall<bool, USaveGame*, FString*, const int>(nullptr, "UGameplayStatics.SaveGameToSlot", SaveGameObject, SlotName, UserIndex); }
	//static USaveGame* LoadGameFromSlot(FString* SlotName, const int UserIndex) { return NativeCall<USaveGame*, FString*, const int>(nullptr, "UGameplayStatics.LoadGameFromSlot", SlotName, UserIndex); }
	static void GetAccurateRealTime(UObject* WorldContextObject, int* Seconds, float* PartialSeconds) { NativeCall<void, UObject*, int*, float*>(nullptr, "UGameplayStatics.GetAccurateRealTime", WorldContextObject, Seconds, PartialSeconds); }
	static FString* GetPlatformName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UGameplayStatics.GetPlatformName", result); }
	//static bool SuggestProjectileVelocity(UObject* WorldContextObject, FVector* OutTossVelocity, FVector Start, FVector End, float TossSpeed, bool bFavorHighArc, float CollisionRadius, float OverrideGravityZ, ESuggestProjVelocityTraceOption::Type TraceOption, FCollisionResponseParams* ResponseParam, TArray<AActor*>* ActorsToIgnore, bool bDrawDebug) { return NativeCall<bool, UObject*, FVector*, FVector, FVector, float, bool, float, float, ESuggestProjVelocityTraceOption::Type, FCollisionResponseParams*, TArray<AActor*>*, bool>(nullptr, "UGameplayStatics.SuggestProjectileVelocity", WorldContextObject, OutTossVelocity, Start, End, TossSpeed, bFavorHighArc, CollisionRadius, OverrideGravityZ, TraceOption, ResponseParam, ActorsToIgnore, bDrawDebug); }
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
	FStatusValueModifierDescription& BuffDescriptionField() { return *GetNativePointerField<FStatusValueModifierDescription*>(this, "APrimalBuff.BuffDescription"); }
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
	int& DinoColorizationPriorityField() { return *GetNativePointerField<int*>(this, "APrimalBuff.DinoColorizationPriority"); }
	float& DinoColorizationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DinoColorizationInterpSpeed"); }
	FieldArray<FLinearColor, 6> DesiredDinoColorsField() { return { this, "APrimalBuff.DesiredDinoColors" }; }
	float& SubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxSpeedModifier"); }
	float& UnsubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxSpeedModifier"); }
	TArray<FDamagePrimalCharacterStatusValueModifier>& CharacterStatusValueModifiersField() { return *GetNativePointerField<TArray<FDamagePrimalCharacterStatusValueModifier>*>(this, "APrimalBuff.CharacterStatusValueModifiers"); }
	long double& BuffStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.BuffStartTime"); }
	UMaterialInterface* BuffPostProcessEffectField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalBuff.BuffPostProcessEffect"); }
	TArray<TSubclassOf<AActor>>& PreventActorClassesTargetingField() { return *GetNativePointerField<TArray<TSubclassOf<AActor>>*>(this, "APrimalBuff.PreventActorClassesTargeting"); }
	TArray<float>& PreventActorClassesTargetingRangesField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalBuff.PreventActorClassesTargetingRanges"); }
	float& PreventIfMovementMassGreaterThanField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PreventIfMovementMassGreaterThan"); }
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
	bool& bUseBPOverrideBuffToGiveOnDeactivationField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPOverrideBuffToGiveOnDeactivation"); }
	bool& bUseBPCustomAllowAddBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPCustomAllowAddBuff"); }
	FVector& staticPathingDestinationField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.staticPathingDestination"); }
	long double& TickingDeactivationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TickingDeactivationTime"); }
	UPrimalBuffPersistentData* MyBuffPersistentDataField() { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuff.MyBuffPersistentData"); }
	TSubclassOf<UPrimalBuffPersistentData>& BuffPersistentDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalBuffPersistentData>*>(this, "APrimalBuff.BuffPersistentDataClass"); }
	TArray<FMaxStatScaler>& MaxStatScalersField() { return *GetNativePointerField<TArray<FMaxStatScaler>*>(this, "APrimalBuff.MaxStatScalers"); }
	TWeakObjectPtr<AActor>& DamageCauserField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "APrimalBuff.DamageCauser"); }
	USoundBase* ExtraActivationSoundToPlayField() { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff.ExtraActivationSoundToPlay"); }
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
	bool& bContinueTickingServerAfterDeactivateField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bContinueTickingServerAfterDeactivate"); }
	bool& bContinueTickingClientAfterDeactivateField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bContinueTickingClientAfterDeactivate"); }
	long double& LastBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeServer"); }
	long double& LastBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeClient"); }
	long double& NextBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeServer"); }
	long double& NextBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeClient"); }
	bool& bTickFunctionDisabledField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bTickFunctionDisabled"); }
	bool& bWasStasisedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bWasStasised"); }
	int& AddBuffMaxNumStacksField() { return *GetNativePointerField<int*>(this, "APrimalBuff.AddBuffMaxNumStacks"); }
	USoundBase* DeactivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff.DeactivatedSound"); }
	bool& bDeactivatedSoundOnlyLocalField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDeactivatedSoundOnlyLocal"); }
	bool& bDisableBloomField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableBloom"); }
	bool& bBPOverrideCharacterNewFallVelocityField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBPOverrideCharacterNewFallVelocity"); }
	bool& bForceOverrideCharacterNewFallVelocityField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bForceOverrideCharacterNewFallVelocity"); }
	bool& bBPModifyCharacterFOVField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBPModifyCharacterFOV"); }
	bool& bDisableLightShaftsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableLightShafts"); }
	float& PostProcessInterpSpeedDownField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedDown"); }
	float& PostProcessInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedUp"); }
	float& TPVCameraSpeedInterpolationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.TPVCameraSpeedInterpolationMultiplier"); }
	bool& bIsCarryBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bIsCarryBuff"); }
	TArray<FPostProcessMaterialAdjuster>& PostprocessMaterialAdjustersField() { return *GetNativePointerField<TArray<FPostProcessMaterialAdjuster>*>(this, "APrimalBuff.PostprocessMaterialAdjusters"); }
	long double& TimeForNextAOECheckField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TimeForNextAOECheck"); }
	float& AOEBuffIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMin"); }
	float& AOEBuffIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMax"); }
	float& MaximumVelocityZForSlowingFallField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MaximumVelocityZForSlowingFall"); }
	int& FNameIntField() { return *GetNativePointerField<int*>(this, "APrimalBuff.FNameInt"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bSlowInstigatorFalling() { return { this, "APrimalBuff.bSlowInstigatorFalling" }; }
	BitFieldValue<bool, unsigned __int32> bDeactivateOnJump() { return { this, "APrimalBuff.bDeactivateOnJump" }; }
	BitFieldValue<bool, unsigned __int32> bPreventJump() { return { this, "APrimalBuff.bPreventJump" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoRiding() { return { this, "APrimalBuff.bPreventDinoRiding" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoDismount() { return { this, "APrimalBuff.bPreventDinoDismount" }; }
	BitFieldValue<bool, unsigned __int32> bPreventCarryOrPassenger() { return { this, "APrimalBuff.bPreventCarryOrPassenger" }; }
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
	BitFieldValue<bool, unsigned __int32> bUseBPDinoRefreshColorization() { return { this, "APrimalBuff.bUseBPDinoRefreshColorization" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyActivateSoundForInstigator() { return { this, "APrimalBuff.bOnlyActivateSoundForInstigator" }; }
	BitFieldValue<bool, unsigned __int32> bAOEBuffCarnosOnly() { return { this, "APrimalBuff.bAOEBuffCarnosOnly" }; }
	BitFieldValue<bool, unsigned __int32> bCausesCryoSickness() { return { this, "APrimalBuff.bCausesCryoSickness" }; }
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
	BitFieldValue<bool, unsigned __int32> bPreventFallDamage() { return { this, "APrimalBuff.bPreventFallDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorCapsuleComponentHit() { return { this, "APrimalBuff.bUseBPOnInstigatorCapsuleComponentHit" }; }
	BitFieldValue<bool, unsigned __int32> bEnabledCollisionNotify() { return { this, "APrimalBuff.bEnabledCollisionNotify" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget() { return { this, "APrimalBuff.bUseBPOverrideCameraViewTarget" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor() { return { this, "APrimalBuff.bUseBPIsValidUnstasisActor" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsNetRelevantFor() { return { this, "APrimalBuff.bUseBPOverrideIsNetRelevantFor" }; }
	BitFieldValue<bool, unsigned __int32> bPreventClearRiderOnDinoImmobilize() { return { this, "APrimalBuff.bPreventClearRiderOnDinoImmobilize" }; }
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
	BitFieldValue<bool, unsigned __int32> bPreventOnRobotDino() { return { this, "APrimalBuff.bPreventOnRobotDino" }; }
	BitFieldValue<bool, unsigned __int32> bIsDisease() { return { this, "APrimalBuff.bIsDisease" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventAddingOtherBuff() { return { this, "APrimalBuff.bUseBPPreventAddingOtherBuff" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning() { return { this, "APrimalBuff.bUseBPPreventRunning" }; }
	BitFieldValue<bool, unsigned __int32> bAddReactivates() { return { this, "APrimalBuff.bAddReactivates" }; }
	BitFieldValue<bool, unsigned __int32> bAoEApplyDamageAllTargetables() { return { this, "APrimalBuff.bAoEApplyDamageAllTargetables" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulse() { return { this, "APrimalBuff.bUseBPAdjustCharacterMovementImpulse" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamage() { return { this, "APrimalBuff.bUseBPAdjustImpulseFromDamage" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElements() { return { this, "APrimalBuff.bUseBPGetHUDElements" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPActivated() { return { this, "APrimalBuff.bUseBPActivated" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartFire() { return { this, "APrimalBuff.bUseBPHandleOnStartFire" }; }
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
	BitFieldValue<bool, unsigned __int32> bPreventInstigatorAttack() { return { this, "APrimalBuff.bPreventInstigatorAttack" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorMovementModeChangedNotify() { return { this, "APrimalBuff.bUseBPOnInstigatorMovementModeChangedNotify" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorMovementMode() { return { this, "APrimalBuff.bUseBPPreventInstigatorMovementMode" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOverrideTalkerCharacter() { return { this, "APrimalBuff.bUseBPOverrideTalkerCharacter" }; }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APrimalBuff.StaticClass"); }
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
	void GetHUDElements(APlayerController* ForPC, TArray<FHUDElement>* OutHUDElements) { NativeCall<void, APlayerController*, TArray<FHUDElement>*>(this, "APrimalBuff.GetHUDElements", ForPC, OutHUDElements); }
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
	bool IsNetRelevantFor(APlayerController* RealViewer, AActor* Viewer, FVector* SrcLocation) { return NativeCall<bool, APlayerController*, AActor*, FVector*>(this, "APrimalBuff.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "APrimalBuff.IsValidUnStasisCaster"); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalBuff.GetDebugInfoString", result); }
	void BPGetHUDElements(APlayerController* ForPC, TArray<FHUDElement>* OutElements) { NativeCall<void, APlayerController*, TArray<FHUDElement>*>(this, "APrimalBuff.BPGetHUDElements", ForPC, OutElements); }
	void BPOverrideCameraViewTarget(FName CurrentCameraMode, FVector DesiredCameraLocation, FRotator DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, FVector* CameraLocation, bool* bOverrideCameraRotation, FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV) { NativeCall<void, FName, FVector, FRotator, float, bool*, FVector*, bool*, FRotator*, bool*, float*>(this, "APrimalBuff.BPOverrideCameraViewTarget", CurrentCameraMode, DesiredCameraLocation, DesiredCameraRotation, DesiredFOV, bOverrideCameraLocation, CameraLocation, bOverrideCameraRotation, CameraRotation, bOverrideCameraFOV, CameraFOV); }
	static void StaticRegisterNativesAPrimalBuff() { NativeCall<void>(nullptr, "APrimalBuff.StaticRegisterNativesAPrimalBuff"); }
	void BPDrawBuffStatusHUD(AShooterHUD* HUD, float XPos, float YPos, float ScaleMult) { NativeCall<void, AShooterHUD*, float, float, float>(this, "APrimalBuff.BPDrawBuffStatusHUD", HUD, XPos, YPos, ScaleMult); }
	void BPOnInstigatorCapsuleComponentHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector* NormalImpulse, FHitResult* Hit) { NativeCall<void, AActor*, UPrimitiveComponent*, FVector*, FHitResult*>(this, "APrimalBuff.BPOnInstigatorCapsuleComponentHit", OtherActor, OtherComp, NormalImpulse, Hit); }
	float BuffAdjustDamage(float Damage, FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { return NativeCall<float, float, FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffAdjustDamage", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
	void BuffPostAdjustDamage(float Damage, FHitResult* HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { NativeCall<void, float, FHitResult*, AController*, AActor*, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffPostAdjustDamage", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
	void DrawBuffFloatingHUD(int BuffIndex, AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, int, AShooterHUD*, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD", BuffIndex, HUD, CenterX, CenterY, DrawScale); }
	FStatusValueModifierDescription* GetBuffDescription(FStatusValueModifierDescription* result) { return NativeCall<FStatusValueModifierDescription*, FStatusValueModifierDescription*>(this, "APrimalBuff.GetBuffDescription", result); }
	int GetBuffType() { return NativeCall<int>(this, "APrimalBuff.GetBuffType"); }
	void NotifyDamage(float DamageAmount, TSubclassOf<UDamageType> DamageClass, AController* EventInstigator, AActor* TheDamageCauser) { NativeCall<void, float, TSubclassOf<UDamageType>, AController*, AActor*>(this, "APrimalBuff.NotifyDamage", DamageAmount, DamageClass, EventInstigator, TheDamageCauser); }
	bool PreventActorTargeting(AActor* ByActor) { return NativeCall<bool, AActor*>(this, "APrimalBuff.PreventActorTargeting", ByActor); }
	void SetBuffCauser(AActor* CausedBy) { NativeCall<void, AActor*>(this, "APrimalBuff.SetBuffCauser", CausedBy); }
};

struct UPrimalEngramEntry : UObject
{
	int& RequiredCharacterLevelField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredCharacterLevel"); }
	int& RequiredEngramPointsField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredEngramPoints"); }
	TSubclassOf<UPrimalItem> & BluePrintEntryField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "UPrimalEngramEntry.BluePrintEntry"); }
	FString & ExtraEngramDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalEngramEntry.ExtraEngramDescription"); }
	TArray<FEngramEntries> & EngramRequirementSetsField() { return *GetNativePointerField<TArray<FEngramEntries>*>(this, "UPrimalEngramEntry.EngramRequirementSets"); }
	int& MyEngramIndexField() { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.MyEngramIndex"); }
	TEnumAsByte<enum EEngramGroup::Type> & EngramGroupField() { return *GetNativePointerField<TEnumAsByte<enum EEngramGroup::Type>*>(this, "UPrimalEngramEntry.EngramGroup"); }

	// Bit fields

	BitFieldValue<bool, unsigned __int32> bGiveBlueprintToPlayerInventory() { return { this, "UPrimalEngramEntry.bGiveBlueprintToPlayerInventory" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeManuallyUnlocked() { return { this, "UPrimalEngramEntry.bCanBeManuallyUnlocked" }; }
	BitFieldValue<bool, unsigned __int32> bIsSPlusEngram() { return { this, "UPrimalEngramEntry.bIsSPlusEngram" }; }

	// Functions

	UObject * GetObjectW() { return NativeCall<UObject*>(this, "UPrimalEngramEntry.GetObjectW"); }
	FString * GetEntryString(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalEngramEntry.GetEntryString", result); }
	UTexture2D * GetEntryIcon(UObject * AssociatedDataObject, bool bIsEnabled) { return NativeCall<UTexture2D*, UObject*, bool>(this, "UPrimalEngramEntry.GetEntryIcon", AssociatedDataObject, bIsEnabled); }
	bool MeetsEngramRequirements(AShooterPlayerState * aPlayerState, bool bOnlyCheckLevel, bool bDontCheckEngramPreRequirements) { return NativeCall<bool, AShooterPlayerState*, bool, bool>(this, "UPrimalEngramEntry.MeetsEngramRequirements", aPlayerState, bOnlyCheckLevel, bDontCheckEngramPreRequirements); }
	bool MeetsEngramChainRequirements(AShooterPlayerState * aPlayerState) { return NativeCall<bool, AShooterPlayerState*>(this, "UPrimalEngramEntry.MeetsEngramChainRequirements", aPlayerState); }
	FString * GetEngramDescription(FString * result, AShooterPlayerState * aPlayerState) { return NativeCall<FString*, FString*, AShooterPlayerState*>(this, "UPrimalEngramEntry.GetEngramDescription", result, aPlayerState); }
	FString * GetEngramName(FString * result) { return NativeCall<FString*, FString*>(this, "UPrimalEngramEntry.GetEngramName", result); }
	int GetRequiredEngramPoints() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredEngramPoints"); }
	int GetRequiredLevel() { return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredLevel"); }
	bool UseEngramRequirementSets() { return NativeCall<bool>(this, "UPrimalEngramEntry.UseEngramRequirementSets"); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "UPrimalEngramEntry.IsEngramClassHidden", ForItemClass); }
	void GetAllChainedPreReqs(AShooterPlayerState * aPlayerState, TArray<TSubclassOf<UPrimalEngramEntry>> * TestedEntries) { NativeCall<void, AShooterPlayerState*, TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalEngramEntry.GetAllChainedPreReqs", aPlayerState, TestedEntries); }
	int GetChainRequiredEngramPoints(TArray<TSubclassOf<UPrimalEngramEntry>> * TestedEntries) { return NativeCall<int, TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalEngramEntry.GetChainRequiredEngramPoints", TestedEntries); }
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

	static FString* MakeLiteralString(FString* result, FString* Value) { return NativeCall<FString*, FString*, FString*>(nullptr, "UKismetSystemLibrary.MakeLiteralString", result, Value); }
	static FString* GetDisplayName(FString* result, UObject* Object) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UKismetSystemLibrary.GetDisplayName", result, Object); }
	static FString* GetClassDisplayName(FString* result, UClass* Class) { return NativeCall<FString*, FString*, UClass*>(nullptr, "UKismetSystemLibrary.GetClassDisplayName", result, Class); }
	static FString* GetEngineVersion(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetEngineVersion", result); }
	static FString* GetGameName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetGameName", result); }
	static FString* GetPlatformUserName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetPlatformUserName", result); }
	static bool DoesImplementInterface(UObject* TestObject, TSubclassOf<UInterface> Interface) { return NativeCall<bool, UObject*, TSubclassOf<UInterface>>(nullptr, "UKismetSystemLibrary.DoesImplementInterface", TestObject, Interface); }
	static FString* GetUniqueDeviceId(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UKismetSystemLibrary.GetUniqueDeviceId", result); }
	//static FText* MakeLiteralText(FText* result, FText Value) { return NativeCall<FText*, FText*, FText>(nullptr, "UKismetSystemLibrary.MakeLiteralText", result, Value); }
	//static void QuitGame(UObject* WorldContextObject, APlayerController* SpecificPlayer, TEnumAsByte<enum EQuitPreference::Type> QuitPreference) { NativeCall<void, UObject*, APlayerController*, TEnumAsByte<enum EQuitPreference::Type>>(nullptr, "UKismetSystemLibrary.QuitGame", WorldContextObject, SpecificPlayer, QuitPreference); }
	static void K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping) { NativeCall<void, UObject*, FString, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimer", Object, FunctionName, Time, bLooping); }
	static void K2_SetTimerForNextTick(UObject* Object, FString FunctionName, bool bLooping) { NativeCall<void, UObject*, FString, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTick", Object, FunctionName, bLooping); }
	static void K2_SetTimerDelegate(FBlueprintTimerDynamicDelegate Delegate, float Time, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, float, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerDelegate", Delegate, Time, bLooping); }
	static void K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate Delegate, bool bLooping) { NativeCall<void, FBlueprintTimerDynamicDelegate, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTickDelegate", Delegate, bLooping); }
	static void K2_ClearTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_ClearTimer", Object, FunctionName); }
	static void K2_PauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_PauseTimer", Object, FunctionName); }
	static void K2_UnPauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_UnPauseTimer", Object, FunctionName); }
	static bool K2_IsTimerActive(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerActive", Object, FunctionName); }
	static bool K2_IsTimerPaused(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_IsTimerPaused", Object, FunctionName); }
	static bool K2_TimerExists(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_TimerExists", Object, FunctionName); }
	static float K2_GetTimerElapsedTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerElapsedTime", Object, FunctionName); }
	static float K2_GetTimerRemainingTime(UObject* Object, FString FunctionName) { return NativeCall<float, UObject*, FString>(nullptr, "UKismetSystemLibrary.K2_GetTimerRemainingTime", Object, FunctionName); }
	static void SetClassPropertyByName(UObject* Object, FName PropertyName, TSubclassOf<UObject> Value) { NativeCall<void, UObject*, FName, TSubclassOf<UObject>>(nullptr, "UKismetSystemLibrary.SetClassPropertyByName", Object, PropertyName, Value); }
	static void SetVectorPropertyByName(UObject* Object, FName PropertyName, FVector* Value) { NativeCall<void, UObject*, FName, FVector*>(nullptr, "UKismetSystemLibrary.SetVectorPropertyByName", Object, PropertyName, Value); }
	static void SetRotatorPropertyByName(UObject* Object, FName PropertyName, FRotator* Value) { NativeCall<void, UObject*, FName, FRotator*>(nullptr, "UKismetSystemLibrary.SetRotatorPropertyByName", Object, PropertyName, Value); }
	static void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, FLinearColor* Value) { NativeCall<void, UObject*, FName, FLinearColor*>(nullptr, "UKismetSystemLibrary.SetLinearColorPropertyByName", Object, PropertyName, Value); }
	static void SetTransformPropertyByName(UObject* Object, FName PropertyName, FTransform* Value) { NativeCall<void, UObject*, FName, FTransform*>(nullptr, "UKismetSystemLibrary.SetTransformPropertyByName", Object, PropertyName, Value); }
	static void GetActorListFromComponentList(TArray<UPrimitiveComponent*>* ComponentList, UClass* ActorClassFilter, TArray<AActor*>* OutActorList) { NativeCall<void, TArray<UPrimitiveComponent*>*, UClass*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.GetActorListFromComponentList", ComponentList, ActorClassFilter, OutActorList); }
	static bool SphereOverlapActors_NEW(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapActors_NEW", WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool SphereOverlapActorsSimple(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TEnumAsByte<enum EObjectTypeQuery> ObjectType, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, TEnumAsByte<enum EObjectTypeQuery>, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapActorsSimple", WorldContextObject, SpherePos, SphereRadius, ObjectType, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool SphereOverlapComponents_NEW(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.SphereOverlapComponents_NEW", WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool BoxOverlapActors_NEW(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.BoxOverlapActors_NEW", WorldContextObject, BoxPos, BoxExtent, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool BoxOverlapComponents_NEW(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.BoxOverlapComponents_NEW", WorldContextObject, BoxPos, BoxExtent, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool CapsuleOverlapActors_NEW(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UObject*, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapActors_NEW", WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool CapsuleOverlapComponents_NEW(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UObject*, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapComponents_NEW", WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool ComponentOverlapActors_NEW(UPrimitiveComponent* Component, FTransform* ComponentTransform, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ActorClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<AActor*>* OutActors) { return NativeCall<bool, UPrimitiveComponent*, FTransform*, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<AActor*>*>(nullptr, "UKismetSystemLibrary.ComponentOverlapActors_NEW", Component, ComponentTransform, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors); }
	static bool ComponentOverlapComponents_NEW(UPrimitiveComponent* Component, FTransform* ComponentTransform, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, UClass* ComponentClassFilter, TArray<AActor*>* ActorsToIgnore, TArray<UPrimitiveComponent*>* OutComponents) { return NativeCall<bool, UPrimitiveComponent*, FTransform*, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, UClass*, TArray<AActor*>*, TArray<UPrimitiveComponent*>*>(nullptr, "UKismetSystemLibrary.ComponentOverlapComponents_NEW", Component, ComponentTransform, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents); }
	static bool BoxTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceSingle", WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool BoxTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, ETraceTypeQuery, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceMulti", WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool LineTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.LineTraceSingleForObjects", WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool LineTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.LineTraceMultiForObjects", WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool SphereTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceSingleForObjects", WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool SphereTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.SphereTraceMultiForObjects", WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool BoxTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceSingleForObjects", WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool BoxTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, FVector, FRotator, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.BoxTraceMultiForObjects", WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static bool CapsuleTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult* OutHit, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, FHitResult*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceSingleForObjects", WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf); }
	static bool CapsuleTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<TEnumAsByte<enum EObjectTypeQuery>>* ObjectTypes, bool bTraceComplex, TArray<AActor*>* ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, TArray<FHitResult>* OutHits, bool bIgnoreSelf) { return NativeCall<bool, UObject*, FVector, FVector, float, float, TArray<TEnumAsByte<enum EObjectTypeQuery>>*, bool, TArray<AActor*>*, EDrawDebugTrace::Type, TArray<FHitResult>*, bool>(nullptr, "UKismetSystemLibrary.CapsuleTraceMultiForObjects", WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf); }
	static void DrawDebugFrustum(UObject* WorldContextObject, FTransform* FrustumTransform, FLinearColor FrustumColor, float Duration) { NativeCall<void, UObject*, FTransform*, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugFrustum", WorldContextObject, FrustumTransform, FrustumColor, Duration); }
	static void DrawDebugFloatHistoryLocation(UObject* WorldContextObject, FDebugFloatHistory* FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float LifeTime) { NativeCall<void, UObject*, FDebugFloatHistory*, FVector, FVector2D, FLinearColor, float>(nullptr, "UKismetSystemLibrary.DrawDebugFloatHistoryLocation", WorldContextObject, FloatHistory, DrawLocation, DrawSize, DrawColor, LifeTime); }
	static FDebugFloatHistory* AddFloatHistorySample(FDebugFloatHistory* result, float Value, FDebugFloatHistory* FloatHistory) { return NativeCall<FDebugFloatHistory*, FDebugFloatHistory*, float, FDebugFloatHistory*>(nullptr, "UKismetSystemLibrary.AddFloatHistorySample", result, Value, FloatHistory); }
	static void GetActorBounds(AActor* Actor, FVector* Origin, FVector* BoxExtent) { NativeCall<void, AActor*, FVector*, FVector*>(nullptr, "UKismetSystemLibrary.GetActorBounds", Actor, Origin, BoxExtent); }
	static void Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, float, FLatentActionInfo>(nullptr, "UKismetSystemLibrary.Delay", WorldContextObject, Duration, LatentInfo); }
	static void RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) { NativeCall<void, UObject*, float, FLatentActionInfo>(nullptr, "UKismetSystemLibrary.RetriggerableDelay", WorldContextObject, Duration, LatentInfo); }
	//static void MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, TEnumAsByte<enum EMoveComponentAction::Type> MoveAction, FLatentActionInfo LatentInfo, bool bSweep) { NativeCall<void, USceneComponent*, FVector, FRotator, bool, bool, float, TEnumAsByte<enum EMoveComponentAction::Type>, FLatentActionInfo, bool>(nullptr, "UKismetSystemLibrary.MoveComponentTo", Component, TargetRelativeLocation, TargetRelativeRotation, bEaseOut, bEaseIn, OverTime, MoveAction, LatentInfo, bSweep); }
	static int GetRenderingDetailMode() { return NativeCall<int>(nullptr, "UKismetSystemLibrary.GetRenderingDetailMode"); }
	static int GetRenderingMaterialQualityLevel() { return NativeCall<int>(nullptr, "UKismetSystemLibrary.GetRenderingMaterialQualityLevel"); }
	static void ShowPlatformSpecificAchievementsScreen(APlayerController* SpecificPlayer) { NativeCall<void, APlayerController*>(nullptr, "UKismetSystemLibrary.ShowPlatformSpecificAchievementsScreen", SpecificPlayer); }
	static void StaticRegisterNativesUKismetSystemLibrary() { NativeCall<void>(nullptr, "UKismetSystemLibrary.StaticRegisterNativesUKismetSystemLibrary"); }
};

struct FOverlapResult
{
	TWeakObjectPtr<AActor> Actor;
	TWeakObjectPtr<UPrimitiveComponent> Component;
	int ItemIndex;
	unsigned __int32 bBlockingHit : 1;

	// Functions

	AActor * GetActor() { return NativeCall<AActor *>(this, "FOverlapResult.GetActor"); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FOverlapResult.StaticStruct"); }
};

struct UVictoryCore
{

	// Functions

	static bool OverlappingActors(UWorld* theWorld, TArray<FOverlapResult>* Overlaps, FVector Origin, float Radius, int CollisionGroups, AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, UWorld*, TArray<FOverlapResult>*, FVector, float, int, AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActors", theWorld, Overlaps, Origin, Radius, CollisionGroups, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static FRotator* RLerp(FRotator* result, FRotator A, FRotator B, float Alpha, bool bShortestPath) { return NativeCall<FRotator*, FRotator*, FRotator, FRotator, float, bool>(nullptr, "UVictoryCore.RLerp", result, A, B, Alpha, bShortestPath); }
	static FVector2D* ProjectWorldToScreenPosition(FVector2D* result, FVector* WorldLocation, APlayerController* ThePC) { return NativeCall<FVector2D*, FVector2D*, FVector*, APlayerController*>(nullptr, "UVictoryCore.ProjectWorldToScreenPosition", result, WorldLocation, ThePC); }
	static FString* FormatSecondsAsHoursMinutesSeconds(FString* result, unsigned int Seconds) { return NativeCall<FString*, FString*, unsigned int>(nullptr, "UVictoryCore.FormatSecondsAsHoursMinutesSeconds", result, Seconds); }
	static bool OverlappingActorsTrace(UWorld* theWorld, TArray<FOverlapResult>* Overlaps, FVector Origin, float Radius, ECollisionChannel TraceChannel, AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, UWorld*, TArray<FOverlapResult>*, FVector, float, ECollisionChannel, AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingActorsTrace", theWorld, Overlaps, Origin, Radius, TraceChannel, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static int GetWeightedRandomIndex(TArray<float>* pArray, float ForceRand) { return NativeCall<int, TArray<float>*, float>(nullptr, "UVictoryCore.GetWeightedRandomIndex", pArray, ForceRand); }
	static FVector2D* ProjectWorldToScreenPositionRaw(FVector2D* result, FVector* WorldLocation, APlayerController* ThePC) { return NativeCall<FVector2D*, FVector2D*, FVector*, APlayerController*>(nullptr, "UVictoryCore.ProjectWorldToScreenPositionRaw", result, WorldLocation, ThePC); }
	static FName* GetObjectPath(FName* result, UObject* Obj) { return NativeCall<FName*, FName*, UObject*>(nullptr, "UVictoryCore.GetObjectPath", result, Obj); }
	static UPhysicalMaterial* TracePhysMaterial(UWorld* theWorld, FVector StartPos, FVector EndPos, AActor* IgnoreActor) { return NativeCall<UPhysicalMaterial*, UWorld*, FVector, FVector, AActor*>(nullptr, "UVictoryCore.TracePhysMaterial", theWorld, StartPos, EndPos, IgnoreActor); }
	static FString* GetKeyNameFromActionName(FString* result, FName ActionName) { return NativeCall<FString*, FString*, FName>(nullptr, "UVictoryCore.GetKeyNameFromActionName", result, ActionName); }
	static float ClampRotAxis(float BaseAxis, float DesiredAxis, float MaxDiff) { return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.ClampRotAxis", BaseAxis, DesiredAxis, MaxDiff); }
	static FVector* ClampLocation(FVector* result, FVector BaseLocation, FVector DesiredLocation, float MaxDiff, bool bTraceClampLocation, UWorld* TraceWorld, FVector* TraceFromLocation) { return NativeCall<FVector*, FVector*, FVector, FVector, float, bool, UWorld*, FVector*>(nullptr, "UVictoryCore.ClampLocation", result, BaseLocation, DesiredLocation, MaxDiff, bTraceClampLocation, TraceWorld, TraceFromLocation); }
	static int BPGetWeightedRandomIndex(TArray<float>* pArray, float ForceRand) { return NativeCall<int, TArray<float>*, float>(nullptr, "UVictoryCore.BPGetWeightedRandomIndex", pArray, ForceRand); }
	static bool ComponentBoundsEncompassesPoint(UPrimitiveComponent* Comp, FVector* Point, float BoundsMultiplier) { return NativeCall<bool, UPrimitiveComponent*, FVector*, float>(nullptr, "UVictoryCore.ComponentBoundsEncompassesPoint", Comp, Point, BoundsMultiplier); }
	static bool SphereOverlapFast(UObject* WorldContextObject, FVector* Loc, const float Radius) { return NativeCall<bool, UObject*, FVector*, const float>(nullptr, "UVictoryCore.SphereOverlapFast", WorldContextObject, Loc, Radius); }
	static bool CapsuleOverlapFast(UObject* WorldContextObject, AActor** OutFirstOverlappedActor, FVector* Origin, FRotator* CapsuleRotation, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, AActor* IgnoreActor, bool bDebugDraw, float DebugDrawDuration, bool bBlockingOnly) { return NativeCall<bool, UObject*, AActor**, FVector*, FRotator*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, AActor*, bool, float, bool>(nullptr, "UVictoryCore.CapsuleOverlapFast", WorldContextObject, OutFirstOverlappedActor, Origin, CapsuleRotation, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActor, bDebugDraw, DebugDrawDuration, bBlockingOnly); }
	static bool CapsuleSweepFast(UObject* WorldContextObject, FHitResult* OutHit, FVector* Start, FVector* End, FRotator* CapsuleRot, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, TArray<AActor*>* IgnoreActors, bool bDebugDraw, float DebugDrawDuration) { return NativeCall<bool, UObject*, FHitResult*, FVector*, FVector*, FRotator*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, TArray<AActor*>*, bool, float>(nullptr, "UVictoryCore.CapsuleSweepFast", WorldContextObject, OutHit, Start, End, CapsuleRot, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActors, bDebugDraw, DebugDrawDuration); }
	static bool CapsuleSweepFast(UObject* WorldContextObject, FHitResult* OutHit, FVector* Start, FVector* End, FRotator* CapsuleRot, float Radius, float HalfHeight, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bIgnoreSelf, AActor* IgnoreActor, bool bDebugDraw, float DebugDrawDuration) { return NativeCall<bool, UObject*, FHitResult*, FVector*, FVector*, FRotator*, float, float, TEnumAsByte<enum ECollisionChannel>, bool, bool, AActor*, bool, float>(nullptr, "UVictoryCore.CapsuleSweepFast", WorldContextObject, OutHit, Start, End, CapsuleRot, Radius, HalfHeight, CollisionChannel, bTraceComplex, bIgnoreSelf, IgnoreActor, bDebugDraw, DebugDrawDuration); }
	static bool CapsuleSweepMulti(UObject* WorldContextObject, TArray<FHitResult>* OutHits, FVector* Start, FVector* End, FRotator* CapsuleRot, float Radius, float HalfHeight, TArray<AActor*>* IgnoreActors, bool bIgnoreSelf, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bTraceComplex, bool bDebugDraw, float DebugDrawDuration, bool bFindInitialOverlaps) { return NativeCall<bool, UObject*, TArray<FHitResult>*, FVector*, FVector*, FRotator*, float, float, TArray<AActor*>*, bool, TEnumAsByte<enum ECollisionChannel>, bool, bool, float, bool>(nullptr, "UVictoryCore.CapsuleSweepMulti", WorldContextObject, OutHits, Start, End, CapsuleRot, Radius, HalfHeight, IgnoreActors, bIgnoreSelf, CollisionChannel, bTraceComplex, bDebugDraw, DebugDrawDuration, bFindInitialOverlaps); }
	static void MultiTraceProjectSphere(UObject* WorldContextObject, TArray<FHitResult>* OutResults, FVector* Origin, ECollisionChannel TraceChannel, int HorizResolution, int VertResolution, float StartDistance, float EndDistance, float NorthConeSubtractAngle, float SouthConeSubtractAngle, int PctChanceToTrace, int MaxTraceCount, bool bDrawDebugLines, float DebugDrawDuration) { NativeCall<void, UObject*, TArray<FHitResult>*, FVector*, ECollisionChannel, int, int, float, float, float, float, int, int, bool, float>(nullptr, "UVictoryCore.MultiTraceProjectSphere", WorldContextObject, OutResults, Origin, TraceChannel, HorizResolution, VertResolution, StartDistance, EndDistance, NorthConeSubtractAngle, SouthConeSubtractAngle, PctChanceToTrace, MaxTraceCount, bDrawDebugLines, DebugDrawDuration); }
	//static float GetProjectileArcPeakTime(UObject* WorldContextObject, FProjectileArc* Arc) { return NativeCall<float, UObject*, FProjectileArc*>(nullptr, "UVictoryCore.GetProjectileArcPeakTime", WorldContextObject, Arc); }
	//static FVector* EvalProjectileArc(FVector* result, UObject* WorldContextObject, FProjectileArc* Arc, float Time) { return NativeCall<FVector*, FVector*, UObject*, FProjectileArc*, float>(nullptr, "UVictoryCore.EvalProjectileArc", result, WorldContextObject, Arc, Time); }
	//static void DebugDrawProjectileArc(UObject* WorldContextObject, FProjectileArc* Arc, float MaxArcTime, float ArcTimeStep, FLinearColor LineColor, float LineThickness, float DebugDrawDuration) { NativeCall<void, UObject*, FProjectileArc*, float, float, FLinearColor, float, float>(nullptr, "UVictoryCore.DebugDrawProjectileArc", WorldContextObject, Arc, MaxArcTime, ArcTimeStep, LineColor, LineThickness, DebugDrawDuration); }
	//static bool TraceProjectileArc(UObject* WorldContextObject, FProjectileArc* Arc, FHitResult* OutHitResult, FVector* OutEndLocation, float* OutEndArcTime, FVector* OutArcPeakLocation, float MaxArcLength, TArray<AActor*>* ActorsToIgnore, float ArcTimeStep, ECollisionChannel CollisionChannel, bool bTraceObjectTypeOnly, bool bDrawDebug, float DebugDrawDuration) { return NativeCall<bool, UObject*, FProjectileArc*, FHitResult*, FVector*, float*, FVector*, float, TArray<AActor*>*, float, ECollisionChannel, bool, bool, float>(nullptr, "UVictoryCore.TraceProjectileArc", WorldContextObject, Arc, OutHitResult, OutEndLocation, OutEndArcTime, OutArcPeakLocation, MaxArcLength, ActorsToIgnore, ArcTimeStep, CollisionChannel, bTraceObjectTypeOnly, bDrawDebug, DebugDrawDuration); }
	//static bool CapsuleSweepProjectileArc(UObject* WorldContextObject, FProjectileArc* Arc, FRotator* CapsuleRotation, float CapsuleRadius, float CapsuleHalfHeight, bool bRotateCapsuleAlongPath, bool bTraceComplex, FHitResult* OutHitResult, FVector* OutEndLocation, float* OutEndArcTime, float MaxArcLength, TArray<AActor*>* ActorsToIgnore, bool bIgnoreSelf, float ArcTimeStep, TEnumAsByte<enum ECollisionChannel> CollisionChannel, bool bDrawDebug, float DebugDrawDuration) { return NativeCall<bool, UObject*, FProjectileArc*, FRotator*, float, float, bool, bool, FHitResult*, FVector*, float*, float, TArray<AActor*>*, bool, float, TEnumAsByte<enum ECollisionChannel>, bool, float>(nullptr, "UVictoryCore.CapsuleSweepProjectileArc", WorldContextObject, Arc, CapsuleRotation, CapsuleRadius, CapsuleHalfHeight, bRotateCapsuleAlongPath, bTraceComplex, OutHitResult, OutEndLocation, OutEndArcTime, MaxArcLength, ActorsToIgnore, bIgnoreSelf, ArcTimeStep, CollisionChannel, bDrawDebug, DebugDrawDuration); }
	static void MultiLinePenetrationTraceByChannel(UObject* WorldContextObject, TArray<FPenetrationTraceHit>* OutResults, FVector* Start, FVector* End, ECollisionChannel TraceChannel, TArray<AActor*>* ActorsToIgnore, bool bTraceComplex, bool bIgnoreSelf, bool bDrawDebugLines, float DebugDrawDuration) { NativeCall<void, UObject*, TArray<FPenetrationTraceHit>*, FVector*, FVector*, ECollisionChannel, TArray<AActor*>*, bool, bool, bool, float>(nullptr, "UVictoryCore.MultiLinePenetrationTraceByChannel", WorldContextObject, OutResults, Start, End, TraceChannel, ActorsToIgnore, bTraceComplex, bIgnoreSelf, bDrawDebugLines, DebugDrawDuration); }
	static bool FindValidLocationNextToTarget(UObject* WorldContextObject, FVector* OutLocation, APrimalCharacter* SourceCharacter, APrimalCharacter* TargetCharacter, float DistanceMargin, int MaxTraceCount, AActor* ActorToIgnore, bool bTraceComplex, bool bDrawDebug, float DebugDrawDuration) { return NativeCall<bool, UObject*, FVector*, APrimalCharacter*, APrimalCharacter*, float, int, AActor*, bool, bool, float>(nullptr, "UVictoryCore.FindValidLocationNextToTarget", WorldContextObject, OutLocation, SourceCharacter, TargetCharacter, DistanceMargin, MaxTraceCount, ActorToIgnore, bTraceComplex, bDrawDebug, DebugDrawDuration); }
	static FRotator* BPRotatorLerp(FRotator* result, FRotator* A, FRotator* B, const float* Alpha) { return NativeCall<FRotator*, FRotator*, FRotator*, FRotator*, const float*>(nullptr, "UVictoryCore.BPRotatorLerp", result, A, B, Alpha); }
	//static float SimpleCurveEval(float Value, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveEval", Value, CurveType); }
	//static FRotator* SimpleCurveInterpClampedRotator(FRotator* result, FRotator A, FRotator B, float Alpha, bool bShortestPath, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<FRotator*, FRotator*, FRotator, FRotator, float, bool, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClampedRotator", result, A, B, Alpha, bShortestPath, CurveType); }
	//static FTransform* SimpleCurveInterpClampedTransform(FTransform* result, FTransform A, FTransform B, float Alpha, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<FTransform*, FTransform*, FTransform, FTransform, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.SimpleCurveInterpClampedTransform", result, A, B, Alpha, CurveType); }
	//static float MapRangeToCurveClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.MapRangeToCurveClamped", Value, InRangeA, InRangeB, OutRangeA, OutRangeB, CurveType); }
	//static float MapAngleRangeToCurveClamped(float AngleDegrees, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB, TEnumAsByte<enum ESimpleCurve::Type> CurveType) { return NativeCall<float, float, float, float, float, float, TEnumAsByte<enum ESimpleCurve::Type>>(nullptr, "UVictoryCore.MapAngleRangeToCurveClamped", AngleDegrees, InRangeA, InRangeB, OutRangeA, OutRangeB, CurveType); }
	static FVector* ViewDirectionAngleOffset(FVector* result, FVector ViewDirection, FVector RightVector, float AngleOffsetDegrees, float MaxAngleDegreesBeforeInterpToUp) { return NativeCall<FVector*, FVector*, FVector, FVector, float, float>(nullptr, "UVictoryCore.ViewDirectionAngleOffset", result, ViewDirection, RightVector, AngleOffsetDegrees, MaxAngleDegreesBeforeInterpToUp); }
	static FVector* FlattenDirectionVector(FVector* result, FVector Direction) { return NativeCall<FVector*, FVector*, FVector>(nullptr, "UVictoryCore.FlattenDirectionVector", result, Direction); }
	static FVector* FlattenDirectionVectorInLocalSpace(FVector* result, FVector Direction, FRotator Rotation) { return NativeCall<FVector*, FVector*, FVector, FRotator>(nullptr, "UVictoryCore.FlattenDirectionVectorInLocalSpace", result, Direction, Rotation); }
	static bool BPFastTrace(UWorld* theWorld, FVector TraceEnd, FVector TraceStart, AActor* ActorToIgnore, float DebugDrawDuration) { return NativeCall<bool, UWorld*, FVector, FVector, AActor*, float>(nullptr, "UVictoryCore.BPFastTrace", theWorld, TraceEnd, TraceStart, ActorToIgnore, DebugDrawDuration); }
	static bool VTraceIgnoreFoliage(UWorld* theWorld, FVector* Start, FVector* End, FHitResult* HitOut, AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FVector* BoxExtent, FName TraceTag, AActor* OtherActorToIgnore, TArray<AActor*>* OtherActorsToIgnore, FQuat* Rot, AActor* AnotherActorToIgnore, bool bIgnoreFoliage) { return NativeCall<bool, UWorld*, FVector*, FVector*, FHitResult*, AActor*, ECollisionChannel, int, bool, bool, FVector*, FName, AActor*, TArray<AActor*>*, FQuat*, AActor*, bool>(nullptr, "UVictoryCore.VTraceIgnoreFoliage", theWorld, Start, End, HitOut, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, OtherActorToIgnore, OtherActorsToIgnore, Rot, AnotherActorToIgnore, bIgnoreFoliage); }
	static void SteamOverlayOpenURL(FString* ToURL) { NativeCall<void, FString*>(nullptr, "UVictoryCore.SteamOverlayOpenURL", ToURL); }
	static void SetSessionPrefix(FString* InPrefix) { NativeCall<void, FString*>(nullptr, "UVictoryCore.SetSessionPrefix", InPrefix); }
	static FColor* GetTeamColor(FColor* result, const int TargetingTeam) { return NativeCall<FColor*, FColor*, const int>(nullptr, "UVictoryCore.GetTeamColor", result, TargetingTeam); }
	static FString* BPFormatAsTime(FString* result, int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds) { return NativeCall<FString*, FString*, int, bool, bool, bool>(nullptr, "UVictoryCore.BPFormatAsTime", result, InTime, UseLeadingZero, bForceLeadingZeroHour, bShowSeconds); }
	static FString* FormatAsTime(FString* result, int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds) { return NativeCall<FString*, FString*, int, bool, bool, bool>(nullptr, "UVictoryCore.FormatAsTime", result, InTime, UseLeadingZero, bForceLeadingZeroHour, bShowSeconds); }
	static FString* BPFormatAsTimeLong(FString* result, int InTime) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.BPFormatAsTimeLong", result, InTime); }
	static FString* FormatAsTimeLong(FString* result, int InTime) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.FormatAsTimeLong", result, InTime); }
	static bool CalculateInterceptPosition(FVector* StartPosition, FVector* StartVelocity, float ProjectileVelocity, FVector* TargetPosition, FVector* TargetVelocity, FVector* InterceptPosition) { return NativeCall<bool, FVector*, FVector*, float, FVector*, FVector*, FVector*>(nullptr, "UVictoryCore.CalculateInterceptPosition", StartPosition, StartVelocity, ProjectileVelocity, TargetPosition, TargetVelocity, InterceptPosition); }
	static int GetSecondsIntoDay() { return NativeCall<int>(nullptr, "UVictoryCore.GetSecondsIntoDay"); }
	static FString* ConsumeBonusItemCode(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.ConsumeBonusItemCode", result); }
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
	static TArray<AActor*>* SortActorsByTag(TArray<AActor*>* result, int tagIndex, TArray<AActor*>* actors) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, int, TArray<AActor*>*>(nullptr, "UVictoryCore.SortActorsByTag", result, tagIndex, actors); }
	static TArray<int>* GetArrayIndicesSorted_Float(TArray<int>* result, TArray<float>* Array, bool bSortLowToHigh) { return NativeCall<TArray<int>*, TArray<int>*, TArray<float>*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Float", result, Array, bSortLowToHigh); }
	static TArray<int>* GetArrayIndicesSorted_Double(TArray<int>* result, TArray<double>* Array, bool bSortLowToHigh) { return NativeCall<TArray<int>*, TArray<int>*, TArray<double>*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Double", result, Array, bSortLowToHigh); }
	static TArray<int>* GetArrayIndicesSorted_Int(TArray<int>* result, TArray<int>* Array, bool bSortLowToHigh) { return NativeCall<TArray<int>*, TArray<int>*, TArray<int>*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Int", result, Array, bSortLowToHigh); }
	static bool FindWorldActors(UWorld* fWorld, TArray<AActor*>* fContainer, TSubclassOf<AActor> fType, FName fTag) { return NativeCall<bool, UWorld*, TArray<AActor*>*, TSubclassOf<AActor>, FName>(nullptr, "UVictoryCore.FindWorldActors", fWorld, fContainer, fType, fTag); }
	static TArray<TWeakObjectPtr<APrimalDinoCharacter>>* RemoveInvalidObjectsInContainer(TArray<TWeakObjectPtr<APrimalDinoCharacter>>* result, TArray<TWeakObjectPtr<APrimalDinoCharacter>> fContainer) { return NativeCall<TArray<TWeakObjectPtr<APrimalDinoCharacter>>*, TArray<TWeakObjectPtr<APrimalDinoCharacter>>*, TArray<TWeakObjectPtr<APrimalDinoCharacter>>>(nullptr, "UVictoryCore.RemoveInvalidObjectsInContainer", result, fContainer); }
	static void FinishSpawning(AActor* Actor) { NativeCall<void, AActor*>(nullptr, "UVictoryCore.FinishSpawning", Actor); }
	static bool KillTargetCharacterOrStructure(AActor* ActorToKill, bool bTryDestroyActor) { return NativeCall<bool, AActor*, bool>(nullptr, "UVictoryCore.KillTargetCharacterOrStructure", ActorToKill, bTryDestroyActor); }
	static int GetWeightedRandomIndexFromArray(TArray<float> pArray, float ForceRand) { return NativeCall<int, TArray<float>, float>(nullptr, "UVictoryCore.GetWeightedRandomIndexFromArray", pArray, ForceRand); }
	static AActor* GetClosestActorArray(FVector ToPoint, TArray<AActor*>* ActorArray) { return NativeCall<AActor*, FVector, TArray<AActor*>*>(nullptr, "UVictoryCore.GetClosestActorArray", ToPoint, ActorArray); }
	static ACustomActorList* GetCustomActorList(UWorld* ForWorld, FName SearchCustomTag) { return NativeCall<ACustomActorList*, UWorld*, FName>(nullptr, "UVictoryCore.GetCustomActorList", ForWorld, SearchCustomTag); }
	static long double GetNetworkTimeInSeconds(UObject* WorldContextObject) { return NativeCall<long double, UObject*>(nullptr, "UVictoryCore.GetNetworkTimeInSeconds", WorldContextObject); }
	static long double GetRealWorldUtcTimeInSeconds() { return NativeCall<long double>(nullptr, "UVictoryCore.GetRealWorldUtcTimeInSeconds"); }
	static AShooterCharacter* GetShooterCharacterFromPawn(APawn* Pawn) { return NativeCall<AShooterCharacter*, APawn*>(nullptr, "UVictoryCore.GetShooterCharacterFromPawn", Pawn); }
	static bool VTraceSingleBP(UWorld* theWorld, FHitResult* OutHit, FVector* Start, FVector* End, ECollisionChannel TraceChannel, int CollisionGroups, FName TraceTag, bool bTraceComplex, AActor* ActorToIgnore) { return NativeCall<bool, UWorld*, FHitResult*, FVector*, FVector*, ECollisionChannel, int, FName, bool, AActor*>(nullptr, "UVictoryCore.VTraceSingleBP", theWorld, OutHit, Start, End, TraceChannel, CollisionGroups, TraceTag, bTraceComplex, ActorToIgnore); }
	static bool VTraceSphereBP(UWorld* theWorld, FVector* Start, FVector* End, FHitResult* HitOut, float Radius, AActor* ActorToIgnore, ECollisionChannel Channel, int CollisionGroups, bool bReturnPhysMaterial, bool bTraceComplex, FName TraceTag, AActor* OtherActorToIgnore, AActor* AnotherActorToIgnore) { return NativeCall<bool, UWorld*, FVector*, FVector*, FHitResult*, float, AActor*, ECollisionChannel, int, bool, bool, FName, AActor*, AActor*>(nullptr, "UVictoryCore.VTraceSphereBP", theWorld, Start, End, HitOut, Radius, ActorToIgnore, Channel, CollisionGroups, bReturnPhysMaterial, bTraceComplex, TraceTag, OtherActorToIgnore, AnotherActorToIgnore); }
	static bool VTraceMulti(UWorld* theWorld, TArray<FHitResult>* OutHits, FVector* Start, FVector* End, AActor* InIgnoreActor, int CollisionGroups, float SphereRadius, FVector* BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, FName TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, AActor* AdditionalIgnoreActor, AActor* AnotherIgnoreActor, bool bJustDoSphereOverlapAtStartLoc, TArray<AActor*>* ExtraIgnoreActors) { return NativeCall<bool, UWorld*, TArray<FHitResult>*, FVector*, FVector*, AActor*, int, float, FVector*, bool, ECollisionChannel, bool, FName, bool, bool, AActor*, AActor*, bool, TArray<AActor*>*>(nullptr, "UVictoryCore.VTraceMulti", theWorld, OutHits, Start, End, InIgnoreActor, CollisionGroups, SphereRadius, BoxExtent, bReturnPhysMaterial, TraceChannel, bTraceComplex, TraceTag, bTraceChannelForceOverlap, bDoSort, AdditionalIgnoreActor, AnotherIgnoreActor, bJustDoSphereOverlapAtStartLoc, ExtraIgnoreActors); }
	static FString* GetKeyName(FString* result, FKey key) { return NativeCall<FString*, FString*, FKey>(nullptr, "UVictoryCore.GetKeyName", result, key); }
	static bool IsGamePadConnected() { return NativeCall<bool>(nullptr, "UVictoryCore.IsGamePadConnected"); }
	static int IsChildOfClasses(TSubclassOf<UObject> childClass, TArray<TSubclassOf<UObject>>* ParentClassesArray) { return NativeCall<int, TSubclassOf<UObject>, TArray<TSubclassOf<UObject>>*>(nullptr, "UVictoryCore.IsChildOfClasses", childClass, ParentClassesArray); }
	static bool IsPVEServer(UObject* WorldContextObject) { return NativeCall<bool, UObject*>(nullptr, "UVictoryCore.IsPVEServer", WorldContextObject); }
	static bool IsCooldownComplete(UObject* WorldContextObject, long double CooldownClock, float NumSeconds) { return NativeCall<bool, UObject*, long double, float>(nullptr, "UVictoryCore.IsCooldownComplete", WorldContextObject, CooldownClock, NumSeconds); }
	static float CooldownTimeRemaining(UObject* WorldContextObject, long double CooldownClock, float CooldownDuration) { return NativeCall<float, UObject*, long double, float>(nullptr, "UVictoryCore.CooldownTimeRemaining", WorldContextObject, CooldownClock, CooldownDuration); }
	static void PauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UVictoryCore.PauseTimer", Object, FunctionName); }
	static void UnPauseTimer(UObject* Object, FString FunctionName) { NativeCall<void, UObject*, FString>(nullptr, "UVictoryCore.UnPauseTimer", Object, FunctionName); }
	static bool IsTimerActive(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UVictoryCore.IsTimerActive", Object, FunctionName); }
	static bool IsTimerPaused(UObject* Object, FString FunctionName) { return NativeCall<bool, UObject*, FString>(nullptr, "UVictoryCore.IsTimerPaused", Object, FunctionName); }
	static FString* GetLastMapPlayed(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetLastMapPlayed", result); }
	static FString* GetLastHostedMapPlayed(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetLastHostedMapPlayed", result); }
	static void SetLastHostedMapPlayed(FString* NewLastHostedMapPlayed) { NativeCall<void, FString*>(nullptr, "UVictoryCore.SetLastHostedMapPlayed", NewLastHostedMapPlayed); }
	static bool OwnsScorchedEarth() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsScorchedEarth"); }
	static bool OwnsAberration() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsAberration"); }
	static bool OwnsExtinction() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsExtinction"); }
	static bool OwnsGenesisSeasonPass() { return NativeCall<bool>(nullptr, "UVictoryCore.OwnsGenesisSeasonPass"); }
	static bool OwnsDLC(FString DLCName) { return NativeCall<bool, FString>(nullptr, "UVictoryCore.OwnsDLC", DLCName); }
	static bool OwnsSteamAppID(int AppID) { return NativeCall<bool, int>(nullptr, "UVictoryCore.OwnsSteamAppID", AppID); }
	static void OpenStorePageForDLC(FString DLCName) { NativeCall<void, FString>(nullptr, "UVictoryCore.OpenStorePageForDLC", DLCName); }
	static FVector* LeadTargetPosition(FVector* result, FVector* ProjLocation, float ProjSpeed, FVector* TargetLocation, FVector* TargetVelocity) { return NativeCall<FVector*, FVector*, FVector*, float, FVector*, FVector*>(nullptr, "UVictoryCore.LeadTargetPosition", result, ProjLocation, ProjSpeed, TargetLocation, TargetVelocity); }
	static TArray<AActor*>* SortActorsByDistance(TArray<AActor*>* result, FVector* fromLoc, TArray<AActor*>* actors) { return NativeCall<TArray<AActor*>*, TArray<AActor*>*, FVector*, TArray<AActor*>*>(nullptr, "UVictoryCore.SortActorsByDistance", result, fromLoc, actors); }
	static void AddToActorList(UWorld* ForWorld, int ActorListNum, AActor* ActorRef) { NativeCall<void, UWorld*, int, AActor*>(nullptr, "UVictoryCore.AddToActorList", ForWorld, ActorListNum, ActorRef); }
	static FLinearColor* ChangeSaturation(FLinearColor* result, FLinearColor* InColor, float NewSaturation) { return NativeCall<FLinearColor*, FLinearColor*, FLinearColor*, float>(nullptr, "UVictoryCore.ChangeSaturation", result, InColor, NewSaturation); }
	static FString* SimpleFloatString(FString* result, float inputVal) { return NativeCall<FString*, FString*, float>(nullptr, "UVictoryCore.SimpleFloatString", result, inputVal); }
	static bool IsWorkshopIDSubscribed(FString* WorkshopID) { return NativeCall<bool, FString*>(nullptr, "UVictoryCore.IsWorkshopIDSubscribed", WorkshopID); }
	static FTransform* InverseTransform(FTransform* result, FTransform* TransformIn) { return NativeCall<FTransform*, FTransform*, FTransform*>(nullptr, "UVictoryCore.InverseTransform", result, TransformIn); }
	static UClass* BPLoadClass(FString* PathName) { return NativeCall<UClass*, FString*>(nullptr, "UVictoryCore.BPLoadClass", PathName); }
	static bool VTraceAgainstActorExpensive(UWorld* theWorld, FVector* Start, FVector* End, FHitResult* HitOut, AActor* ActorToTraceAgainst, ECollisionChannel Channel, int CollisionGroups, float SphereRadius, bool bReturnPhysMaterial, bool bTraceComplex, FVector* BoxExtent, FName TraceTag, bool bSort) { return NativeCall<bool, UWorld*, FVector*, FVector*, FHitResult*, AActor*, ECollisionChannel, int, float, bool, bool, FVector*, FName, bool>(nullptr, "UVictoryCore.VTraceAgainstActorExpensive", theWorld, Start, End, HitOut, ActorToTraceAgainst, Channel, CollisionGroups, SphereRadius, bReturnPhysMaterial, bTraceComplex, BoxExtent, TraceTag, bSort); }
	static FString* GetClassString(FString* result, UObject* ForObject) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UVictoryCore.GetClassString", result, ForObject); }
	static FString* GetClassPathName(FString* result, UObject* ForObject) { return NativeCall<FString*, FString*, UObject*>(nullptr, "UVictoryCore.GetClassPathName", result, ForObject); }
	static FString* GetNewlineCharacter(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetNewlineCharacter", result); }
	static FString* IntToStringAscii(FString* result, int CharValue) { return NativeCall<FString*, FString*, int>(nullptr, "UVictoryCore.IntToStringAscii", result, CharValue); }
	static int StringToIntAscii(FString SourceString, int Index) { return NativeCall<int, FString, int>(nullptr, "UVictoryCore.StringToIntAscii", SourceString, Index); }
	static FString* JoinStringArrayWithNewlines(FString* result, TArray<FString>* SourceArray) { return NativeCall<FString*, FString*, TArray<FString>*>(nullptr, "UVictoryCore.JoinStringArrayWithNewlines", result, SourceArray); }
	static FString* GetTwoLetterISOLanguageName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetTwoLetterISOLanguageName", result); }
	static FString* GetTotalCoversionIdAsString(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UVictoryCore.GetTotalCoversionIdAsString", result); }
	static AActor* SpawnActorInWorld(UWorld* ForWorld, TSubclassOf<AActor> AnActorClass, FVector AtLocation, FRotator AtRotation, USceneComponent* attachToComponent, int dataIndex, FName attachSocketName, AActor* OwnerActor, APawn* InstigatorPawn) { return NativeCall<AActor*, UWorld*, TSubclassOf<AActor>, FVector, FRotator, USceneComponent*, int, FName, AActor*, APawn*>(nullptr, "UVictoryCore.SpawnActorInWorld", ForWorld, AnActorClass, AtLocation, AtRotation, attachToComponent, dataIndex, attachSocketName, OwnerActor, InstigatorPawn); }
	//static UClass* GetItemClassFromItemSetup(FItemSetup* ItemSetup) { return NativeCall<UClass*, FItemSetup*>(nullptr, "UVictoryCore.GetItemClassFromItemSetup", ItemSetup); }
	static bool GetCharacterCapsuleSize(TSubclassOf<APrimalCharacter> CharClass, float* OutCapsuleRadius, float* OutCapsuleHalfHeight) { return NativeCall<bool, TSubclassOf<APrimalCharacter>, float*, float*>(nullptr, "UVictoryCore.GetCharacterCapsuleSize", CharClass, OutCapsuleRadius, OutCapsuleHalfHeight); }
	//static UClass* GetDinoStaticClass(FDinoSetup* DinoSetup) { return NativeCall<UClass*, FDinoSetup*>(nullptr, "UVictoryCore.GetDinoStaticClass", DinoSetup); }
	//static FVector* GetCustomDinoSpawnLocation(FVector* result, UWorld* World, FVector* SpawnLocation, FRotator* SpawnRotation, FDinoSetup* DinoSetup, float DebugDrawDuration, bool bApplyRotationToSpawnOffset) { return NativeCall<FVector*, FVector*, UWorld*, FVector*, FRotator*, FDinoSetup*, float, bool>(nullptr, "UVictoryCore.GetCustomDinoSpawnLocation", result, World, SpawnLocation, SpawnRotation, DinoSetup, DebugDrawDuration, bApplyRotationToSpawnOffset); }
	//static APrimalDinoCharacter* SpawnCustomDino(UWorld* World, FVector* SpawnLocation, FRotator* SpawnRotation, FDinoSetup* DinoSetup, AShooterPlayerController* OwnerPlayerController, float DebugDrawDuration, bool bApplyRotationToSpawnOffset) { return NativeCall<APrimalDinoCharacter*, UWorld*, FVector*, FRotator*, FDinoSetup*, AShooterPlayerController*, float, bool>(nullptr, "UVictoryCore.SpawnCustomDino", World, SpawnLocation, SpawnRotation, DinoSetup, OwnerPlayerController, DebugDrawDuration, bApplyRotationToSpawnOffset); }
	//static bool CanSpawnCustomDino(UWorld* World, FVector* OutCalculatedSpawnLocation, FVector* PlayerLocation, FVector* SpawnLocation, FRotator* SpawnRotation, FDinoSetup* DinoSetup, float DebugDrawDuration) { return NativeCall<bool, UWorld*, FVector*, FVector*, FVector*, FRotator*, FDinoSetup*, float>(nullptr, "UVictoryCore.CanSpawnCustomDino", World, OutCalculatedSpawnLocation, PlayerLocation, SpawnLocation, SpawnRotation, DinoSetup, DebugDrawDuration); }
	static void GetObjectsReferencedBy(UObject* ForObject, TArray<UObject*>* OutReferencedObjects, bool bIgnoreTransient) { NativeCall<void, UObject*, TArray<UObject*>*, bool>(nullptr, "UVictoryCore.GetObjectsReferencedBy", ForObject, OutReferencedObjects, bIgnoreTransient); }
	static bool GetOverlappedHarvestActors(UWorld* ForWorld, FVector* AtLoc, float AtRadius, TArray<AActor*>* OutHarvestActors, TArray<UActorComponent*>* OutHarvestComponents, TArray<FVector>* OutHarvestLocations, TArray<int>* OutHitBodyIndices) { return NativeCall<bool, UWorld*, FVector*, float, TArray<AActor*>*, TArray<UActorComponent*>*, TArray<FVector>*, TArray<int>*>(nullptr, "UVictoryCore.GetOverlappedHarvestActors", ForWorld, AtLoc, AtRadius, OutHarvestActors, OutHarvestComponents, OutHarvestLocations, OutHitBodyIndices); }
	static FName* GetHitBoneNameFromDamageEvent(FName* result, APrimalCharacter* Character, AController* HitInstigator, FDamageEvent* DamageEvent, bool bIsPointDamage, FHitResult* PointHitResult, FName MatchCollisionPresetName) { return NativeCall<FName*, FName*, APrimalCharacter*, AController*, FDamageEvent*, bool, FHitResult*, FName>(nullptr, "UVictoryCore.GetHitBoneNameFromDamageEvent", result, Character, HitInstigator, DamageEvent, bIsPointDamage, PointHitResult, MatchCollisionPresetName); }
	static float GetAngleBetweenVectors(FVector* VectorA, FVector* VectorB, FVector* AroundAxis) { return NativeCall<float, FVector*, FVector*, FVector*>(nullptr, "UVictoryCore.GetAngleBetweenVectors", VectorA, VectorB, AroundAxis); }
	static float GetAngleBetweenVectorsPure(FVector VectorA, FVector VectorB, FVector AroundAxis) { return NativeCall<float, FVector, FVector, FVector>(nullptr, "UVictoryCore.GetAngleBetweenVectorsPure", VectorA, VectorB, AroundAxis); }
	static bool AreRotatorsNearlyEqual(FRotator* RotatorA, FRotator* RotatorB, float WithinError) { return NativeCall<bool, FRotator*, FRotator*, float>(nullptr, "UVictoryCore.AreRotatorsNearlyEqual", RotatorA, RotatorB, WithinError); }
	static void SetBoolArrayElemTrue(TArray<bool>* TheArray, int TheIndex) { NativeCall<void, TArray<bool>*, int>(nullptr, "UVictoryCore.SetBoolArrayElemTrue", TheArray, TheIndex); }
	static void SetBoolArrayElemFalse(TArray<bool>* TheArray, int TheIndex) { NativeCall<void, TArray<bool>*, int>(nullptr, "UVictoryCore.SetBoolArrayElemFalse", TheArray, TheIndex); }
	static void MulticastDrawDebugLine(AActor* ReplicatedActor, FVector LineStart, FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness) { NativeCall<void, AActor*, FVector, FVector, FLinearColor, float, float>(nullptr, "UVictoryCore.MulticastDrawDebugLine", ReplicatedActor, LineStart, LineEnd, LineColor, Duration, Thickness); }
	static void MulticastDrawDebugSphere(AActor* ReplicatedActor, FVector Center, float Radius, int Segments, FLinearColor LineColor, float Duration) { NativeCall<void, AActor*, FVector, float, int, FLinearColor, float>(nullptr, "UVictoryCore.MulticastDrawDebugSphere", ReplicatedActor, Center, Radius, Segments, LineColor, Duration); }
	static AShooterCharacter* GetPlayerCharacterByController(APlayerController* PC) { return NativeCall<AShooterCharacter*, APlayerController*>(nullptr, "UVictoryCore.GetPlayerCharacterByController", PC); }
	static APrimalDinoCharacter* GetDinoCharacterByID(UObject* WorldContextObject, const int DinoID1, const int DinoID2, const bool bSearchTamedOnly) { return NativeCall<APrimalDinoCharacter*, UObject*, const int, const int, const bool>(nullptr, "UVictoryCore.GetDinoCharacterByID", WorldContextObject, DinoID1, DinoID2, bSearchTamedOnly); }
	static void GetAllClassesOfType(TArray<TSubclassOf<UObject>>* Subclasses, TSubclassOf<UObject> ParentClass, bool bAllowAbstract, FString Path) { NativeCall<void, TArray<TSubclassOf<UObject>>*, TSubclassOf<UObject>, bool, FString>(nullptr, "UVictoryCore.GetAllClassesOfType", Subclasses, ParentClass, bAllowAbstract, Path); }
	static FVector2D* InverseTransformVectorByScreenProjectionGlobalTransform(FVector2D* result, FVector2D vec) { return NativeCall<FVector2D*, FVector2D*, FVector2D>(nullptr, "UVictoryCore.InverseTransformVectorByScreenProjectionGlobalTransform", result, vec); }
	static float GetScreenPercentage() { return NativeCall<float>(nullptr, "UVictoryCore.GetScreenPercentage"); }
	static bool ProjectWorldLocationToScreenOrScreenEdgePosition(APlayerController* playerController, FVector WorldLocation, FVector2D* ScreenPosition, const float screenMarginPercent, bool widgetSpace, bool* OnScreen) { return NativeCall<bool, APlayerController*, FVector, FVector2D*, const float, bool, bool*>(nullptr, "UVictoryCore.ProjectWorldLocationToScreenOrScreenEdgePosition", playerController, WorldLocation, ScreenPosition, screenMarginPercent, widgetSpace, OnScreen); }
	//static bool GetLocaleSpecificAudio(TArray<FLocalizedSoundCueEntry>* LocalizedSoundCues, FLocalizedSoundCueEntry* OutLocalizedAudio, FString* LanguageOverride) { return NativeCall<bool, TArray<FLocalizedSoundCueEntry>*, FLocalizedSoundCueEntry*, FString*>(nullptr, "UVictoryCore.GetLocaleSpecificAudio", LocalizedSoundCues, OutLocalizedAudio, LanguageOverride); }
	static TArray<AShooterPlayerController*>* GetAllLocalPlayerControllers(TArray<AShooterPlayerController*>* result, UObject* WorldContextObject) { return NativeCall<TArray<AShooterPlayerController*>*, TArray<AShooterPlayerController*>*, UObject*>(nullptr, "UVictoryCore.GetAllLocalPlayerControllers", result, WorldContextObject); }
	static bool IsPointStuckWithinMesh(UWorld* theWorld, FVector TestPoint, int hemisphereSubdivisions, float rayDistance, float percentageConsideredStuck, AActor* ActorToIgnore) { return NativeCall<bool, UWorld*, FVector, int, float, float, AActor*>(nullptr, "UVictoryCore.IsPointStuckWithinMesh", theWorld, TestPoint, hemisphereSubdivisions, rayDistance, percentageConsideredStuck, ActorToIgnore); }
	static bool ServerCheckMeshingOnActor(AActor* OnActor, bool bForceUseActorCenterBounds) { return NativeCall<bool, AActor*, bool>(nullptr, "UVictoryCore.ServerCheckMeshingOnActor", OnActor, bForceUseActorCenterBounds); }
	static TArray<AShooterCharacter*>* GetAllLocalPlayerCharacters(TArray<AShooterCharacter*>* result, UObject* WorldContextObject) { return NativeCall<TArray<AShooterCharacter*>*, TArray<AShooterCharacter*>*, UObject*>(nullptr, "UVictoryCore.GetAllLocalPlayerCharacters", result, WorldContextObject); }
	static bool IsDinoDuped(UWorld* WorldContext, const unsigned int id1, const unsigned int id2) { return NativeCall<bool, UWorld*, const unsigned int, const unsigned int>(nullptr, "UVictoryCore.IsDinoDuped", WorldContext, id1, id2); }
	static bool IsUnderMesh(APrimalCharacter* Character, FVector* CheckSevenHitLocation, bool* bOverlapping, UActorComponent** CheckSevenResult, bool DebugDraw, float DebugDrawSeconds) { return NativeCall<bool, APrimalCharacter*, FVector*, bool*, UActorComponent**, bool, float>(nullptr, "UVictoryCore.IsUnderMesh", Character, CheckSevenHitLocation, bOverlapping, CheckSevenResult, DebugDraw, DebugDrawSeconds); }
	static FString* BPGetPrimaryMapName(FString* result, UWorld* WorldContext) { return NativeCall<FString*, FString*, UWorld*>(nullptr, "UVictoryCore.BPGetPrimaryMapName", result, WorldContext); }
	static bool OverlappingStationaryObjectsTrace(UWorld* theWorld, APrimalCharacter* SourceCharacter, TArray<FOverlapResult>* Overlaps, FVector Origin, float Radius, ECollisionChannel TraceChannel, AActor* InIgnoreActor, FName TraceName, bool bComplexOverlapTest) { return NativeCall<bool, UWorld*, APrimalCharacter*, TArray<FOverlapResult>*, FVector, float, ECollisionChannel, AActor*, FName, bool>(nullptr, "UVictoryCore.OverlappingStationaryObjectsTrace", theWorld, SourceCharacter, Overlaps, Origin, Radius, TraceChannel, InIgnoreActor, TraceName, bComplexOverlapTest); }
	static void StaticRegisterNativesUVictoryCore() { NativeCall<void>(nullptr, "UVictoryCore.StaticRegisterNativesUVictoryCore"); }
};

struct UDamageType
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

	static UClass * GetPrivateStaticClass(const wchar_t * Package) { return NativeCall<UClass *, const wchar_t *>(nullptr, "UDamageType.GetPrivateStaticClass", Package); }
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
	TArray<UAnimMontage *> AttackAnimationsField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "FDinoAttackInfo.AttackAnimations"); }
	TArray<float>& AttackAnimationWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FDinoAttackInfo.AttackAnimationWeights"); }
	TArray<float>& AttackAnimationsTimeFromEndToConsiderFinishedField() { return *GetNativePointerField<TArray<float>*>(this, "FDinoAttackInfo.AttackAnimationsTimeFromEndToConsiderFinished"); }
	float& AttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRunningSpeedModifier"); }
	float& SwimmingAttackRunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SwimmingAttackRunningSpeedModifier"); }
	float& SetAttackTargetTimeField() { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SetAttackTargetTime"); }
	TArray<FVector>& LastSocketPositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FDinoAttackInfo.LastSocketPositions"); }
	long double& LastProjectileSpawnTimeField() { return *GetNativePointerField<long double*>(this, "FDinoAttackInfo.LastProjectileSpawnTime"); }

	// Functions

	FDinoAttackInfo * operator=(FDinoAttackInfo * __that) { return NativeCall<FDinoAttackInfo *, FDinoAttackInfo *>(this, "FDinoAttackInfo.operator=", __that); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FDinoAttackInfo.StaticStruct"); }
};