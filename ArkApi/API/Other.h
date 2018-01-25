#pragma once

#include "Base.h"

struct FDamageEvent
{
	float GetImpulseField() const { return GetNativeField<float>(this, "FDamageEvent", "Impulse"); }
	void SetImpulseField(float newValue) { SetNativeField(this, "FDamageEvent", "Impulse", newValue); }
	float GetOriginalDamageField() const { return GetNativeField<float>(this, "FDamageEvent", "OriginalDamage"); }
	void SetOriginalDamageField(float newValue) { SetNativeField(this, "FDamageEvent", "OriginalDamage", newValue); }
	int GetInstanceBodyIndexField() const { return GetNativeField<int>(this, "FDamageEvent", "InstanceBodyIndex"); }
	void SetInstanceBodyIndexField(int newValue) { SetNativeField(this, "FDamageEvent", "InstanceBodyIndex", newValue); }
	TSubclassOf<UDamageType> GetDamageTypeClassField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "FDamageEvent", "DamageTypeClass"); }
	void SetDamageTypeClassField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "FDamageEvent", "DamageTypeClass", newValue); }

	// Functions

	void GetBestHitInfo(AActor* HitActor, AActor* HitInstigator, FHitResult* OutHitInfo, FVector* OutImpulseDir) { NativeCall<void, AActor *, AActor *, FHitResult *, FVector *>((DWORD64)this, "FDamageEvent", "GetBestHitInfo", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
};

struct FHitResult
{
	float GetTimeField() const { return GetNativeField<float>(this, "FHitResult", "Time"); }
	void SetTimeField(float newValue) { SetNativeField(this, "FHitResult", "Time", newValue); }
	//FVector_NetQuantize GetLocationField() const { return GetNativeField<FVector_NetQuantize>(this, "FHitResult", "Location"); }
	//void SetLocationField(FVector_NetQuantize newValue) { SetNativeField(this, "FHitResult", "Location", newValue); }
	//FVector_NetQuantizeNormal GetNormalField() const { return GetNativeField<FVector_NetQuantizeNormal>(this, "FHitResult", "Normal"); }
	//void SetNormalField(FVector_NetQuantizeNormal newValue) { SetNativeField(this, "FHitResult", "Normal", newValue); }
	//FVector_NetQuantize GetImpactPointField() const { return GetNativeField<FVector_NetQuantize>(this, "FHitResult", "ImpactPoint"); }
	//void SetImpactPointField(FVector_NetQuantize newValue) { SetNativeField(this, "FHitResult", "ImpactPoint", newValue); }
	//FVector_NetQuantizeNormal GetImpactNormalField() const { return GetNativeField<FVector_NetQuantizeNormal>(this, "FHitResult", "ImpactNormal"); }
	//void SetImpactNormalField(FVector_NetQuantizeNormal newValue) { SetNativeField(this, "FHitResult", "ImpactNormal", newValue); }
	//FVector_NetQuantize GetTraceStartField() const { return GetNativeField<FVector_NetQuantize>(this, "FHitResult", "TraceStart"); }
	//void SetTraceStartField(FVector_NetQuantize newValue) { SetNativeField(this, "FHitResult", "TraceStart", newValue); }
	//FVector_NetQuantize GetTraceEndField() const { return GetNativeField<FVector_NetQuantize>(this, "FHitResult", "TraceEnd"); }
	//void SetTraceEndField(FVector_NetQuantize newValue) { SetNativeField(this, "FHitResult", "TraceEnd", newValue); }
	float GetPenetrationDepthField() const { return GetNativeField<float>(this, "FHitResult", "PenetrationDepth"); }
	void SetPenetrationDepthField(float newValue) { SetNativeField(this, "FHitResult", "PenetrationDepth", newValue); }
	int GetItemField() const { return GetNativeField<int>(this, "FHitResult", "Item"); }
	void SetItemField(int newValue) { SetNativeField(this, "FHitResult", "Item", newValue); }
	//TWeakObjectPtr<UPhysicalMaterial, FWeakObjectPtr, FIndexToObject> GetPhysMaterialField() const { return GetNativeField<TWeakObjectPtr<UPhysicalMaterial, FWeakObjectPtr, FIndexToObject>>(this, "FHitResult", "PhysMaterial"); }
	TWeakObjectPtr<AActor> GetActorField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "FHitResult", "Actor"); }
	//TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr, FIndexToObject> GetComponentField() const { return GetNativeField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr, FIndexToObject>>(this, "FHitResult", "Component"); }
	//void SetBodyInstanceField(FBodyInstance * newValue) { SetNativeField(this, "FHitResult", "BodyInstance", newValue); }
	FName GetBoneNameField() const { return GetNativeField<FName>(this, "FHitResult", "BoneName"); }
	void SetBoneNameField(FName newValue) { SetNativeField(this, "FHitResult", "BoneName", newValue); }
	int GetFaceIndexField() const { return GetNativeField<int>(this, "FHitResult", "FaceIndex"); }
	void SetFaceIndexField(int newValue) { SetNativeField(this, "FHitResult", "FaceIndex", newValue); }

	// Functions

	AActor* GetActor() { return NativeCall<AActor *>((DWORD64)this, "FHitResult", "GetActor"); }
};

struct RCONClientConnection
{
	//FSocket * GetSocketField() const { return GetNativeField<FSocket *>(this, "RCONClientConnection", "Socket"); }
	UShooterCheatManager* GetCheatManagerField() const { return GetNativeField<UShooterCheatManager *>(this, "RCONClientConnection", "CheatManager"); }
	bool GetIsAuthenticatedField() const { return GetNativeField<bool>(this, "RCONClientConnection", "IsAuthenticated"); }
	void SetIsAuthenticatedField(bool newValue) { SetNativeField(this, "RCONClientConnection", "IsAuthenticated", newValue); }
	bool GetIsClosedField() const { return GetNativeField<bool>(this, "RCONClientConnection", "IsClosed"); }
	void SetIsClosedField(bool newValue) { SetNativeField(this, "RCONClientConnection", "IsClosed", newValue); }
	TArray<signed char> GetDataBufferField() const { return GetNativeField<TArray<signed char>>(this, "RCONClientConnection", "DataBuffer"); }
	void SetDataBufferField(TArray<signed char> newValue) { SetNativeField(this, "RCONClientConnection", "DataBuffer", newValue); }
	unsigned int GetCurrentPacketSizeField() const { return GetNativeField<unsigned int>(this, "RCONClientConnection", "CurrentPacketSize"); }
	void SetCurrentPacketSizeField(unsigned int newValue) { SetNativeField(this, "RCONClientConnection", "CurrentPacketSize", newValue); }
	long double GetLastReceiveTimeField() const { return GetNativeField<long double>(this, "RCONClientConnection", "LastReceiveTime"); }
	void SetLastReceiveTimeField(long double newValue) { SetNativeField(this, "RCONClientConnection", "LastReceiveTime", newValue); }
	long double GetLastSendKeepAliveTimeField() const { return GetNativeField<long double>(this, "RCONClientConnection", "LastSendKeepAliveTime"); }
	void SetLastSendKeepAliveTimeField(long double newValue) { SetNativeField(this, "RCONClientConnection", "LastSendKeepAliveTime", newValue); }
	FString GetServerPasswordField() const { return GetNativeField<FString>(this, "RCONClientConnection", "ServerPassword"); }
	void SetServerPasswordField(FString newValue) { SetNativeField(this, "RCONClientConnection", "ServerPassword", newValue); }

	// Functions

	void ProcessRCONPacket(RCONPacket* Packet, UWorld* InWorld) { NativeCall<void, RCONPacket *, UWorld *>((DWORD64)this, "RCONClientConnection", "ProcessRCONPacket", Packet, InWorld); }
	void SendMessageW(int Id, int Type, FString* OutGoingMessage) { NativeCall<void, int, int, FString *>((DWORD64)this, "RCONClientConnection", "SendMessageW", Id, Type, OutGoingMessage); }
	void Close() { NativeCall<void>((DWORD64)this, "RCONClientConnection", "Close"); }
};

struct RCONPacket
{
	int Length;
	int Id;
	int Type;
	FString Body;
};

struct UGameplayStatics
{
	static APlayerController* GetPlayerController(UObject* WorldContextObject, int PlayerIndex) { return NativeCall<APlayerController *, UObject *, int>(nullptr, "UGameplayStatics", "GetPlayerController", WorldContextObject, PlayerIndex); }
	static void SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation) { NativeCall<void, UObject *, float>(nullptr, "UGameplayStatics", "SetGlobalTimeDilation", WorldContextObject, TimeDilation); }
	static bool SetGamePaused(UObject* WorldContextObject, bool bPaused) { return NativeCall<bool, UObject *, bool>(nullptr, "UGameplayStatics", "SetGamePaused", WorldContextObject, bPaused); }
	static AActor* BeginSpawningActorFromClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FTransform* SpawnTransform, bool bNoCollisionFail) { return NativeCall<AActor *, UObject *, TSubclassOf<AActor>, FTransform *, bool>(nullptr, "UGameplayStatics", "BeginSpawningActorFromClass", WorldContextObject, ActorClass, SpawnTransform, bNoCollisionFail); }
	static void GetActorArrayBounds(TArray<AActor *>* Actors, bool bOnlyCollidingComponents, FVector* Center, FVector* BoxExtent) { NativeCall<void, TArray<AActor *> *, bool, FVector *, FVector *>(nullptr, "UGameplayStatics", "GetActorArrayBounds", Actors, bOnlyCollidingComponents, Center, BoxExtent); }
	static void GetAccurateRealTime(UObject* WorldContextObject, int* Seconds, float* PartialSeconds) { NativeCall<void, UObject *, int *, float *>(nullptr, "UGameplayStatics", "GetAccurateRealTime", WorldContextObject, Seconds, PartialSeconds); }
	static void GetAllActorsOfClass(UWorld* WorldContextObject, UClass* ActorClass, TArray<AActor *>* OutActors) { NativeCall<void, UWorld *, UClass*, TArray<AActor *> *>(nullptr, "UGameplayStatics", "GetAllActorsOfClass", WorldContextObject, ActorClass, OutActors); }
};

struct FItemMultiplier
{
};

struct APrimalBuff
{
};

struct FDinoAncestorsEntry
{
};

struct FCraftingResourceRequirement
{
};