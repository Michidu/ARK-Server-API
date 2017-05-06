#pragma once

#include "Base.h"

struct FChatMessage
{
	FString SenderName;
	FString SenderSteamName;
	FString SenderTribeName;
	unsigned int SenderId;
	FString Message;
	FString Receiver;
	int SenderTeamIndex;
	long double ReceivedTime;
	EChatSendMode::Type SendMode;
	unsigned int RadioFrequency;
	EChatType::Type ChatType;
	DWORD64 SenderIcon;
	FString UserId;
	
	FChatMessage(): SenderId(0), SenderTeamIndex(0), ReceivedTime(0), SendMode(), RadioFrequency(0), ChatType(), SenderIcon(0)
	{
	}

	FChatMessage(FChatMessage* __that) { NativeCall<void, FChatMessage *>((DWORD64)this, "FChatMessage", "FChatMessage", __that); }
	FChatMessage* operator=(FChatMessage* __that) { return NativeCall<FChatMessage *, FChatMessage *>((DWORD64)this, "FChatMessage", "operator=", __that); }
};

struct USceneComponent
{
public:
	FTransform GetComponentToWorldField() const { return GetNativeField<FTransform>(this, "USceneComponent", "ComponentToWorld"); }
	void SetComponentToWorldField(FTransform newValue) { SetNativeField(this, "USceneComponent", "ComponentToWorld", newValue); }
	USceneComponent* GetAttachParentField() const { return GetNativeField<USceneComponent *>(this, "USceneComponent", "AttachParent"); }
	void SetAttachParentField(USceneComponent* newValue) { SetNativeField(this, "USceneComponent", "AttachParent", newValue); }
	FName GetAttachSocketNameField() const { return GetNativeField<FName>(this, "USceneComponent", "AttachSocketName"); }
	void SetAttachSocketNameField(FName newValue) { SetNativeField(this, "USceneComponent", "AttachSocketName", newValue); }
	TArray<USceneComponent *> GetAttachChildrenField() const { return GetNativeField<TArray<USceneComponent *>>(this, "USceneComponent", "AttachChildren"); }
	void SetAttachChildrenField(TArray<USceneComponent *> newValue) { SetNativeField(this, "USceneComponent", "AttachChildren", newValue); }
	FVector GetRelativeLocationField() const { return GetNativeField<FVector>(this, "USceneComponent", "RelativeLocation"); }
	void SetRelativeLocationField(FVector newValue) { SetNativeField(this, "USceneComponent", "RelativeLocation", newValue); }
	FRotator GetRelativeRotationField() const { return GetNativeField<FRotator>(this, "USceneComponent", "RelativeRotation"); }
	void SetRelativeRotationField(FRotator newValue) { SetNativeField(this, "USceneComponent", "RelativeRotation", newValue); }
	FVector GetRelativeTranslation_DEPRECATEDField() const { return GetNativeField<FVector>(this, "USceneComponent", "RelativeTranslation_DEPRECATED"); }
	void SetRelativeTranslation_DEPRECATEDField(FVector newValue) { SetNativeField(this, "USceneComponent", "RelativeTranslation_DEPRECATED", newValue); }
	TEnumAsByte<enum EDetailMode> GetDetailModeField() const { return GetNativeField<TEnumAsByte<enum EDetailMode>>(this, "USceneComponent", "DetailMode"); }
	void SetDetailModeField(TEnumAsByte<enum EDetailMode> newValue) { SetNativeField(this, "USceneComponent", "DetailMode", newValue); }
	float GetRelativeScale_DEPRECATEDField() const { return GetNativeField<float>(this, "USceneComponent", "RelativeScale_DEPRECATED"); }
	void SetRelativeScale_DEPRECATEDField(float newValue) { SetNativeField(this, "USceneComponent", "RelativeScale_DEPRECATED", newValue); }
	bool GetNetUpdateTransformField() const { return GetNativeField<bool>(this, "USceneComponent", "NetUpdateTransform"); }
	void SetNetUpdateTransformField(bool newValue) { SetNativeField(this, "USceneComponent", "NetUpdateTransform", newValue); }
	USceneComponent* GetNetOldAttachParentField() const { return GetNativeField<USceneComponent *>(this, "USceneComponent", "NetOldAttachParent"); }
	void SetNetOldAttachParentField(USceneComponent* newValue) { SetNativeField(this, "USceneComponent", "NetOldAttachParent", newValue); }
	FName GetNetOldAttachSocketNameField() const { return GetNativeField<FName>(this, "USceneComponent", "NetOldAttachSocketName"); }
	void SetNetOldAttachSocketNameField(FName newValue) { SetNativeField(this, "USceneComponent", "NetOldAttachSocketName", newValue); }
	FVector GetRelativeScale3DField() const { return GetNativeField<FVector>(this, "USceneComponent", "RelativeScale3D"); }
	void SetRelativeScale3DField(FVector newValue) { SetNativeField(this, "USceneComponent", "RelativeScale3D", newValue); }
	FVector GetComponentVelocityField() const { return GetNativeField<FVector>(this, "USceneComponent", "ComponentVelocity"); }
	void SetComponentVelocityField(FVector newValue) { SetNativeField(this, "USceneComponent", "ComponentVelocity", newValue); }

	// Functions

	FVector* GetCustomLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "USceneComponent", "GetCustomLocation", result); }
	FVector* GetForwardVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "USceneComponent", "GetForwardVector", result); }
	FTransform* CalcNewComponentToWorld(FTransform* result, FTransform* NewRelativeTransform, USceneComponent* Parent) { return NativeCall<FTransform *, FTransform *, FTransform *, USceneComponent *>((DWORD64)this, "USceneComponent", "CalcNewComponentToWorld", result, NewRelativeTransform, Parent); }
	void UpdateComponentToWorld(bool bSkipPhysicsMove) { NativeCall<void, bool>((DWORD64)this, "USceneComponent", "UpdateComponentToWorld", bSkipPhysicsMove); }
	void PropagateTransformUpdate(bool bTransformChanged, bool bSkipPhysicsMove) { NativeCall<void, bool, bool>((DWORD64)this, "USceneComponent", "PropagateTransformUpdate", bTransformChanged, bSkipPhysicsMove); }
	void DestroyComponent() { NativeCall<void>((DWORD64)this, "USceneComponent", "DestroyComponent"); }
	void CalcBoundingCylinder(float* CylinderRadius, float* CylinderHalfHeight) { NativeCall<void, float *, float *>((DWORD64)this, "USceneComponent", "CalcBoundingCylinder", CylinderRadius, CylinderHalfHeight); }
	void UpdateBounds() { NativeCall<void>((DWORD64)this, "USceneComponent", "UpdateBounds"); }
	void SetRelativeLocationAndRotation() { NativeCall<void>((DWORD64)this, "USceneComponent", "SetRelativeLocationAndRotation"); }
	void AddLocalOffset() { NativeCall<void>((DWORD64)this, "USceneComponent", "AddLocalOffset"); }
	void AddLocalRotation() { NativeCall<void>((DWORD64)this, "USceneComponent", "AddLocalRotation"); }
	void AddLocalTransform(FTransform* DeltaTransform, bool bSweep) { NativeCall<void, FTransform *, bool>((DWORD64)this, "USceneComponent", "AddLocalTransform", DeltaTransform, bSweep); }
	void AddWorldTransform(FTransform* DeltaTransform, bool bSweep) { NativeCall<void, FTransform *, bool>((DWORD64)this, "USceneComponent", "AddWorldTransform", DeltaTransform, bSweep); }
	void SetRelativeScale3D() { NativeCall<void>((DWORD64)this, "USceneComponent", "SetRelativeScale3D"); }
	void ResetRelativeTransform() { NativeCall<void>((DWORD64)this, "USceneComponent", "ResetRelativeTransform"); }
	void SetRelativeTransform(FTransform* NewTransform, bool bSweep) { NativeCall<void, FTransform *, bool>((DWORD64)this, "USceneComponent", "SetRelativeTransform", NewTransform, bSweep); }
	FTransform* GetRelativeTransform(FTransform* result) { return NativeCall<FTransform *, FTransform *>((DWORD64)this, "USceneComponent", "GetRelativeTransform", result); }
	void SetWorldLocation() { NativeCall<void>((DWORD64)this, "USceneComponent", "SetWorldLocation"); }
	void SetWorldScale3D() { NativeCall<void>((DWORD64)this, "USceneComponent", "SetWorldScale3D"); }
	void SetWorldTransform(FTransform* NewTransform, bool bSweep) { NativeCall<void, FTransform *, bool>((DWORD64)this, "USceneComponent", "SetWorldTransform", NewTransform, bSweep); }
	void SetWorldLocationAndRotation() { NativeCall<void>((DWORD64)this, "USceneComponent", "SetWorldLocationAndRotation"); }
	void SetWorldLocationAndRotationNoPhysics(FVector* NewLocation, FRotator* NewRotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "USceneComponent", "SetWorldLocationAndRotationNoPhysics", NewLocation, NewRotation); }
	FVector* GetRightVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "USceneComponent", "GetRightVector", result); }
	FVector* GetUpVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "USceneComponent", "GetUpVector", result); }
	void GetParentComponents(TArray<USceneComponent *>* Parents) { NativeCall<void, TArray<USceneComponent *> *>((DWORD64)this, "USceneComponent", "GetParentComponents", Parents); }
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent *>* Children) { NativeCall<void, bool, TArray<USceneComponent *> *>((DWORD64)this, "USceneComponent", "GetChildrenComponents", bIncludeAllDescendants, Children); }
	void AppendDescendants(TArray<USceneComponent *>* Children) { NativeCall<void, TArray<USceneComponent *> *>((DWORD64)this, "USceneComponent", "AppendDescendants", Children); }
	void DetachFromParent(bool bMaintainWorldPosition) { NativeCall<void, bool>((DWORD64)this, "USceneComponent", "DetachFromParent", bMaintainWorldPosition); }
	FVector* GetMeshScaleMultiplier(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "USceneComponent", "GetMeshScaleMultiplier", result); }
	AActor* GetAttachmentRootActor() { return NativeCall<AActor *>((DWORD64)this, "USceneComponent", "GetAttachmentRootActor"); }
	void UpdateChildTransforms() { NativeCall<void>((DWORD64)this, "USceneComponent", "UpdateChildTransforms"); }
	void PostInterpChange(UProperty* PropertyThatChanged) { NativeCall<void, UProperty *>((DWORD64)this, "USceneComponent", "PostInterpChange", PropertyThatChanged); }
	FVector* GetSocketLocation(FVector* result, FName SocketName) { return NativeCall<FVector *, FVector *, FName>((DWORD64)this, "USceneComponent", "GetSocketLocation", result, SocketName); }
	FRotator* GetSocketRotation(FRotator* result, FName SocketName) { return NativeCall<FRotator *, FRotator *, FName>((DWORD64)this, "USceneComponent", "GetSocketRotation", result, SocketName); }
	FVector* GetComponentVelocity(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "USceneComponent", "GetComponentVelocity", result); }
	void GetSocketWorldLocationAndRotation(FName InSocketName, FVector* OutLocation, FRotator* OutRotation) { NativeCall<void, FName, FVector *, FRotator *>((DWORD64)this, "USceneComponent", "GetSocketWorldLocationAndRotation", InSocketName, OutLocation, OutRotation); }
	//void SetMobility(EComponentMobility::Type NewMobility) { NativeCall<void, EComponentMobility::Type>((DWORD64)this, "USceneComponent", "SetMobility", NewMobility); }
	bool IsAnySimulatingPhysics() { return NativeCall<bool>((DWORD64)this, "USceneComponent", "IsAnySimulatingPhysics"); }
	void UpdatePhysicsVolume(bool bTriggerNotifiers) { NativeCall<void, bool>((DWORD64)this, "USceneComponent", "UpdatePhysicsVolume", bTriggerNotifiers); }
	void BeginDestroy() { NativeCall<void>((DWORD64)this, "USceneComponent", "BeginDestroy"); }
	bool InternalSetWorldLocationAndRotation() { return NativeCall<bool>((DWORD64)this, "USceneComponent", "InternalSetWorldLocationAndRotation"); }
	bool IsVisibleInEditor() { return NativeCall<bool>((DWORD64)this, "USceneComponent", "IsVisibleInEditor"); }
	bool ShouldRender() { return NativeCall<bool>((DWORD64)this, "USceneComponent", "ShouldRender"); }
	bool CanEverRender() { return NativeCall<bool>((DWORD64)this, "USceneComponent", "CanEverRender"); }
	bool IsVisible() { return NativeCall<bool>((DWORD64)this, "USceneComponent", "IsVisible"); }
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren) { NativeCall<void, bool, bool>((DWORD64)this, "USceneComponent", "SetVisibility", bNewVisibility, bPropagateToChildren); }
	void SetHiddenInGame(bool NewHiddenGame, bool bPropagateToChildren) { NativeCall<void, bool, bool>((DWORD64)this, "USceneComponent", "SetHiddenInGame", NewHiddenGame, bPropagateToChildren); }
	void ApplyWorldOffset(FVector* InOffset, bool bWorldShift) { NativeCall<void, FVector *, bool>((DWORD64)this, "USceneComponent", "ApplyWorldOffset", InOffset, bWorldShift); }
	FBoxSphereBounds* GetPlacementExtent(FBoxSphereBounds* result) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *>((DWORD64)this, "USceneComponent", "GetPlacementExtent", result); }
	void PreNetReceive() { NativeCall<void>((DWORD64)this, "USceneComponent", "PreNetReceive"); }
	void PostNetReceive() { NativeCall<void>((DWORD64)this, "USceneComponent", "PostNetReceive"); }
};

// Actor

struct AActor : public UObjectBaseUtility
{
public:
	float GetCustomTimeDilationField() const { return GetNativeField<float>(this, "AActor", "CustomTimeDilation"); }
	void SetCustomTimeDilationField(float newValue) { SetNativeField(this, "AActor", "CustomTimeDilation", newValue); }
	float GetClientReplicationSendNowThresholdField() const { return GetNativeField<float>(this, "AActor", "ClientReplicationSendNowThreshold"); }
	void SetClientReplicationSendNowThresholdField(float newValue) { SetNativeField(this, "AActor", "ClientReplicationSendNowThreshold", newValue); }
	TEnumAsByte<enum ENetRole> GetRemoteRoleField() const { return GetNativeField<TEnumAsByte<enum ENetRole>>(this, "AActor", "RemoteRole"); }
	void SetRemoteRoleField(TEnumAsByte<enum ENetRole> newValue) { SetNativeField(this, "AActor", "RemoteRole", newValue); }
	AActor* GetOwnerField() const { return GetNativeField<AActor *>(this, "AActor", "Owner"); }
	long double GetLastReplicatedMovementField() const { return GetNativeField<long double>(this, "AActor", "LastReplicatedMovement"); }
	void SetLastReplicatedMovementField(long double newValue) { SetNativeField(this, "AActor", "LastReplicatedMovement", newValue); }
	TEnumAsByte<enum ENetRole> GetRoleField() const { return GetNativeField<TEnumAsByte<enum ENetRole>>(this, "AActor", "Role"); }
	TEnumAsByte<enum ENetDormancy> GetNetDormancyField() const { return GetNativeField<TEnumAsByte<enum ENetDormancy>>(this, "AActor", "NetDormancy"); }
	int GetDefaultStasisComponentOctreeFlagsField() const { return GetNativeField<int>(this, "AActor", "DefaultStasisComponentOctreeFlags"); }
	void SetDefaultStasisComponentOctreeFlagsField(int newValue) { SetNativeField(this, "AActor", "DefaultStasisComponentOctreeFlags", newValue); }
	TArray<AActor *> GetNetworkSpatializationChildrenField() const { return GetNativeField<TArray<AActor *>>(this, "AActor", "NetworkSpatializationChildren"); }
	void SetNetworkSpatializationChildrenField(TArray<AActor *> newValue) { SetNativeField(this, "AActor", "NetworkSpatializationChildren", newValue); }
	AActor* GetNetworkSpatializationParentField() const { return GetNativeField<AActor *>(this, "AActor", "NetworkSpatializationParent"); }
	void SetNetworkSpatializationParentField(AActor* newValue) { SetNativeField(this, "AActor", "NetworkSpatializationParent", newValue); }
	float GetNetworkAndStasisRangeMultiplierField() const { return GetNativeField<float>(this, "AActor", "NetworkAndStasisRangeMultiplier"); }
	void SetNetworkAndStasisRangeMultiplierField(float newValue) { SetNativeField(this, "AActor", "NetworkAndStasisRangeMultiplier", newValue); }
	float GetUnstasisLastInRangeTimeField() const { return GetNativeField<float>(this, "AActor", "UnstasisLastInRangeTime"); }
	void SetUnstasisLastInRangeTimeField(float newValue) { SetNativeField(this, "AActor", "UnstasisLastInRangeTime", newValue); }
	long double GetLastPreReplicationTimeField() const { return GetNativeField<long double>(this, "AActor", "LastPreReplicationTime"); }
	void SetLastPreReplicationTimeField(long double newValue) { SetNativeField(this, "AActor", "LastPreReplicationTime", newValue); }
	long double GetLastEnterStasisTimeField() const { return GetNativeField<long double>(this, "AActor", "LastEnterStasisTime"); }
	void SetLastEnterStasisTimeField(long double newValue) { SetNativeField(this, "AActor", "LastEnterStasisTime", newValue); }
	long double GetLastExitStasisTimeField() const { return GetNativeField<long double>(this, "AActor", "LastExitStasisTime"); }
	void SetLastExitStasisTimeField(long double newValue) { SetNativeField(this, "AActor", "LastExitStasisTime", newValue); }
	FName GetCustomTagField() const { return GetNativeField<FName>(this, "AActor", "CustomTag"); }
	void SetCustomTagField(FName newValue) { SetNativeField(this, "AActor", "CustomTag", newValue); }
	int GetCustomDataField() const { return GetNativeField<int>(this, "AActor", "CustomData"); }
	void SetCustomDataField(int newValue) { SetNativeField(this, "AActor", "CustomData", newValue); }
	float GetReplicationIntervalMultiplierField() const { return GetNativeField<float>(this, "AActor", "ReplicationIntervalMultiplier"); }
	void SetReplicationIntervalMultiplierField(float newValue) { SetNativeField(this, "AActor", "ReplicationIntervalMultiplier", newValue); }
	int GetForceImmediateReplicationFrameField() const { return GetNativeField<int>(this, "AActor", "ForceImmediateReplicationFrame"); }
	void SetForceImmediateReplicationFrameField(int newValue) { SetNativeField(this, "AActor", "ForceImmediateReplicationFrame", newValue); }
	char GetStasisSetIndexField() const { return GetNativeField<char>(this, "AActor", "StasisSetIndex"); }
	void SetStasisSetIndexField(char newValue) { SetNativeField(this, "AActor", "StasisSetIndex", newValue); }
	char GetRandomStartByteField() const { return GetNativeField<char>(this, "AActor", "RandomStartByte"); }
	void SetRandomStartByteField(char newValue) { SetNativeField(this, "AActor", "RandomStartByte", newValue); }
	unsigned __int64 GetLastFrameUnStasisField() const { return GetNativeField<unsigned __int64>(this, "AActor", "LastFrameUnStasis"); }
	void SetLastFrameUnStasisField(unsigned __int64 newValue) { SetNativeField(this, "AActor", "LastFrameUnStasis", newValue); }
	volatile int GetLastUnstasisFrameCounterField() const { return GetNativeField<volatile int>(this, "AActor", "LastUnstasisFrameCounter"); }
	void SetLastUnstasisFrameCounterField(volatile int newValue) { SetNativeField(this, "AActor", "LastUnstasisFrameCounter", newValue); }
	TEnumAsByte<enum EInputConsumeOptions> GetInputConsumeOption_DEPRECATEDField() const { return GetNativeField<TEnumAsByte<enum EInputConsumeOptions>>(this, "AActor", "InputConsumeOption_DEPRECATED"); }
	void SetInputConsumeOption_DEPRECATEDField(TEnumAsByte<enum EInputConsumeOptions> newValue) { SetNativeField(this, "AActor", "InputConsumeOption_DEPRECATED", newValue); }
	float GetNetCullDistanceSquaredField() const { return GetNativeField<float>(this, "AActor", "NetCullDistanceSquared"); }
	void SetNetCullDistanceSquaredField(float newValue) { SetNativeField(this, "AActor", "NetCullDistanceSquared", newValue); }
	float GetNetCullDistanceSquaredDormantField() const { return GetNativeField<float>(this, "AActor", "NetCullDistanceSquaredDormant"); }
	void SetNetCullDistanceSquaredDormantField(float newValue) { SetNativeField(this, "AActor", "NetCullDistanceSquaredDormant", newValue); }
	int GetNetTagField() const { return GetNativeField<int>(this, "AActor", "NetTag"); }
	void SetNetTagField(int newValue) { SetNativeField(this, "AActor", "NetTag", newValue); }
	long double GetNetUpdateTimeField() const { return GetNativeField<long double>(this, "AActor", "NetUpdateTime"); }
	void SetNetUpdateTimeField(long double newValue) { SetNativeField(this, "AActor", "NetUpdateTime", newValue); }
	float GetNetUpdateFrequencyField() const { return GetNativeField<float>(this, "AActor", "NetUpdateFrequency"); }
	void SetNetUpdateFrequencyField(float newValue) { SetNativeField(this, "AActor", "NetUpdateFrequency", newValue); }
	float GetNetPriorityField() const { return GetNativeField<float>(this, "AActor", "NetPriority"); }
	void SetNetPriorityField(float newValue) { SetNativeField(this, "AActor", "NetPriority", newValue); }
	long double GetLastNetUpdateTimeField() const { return GetNativeField<long double>(this, "AActor", "LastNetUpdateTime"); }
	void SetLastNetUpdateTimeField(long double newValue) { SetNativeField(this, "AActor", "LastNetUpdateTime", newValue); }
	FName GetNetDriverNameField() const { return GetNativeField<FName>(this, "AActor", "NetDriverName"); }
	void SetNetDriverNameField(FName newValue) { SetNativeField(this, "AActor", "NetDriverName", newValue); }
	int GetTargetingTeamField() const { return GetNativeField<int>(this, "AActor", "TargetingTeam"); }
	void SetTargetingTeamField(int newValue) { SetNativeField(this, "AActor", "TargetingTeam", newValue); }
	float GetOverrideStasisComponentRadiusField() const { return GetNativeField<float>(this, "AActor", "OverrideStasisComponentRadius"); }
	void SetOverrideStasisComponentRadiusField(float newValue) { SetNativeField(this, "AActor", "OverrideStasisComponentRadius", newValue); }
	APawn* GetInstigatorField() const { return GetNativeField<APawn *>(this, "AActor", "Instigator"); }
	void SetInstigatorField(APawn* newValue) { SetNativeField(this, "AActor", "Instigator", newValue); }
	long double GetCreationTimeField() const { return GetNativeField<long double>(this, "AActor", "CreationTime"); }
	void SetCreationTimeField(long double newValue) { SetNativeField(this, "AActor", "CreationTime", newValue); }
	long double GetOriginalCreationTimeField() const { return GetNativeField<long double>(this, "AActor", "OriginalCreationTime"); }
	void SetOriginalCreationTimeField(long double newValue) { SetNativeField(this, "AActor", "OriginalCreationTime", newValue); }
	TArray<AActor *> GetChildrenField() const { return GetNativeField<TArray<AActor *>>(this, "AActor", "Children"); }
	void SetChildrenField(TArray<AActor *> newValue) { SetNativeField(this, "AActor", "Children", newValue); }
	unsigned int GetAnimUpdateRateShiftTagField() const { return GetNativeField<unsigned int>(this, "AActor", "AnimUpdateRateShiftTag"); }
	void SetAnimUpdateRateShiftTagField(unsigned int newValue) { SetNativeField(this, "AActor", "AnimUpdateRateShiftTag", newValue); }
	unsigned int GetAnimUpdateRateFrameCountField() const { return GetNativeField<unsigned int>(this, "AActor", "AnimUpdateRateFrameCount"); }
	void SetAnimUpdateRateFrameCountField(unsigned int newValue) { SetNativeField(this, "AActor", "AnimUpdateRateFrameCount", newValue); }
	USceneComponent* GetRootComponentField() const { return GetNativeField<USceneComponent *>(this, "AActor", "RootComponent"); }
	void SetRootComponentField(USceneComponent* newValue) { SetNativeField(this, "AActor", "RootComponent", newValue); }
	float GetInitialLifeSpanField() const { return GetNativeField<float>(this, "AActor", "InitialLifeSpan"); }
	void SetInitialLifeSpanField(float newValue) { SetNativeField(this, "AActor", "InitialLifeSpan", newValue); }
	TArray<FName> GetLayersField() const { return GetNativeField<TArray<FName>>(this, "AActor", "Layers"); }
	void SetLayersField(TArray<FName> newValue) { SetNativeField(this, "AActor", "Layers", newValue); }
	long double GetLastRenderTimeField() const { return GetNativeField<long double>(this, "AActor", "LastRenderTime"); }
	void SetLastRenderTimeField(long double newValue) { SetNativeField(this, "AActor", "LastRenderTime", newValue); }
	long double GetLastRenderTimeIgnoreShadowField() const { return GetNativeField<long double>(this, "AActor", "LastRenderTimeIgnoreShadow"); }
	void SetLastRenderTimeIgnoreShadowField(long double newValue) { SetNativeField(this, "AActor", "LastRenderTimeIgnoreShadow", newValue); }
	TArray<FName> GetTagsField() const { return GetNativeField<TArray<FName>>(this, "AActor", "Tags"); }
	void SetTagsField(TArray<FName> newValue) { SetNativeField(this, "AActor", "Tags", newValue); }
	FVector GetDefaultActorLocationField() const { return GetNativeField<FVector>(this, "AActor", "DefaultActorLocation"); }
	FGuid GetUniqueGuidIdField() const { return GetNativeField<FGuid>(this, "AActor", "UniqueGuidId"); }
	float GetForceMaximumReplicationRateUntilTimeField() const { return GetNativeField<float>(this, "AActor", "ForceMaximumReplicationRateUntilTime"); }
	void SetForceMaximumReplicationRateUntilTimeField(float newValue) { SetNativeField(this, "AActor", "ForceMaximumReplicationRateUntilTime", newValue); }
	long double GetLastActorForceReplicationTimeField() const { return GetNativeField<long double>(this, "AActor", "LastActorForceReplicationTime"); }
	void SetLastActorForceReplicationTimeField(long double newValue) { SetNativeField(this, "AActor", "LastActorForceReplicationTime", newValue); }

	// Functions

	FVector* GetTargetPathfindingLocation(FVector* result, AActor* RequestedBy) { return NativeCall<FVector *, FVector *, AActor *>((DWORD64)this, "AActor", "GetTargetPathfindingLocation", result, RequestedBy); }
	FVector* GetTargetingLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AActor", "GetTargetingLocation", result); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>((DWORD64)this, "AActor", "IsLevelBoundsRelevant"); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "AActor", "GetPrivateStaticClass"); }
	void OutsideWorldBounds() { NativeCall<void>((DWORD64)this, "AActor", "OutsideWorldBounds"); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AActor", "GetHumanReadableName", result); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>((DWORD64)this, "AActor", "CheckDefaultSubobjectsInternal"); }
	bool CheckActorComponents() { return NativeCall<bool>((DWORD64)this, "AActor", "CheckActorComponents"); }
	void ResetOwnedComponents() { NativeCall<void>((DWORD64)this, "AActor", "ResetOwnedComponents"); }
	void PostInitProperties() { NativeCall<void>((DWORD64)this, "AActor", "PostInitProperties"); }
	UWorld* GetWorld() { return NativeCall<UWorld *>((DWORD64)this, "AActor", "GetWorld"); }
	bool IsInGameplayWorld() { return NativeCall<bool>((DWORD64)this, "AActor", "IsInGameplayWorld"); }
	void ClearCrossLevelReferences() { NativeCall<void>((DWORD64)this, "AActor", "ClearCrossLevelReferences"); }
	bool TeleportTo(FVector* DestLocation, FRotator* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, FVector *, FRotator *, bool, bool>((DWORD64)this, "AActor", "TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void AddTickPrerequisiteActor(AActor* PrerequisiteActor) { NativeCall<void, AActor *>((DWORD64)this, "AActor", "AddTickPrerequisiteActor", PrerequisiteActor); }
	void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor) { NativeCall<void, AActor *>((DWORD64)this, "AActor", "RemoveTickPrerequisiteActor", PrerequisiteActor); }
	void BeginDestroy() { NativeCall<void>((DWORD64)this, "AActor", "BeginDestroy"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>((DWORD64)this, "AActor", "IsReadyForFinishDestroy"); }
	void PostLoad() { NativeCall<void>((DWORD64)this, "AActor", "PostLoad"); }
	void ProcessEvent(UFunction* Function, void* Parameters) { NativeCall<void, UFunction *, void *>((DWORD64)this, "AActor", "ProcessEvent", Function, Parameters); }
	void RegisterActorTickFunctions(bool bRegister, bool bSaveAndRestoreTickState) { NativeCall<void, bool, bool>((DWORD64)this, "AActor", "RegisterActorTickFunctions", bRegister, bSaveAndRestoreTickState); }
	void RegisterAllActorTickFunctions(bool bRegister, bool bDoComponents, bool bSaveAndRestoreTickState) { NativeCall<void, bool, bool, bool>((DWORD64)this, "AActor", "RegisterAllActorTickFunctions", bRegister, bDoComponents, bSaveAndRestoreTickState); }
	void SetActorTickEnabled(bool bEnabled) { NativeCall<void, bool>((DWORD64)this, "AActor", "SetActorTickEnabled", bEnabled); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>((DWORD64)this, "AActor", "Rename", InName, NewOuter, Flags); }
	//UNetConnection * GetNetConnection() { return NativeCall<UNetConnection *>((DWORD64)this, "AActor", "GetNetConnection"); }
	UPlayer* GetNetOwningPlayer() { return NativeCall<UPlayer *>((DWORD64)this, "AActor", "GetNetOwningPlayer"); }
	void GetComponentsBoundingCylinder(float* OutCollisionRadius, float* OutCollisionHalfHeight, bool bNonColliding) { NativeCall<void, float *, float *, bool>((DWORD64)this, "AActor", "GetComponentsBoundingCylinder", OutCollisionRadius, OutCollisionHalfHeight, bNonColliding); }
	void GetSimpleCollisionCylinder(float* CollisionRadius, float* CollisionHalfHeight) { NativeCall<void, float *, float *>((DWORD64)this, "AActor", "GetSimpleCollisionCylinder", CollisionRadius, CollisionHalfHeight); }
	bool IsRootComponentCollisionRegistered() { return NativeCall<bool>((DWORD64)this, "AActor", "IsRootComponentCollisionRegistered"); }
	bool IsAttachedTo(AActor* Other) { return NativeCall<bool, AActor *>((DWORD64)this, "AActor", "IsAttachedTo", Other); }
	bool IsBasedOnActor(AActor* Other) { return NativeCall<bool, AActor *>((DWORD64)this, "AActor", "IsBasedOnActor", Other); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>((DWORD64)this, "AActor", "Modify", bAlwaysMarkDirty); }
	FBox* GetComponentsBoundingBox(FBox* result, bool bNonColliding) { return NativeCall<FBox *, FBox *, bool>((DWORD64)this, "AActor", "GetComponentsBoundingBox", result, bNonColliding); }
	FBox* GetComponentsBoundingBoxForLevelBounds(FBox* result) { return NativeCall<FBox *, FBox *>((DWORD64)this, "AActor", "GetComponentsBoundingBoxForLevelBounds", result); }
	bool CheckStillInWorld() { return NativeCall<bool>((DWORD64)this, "AActor", "CheckStillInWorld"); }
	void GetOverlappingActors(TArray<AActor *>* OverlappingActors, UClass* ClassFilter) { NativeCall<void, TArray<AActor *> *, UClass *>((DWORD64)this, "AActor", "GetOverlappingActors", OverlappingActors, ClassFilter); }
	float GetLastRenderTime(bool ignoreShadow) { return NativeCall<float, bool>((DWORD64)this, "AActor", "GetLastRenderTime", ignoreShadow); }
	void SetOwner(AActor* NewOwner) { NativeCall<void, AActor *>((DWORD64)this, "AActor", "SetOwner", NewOwner); }
	bool HasNetOwner() { return NativeCall<bool>((DWORD64)this, "AActor", "HasNetOwner"); }
	void OnRep_AttachmentReplication() { NativeCall<void>((DWORD64)this, "AActor", "OnRep_AttachmentReplication"); }
	void DetachRootComponentFromParent(bool bMaintainWorldPosition) { NativeCall<void, bool>((DWORD64)this, "AActor", "DetachRootComponentFromParent", bMaintainWorldPosition); }
	AActor* GetAttachParentActor() { return NativeCall<AActor *>((DWORD64)this, "AActor", "GetAttachParentActor"); }
	FName* GetAttachParentSocketName(FName* result) { return NativeCall<FName *, FName *>((DWORD64)this, "AActor", "GetAttachParentSocketName", result); }
	void GetAttachedActors(TArray<AActor *>* OutActors) { NativeCall<void, TArray<AActor *> *>((DWORD64)this, "AActor", "GetAttachedActors", OutActors); }
	bool ActorHasTag(FName Tag) { return NativeCall<bool, FName>((DWORD64)this, "AActor", "ActorHasTag", Tag); }
	bool IsMatineeControlled() { return NativeCall<bool>((DWORD64)this, "AActor", "IsMatineeControlled"); }
	bool IsRelevancyOwnerFor(AActor* ReplicatedActor, AActor* ActorOwner, AActor* ConnectionActor) { return NativeCall<bool, AActor *, AActor *, AActor *>((DWORD64)this, "AActor", "IsRelevancyOwnerFor", ReplicatedActor, ActorOwner, ConnectionActor); }
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int CinematicTextureGroups) { NativeCall<void, float, bool, int>((DWORD64)this, "AActor", "PrestreamTextures", Seconds, bEnableStreaming, CinematicTextureGroups); }
	FTransform* GetTransform(FTransform* result) { return NativeCall<FTransform *, FTransform *>((DWORD64)this, "AActor", "GetTransform", result); }
	void ClearNetworkSpatializationParent() { NativeCall<void>((DWORD64)this, "AActor", "ClearNetworkSpatializationParent"); }
	void SetNetworkSpatializationParent(AActor* NewParent) { NativeCall<void, AActor *>((DWORD64)this, "AActor", "SetNetworkSpatializationParent", NewParent); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "AActor", "Destroyed"); }
	void MakeNoise() { NativeCall<void>((DWORD64)this, "AActor", "MakeNoise"); }
	float TakeDamage(float DamageAmount, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "AActor", "TakeDamage", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void BecomeViewTarget(APlayerController* PC) { NativeCall<void, APlayerController *>((DWORD64)this, "AActor", "BecomeViewTarget", PC); }
	void EndViewTarget(APlayerController* PC) { NativeCall<void, APlayerController *>((DWORD64)this, "AActor", "EndViewTarget", PC); }
	void ForceNetRelevant() { NativeCall<void>((DWORD64)this, "AActor", "ForceNetRelevant"); }
	void InventoryItemUsed(UObject* InventoryItemObject) { NativeCall<void, UObject *>((DWORD64)this, "AActor", "InventoryItemUsed", InventoryItemObject); }
	void InventoryItemDropped(UObject* InventoryItemObject) { NativeCall<void, UObject *>((DWORD64)this, "AActor", "InventoryItemDropped", InventoryItemObject); }
	bool ForceAllowsInventoryUse(UObject* InventoryItemObject) { return NativeCall<bool, UObject *>((DWORD64)this, "AActor", "ForceAllowsInventoryUse", InventoryItemObject); }
	void DisableComponentsSimulatePhysics() { NativeCall<void>((DWORD64)this, "AActor", "DisableComponentsSimulatePhysics"); }
	void PostSpawnInitialize(FVector* SpawnLocation, FRotator* SpawnRotation, AActor* InOwner, APawn* InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay) { NativeCall<void, FVector *, FRotator *, AActor *, APawn *, bool, bool, bool, bool>((DWORD64)this, "AActor", "PostSpawnInitialize", SpawnLocation, SpawnRotation, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay); }
	void FinishSpawning(FTransform* Transform, bool bIsDefaultTransform) { NativeCall<void, FTransform *, bool>((DWORD64)this, "AActor", "FinishSpawning", Transform, bIsDefaultTransform); }
	void PreSave() { NativeCall<void>((DWORD64)this, "AActor", "PreSave"); }
	void PostActorConstruction() { NativeCall<void>((DWORD64)this, "AActor", "PostActorConstruction"); }
	void SetReplicates(bool bInReplicates) { NativeCall<void, bool>((DWORD64)this, "AActor", "SetReplicates", bInReplicates); }
	void CopyRemoteRoleFrom(AActor* CopyFromActor) { NativeCall<void, AActor *>((DWORD64)this, "AActor", "CopyRemoteRoleFrom", CopyFromActor); }
	void PostNetInit() { NativeCall<void>((DWORD64)this, "AActor", "PostNetInit"); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "AActor", "BeginPlay"); }
	void MatineeUpdated() { NativeCall<void>((DWORD64)this, "AActor", "MatineeUpdated"); }
	void ForceReplicateNowWithChannel() { NativeCall<void>((DWORD64)this, "AActor", "ForceReplicateNowWithChannel"); }
	void EnableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController *>((DWORD64)this, "AActor", "EnableInput", PlayerController); }
	void DisableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController *>((DWORD64)this, "AActor", "DisableInput", PlayerController); }
	float GetInputAxisValue(FName InputAxisName) { return NativeCall<float, FName>((DWORD64)this, "AActor", "GetInputAxisValue", InputAxisName); }
	float GetInputAxisKeyValue() { return NativeCall<float>((DWORD64)this, "AActor", "GetInputAxisKeyValue"); }
	FVector* GetInputVectorAxisValue() { return NativeCall<FVector *>((DWORD64)this, "AActor", "GetInputVectorAxisValue"); }
	bool SetActorLocation(FVector* NewLocation, bool bSweep) { return NativeCall<bool, FVector *, bool>((DWORD64)this, "AActor", "SetActorLocation", NewLocation, bSweep); }
	bool SetActorRotation() { return NativeCall<bool>((DWORD64)this, "AActor", "SetActorRotation"); }
	bool SetActorLocationAndRotation() { return NativeCall<bool>((DWORD64)this, "AActor", "SetActorLocationAndRotation"); }
	void SetActorScale3D(FVector* NewScale3D) { NativeCall<void, FVector *>((DWORD64)this, "AActor", "SetActorScale3D", NewScale3D); }
	void SetActorRelativeScale3D() { NativeCall<void>((DWORD64)this, "AActor", "SetActorRelativeScale3D"); }
	void SetActorHiddenInGame(bool bNewHidden) { NativeCall<void, bool>((DWORD64)this, "AActor", "SetActorHiddenInGame", bNewHidden); }
	void SetActorEnableCollision(bool bNewActorEnableCollision) { NativeCall<void, bool>((DWORD64)this, "AActor", "SetActorEnableCollision", bNewActorEnableCollision); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>((DWORD64)this, "AActor", "Destroy", bNetForce, bShouldModifyLevel); }
	bool SetRootComponent(USceneComponent* NewRootComponent) { return NativeCall<bool, USceneComponent *>((DWORD64)this, "AActor", "SetRootComponent", NewRootComponent); }
	FVector* GetActorForwardVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AActor", "GetActorForwardVector", result); }
	FVector* GetActorUpVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AActor", "GetActorUpVector", result); }
	FVector* GetActorRightVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AActor", "GetActorRightVector", result); }
	void GetActorBounds(bool bOnlyCollidingComponents, FVector* Origin, FVector* BoxExtent) { NativeCall<void, bool, FVector *, FVector *>((DWORD64)this, "AActor", "GetActorBounds", bOnlyCollidingComponents, Origin, BoxExtent); }
	//void PlaySoundOnActor(USoundCue * InSoundCue, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundCue *, float, float>((DWORD64)this, "AActor", "PlaySoundOnActor", InSoundCue, VolumeMultiplier, PitchMultiplier); }
	void PlaySoundAtLocation() { NativeCall<void>((DWORD64)this, "AActor", "PlaySoundAtLocation"); }
	void UnregisterAllComponents() { NativeCall<void>((DWORD64)this, "AActor", "UnregisterAllComponents"); }
	void RegisterAllComponents() { NativeCall<void>((DWORD64)this, "AActor", "RegisterAllComponents"); }
	void MarkComponentsAsPendingKill() { NativeCall<void>((DWORD64)this, "AActor", "MarkComponentsAsPendingKill"); }
	void ReregisterAllComponents() { NativeCall<void>((DWORD64)this, "AActor", "ReregisterAllComponents"); }
	void MarkComponentsRenderStateDirty() { NativeCall<void>((DWORD64)this, "AActor", "MarkComponentsRenderStateDirty"); }
	void InitializeComponents() { NativeCall<void>((DWORD64)this, "AActor", "InitializeComponents"); }
	void UninitializeComponents() { NativeCall<void>((DWORD64)this, "AActor", "UninitializeComponents"); }
	void InvalidateLightingCacheDetailed(bool bTranslationOnly) { NativeCall<void, bool>((DWORD64)this, "AActor", "InvalidateLightingCacheDetailed", bTranslationOnly); }
	void SetLifeSpan(float InLifespan) { NativeCall<void, float>((DWORD64)this, "AActor", "SetLifeSpan", InLifespan); }
	float GetLifeSpan() { return NativeCall<float>((DWORD64)this, "AActor", "GetLifeSpan"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "AActor", "PostInitializeComponents"); }
	void Stasis() { NativeCall<void>((DWORD64)this, "AActor", "Stasis"); }
	void Unstasis() { NativeCall<void>((DWORD64)this, "AActor", "Unstasis"); }
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "AActor", "PreInitializeComponents"); }
	float GetDistanceTo(AActor* OtherActor) { return NativeCall<float, AActor *>((DWORD64)this, "AActor", "GetDistanceTo", OtherActor); }
	float GetHorizontalDistanceTo(AActor* OtherActor) { return NativeCall<float, AActor *>((DWORD64)this, "AActor", "GetHorizontalDistanceTo", OtherActor); }
	float GetVerticalDistanceTo(AActor* OtherActor) { return NativeCall<float, AActor *>((DWORD64)this, "AActor", "GetVerticalDistanceTo", OtherActor); }
	float GetDotProductTo(AActor* OtherActor) { return NativeCall<float, AActor *>((DWORD64)this, "AActor", "GetDotProductTo", OtherActor); }
	float GetHorizontalDotProductTo(AActor* OtherActor) { return NativeCall<float, AActor *>((DWORD64)this, "AActor", "GetHorizontalDotProductTo", OtherActor); }
	APlayerController* GetOwnerController() { return NativeCall<APlayerController *>((DWORD64)this, "AActor", "GetOwnerController"); }
	bool AlwaysReplicatePropertyConditional(UProperty* forProperty) { return NativeCall<bool, UProperty *>((DWORD64)this, "AActor", "AlwaysReplicatePropertyConditional", forProperty); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>((DWORD64)this, "AActor", "TryMultiUse", ForPC, UseIndex); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>((DWORD64)this, "AActor", "ChangeActorTeam", NewTeam); }
	bool AllowSaving() { return NativeCall<bool>((DWORD64)this, "AActor", "AllowSaving"); }
	bool GetIsMapActor() { return NativeCall<bool>((DWORD64)this, "AActor", "GetIsMapActor"); }
	bool IsOwnedOrControlledBy(AActor* TestOwner) { return NativeCall<bool, AActor *>((DWORD64)this, "AActor", "IsOwnedOrControlledBy", TestOwner); }
	void ResetPropertiesForConstruction() { NativeCall<void>((DWORD64)this, "AActor", "ResetPropertiesForConstruction"); }
	void DestroyConstructedComponents() { NativeCall<void>((DWORD64)this, "AActor", "DestroyConstructedComponents"); }
	void RerunConstructionScripts() { NativeCall<void>((DWORD64)this, "AActor", "RerunConstructionScripts"); }
	void PreNetReceive() { NativeCall<void>((DWORD64)this, "AActor", "PreNetReceive"); }
	void PostNetReceive() { NativeCall<void>((DWORD64)this, "AActor", "PostNetReceive"); }
	void OnRep_ReplicatedMovement() { NativeCall<void>((DWORD64)this, "AActor", "OnRep_ReplicatedMovement"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>((DWORD64)this, "AActor", "PostNetReceiveLocationAndRotation"); }
	void PostNetReceivePhysicState() { NativeCall<void>((DWORD64)this, "AActor", "PostNetReceivePhysicState"); }
	bool IsNetRelevantFor(APlayerController* RealViewer, AActor* Viewer, FVector* SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, FVector *>((DWORD64)this, "AActor", "IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	void GetSubobjectsWithStableNamesForNetworking(TArray<UObject *>* ObjList) { NativeCall<void, TArray<UObject *> *>((DWORD64)this, "AActor", "GetSubobjectsWithStableNamesForNetworking", ObjList); }
	void OnSubobjectCreatedFromReplication(UObject* NewSubobject) { NativeCall<void, UObject *>((DWORD64)this, "AActor", "OnSubobjectCreatedFromReplication", NewSubobject); }
	void OnSubobjectDestroyFromReplication(UObject* NewSubobject) { NativeCall<void, UObject *>((DWORD64)this, "AActor", "OnSubobjectDestroyFromReplication", NewSubobject); }
	bool IsNameStableForNetworking() { return NativeCall<bool>((DWORD64)this, "AActor", "IsNameStableForNetworking"); }
	void GatherCurrentMovement() { NativeCall<void>((DWORD64)this, "AActor", "GatherCurrentMovement"); }
	void ForceReplicateNow(bool bForceCreateChannel, bool bForceCreateChannelIfRelevant) { NativeCall<void, bool, bool>((DWORD64)this, "AActor", "ForceReplicateNow", bForceCreateChannel, bForceCreateChannelIfRelevant); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties) { NativeCall<void, bool>((DWORD64)this, "AActor", "ForceNetUpdate", bDormantDontReplicateProperties); }
	bool BPForceAllowsInventoryUse(UObject* InventoryItemObject) { return NativeCall<bool, UObject *>((DWORD64)this, "AActor", "BPForceAllowsInventoryUse", InventoryItemObject); }
	void BPInventoryItemDropped(UObject* InventoryItemObject) { NativeCall<void, UObject *>((DWORD64)this, "AActor", "BPInventoryItemDropped", InventoryItemObject); }
	void BPInventoryItemUsed(UObject* InventoryItemObject) { NativeCall<void, UObject *>((DWORD64)this, "AActor", "BPInventoryItemUsed", InventoryItemObject); }
	void K2_OnBecomeViewTarget(APlayerController* PC) { NativeCall<void, APlayerController *>((DWORD64)this, "AActor", "K2_OnBecomeViewTarget", PC); }
	void K2_OnEndViewTarget(APlayerController* PC) { NativeCall<void, APlayerController *>((DWORD64)this, "AActor", "K2_OnEndViewTarget", PC); }
	void ReceiveActorBeginCursorOver() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveActorBeginCursorOver"); }
	void ReceiveActorBeginOverlap(AActor* OtherActor) { NativeCall<void, AActor *>((DWORD64)this, "AActor", "ReceiveActorBeginOverlap", OtherActor); }
	void ReceiveActorEndCursorOver() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveActorEndCursorOver"); }
	void ReceiveActorEndOverlap(AActor* OtherActor) { NativeCall<void, AActor *>((DWORD64)this, "AActor", "ReceiveActorEndOverlap", OtherActor); }
	void ReceiveActorOnClicked() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveActorOnClicked"); }
	void ReceiveActorOnReleased() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveActorOnReleased"); }
	void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) { NativeCall<void, float, UDamageType *, AController *, AActor *>((DWORD64)this, "AActor", "ReceiveAnyDamage", Damage, DamageType, InstigatedBy, DamageCauser); }
	void ReceiveBeginPlay() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveBeginPlay"); }
	void ReceiveDestroyed() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveDestroyed"); }
	void ReceiveHit() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveHit"); }
	void ReceiveInput() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveInput"); }
	void ReceivePointDamage() { NativeCall<void>((DWORD64)this, "AActor", "ReceivePointDamage"); }
	void ReceiveRadialDamage() { NativeCall<void>((DWORD64)this, "AActor", "ReceiveRadialDamage"); }
	void ReceiveTick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "AActor", "ReceiveTick", DeltaSeconds); }
	void RecieveMatineeUpdated() { NativeCall<void>((DWORD64)this, "AActor", "RecieveMatineeUpdated"); }
	void UserConstructionScript() { NativeCall<void>((DWORD64)this, "AActor", "UserConstructionScript"); }
};

struct APawn : public AActor
{
public:
	float GetBaseEyeHeightField() const { return GetNativeField<float>(this, "APawn", "BaseEyeHeight"); }
	void SetBaseEyeHeightField(float newValue) { SetNativeField(this, "APawn", "BaseEyeHeight", newValue); }
	TSubclassOf<AController> GetAIControllerClassField() const { return GetNativeField<TSubclassOf<AController>>(this, "APawn", "AIControllerClass"); }
	void SetAIControllerClassField(TSubclassOf<AController> newValue) { SetNativeField(this, "APawn", "AIControllerClass", newValue); }
	APlayerState* GetPlayerStateField() const { return GetNativeField<APlayerState *>(this, "APawn", "PlayerState"); }
	void SetPlayerStateField(APlayerState* newValue) { SetNativeField(this, "APawn", "PlayerState", newValue); }
	char GetRemoteViewPitchField() const { return GetNativeField<char>(this, "APawn", "RemoteViewPitch"); }
	void SetRemoteViewPitchField(char newValue) { SetNativeField(this, "APawn", "RemoteViewPitch", newValue); }
	AController* GetLastHitByField() const { return GetNativeField<AController *>(this, "APawn", "LastHitBy"); }
	void SetLastHitByField(AController* newValue) { SetNativeField(this, "APawn", "LastHitBy", newValue); }
	AController* GetControllerField() const { return GetNativeField<AController *>(this, "APawn", "Controller"); }
	void SetControllerField(AController* newValue) { SetNativeField(this, "APawn", "Controller", newValue); }
	bool GetbClearOnConsumeField() const { return GetNativeField<bool>(this, "APawn", "bClearOnConsume"); }
	void SetbClearOnConsumeField(bool newValue) { SetNativeField(this, "APawn", "bClearOnConsume", newValue); }
	FVector GetControlInputVectorField() const { return GetNativeField<FVector>(this, "APawn", "ControlInputVector"); }
	void SetControlInputVectorField(FVector newValue) { SetNativeField(this, "APawn", "ControlInputVector", newValue); }
	FVector GetLastControlInputVectorField() const { return GetNativeField<FVector>(this, "APawn", "LastControlInputVector"); }
	void SetLastControlInputVectorField(FVector newValue) { SetNativeField(this, "APawn", "LastControlInputVector", newValue); }

	// Functions

	FVector* GetNavAgentLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APawn", "GetNavAgentLocation", result); }
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "APawn", "PreInitializeComponents"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "APawn", "PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>((DWORD64)this, "APawn", "PostLoad"); }
	void PostRegisterAllComponents() { NativeCall<void>((DWORD64)this, "APawn", "PostRegisterAllComponents"); }
	void UpdateNavAgent() { NativeCall<void>((DWORD64)this, "APawn", "UpdateNavAgent"); }
	FVector* GetVelocity(FVector* result, bool bIsForRagdoll) { return NativeCall<FVector *, FVector *, bool>((DWORD64)this, "APawn", "GetVelocity", result, bIsForRagdoll); }
	bool IsLocallyControlled() { return NativeCall<bool>((DWORD64)this, "APawn", "IsLocallyControlled"); }
	bool ReachedDesiredRotation() { return NativeCall<bool>((DWORD64)this, "APawn", "ReachedDesiredRotation"); }
	float GetDefaultHalfHeight() { return NativeCall<float>((DWORD64)this, "APawn", "GetDefaultHalfHeight"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>((DWORD64)this, "APawn", "ShouldTickIfViewportsOnly"); }
	FVector* GetPawnViewLocation(FVector* result, bool bAllTransforms) { return NativeCall<FVector *, FVector *, bool>((DWORD64)this, "APawn", "GetPawnViewLocation", result, bAllTransforms); }
	FRotator* GetViewRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "APawn", "GetViewRotation", result); }
	void SpawnDefaultController() { NativeCall<void>((DWORD64)this, "APawn", "SpawnDefaultController"); }
	void TurnOff() { NativeCall<void>((DWORD64)this, "APawn", "TurnOff"); }
	void BecomeViewTarget(APlayerController* PC) { NativeCall<void, APlayerController *>((DWORD64)this, "APawn", "BecomeViewTarget", PC); }
	void PawnClientRestart() { NativeCall<void>((DWORD64)this, "APawn", "PawnClientRestart"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "APawn", "Destroyed"); }
	bool ShouldTakeDamage(float Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APawn", "ShouldTakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	float TakeDamage(float Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APawn", "TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	FRotator* GetControlRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "APawn", "GetControlRotation", result); }
	void OnRep_Controller() { NativeCall<void>((DWORD64)this, "APawn", "OnRep_Controller"); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController *>((DWORD64)this, "APawn", "PossessedBy", NewController); }
	void UnPossessed() { NativeCall<void>((DWORD64)this, "APawn", "UnPossessed"); }
	UPlayer* GetNetOwningPlayer() { return NativeCall<UPlayer *>((DWORD64)this, "APawn", "GetNetOwningPlayer"); }
	void DestroyPlayerInputComponent() { NativeCall<void>((DWORD64)this, "APawn", "DestroyPlayerInputComponent"); }
	bool IsMoveInputIgnored() { return NativeCall<bool>((DWORD64)this, "APawn", "IsMoveInputIgnored"); }
	void AddMovementInput() { NativeCall<void>((DWORD64)this, "APawn", "AddMovementInput"); }
	FVector* ConsumeMovementInputVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APawn", "ConsumeMovementInputVector", result); }
	void Internal_AddMovementInput() { NativeCall<void>((DWORD64)this, "APawn", "Internal_AddMovementInput"); }
	void PostInputProcessed() { NativeCall<void>((DWORD64)this, "APawn", "PostInputProcessed"); }
	FVector* Internal_ConsumeMovementInputVector(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APawn", "Internal_ConsumeMovementInputVector", result); }
	void AddControllerPitchInput(float Val) { NativeCall<void, float>((DWORD64)this, "APawn", "AddControllerPitchInput", Val); }
	void AddControllerYawInput(float Val) { NativeCall<void, float>((DWORD64)this, "APawn", "AddControllerYawInput", Val); }
	void AddControllerRollInput(float Val) { NativeCall<void, float>((DWORD64)this, "APawn", "AddControllerRollInput", Val); }
	void Restart() { NativeCall<void>((DWORD64)this, "APawn", "Restart"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APawn", "Tick", DeltaSeconds); }
	void RecalculateBaseEyeHeight() { NativeCall<void>((DWORD64)this, "APawn", "RecalculateBaseEyeHeight"); }
	void Reset() { NativeCall<void>((DWORD64)this, "APawn", "Reset"); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APawn", "GetHumanReadableName", result); }
	void GetActorEyesViewPoint(FVector* out_Location, FRotator* out_Rotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "APawn", "GetActorEyesViewPoint", out_Location, out_Rotation); }
	FRotator* GetBaseAimRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "APawn", "GetBaseAimRotation", result); }
	bool InFreeCam() { return NativeCall<bool>((DWORD64)this, "APawn", "InFreeCam"); }
	void OutsideWorldBounds() { NativeCall<void>((DWORD64)this, "APawn", "OutsideWorldBounds"); }
	void ClientSetRotation() { NativeCall<void>((DWORD64)this, "APawn", "ClientSetRotation"); }
	void FaceRotation() { NativeCall<void>((DWORD64)this, "APawn", "FaceRotation"); }
	void DetachFromControllerPendingDestroy() { NativeCall<void>((DWORD64)this, "APawn", "DetachFromControllerPendingDestroy"); }
	AController* GetDamageInstigator(AController* InstigatedBy, UDamageType* DamageType) { return NativeCall<AController *, AController *, UDamageType *>((DWORD64)this, "APawn", "GetDamageInstigator", InstigatedBy, DamageType); }
	void EnableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController *>((DWORD64)this, "APawn", "EnableInput", PlayerController); }
	void DisableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController *>((DWORD64)this, "APawn", "DisableInput", PlayerController); }
	bool IsWalking() { return NativeCall<bool>((DWORD64)this, "APawn", "IsWalking"); }
	bool IsFalling() { return NativeCall<bool>((DWORD64)this, "APawn", "IsFalling"); }
	bool IsCrouched() { return NativeCall<bool>((DWORD64)this, "APawn", "IsCrouched"); }
	void PostNetReceiveVelocity(FVector* NewVelocity) { NativeCall<void, FVector *>((DWORD64)this, "APawn", "PostNetReceiveVelocity", NewVelocity); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>((DWORD64)this, "APawn", "PostNetReceiveLocationAndRotation"); }
	bool IsBasedOnActor(AActor* Other) { return NativeCall<bool, AActor *>((DWORD64)this, "APawn", "IsBasedOnActor", Other); }
	bool IsNetRelevantFor(APlayerController* RealViewer, AActor* Viewer, FVector* SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, FVector *>((DWORD64)this, "APawn", "IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	void PawnMakeNoise() { NativeCall<void>((DWORD64)this, "APawn", "PawnMakeNoise"); }
	APlayerController* GetOwnerController() { return NativeCall<APlayerController *>((DWORD64)this, "APawn", "GetOwnerController"); }
	AController* GetCharacterController() { return NativeCall<AController *>((DWORD64)this, "APawn", "GetCharacterController"); }
};

// Cheat Managers

struct UCheatManager
{
	void FreezeFrame(float delay) { NativeCall<void, float>((DWORD64)this, "UCheatManager", "FreezeFrame", delay); }
	void Teleport() { NativeCall<void>((DWORD64)this, "UCheatManager", "Teleport"); }
	void ChangeSize(float F) { NativeCall<void, float>((DWORD64)this, "UCheatManager", "ChangeSize", F); }
	void Fly() { NativeCall<void>((DWORD64)this, "UCheatManager", "Fly"); }
	void Walk() { NativeCall<void>((DWORD64)this, "UCheatManager", "Walk"); }
	void Ghost() { NativeCall<void>((DWORD64)this, "UCheatManager", "Ghost"); }
	void God() { NativeCall<void>((DWORD64)this, "UCheatManager", "God"); }
	void Slomo(float T) { NativeCall<void, float>((DWORD64)this, "UCheatManager", "Slomo", T); }
	void DamageTarget(float DamageAmount) { NativeCall<void, float>((DWORD64)this, "UCheatManager", "DamageTarget", DamageAmount); }
	void DestroyTarget() { NativeCall<void>((DWORD64)this, "UCheatManager", "DestroyTarget"); }
	void DestroyAll(TSubclassOf<AActor> aClass) { NativeCall<void, TSubclassOf<AActor>>((DWORD64)this, "UCheatManager", "DestroyAll", aClass); }
	void DestroyPawns(TSubclassOf<APawn> aClass) { NativeCall<void, TSubclassOf<APawn>>((DWORD64)this, "UCheatManager", "DestroyPawns", aClass); }
	void Summon(FString* ClassName) { NativeCall<void, FString *>((DWORD64)this, "UCheatManager", "Summon", ClassName); }
	void PlayersOnly() { NativeCall<void>((DWORD64)this, "UCheatManager", "PlayersOnly"); }
	void ViewSelf() { NativeCall<void>((DWORD64)this, "UCheatManager", "ViewSelf"); }
	void ViewPlayer(FString* S) { NativeCall<void, FString *>((DWORD64)this, "UCheatManager", "ViewPlayer", S); }
	void ViewActor(FName ActorName) { NativeCall<void, FName>((DWORD64)this, "UCheatManager", "ViewActor", ActorName); }
	void SetLevelStreamingStatus(FName PackageName, bool bShouldBeLoaded, bool bShouldBeVisible) { NativeCall<void, FName, bool, bool>((DWORD64)this, "UCheatManager", "SetLevelStreamingStatus", PackageName, bShouldBeLoaded, bShouldBeVisible); }
	void StreamLevelIn(FName PackageName) { NativeCall<void, FName>((DWORD64)this, "UCheatManager", "StreamLevelIn", PackageName); }
	void OnlyLoadLevel(FName PackageName) { NativeCall<void, FName>((DWORD64)this, "UCheatManager", "OnlyLoadLevel", PackageName); }
	void StreamLevelOut(FName PackageName) { NativeCall<void, FName>((DWORD64)this, "UCheatManager", "StreamLevelOut", PackageName); }
	void ToggleDebugCamera() { NativeCall<void>((DWORD64)this, "UCheatManager", "ToggleDebugCamera"); }
	void EnableDebugCamera() { NativeCall<void>((DWORD64)this, "UCheatManager", "EnableDebugCamera"); }
	void DisableDebugCamera() { NativeCall<void>((DWORD64)this, "UCheatManager", "DisableDebugCamera"); }
	void DebugCapsuleSweep() { NativeCall<void>((DWORD64)this, "UCheatManager", "DebugCapsuleSweep"); }
	void DebugCapsuleSweepSize(float HalfHeight, float Radius) { NativeCall<void, float, float>((DWORD64)this, "UCheatManager", "DebugCapsuleSweepSize", HalfHeight, Radius); }
	void DebugCapsuleSweepComplex(bool bTraceComplex) { NativeCall<void, bool>((DWORD64)this, "UCheatManager", "DebugCapsuleSweepComplex", bTraceComplex); }
	void DebugCapsuleSweepCapture() { NativeCall<void>((DWORD64)this, "UCheatManager", "DebugCapsuleSweepCapture"); }
	void DebugCapsuleSweepPawn() { NativeCall<void>((DWORD64)this, "UCheatManager", "DebugCapsuleSweepPawn"); }
	void DebugCapsuleSweepClear() { NativeCall<void>((DWORD64)this, "UCheatManager", "DebugCapsuleSweepClear"); }
	void TestCollisionDistance() { NativeCall<void>((DWORD64)this, "UCheatManager", "TestCollisionDistance"); }
	void WidgetReflector() { NativeCall<void>((DWORD64)this, "UCheatManager", "WidgetReflector"); }
	void RebuildNavigation() { NativeCall<void>((DWORD64)this, "UCheatManager", "RebuildNavigation"); }
	void DumpOnlineSessionState() { NativeCall<void>((DWORD64)this, "UCheatManager", "DumpOnlineSessionState"); }
	void DumpVoiceMutingState() { NativeCall<void>((DWORD64)this, "UCheatManager", "DumpVoiceMutingState"); }
	UWorld* GetWorld() { return NativeCall<UWorld *>((DWORD64)this, "UCheatManager", "GetWorld"); }
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) { NativeCall<void, float, float, float, float, float, float>((DWORD64)this, "UCheatManager", "BugItGo", X, Y, Z, Pitch, Yaw, Roll); }
	void BugItGoString(FString* TheLocation, FString* TheRotation) { NativeCall<void, FString *, FString *>((DWORD64)this, "UCheatManager", "BugItGoString", TheLocation, TheRotation); }
	void BugItWorker() { NativeCall<void>((DWORD64)this, "UCheatManager", "BugItWorker"); }
	void BugIt(FString* ScreenShotDescription) { NativeCall<void, FString *>((DWORD64)this, "UCheatManager", "BugIt", ScreenShotDescription); }
	void BugItStringCreator() { NativeCall<void>((DWORD64)this, "UCheatManager", "BugItStringCreator"); }
	void FlushLog() { NativeCall<void>((DWORD64)this, "UCheatManager", "FlushLog"); }
	void LogLoc() { NativeCall<void>((DWORD64)this, "UCheatManager", "LogLoc"); }
	void SetWorldOrigin() { NativeCall<void>((DWORD64)this, "UCheatManager", "SetWorldOrigin"); }
	void ServerToggleAILogging() { NativeCall<void>((DWORD64)this, "UCheatManager", "ServerToggleAILogging"); }
};

struct UShooterCheatManager : UCheatManager
{
	bool GetbIsRCONCheatManagerField() const { return GetNativeField<bool>(this, "UShooterCheatManager", "bIsRCONCheatManager"); }
	void SetbIsRCONCheatManagerField(bool newValue) { SetNativeField(this, "UShooterCheatManager", "bIsRCONCheatManager", newValue); }
	AShooterPlayerController* GetMyPCField() const { return GetNativeField<AShooterPlayerController *>(this, "UShooterCheatManager", "MyPC"); }

	// Functions

	void TakeAllStructure() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "TakeAllStructure"); }
	void TakeAllDino() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "TakeAllDino"); }
	void GMBuff() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "GMBuff"); }
	void GMSummon(FString* ClassName, int Level) { NativeCall<void, FString *, int>((DWORD64)this, "UShooterCheatManager", "GMSummon", ClassName, Level); }
	void AllowPlayerToJoinNoCheck(FString* SteamId) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "AllowPlayerToJoinNoCheck", SteamId); }
	void RenameTribe(FString* TribeName, FString* NewName) { NativeCall<void, FString *, FString *>((DWORD64)this, "UShooterCheatManager", "RenameTribe", TribeName, NewName); }
	void RenamePlayer(FString* PlayerName, FString* NewName) { NativeCall<void, FString *, FString *>((DWORD64)this, "UShooterCheatManager", "RenamePlayer", PlayerName, NewName); }
	void DestroyActors(FString* ClassName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "DestroyActors", ClassName); }
	void StartSaveBackup() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "StartSaveBackup"); }
	void DoExit() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DoExit"); }
	void OpenMap(FString* MapName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "OpenMap", MapName); }
	void DoRestartLevel() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DoRestartLevel"); }
	void SetGlobalPause(bool bIsPaused) { NativeCall<void, bool>((DWORD64)this, "UShooterCheatManager", "SetGlobalPause", bIsPaused); }
	void DisallowPlayerToJoinNoCheck(FString* SteamId) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "DisallowPlayerToJoinNoCheck", SteamId); }
	void GiveExpToPlayer(__int64 PlayerID, float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, __int64, float, bool, bool>((DWORD64)this, "UShooterCheatManager", "GiveExpToPlayer", PlayerID, HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void DestroyMyTarget() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DestroyMyTarget"); }
	void SetTargetDinoColor(int ColorRegion, int ColorID) { NativeCall<void, int, int>((DWORD64)this, "UShooterCheatManager", "SetTargetDinoColor", ColorRegion, ColorID); }
	void Kill() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "Kill"); }
	void KillPlayer(__int64 PlayerID) { NativeCall<void, __int64>((DWORD64)this, "UShooterCheatManager", "KillPlayer", PlayerID); }
	void TeleportPlayerIDToMe(__int64 PlayerID) { NativeCall<void, __int64>((DWORD64)this, "UShooterCheatManager", "TeleportPlayerIDToMe", PlayerID); }
	void TeleportPlayerNameToMe(FString* PlayerName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "TeleportPlayerNameToMe", PlayerName); }
	void TeleportToPlayer(__int64 PlayerID) { NativeCall<void, __int64>((DWORD64)this, "UShooterCheatManager", "TeleportToPlayer", PlayerID); }
	void DestroyTribePlayers() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DestroyTribePlayers"); }
	void DestroyTribeDinos() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DestroyTribeDinos"); }
	void DestroyTribeStructures() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DestroyTribeStructures"); }
	void ForcePlayerToJoinTargetTribe(__int64 PlayerID) { NativeCall<void, __int64>((DWORD64)this, "UShooterCheatManager", "ForcePlayerToJoinTargetTribe", PlayerID); }
	void ForcePlayerToJoinTribe() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "ForcePlayerToJoinTribe"); }
	void SpawnActorTamed(FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset) { NativeCall<void, FString *, float, float, float>((DWORD64)this, "UShooterCheatManager", "SpawnActorTamed", blueprintPath, spawnDistance, spawnYOffset, ZOffset); }
	AActor* DoSummon(FString* ClassName) { return NativeCall<AActor *, FString *>((DWORD64)this, "UShooterCheatManager", "DoSummon", ClassName); }
	void Summon(FString* ClassName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "Summon", ClassName); }
	void SummonTamed(FString* ClassName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "SummonTamed", ClassName); }
	void EnableCheats() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "EnableCheats"); }
	void BanPlayer() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "BanPlayer"); }
	void UnbanPlayer() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "UnbanPlayer"); }
	void KickPlayer() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "KickPlayer"); }
	void Suicide() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "Suicide"); }
	void ForceTame() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "ForceTame"); }
	void SetImprintQuality(float ImprintQuality) { NativeCall<void, float>((DWORD64)this, "UShooterCheatManager", "SetImprintQuality", ImprintQuality); }
	void DoTame() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DoTame"); }
	void GiveToMe() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "GiveToMe"); }
	void GiveAllStructure() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "GiveAllStructure"); }
	void SetTargetPlayerBodyVal(int BodyValIndex, float BodyVal) { NativeCall<void, int, float>((DWORD64)this, "UShooterCheatManager", "SetTargetPlayerBodyVal", BodyValIndex, BodyVal); }
	void SetTargetPlayerColorVal(int ColorValIndex, float ColorVal) { NativeCall<void, int, float>((DWORD64)this, "UShooterCheatManager", "SetTargetPlayerColorVal", ColorValIndex, ColorVal); }
	void SetBabyAge(float AgeValue) { NativeCall<void, float>((DWORD64)this, "UShooterCheatManager", "SetBabyAge", AgeValue); }
	void ListPlayers() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "ListPlayers"); }
	void EnemyInVisible(bool Invisible) { NativeCall<void, bool>((DWORD64)this, "UShooterCheatManager", "EnemyInVisible", Invisible); }
	void AddItemToAllClustersInventory() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "AddItemToAllClustersInventory"); }
	void GiveItemToPlayer(int playerID, FString* blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, FString *, int, float, bool>((DWORD64)this, "UShooterCheatManager", "GiveItemToPlayer", playerID, blueprintPath, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveItemNumToPlayer(int playerID, int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, int, int, float, bool>((DWORD64)this, "UShooterCheatManager", "GiveItemNumToPlayer", playerID, masterIndexNum, quantityOverride, qualityOverride, bForceBlueprint); }
	void ClearPlayerInventory(int playerID, bool bClearInventory, bool bClearSlotItems, bool bClearEquippedItems) { NativeCall<void, int, bool, bool, bool>((DWORD64)this, "UShooterCheatManager", "ClearPlayerInventory", playerID, bClearInventory, bClearSlotItems, bClearEquippedItems); }
	void DestroyAllEnemies() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DestroyAllEnemies"); }
	void DestroyWildDinos() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DestroyWildDinos"); }
	void DestroyStructures() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "DestroyStructures"); }
	void PrintActorLocation(FString* ActorName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "PrintActorLocation", ActorName); }
	void TeleportToActorLocation(FString* ActorName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "TeleportToActorLocation", ActorName); }
	void ServerChat(FString* MessageText) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "ServerChat", MessageText); }
	AShooterPlayerController* FindPlayerControllerFromPlayerID(__int64 PlayerID) { return NativeCall<AShooterPlayerController *, __int64>((DWORD64)this, "UShooterCheatManager", "FindPlayerControllerFromPlayerID", PlayerID); }
	void GameCommand(FString* TheCommand) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "GameCommand", TheCommand); }
	void ScriptCommand(FString* commandString) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "ScriptCommand", commandString); }
	void RemoveTribeAdmin() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "RemoveTribeAdmin"); }
	void MakeTribeFounder() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "MakeTribeFounder"); }
	void VisualizeWorld() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "VisualizeWorld"); }
	void VisualizeWorldGeo() { NativeCall<void>((DWORD64)this, "UShooterCheatManager", "VisualizeWorldGeo"); }
	void UnlockEngram(FString* ItemClassName) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "UnlockEngram", ItemClassName); }
	void SetHeadHairPercent(float thePercent) { NativeCall<void, float>((DWORD64)this, "UShooterCheatManager", "SetHeadHairPercent", thePercent); }
	void SetFacialHairPercent(float thePercent) { NativeCall<void, float>((DWORD64)this, "UShooterCheatManager", "SetFacialHairPercent", thePercent); }
	void SetHeadHairstyle(int hairStyleIndex) { NativeCall<void, int>((DWORD64)this, "UShooterCheatManager", "SetHeadHairstyle", hairStyleIndex); }
	void SetFacialHairstyle(int hairStyleIndex) { NativeCall<void, int>((DWORD64)this, "UShooterCheatManager", "SetFacialHairstyle", hairStyleIndex); }
	void PrintMessageOut(FString* Msg) { NativeCall<void, FString *>((DWORD64)this, "UShooterCheatManager", "PrintMessageOut", Msg); }
	void GetTribeIdPlayerList(int TribeID) { NativeCall<void, int>((DWORD64)this, "UShooterCheatManager", "GetTribeIdPlayerList", TribeID); }
	void GetSteamIDForPlayerID(int PlayerID) { NativeCall<void, int>((DWORD64)this, "UShooterCheatManager", "GetSteamIDForPlayerID", PlayerID); }
	void GetPlayerIDForSteamID(int SteamID) { NativeCall<void, int>((DWORD64)this, "UShooterCheatManager", "GetPlayerIDForSteamID", SteamID); }
	static UField* GetPrivateStaticClass() { return NativeCall<UField *>(nullptr, "UShooterCheatManager", "GetPrivateStaticClass"); }
};

// Player

struct UPlayer
{
	APlayerController* GetPlayerControllerField() const { return GetNativeField<APlayerController *>(this, "UPlayer", "PlayerController"); }
	int GetCurrentNetSpeedField() const { return GetNativeField<int>(this, "UPlayer", "CurrentNetSpeed"); }
	void SetCurrentNetSpeedField(int newValue) { SetNativeField(this, "UPlayer", "CurrentNetSpeed", newValue); }
	int GetConfiguredInternetSpeedField() const { return GetNativeField<int>(this, "UPlayer", "ConfiguredInternetSpeed"); }
	void SetConfiguredInternetSpeedField(int newValue) { SetNativeField(this, "UPlayer", "ConfiguredInternetSpeed", newValue); }
	int GetConfiguredLanSpeedField() const { return GetNativeField<int>(this, "UPlayer", "ConfiguredLanSpeed"); }
	void SetConfiguredLanSpeedField(int newValue) { SetNativeField(this, "UPlayer", "ConfiguredLanSpeed", newValue); }
	unsigned __int64 GetTransferringPlayerDataIdField() const { return GetNativeField<unsigned __int64>(this, "UPlayer", "TransferringPlayerDataId"); }
	void SetTransferringPlayerDataIdField(unsigned __int64 newValue) { SetNativeField(this, "UPlayer", "TransferringPlayerDataId", newValue); }
};

struct APlayerState : public AActor
{
	float GetScoreField() const { return GetNativeField<float>(this, "APlayerState", "Score"); }
	void SetScoreField(float newValue) { SetNativeField(this, "APlayerState", "Score", newValue); }
	char GetPingField() const { return GetNativeField<char>(this, "APlayerState", "Ping"); }
	void SetPingField(char newValue) { SetNativeField(this, "APlayerState", "Ping", newValue); }
	FString GetPlayerNameField() const { return GetNativeField<FString>(this, "APlayerState", "PlayerName"); }
	void SetPlayerNameField(FString newValue) { SetNativeField(this, "APlayerState", "PlayerName", newValue); }
	FString GetOldNameField() const { return GetNativeField<FString>(this, "APlayerState", "OldName"); }
	void SetOldNameField(FString newValue) { SetNativeField(this, "APlayerState", "OldName", newValue); }
	int GetPlayerIdField() const { return GetNativeField<int>(this, "APlayerState", "PlayerId"); }
	void SetPlayerIdField(int newValue) { SetNativeField(this, "APlayerState", "PlayerId", newValue); }
	__int32 Get_bf46cField() const { return GetNativeField<__int32>(this, "APlayerState", "_bf46c"); }
	void Set_bf46cField(__int32 newValue) { SetNativeField(this, "APlayerState", "_bf46c", newValue); }
	int GetStartTimeField() const { return GetNativeField<int>(this, "APlayerState", "StartTime"); }
	void SetStartTimeField(int newValue) { SetNativeField(this, "APlayerState", "StartTime", newValue); }
	float GetExactPingField() const { return GetNativeField<float>(this, "APlayerState", "ExactPing"); }
	void SetExactPingField(float newValue) { SetNativeField(this, "APlayerState", "ExactPing", newValue); }
	FString GetSavedNetworkAddressField() const { return GetNativeField<FString>(this, "APlayerState", "SavedNetworkAddress"); }
	void SetSavedNetworkAddressField(FString newValue) { SetNativeField(this, "APlayerState", "SavedNetworkAddress", newValue); }
	FUniqueNetIdRepl* GetUniqueIdField() const { return GetNativePointerField<FUniqueNetIdRepl*>(this, "APlayerState", "UniqueId"); }
	FName GetSessionNameField() const { return GetNativeField<FName>(this, "APlayerState", "SessionName"); }
	void SetSessionNameField(FName newValue) { SetNativeField(this, "APlayerState", "SessionName", newValue); }
	char GetCurPingBucketField() const { return GetNativeField<char>(this, "APlayerState", "CurPingBucket"); }
	void SetCurPingBucketField(char newValue) { SetNativeField(this, "APlayerState", "CurPingBucket", newValue); }
	float GetCurPingBucketTimestampField() const { return GetNativeField<float>(this, "APlayerState", "CurPingBucketTimestamp"); }
	void SetCurPingBucketTimestampField(float newValue) { SetNativeField(this, "APlayerState", "CurPingBucketTimestamp", newValue); }


	// Functions

	void UpdatePing(float InPing) { NativeCall<void, float>((DWORD64)this, "APlayerState", "UpdatePing", InPing); }
	void RecalculateAvgPing() { NativeCall<void>((DWORD64)this, "APlayerState", "RecalculateAvgPing"); }
	void OverrideWith(APlayerState* PlayerState) { NativeCall<void, APlayerState *>((DWORD64)this, "APlayerState", "OverrideWith", PlayerState); }
	void CopyProperties(APlayerState* PlayerState) { NativeCall<void, APlayerState *>((DWORD64)this, "APlayerState", "CopyProperties", PlayerState); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "APlayerState", "PostInitializeComponents"); }
	void ClientInitialize(AController* C) { NativeCall<void, AController *>((DWORD64)this, "APlayerState", "ClientInitialize", C); }
	void OnRep_PlayerName() { NativeCall<void>((DWORD64)this, "APlayerState", "OnRep_PlayerName"); }
	void OnRep_bIsInactive() { NativeCall<void>((DWORD64)this, "APlayerState", "OnRep_bIsInactive"); }
	bool ShouldBroadCastWelcomeMessage(bool bExiting) { return NativeCall<bool, bool>((DWORD64)this, "APlayerState", "ShouldBroadCastWelcomeMessage", bExiting); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "APlayerState", "Destroyed"); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APlayerState", "GetHumanReadableName", result); }
	void SetPlayerName(FString* S) { NativeCall<void, FString *>((DWORD64)this, "APlayerState", "SetPlayerName", S); }
	void OnRep_UniqueId() { NativeCall<void>((DWORD64)this, "APlayerState", "OnRep_UniqueId"); }
	void SetUniqueId(TSharedPtr<FUniqueNetId>* InUniqueId) { NativeCall<void, TSharedPtr<FUniqueNetId> *>((DWORD64)this, "APlayerState", "SetUniqueId", InUniqueId); }
	void RegisterPlayerWithSession(bool bWasFromInvite) { NativeCall<void, bool>((DWORD64)this, "APlayerState", "RegisterPlayerWithSession", bWasFromInvite); }
	void UnregisterPlayerWithSession() { NativeCall<void>((DWORD64)this, "APlayerState", "UnregisterPlayerWithSession"); }
	APlayerState* Duplicate() { return NativeCall<APlayerState *>((DWORD64)this, "APlayerState", "Duplicate"); }
	void SeamlessTravelTo(APlayerState* NewPlayerState) { NativeCall<void, APlayerState *>((DWORD64)this, "APlayerState", "SeamlessTravelTo", NewPlayerState); }
};

struct AShooterPlayerState : APlayerState
{
	UPrimalPlayerData* GetMyPlayerDataField() const { return GetNativeField<UPrimalPlayerData *>(this, "AShooterPlayerState", "MyPlayerData"); }
	FPrimalPlayerDataStruct* GetMyPlayerDataStructField() const { return GetNativePointerField<FPrimalPlayerDataStruct*>(this, "AShooterPlayerState", "MyPlayerDataStruct"); }
	FTribeData* GetMyTribeDataField() const { return GetNativePointerField<FTribeData*>(this, "AShooterPlayerState", "MyTribeData"); }
	FTribeData* GetLastTribeInviteDataField() const { return GetNativePointerField<FTribeData*>(this, "AShooterPlayerState", "LastTribeInviteData"); }
	int GetTotalEngramPointsField() const { return GetNativeField<int>(this, "AShooterPlayerState", "TotalEngramPoints"); }
	void SetTotalEngramPointsField(int newValue) { SetNativeField(this, "AShooterPlayerState", "TotalEngramPoints", newValue); }
	int GetFreeEngramPointsField() const { return GetNativeField<int>(this, "AShooterPlayerState", "FreeEngramPoints"); }
	void SetFreeEngramPointsField(int newValue) { SetNativeField(this, "AShooterPlayerState", "FreeEngramPoints", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetEngramItemBlueprintsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "AShooterPlayerState", "EngramItemBlueprints"); }
	long double GetNextAllowedRespawnTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerState", "NextAllowedRespawnTime"); }
	void SetNextAllowedRespawnTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerState", "NextAllowedRespawnTime", newValue); }
	float GetAllowedRespawnIntervalField() const { return GetNativeField<float>(this, "AShooterPlayerState", "AllowedRespawnInterval"); }
	void SetAllowedRespawnIntervalField(float newValue) { SetNativeField(this, "AShooterPlayerState", "AllowedRespawnInterval", newValue); }
	long double GetLastTimeDiedToEnemyTeamField() const { return GetNativeField<long double>(this, "AShooterPlayerState", "LastTimeDiedToEnemyTeam"); }
	void SetLastTimeDiedToEnemyTeamField(long double newValue) { SetNativeField(this, "AShooterPlayerState", "LastTimeDiedToEnemyTeam", newValue); }
	int GetCurrentlySelectedDinoOrderGroupField() const { return GetNativeField<int>(this, "AShooterPlayerState", "CurrentlySelectedDinoOrderGroup"); }
	void SetCurrentlySelectedDinoOrderGroupField(int newValue) { SetNativeField(this, "AShooterPlayerState", "CurrentlySelectedDinoOrderGroup", newValue); }
	long double GetLastTribeRequestTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerState", "LastTribeRequestTime"); }
	void SetLastTribeRequestTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerState", "LastTribeRequestTime", newValue); }

	// Functions

	void Reset() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "Reset"); }
	void UnregisterPlayerWithSession() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "UnregisterPlayerWithSession"); }
	void ClientInitialize(AController* InController) { NativeCall<void, AController *>((DWORD64)this, "AShooterPlayerState", "ClientInitialize", InController); }
	void CopyProperties(APlayerState* PlayerState) { NativeCall<void, APlayerState *>((DWORD64)this, "AShooterPlayerState", "CopyProperties", PlayerState); }
	void ServerGetAllPlayerNamesAndLocations_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerGetAllPlayerNamesAndLocations_Implementation"); }
	void ServerGetAlivePlayerConnectedData_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerGetAlivePlayerConnectedData_Implementation"); }
	void ServerGetPlayerConnectedData_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerGetPlayerConnectedData_Implementation"); }
	void ServerGetServerOptions_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerGetServerOptions_Implementation"); }
	void ServerGetPlayerBannedData_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerGetPlayerBannedData_Implementation"); }
	void ServerGetPlayerWhiteListedData_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerGetPlayerWhiteListedData_Implementation"); }
	void BroadcastDeath_Implementation(AShooterPlayerState* KillerPlayerState, UDamageType* KillerDamageType, AShooterPlayerState* KilledPlayerState) { NativeCall<void, AShooterPlayerState *, UDamageType *, AShooterPlayerState *>((DWORD64)this, "AShooterPlayerState", "BroadcastDeath_Implementation", KillerPlayerState, KillerDamageType, KilledPlayerState); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "Destroyed"); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "BeginPlay"); }
	void PromoteToTribeAdmin() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "PromoteToTribeAdmin"); }
	bool AddToTribe(FTribeData* MyNewTribe, bool bMergeTribe, bool bForce, bool bIsFromInvite) { return NativeCall<bool, FTribeData *, bool, bool, bool>((DWORD64)this, "AShooterPlayerState", "AddToTribe", MyNewTribe, bMergeTribe, bForce, bIsFromInvite); }
	void ClearTribe(bool bDontRemoveFromTribe, bool bForce) { NativeCall<void, bool, bool>((DWORD64)this, "AShooterPlayerState", "ClearTribe", bDontRemoveFromTribe, bForce); }
	void TransferTribalObjects(FTribeData* TribeData, bool bTransferToTribe, bool bDontIncludePlayers) { NativeCall<void, FTribeData *, bool, bool>((DWORD64)this, "AShooterPlayerState", "TransferTribalObjects", TribeData, bTransferToTribe, bDontIncludePlayers); }
	bool IsTribeOwner(unsigned int CheckPlayerDataID) { return NativeCall<bool, unsigned int>((DWORD64)this, "AShooterPlayerState", "IsTribeOwner", CheckPlayerDataID); }
	bool IsTribeAdmin() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerState", "IsTribeAdmin"); }
	void ServerRequestDinoOrderGroups_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerRequestDinoOrderGroups_Implementation"); }
	void ClientRefreshDinoOrderGroup_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ClientRefreshDinoOrderGroup_Implementation"); }
	bool AllowDinoOrderByGroup(APrimalDinoCharacter* orderDino) { return NativeCall<bool, APrimalDinoCharacter *>((DWORD64)this, "AShooterPlayerState", "AllowDinoOrderByGroup", orderDino); }
	void ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation(int groupIndex, TSubclassOf<APrimalDinoCharacter> DinoClass, bool bAdd) { NativeCall<void, int, TSubclassOf<APrimalDinoCharacter>, bool>((DWORD64)this, "AShooterPlayerState", "ServerDinoOrderGroup_AddOrRemoveDinoClass_Implementation", groupIndex, DinoClass, bAdd); }
	void ServerSetDinoGroupName_Implementation(int groupIndex, FString* GroupName) { NativeCall<void, int, FString *>((DWORD64)this, "AShooterPlayerState", "ServerSetDinoGroupName_Implementation", groupIndex, GroupName); }
	FString* GetDinoOrderGroupName(FString* result, int groupIndex) { return NativeCall<FString *, FString *, int>((DWORD64)this, "AShooterPlayerState", "GetDinoOrderGroupName", result, groupIndex); }
	bool IsDinoInOrderGroup(int groupIndex, APrimalDinoCharacter* dinoChar) { return NativeCall<bool, int, APrimalDinoCharacter *>((DWORD64)this, "AShooterPlayerState", "IsDinoInOrderGroup", groupIndex, dinoChar); }
	bool IsDinoClassInOrderGroup(int groupIndex, TSubclassOf<APrimalDinoCharacter> dinoClass) { return NativeCall<bool, int, TSubclassOf<APrimalDinoCharacter>>((DWORD64)this, "AShooterPlayerState", "IsDinoClassInOrderGroup", groupIndex, dinoClass); }
	void ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation(int groupIndex, APrimalDinoCharacter* DinoCharacter, bool bAdd) { NativeCall<void, int, APrimalDinoCharacter *, bool>((DWORD64)this, "AShooterPlayerState", "ServerDinoOrderGroup_AddOrRemoveDinoCharacter_Implementation", groupIndex, DinoCharacter, bAdd); }
	void ServerDinoOrderGroup_Clear_Implementation(int groupIndex, bool bClearClasses, bool bClearChars) { NativeCall<void, int, bool, bool>((DWORD64)this, "AShooterPlayerState", "ServerDinoOrderGroup_Clear_Implementation", groupIndex, bClearClasses, bClearChars); }
	void ServerDinoOrderGroup_RemoveEntryByIndex_Implementation(int groupIndex, bool bIsClass, int entryIndex) { NativeCall<void, int, bool, int>((DWORD64)this, "AShooterPlayerState", "ServerDinoOrderGroup_RemoveEntryByIndex_Implementation", groupIndex, bIsClass, entryIndex); }
	void ServerSetSelectedDinoOrderGroup_Implementation(int newGroup) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerSetSelectedDinoOrderGroup_Implementation", newGroup); }
	void ServerRequestRenameTribe_Implementation(FString* TribeName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "ServerRequestRenameTribe_Implementation", TribeName); }
	void ServerRequestSetTribeGovernment_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerRequestSetTribeGovernment_Implementation"); }
	void ServerRequestCreateNewTribe_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerRequestCreateNewTribe_Implementation"); }
	void ServerRequestLeaveTribe_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerRequestLeaveTribe_Implementation"); }
	void ServerRequestRemovePlayerIndexFromMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestRemovePlayerIndexFromMyTribe_Implementation", PlayerIndexInTribe); }
	void ServerRequestPromotePlayerInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestPromotePlayerInMyTribe_Implementation", PlayerIndexInTribe); }
	void ServerRequestDemotePlayerInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestDemotePlayerInMyTribe_Implementation", PlayerIndexInTribe); }
	void InvitedRankGroupPlayerIntoTribe(AShooterPlayerState* OtherPlayer) { NativeCall<void, AShooterPlayerState *>((DWORD64)this, "AShooterPlayerState", "InvitedRankGroupPlayerIntoTribe", OtherPlayer); }
	void ServerRequestSetTribeMemberGroupRank_Implementation(int PlayerIndexInTribe, int RankGroupIndex) { NativeCall<void, int, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestSetTribeMemberGroupRank_Implementation", PlayerIndexInTribe, RankGroupIndex); }
	void ServerTribeRequestAddRankGroup_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerTribeRequestAddRankGroup_Implementation"); }
	void ServerTribeRequestRemoveRankGroup_Implementation(int RankGroupIndex) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerTribeRequestRemoveRankGroup_Implementation", RankGroupIndex); }
	void ServerTribeRequestApplyRankGroupSettings_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerTribeRequestApplyRankGroupSettings_Implementation"); }
	void ServerRequestTransferOwnershipInMyTribe_Implementation(int PlayerIndexInTribe) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestTransferOwnershipInMyTribe_Implementation", PlayerIndexInTribe); }
	FString* GetPlayerName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterPlayerState", "GetPlayerName", result); }
	void ServerRequestMySpawnPoints_Implementation(int IgnoreBedID) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestMySpawnPoints_Implementation", IgnoreBedID); }
	void ServerRequestCreateNewPlayer_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerRequestCreateNewPlayer_Implementation"); }
	void RequestCreateNewPlayerWithArkData(UPrimalPlayerData* PlayerArkData) { NativeCall<void, UPrimalPlayerData *>((DWORD64)this, "AShooterPlayerState", "RequestCreateNewPlayerWithArkData", PlayerArkData); }
	void ServerRequestApplyEngramPoints_Implementation(TSubclassOf<UPrimalItem> forItemEntry) { NativeCall<void, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterPlayerState", "ServerRequestApplyEngramPoints_Implementation", forItemEntry); }
	void ServerUnlockEngram(TSubclassOf<UPrimalItem> forItemEntry, bool bNotifyPlayerHUD) { NativeCall<void, TSubclassOf<UPrimalItem>, bool>((DWORD64)this, "AShooterPlayerState", "ServerUnlockEngram", forItemEntry, bNotifyPlayerHUD); }
	void AddEngramBlueprintToPlayerInventory(UPrimalInventoryComponent* invComp, TSubclassOf<UPrimalItem> engramItemBlueprint) { NativeCall<void, UPrimalInventoryComponent *, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterPlayerState", "AddEngramBlueprintToPlayerInventory", invComp, engramItemBlueprint); }
	UObject* GetObjectW() { return NativeCall<UObject *>((DWORD64)this, "AShooterPlayerState", "GetObjectW"); }
	bool HasEngram(TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterPlayerState", "HasEngram", ItemClass); }
	void NotifyPlayerJoinedTribe_Implementation(FString* ThePlayerName, FString* TribeName) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerJoinedTribe_Implementation", ThePlayerName, TribeName); }
	void NotifyPlayerLeftTribe_Implementation(FString* ThePlayerName, FString* TribeName) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerLeftTribe_Implementation", ThePlayerName, TribeName); }
	void NotifyPlayerJoined_Implementation(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerJoined_Implementation", ThePlayerName); }
	void NotifyTribememberJoined_Implementation(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyTribememberJoined_Implementation", ThePlayerName); }
	void NotifyPlayerLeft_Implementation(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerLeft_Implementation", ThePlayerName); }
	void NotifyTribememberLeft_Implementation(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyTribememberLeft_Implementation", ThePlayerName); }
	void ServerSetDefaultItemSlotClass_Implementation(int slotNum, TSubclassOf<UPrimalItem> ItemClass, bool bIsEngram) { NativeCall<void, int, TSubclassOf<UPrimalItem>, bool>((DWORD64)this, "AShooterPlayerState", "ServerSetDefaultItemSlotClass_Implementation", slotNum, ItemClass, bIsEngram); }
	void ClientNotifyLevelUpAvailable_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ClientNotifyLevelUpAvailable_Implementation"); }
	void SetTribeTamingDinoSettings(APrimalDinoCharacter* aDinoChar) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterPlayerState", "SetTribeTamingDinoSettings", aDinoChar); }
	void SendTribeInviteData_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "SendTribeInviteData_Implementation"); }
	void DoRespec() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "DoRespec"); }
	FString* GetUniqueIdString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterPlayerState", "GetUniqueIdString", result); }
	bool IsInTribeWar(int EnemyTeam) { return NativeCall<bool, int>((DWORD64)this, "AShooterPlayerState", "IsInTribeWar", EnemyTeam); }
	void ServerDeclareTribeWar_Implementation(int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime) { NativeCall<void, int, int, int, float, float>((DWORD64)this, "AShooterPlayerState", "ServerDeclareTribeWar_Implementation", EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime); }
	void ServerAcceptTribeWar_Implementation(int EnemyTeamID) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerAcceptTribeWar_Implementation", EnemyTeamID); }
	void ServerRejectTribeWar_Implementation(int EnemyTeamID) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerRejectTribeWar_Implementation", EnemyTeamID); }
	FTribeWar* GetTribeWar(FTribeWar* result, int EnemyTeam) { return NativeCall<FTribeWar *, FTribeWar *, int>((DWORD64)this, "AShooterPlayerState", "GetTribeWar", result, EnemyTeam); }
	void ServerRequestRemoveAllianceMember_Implementation(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>((DWORD64)this, "AShooterPlayerState", "ServerRequestRemoveAllianceMember_Implementation", AllianceID, MemberID); }
	void ServerRequestPromoteAllianceMember_Implementation(unsigned int AllianceID, unsigned int MemberID) { NativeCall<void, unsigned int, unsigned int>((DWORD64)this, "AShooterPlayerState", "ServerRequestPromoteAllianceMember_Implementation", AllianceID, MemberID); }
	void ServerTribeRequestNewAlliance_Implementation(FString* AllianceName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "ServerTribeRequestNewAlliance_Implementation", AllianceName); }
	void ServerRequestLeaveAlliance_Implementation(unsigned int AllianceID) { NativeCall<void, unsigned int>((DWORD64)this, "AShooterPlayerState", "ServerRequestLeaveAlliance_Implementation", AllianceID); }
	void AcceptJoinAlliance() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "AcceptJoinAlliance"); }
	void ServerRequestSpawnPointsForDownloadedCharacters_Implementation(unsigned __int64 PlayerDataID, int IgnoreBedID) { NativeCall<void, unsigned __int64, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestSpawnPointsForDownloadedCharacters_Implementation", PlayerDataID, IgnoreBedID); }
	void StaticRegisterNativesAShooterPlayerState() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "StaticRegisterNativesAShooterPlayerState"); }
	static UField* GetPrivateStaticClass() { return NativeCall<UField *>(nullptr, "AShooterPlayerState", "GetPrivateStaticClass"); }
	void ClientGetServerOptions() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ClientGetServerOptions"); }
	void ClientRefreshDinoOrderGroup() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ClientRefreshDinoOrderGroup"); }
	void NotifyPlayerJoined(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerJoined", ThePlayerName); }
	void NotifyPlayerJoinedTribe(FString* ThePlayerName, FString* TribeName) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerJoinedTribe", ThePlayerName, TribeName); }
	void NotifyPlayerLeft(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerLeft", ThePlayerName); }
	void NotifyPlayerLeftTribe(FString* ThePlayerName, FString* TribeName) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyPlayerLeftTribe", ThePlayerName, TribeName); }
	void NotifyTribememberJoined(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyTribememberJoined", ThePlayerName); }
	void NotifyTribememberLeft(FString* ThePlayerName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "NotifyTribememberLeft", ThePlayerName); }
	void SendTribeInviteData() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "SendTribeInviteData"); }
	void ServerAcceptTribeWar(int EnemyTeamID) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerState", "ServerAcceptTribeWar", EnemyTeamID); }
	void ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int groupIndex, APrimalDinoCharacter* DinoCharacter, bool bAdd) { NativeCall<void, int, APrimalDinoCharacter *, bool>((DWORD64)this, "AShooterPlayerState", "ServerDinoOrderGroup_AddOrRemoveDinoCharacter", groupIndex, DinoCharacter, bAdd); }
	void ServerDinoOrderGroup_RemoveEntryByIndex(int groupIndex, bool bIsClass, int entryIndex) { NativeCall<void, int, bool, int>((DWORD64)this, "AShooterPlayerState", "ServerDinoOrderGroup_RemoveEntryByIndex", groupIndex, bIsClass, entryIndex); }
	void ServerGetAllPlayerNamesAndLocations() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerGetAllPlayerNamesAndLocations"); }
	void ServerRequestApplyEngramPoints(TSubclassOf<UPrimalItem> forItemEntry) { NativeCall<void, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterPlayerState", "ServerRequestApplyEngramPoints", forItemEntry); }
	void ServerRequestCreateNewPlayer() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerRequestCreateNewPlayer"); }
	void ServerRequestCreateNewTribe() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerRequestCreateNewTribe"); }
	void ServerRequestRenameTribe(FString* ServerRequestRenameTribe) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "ServerRequestRenameTribe", ServerRequestRenameTribe); }
	void ServerRequestSetTribeMemberGroupRank(int PlayerIndexInTribe, int RankGroupIndex) { NativeCall<void, int, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestSetTribeMemberGroupRank", PlayerIndexInTribe, RankGroupIndex); }
	void ServerRequestSpawnPointsForDownloadedCharacters(unsigned __int64 PlayerDataID, int IgnoreBedID) { NativeCall<void, unsigned __int64, int>((DWORD64)this, "AShooterPlayerState", "ServerRequestSpawnPointsForDownloadedCharacters", PlayerDataID, IgnoreBedID); }
	void ServerSetDefaultItemSlotClass(int slotNum, TSubclassOf<UPrimalItem> ItemClass, bool bIsEngram) { NativeCall<void, int, TSubclassOf<UPrimalItem>, bool>((DWORD64)this, "AShooterPlayerState", "ServerSetDefaultItemSlotClass", slotNum, ItemClass, bIsEngram); }
	void ServerSetDinoGroupName(int groupIndex, FString* GroupName) { NativeCall<void, int, FString *>((DWORD64)this, "AShooterPlayerState", "ServerSetDinoGroupName", groupIndex, GroupName); }
	void ServerTribeRequestApplyRankGroupSettings() { NativeCall<void>((DWORD64)this, "AShooterPlayerState", "ServerTribeRequestApplyRankGroupSettings"); }
	void ServerTribeRequestNewAlliance(FString* AllianceName) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerState", "ServerTribeRequestNewAlliance", AllianceName); }
};

// Controller

struct AController : public AActor
{
	TWeakObjectPtr<APawn> GetOldPawnField() const { return GetNativeField<TWeakObjectPtr<APawn>>(this, "AController", "OldPawn"); }
	ACharacter* GetCharacterField() const { return GetNativeField<ACharacter *>(this, "AController", "Character"); }
	APlayerState* GetPlayerStateField() const { return GetNativeField<APlayerState *>(this, "AController", "PlayerState"); }
	APawn* GetPawnField() const { return GetNativeField<APawn *>(this, "AController", "Pawn"); }
	FRotator GetControlRotationField() const { return GetNativeField<FRotator>(this, "AController", "ControlRotation"); }
	TWeakObjectPtr<AActor> GetStartSpotField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "AController", "StartSpot"); }
	FName GetStateNameField() const { return GetNativeField<FName>(this, "AController", "StateName"); }
	void SetStateNameField(FName newValue) { SetNativeField(this, "AController", "StateName", newValue); }

	// Functions

	bool IsLocalController() { return NativeCall<bool>((DWORD64)this, "AController", "IsLocalController"); }
	void FailedToSpawnPawn() { NativeCall<void>((DWORD64)this, "AController", "FailedToSpawnPawn"); }
	void SetInitialLocationAndRotation(FVector* NewLocation, FRotator* NewRotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "AController", "SetInitialLocationAndRotation", NewLocation, NewRotation); }
	FRotator* GetControlRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "AController", "GetControlRotation", result); }
	void SetControlRotation(FRotator* NewRotation) { NativeCall<void, FRotator *>((DWORD64)this, "AController", "SetControlRotation", NewRotation); }
	void AttachToPawn(APawn* InPawn) { NativeCall<void, APawn *>((DWORD64)this, "AController", "AttachToPawn", InPawn); }
	void DetachFromPawn() { NativeCall<void>((DWORD64)this, "AController", "DetachFromPawn"); }
	AActor* GetViewTarget() { return NativeCall<AActor *>((DWORD64)this, "AController", "GetViewTarget"); }
	void GetPlayerViewPoint(FVector* out_Location, FRotator* out_Rotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "AController", "GetPlayerViewPoint", out_Location, out_Rotation); }
	bool LineOfSightTo() { return NativeCall<bool>((DWORD64)this, "AController", "LineOfSightTo"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "AController", "PostInitializeComponents"); }
	void Possess(APawn* InPawn) { NativeCall<void, APawn *>((DWORD64)this, "AController", "Possess", InPawn); }
	void PawnPendingDestroy(APawn* inPawn) { NativeCall<void, APawn *>((DWORD64)this, "AController", "PawnPendingDestroy", inPawn); }
	void Reset() { NativeCall<void>((DWORD64)this, "AController", "Reset"); }
	void ClientSetLocation_Implementation() { NativeCall<void>((DWORD64)this, "AController", "ClientSetLocation_Implementation"); }
	void ClientSetRotation_Implementation() { NativeCall<void>((DWORD64)this, "AController", "ClientSetRotation_Implementation"); }
	void RemovePawnTickDependency(APawn* InOldPawn) { NativeCall<void, APawn *>((DWORD64)this, "AController", "RemovePawnTickDependency", InOldPawn); }
	void AddPawnTickDependency(APawn* NewPawn) { NativeCall<void, APawn *>((DWORD64)this, "AController", "AddPawnTickDependency", NewPawn); }
	void SetPawn(APawn* InPawn) { NativeCall<void, APawn *>((DWORD64)this, "AController", "SetPawn", InPawn); }
	void OnRep_Pawn() { NativeCall<void>((DWORD64)this, "AController", "OnRep_Pawn"); }
	void OnRep_PlayerState() { NativeCall<void>((DWORD64)this, "AController", "OnRep_PlayerState"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "AController", "Destroyed"); }
	void CleanupPlayerState() { NativeCall<void>((DWORD64)this, "AController", "CleanupPlayerState"); }
	void InstigatedAnyDamage(float Damage, UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) { NativeCall<void, float, UDamageType *, AActor *, AActor *>((DWORD64)this, "AController", "InstigatedAnyDamage", Damage, DamageType, DamagedActor, DamageCauser); }
	void InitPlayerState() { NativeCall<void>((DWORD64)this, "AController", "InitPlayerState"); }
	FRotator* GetDesiredRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "AController", "GetDesiredRotation", result); }
	void GetActorEyesViewPoint(FVector* out_Location, FRotator* out_Rotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "AController", "GetActorEyesViewPoint", out_Location, out_Rotation); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AController", "GetHumanReadableName", result); }
	void ChangeState(FName NewState) { NativeCall<void, FName>((DWORD64)this, "AController", "ChangeState", NewState); }
	FVector* GetNavAgentLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AController", "GetNavAgentLocation", result); }
	void GetMoveGoalReachTest(AActor* MovingActor, FVector* MoveOffset, FVector* GoalOffset, float* GoalRadius, float* GoalHalfHeight) { NativeCall<void, AActor *, FVector *, FVector *, float *, float *>((DWORD64)this, "AController", "GetMoveGoalReachTest", MovingActor, MoveOffset, GoalOffset, GoalRadius, GoalHalfHeight); }
	void UpdateNavigationComponents() { NativeCall<void>((DWORD64)this, "AController", "UpdateNavigationComponents"); }
	static UField* GetPrivateStaticClass() { return NativeCall<UField *>(nullptr, "AController", "GetPrivateStaticClass"); }
	void ReceiveInstigatedAnyDamage(float Damage, UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) { NativeCall<void, float, UDamageType *, AActor *, AActor *>((DWORD64)this, "AController", "ReceiveInstigatedAnyDamage", Damage, DamageType, DamagedActor, DamageCauser); }
};

struct APlayerController : public AController
{
public:
	UPlayer* GetPlayerField() const { return GetNativeField<UPlayer *>(this, "APlayerController", "Player"); }
	APawn* GetAcknowledgedPawnField() const { return GetNativeField<APawn *>(this, "APlayerController", "AcknowledgedPawn"); }
	bool GetbAutoManageActiveCameraTargetField() const { return GetNativeField<bool>(this, "APlayerController", "bAutoManageActiveCameraTarget"); }
	void SetbAutoManageActiveCameraTargetField(bool newValue) { SetNativeField(this, "APlayerController", "bAutoManageActiveCameraTarget", newValue); }
	FRotator GetTargetViewRotationField() const { return GetNativeField<FRotator>(this, "APlayerController", "TargetViewRotation"); }
	void SetTargetViewRotationField(FRotator newValue) { SetNativeField(this, "APlayerController", "TargetViewRotation", newValue); }
	FRotator GetBlendedTargetViewRotationField() const { return GetNativeField<FRotator>(this, "APlayerController", "BlendedTargetViewRotation"); }
	void SetBlendedTargetViewRotationField(FRotator newValue) { SetNativeField(this, "APlayerController", "BlendedTargetViewRotation", newValue); }
	float GetLastSpectatorStateSynchTimeField() const { return GetNativeField<float>(this, "APlayerController", "LastSpectatorStateSynchTime"); }
	void SetLastSpectatorStateSynchTimeField(float newValue) { SetNativeField(this, "APlayerController", "LastSpectatorStateSynchTime", newValue); }
	int GetClientCapField() const { return GetNativeField<int>(this, "APlayerController", "ClientCap"); }
	void SetClientCapField(int newValue) { SetNativeField(this, "APlayerController", "ClientCap", newValue); }
	long double GetServerLastReceivedSpectatorLocTimeField() const { return GetNativeField<long double>(this, "APlayerController", "ServerLastReceivedSpectatorLocTime"); }
	void SetServerLastReceivedSpectatorLocTimeField(long double newValue) { SetNativeField(this, "APlayerController", "ServerLastReceivedSpectatorLocTime", newValue); }
	UCheatManager* GetCheatManagerField() const { return GetNativeField<UCheatManager *>(this, "APlayerController", "CheatManager"); }
	TSubclassOf<UCheatManager> GetCheatClassField() const { return GetNativeField<TSubclassOf<UCheatManager>>(this, "APlayerController", "CheatClass"); }
	void SetCheatClassField(TSubclassOf<UCheatManager> newValue) { SetNativeField(this, "APlayerController", "CheatClass", newValue); }
	TArray<FName> GetPendingMapChangeLevelNamesField() const { return GetNativeField<TArray<FName>>(this, "APlayerController", "PendingMapChangeLevelNames"); }
	char GetNetPlayerIndexField() const { return GetNativeField<char>(this, "APlayerController", "NetPlayerIndex"); }
	//FPlayerMuteList GetMuteListField() const { return GetNativeField<FPlayerMuteList>(this, "APlayerController", "MuteList"); }
	//void SetMuteListField(FPlayerMuteList newValue) { SetNativeField(this, "APlayerController", "MuteList", newValue); }
	//UNetConnection * GetNetConnectionField() const { return GetNativeField<UNetConnection *>(this, "APlayerController", "NetConnection"); }
	FRotator GetRotationInputField() const { return GetNativeField<FRotator>(this, "APlayerController", "RotationInput"); }
	void SetRotationInputField(FRotator newValue) { SetNativeField(this, "APlayerController", "RotationInput", newValue); }
	float GetInputYawScaleField() const { return GetNativeField<float>(this, "APlayerController", "InputYawScale"); }
	void SetInputYawScaleField(float newValue) { SetNativeField(this, "APlayerController", "InputYawScale", newValue); }
	float GetInputPitchScaleField() const { return GetNativeField<float>(this, "APlayerController", "InputPitchScale"); }
	void SetInputPitchScaleField(float newValue) { SetNativeField(this, "APlayerController", "InputPitchScale", newValue); }
	float GetInputRollScaleField() const { return GetNativeField<float>(this, "APlayerController", "InputRollScale"); }
	void SetInputRollScaleField(float newValue) { SetNativeField(this, "APlayerController", "InputRollScale", newValue); }
	bool GetbLockedInputUIField() const { return GetNativeField<bool>(this, "APlayerController", "bLockedInputUI"); }
	void SetbLockedInputUIField(bool newValue) { SetNativeField(this, "APlayerController", "bLockedInputUI", newValue); }
	FVector GetAudioListenerLocationOverrideField() const { return GetNativeField<FVector>(this, "APlayerController", "AudioListenerLocationOverride"); }
	void SetAudioListenerLocationOverrideField(FVector newValue) { SetNativeField(this, "APlayerController", "AudioListenerLocationOverride", newValue); }
	FRotator GetAudioListenerRotationOverrideField() const { return GetNativeField<FRotator>(this, "APlayerController", "AudioListenerRotationOverride"); }
	void SetAudioListenerRotationOverrideField(FRotator newValue) { SetNativeField(this, "APlayerController", "AudioListenerRotationOverride", newValue); }
	//ASpectatorPawn * GetSpectatorPawnField() const { return GetNativeField<ASpectatorPawn *>(this, "APlayerController", "SpectatorPawn"); }
	FVector GetSpawnLocationField() const { return GetNativeField<FVector>(this, "APlayerController", "SpawnLocation"); }
	void SetSpawnLocationField(FVector newValue) { SetNativeField(this, "APlayerController", "SpawnLocation", newValue); }
	float GetLastRetryPlayerTimeField() const { return GetNativeField<float>(this, "APlayerController", "LastRetryPlayerTime"); }
	void SetLastRetryPlayerTimeField(float newValue) { SetNativeField(this, "APlayerController", "LastRetryPlayerTime", newValue); }
	unsigned __int16 GetSeamlessTravelCountField() const { return GetNativeField<unsigned __int16>(this, "APlayerController", "SeamlessTravelCount"); }
	void SetSeamlessTravelCountField(unsigned __int16 newValue) { SetNativeField(this, "APlayerController", "SeamlessTravelCount", newValue); }
	unsigned __int16 GetLastCompletedSeamlessTravelCountField() const { return GetNativeField<unsigned __int16>(this, "APlayerController", "LastCompletedSeamlessTravelCount"); }
	void SetLastCompletedSeamlessTravelCountField(unsigned __int16 newValue) { SetNativeField(this, "APlayerController", "LastCompletedSeamlessTravelCount", newValue); }
	FVector GetLastReplicatedFocalLocField() const { return GetNativeField<FVector>(this, "APlayerController", "LastReplicatedFocalLoc"); }
	void SetLastReplicatedFocalLocField(FVector newValue) { SetNativeField(this, "APlayerController", "LastReplicatedFocalLoc", newValue); }

	// Functions

	//AActor * GetAimedUseActor(UActorComponent ** UseComponent, int * hitBodyIndex) { return NativeCall<AActor *, UActorComponent **, int *>((DWORD64)this, "APlayerController", "GetAimedUseActor", UseComponent, hitBodyIndex); }
	AActor* BaseGetPlayerCharacter() { return NativeCall<AActor *>((DWORD64)this, "APlayerController", "BaseGetPlayerCharacter"); }
	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "APlayerController", "StaticClass"); }
	UPlayer* GetNetOwningPlayer() { return NativeCall<UPlayer *>((DWORD64)this, "APlayerController", "GetNetOwningPlayer"); }
	//UNetConnection * GetNetConnection() { return NativeCall<UNetConnection *>((DWORD64)this, "APlayerController", "GetNetConnection"); }
	bool IsLocalController() { return NativeCall<bool>((DWORD64)this, "APlayerController", "IsLocalController"); }
	bool ServerPause_Validate() { return NativeCall<bool>((DWORD64)this, "APlayerController", "ServerPause_Validate"); }
	void FailedToSpawnPawn() { NativeCall<void>((DWORD64)this, "APlayerController", "FailedToSpawnPawn"); }
	void ClientFlushLevelStreaming_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientFlushLevelStreaming_Implementation"); }
	void ServerUpdateLevelVisibility_Implementation(FName PackageName, bool bIsVisible) { NativeCall<void, FName, bool>((DWORD64)this, "APlayerController", "ServerUpdateLevelVisibility_Implementation", PackageName, bIsVisible); }
	bool ServerUpdateLevelVisibility_Validate(FName PackageName, bool bIsVisible) { return NativeCall<bool, FName, bool>((DWORD64)this, "APlayerController", "ServerUpdateLevelVisibility_Validate", PackageName, bIsVisible); }
	FString* ConsoleCommand(FString* result, FString* Cmd, bool bWriteToLog) { return NativeCall<FString *, FString *, FString *, bool>((DWORD64)this, "APlayerController", "ConsoleCommand", result, Cmd, bWriteToLog); }
	void CleanUpAudioComponents() { NativeCall<void>((DWORD64)this, "APlayerController", "CleanUpAudioComponents"); }
	AActor* GetViewTarget() { return NativeCall<AActor *>((DWORD64)this, "APlayerController", "GetViewTarget"); }
	void SetViewTarget() { NativeCall<void>((DWORD64)this, "APlayerController", "SetViewTarget"); }
	void AutoManageActiveCameraTarget(AActor* SuggestedTarget) { NativeCall<void, AActor *>((DWORD64)this, "APlayerController", "AutoManageActiveCameraTarget", SuggestedTarget); }
	void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName) { NativeCall<void, FName>((DWORD64)this, "APlayerController", "ServerNotifyLoadedWorld_Implementation", WorldPackageName); }
	bool HasClientLoadedCurrentWorld() { return NativeCall<bool>((DWORD64)this, "APlayerController", "HasClientLoadedCurrentWorld"); }
	void ForceSingleNetUpdateFor(AActor* Target) { NativeCall<void, AActor *>((DWORD64)this, "APlayerController", "ForceSingleNetUpdateFor", Target); }
	void SmoothTargetViewRotation(APawn* TargetPawn, float DeltaSeconds) { NativeCall<void, APawn *, float>((DWORD64)this, "APlayerController", "SmoothTargetViewRotation", TargetPawn, DeltaSeconds); }
	void InitInputSystem() { NativeCall<void>((DWORD64)this, "APlayerController", "InitInputSystem"); }
	void SafeRetryClientRestart() { NativeCall<void>((DWORD64)this, "APlayerController", "SafeRetryClientRestart"); }
	void ClientRetryClientRestart_Implementation(APawn* NewPawn) { NativeCall<void, APawn *>((DWORD64)this, "APlayerController", "ClientRetryClientRestart_Implementation", NewPawn); }
	void ClientRestart_Implementation(APawn* NewPawn) { NativeCall<void, APawn *>((DWORD64)this, "APlayerController", "ClientRestart_Implementation", NewPawn); }
	void Possess(APawn* PawnToPossess) { NativeCall<void, APawn *>((DWORD64)this, "APlayerController", "Possess", PawnToPossess); }
	void AcknowledgePossession(APawn* P) { NativeCall<void, APawn *>((DWORD64)this, "APlayerController", "AcknowledgePossession", P); }
	void ReceivedPlayer() { NativeCall<void>((DWORD64)this, "APlayerController", "ReceivedPlayer"); }
	FVector* GetFocalLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APlayerController", "GetFocalLocation", result); }
	void PostLoad() { NativeCall<void>((DWORD64)this, "APlayerController", "PostLoad"); }
	void GetActorEyesViewPoint(FVector* out_Location, FRotator* out_Rotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "APlayerController", "GetActorEyesViewPoint", out_Location, out_Rotation); }
	void GetPlayerViewPoint(FVector* out_Location, FRotator* out_Rotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "APlayerController", "GetPlayerViewPoint", out_Location, out_Rotation); }
	void UpdateRotation(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "APlayerController", "UpdateRotation", DeltaTime); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "APlayerController", "PostInitializeComponents"); }
	void ServerShortTimeout_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerShortTimeout_Implementation"); }
	void AddCheats(bool bForce) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "AddCheats", bForce); }
	void EnableCheats() { NativeCall<void>((DWORD64)this, "APlayerController", "EnableCheats"); }
	void SpawnDefaultHUD() { NativeCall<void>((DWORD64)this, "APlayerController", "SpawnDefaultHUD"); }
	void CreateTouchInterface() { NativeCall<void>((DWORD64)this, "APlayerController", "CreateTouchInterface"); }
	void CleanupGameViewport() { NativeCall<void>((DWORD64)this, "APlayerController", "CleanupGameViewport"); }
	void GetViewportSize(int* SizeX, int* SizeY) { NativeCall<void, int *, int *>((DWORD64)this, "APlayerController", "GetViewportSize", SizeX, SizeY); }
	void Reset() { NativeCall<void>((DWORD64)this, "APlayerController", "Reset"); }
	void ClientReset_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientReset_Implementation"); }
	void ClientGotoState_Implementation(FName NewState) { NativeCall<void, FName>((DWORD64)this, "APlayerController", "ClientGotoState_Implementation", NewState); }
	bool IsFrozen() { return NativeCall<bool>((DWORD64)this, "APlayerController", "IsFrozen"); }
	void ServerAcknowledgePossession_Implementation(APawn* P) { NativeCall<void, APawn *>((DWORD64)this, "APlayerController", "ServerAcknowledgePossession_Implementation", P); }
	bool ServerAcknowledgePossession_Validate(APawn* P) { return NativeCall<bool, APawn *>((DWORD64)this, "APlayerController", "ServerAcknowledgePossession_Validate", P); }
	void UnPossess() { NativeCall<void>((DWORD64)this, "APlayerController", "UnPossess"); }
	void CleanupPlayerState() { NativeCall<void>((DWORD64)this, "APlayerController", "CleanupPlayerState"); }
	//void ClientPlaySound_Implementation(USoundBase * Sound, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundBase *, float, float>((DWORD64)this, "APlayerController", "ClientPlaySound_Implementation", Sound, VolumeMultiplier, PitchMultiplier); }
	void ClientPlaySoundAtLocation_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientPlaySoundAtLocation_Implementation"); }
	void ClientMessage_Implementation(FString* S, FName Type, float MsgLifeTime) { NativeCall<void, FString *, FName, float>((DWORD64)this, "APlayerController", "ClientMessage_Implementation", S, Type, MsgLifeTime); }
	void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, FString* S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState *, FString *, FName, float>((DWORD64)this, "APlayerController", "ClientTeamMessage_Implementation", SenderPlayerState, S, Type, MsgLifeTime); }
	void ServerToggleAILogging_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerToggleAILogging_Implementation"); }
	void PawnLeavingGame() { NativeCall<void>((DWORD64)this, "APlayerController", "PawnLeavingGame"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "APlayerController", "Destroyed"); }
	void FOV(float F) { NativeCall<void, float>((DWORD64)this, "APlayerController", "FOV", F); }
	void Camera(FName NewMode) { NativeCall<void, FName>((DWORD64)this, "APlayerController", "Camera", NewMode); }
	void ServerCamera_Implementation(FName NewMode) { NativeCall<void, FName>((DWORD64)this, "APlayerController", "ServerCamera_Implementation", NewMode); }
	bool ServerCamera_Validate(FName NewMode) { return NativeCall<bool, FName>((DWORD64)this, "APlayerController", "ServerCamera_Validate", NewMode); }
	void SetCameraMode(FName NewCamMode) { NativeCall<void, FName>((DWORD64)this, "APlayerController", "SetCameraMode", NewCamMode); }
	void ResetCameraMode() { NativeCall<void>((DWORD64)this, "APlayerController", "ResetCameraMode"); }
	void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio) { NativeCall<void, bool, FColor, FVector2D, float, bool>((DWORD64)this, "APlayerController", "ClientSetCameraFade_Implementation", bEnableFading, FadeColor, FadeAlpha, FadeTime, bFadeAudio); }
	void SendClientAdjustment() { NativeCall<void>((DWORD64)this, "APlayerController", "SendClientAdjustment"); }
	void ClientCapBandwidth_Implementation(int Cap) { NativeCall<void, int>((DWORD64)this, "APlayerController", "ClientCapBandwidth_Implementation", Cap); }
	void SetSpawnLocation(FVector* NewLocation) { NativeCall<void, FVector *>((DWORD64)this, "APlayerController", "SetSpawnLocation", NewLocation); }
	void SetInitialLocationAndRotation(FVector* NewLocation, FRotator* NewRotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "APlayerController", "SetInitialLocationAndRotation", NewLocation, NewRotation); }
	void ServerUpdateCamera_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerUpdateCamera_Implementation"); }
	void RestartLevel() { NativeCall<void>((DWORD64)this, "APlayerController", "RestartLevel"); }
	void LocalTravel(FString* FURL) { NativeCall<void, FString *>((DWORD64)this, "APlayerController", "LocalTravel", FURL); }
	void ClientReturnToMainMenu_Implementation(FString* ReturnReason) { NativeCall<void, FString *>((DWORD64)this, "APlayerController", "ClientReturnToMainMenu_Implementation", ReturnReason); }
	void Pause() { NativeCall<void>((DWORD64)this, "APlayerController", "Pause"); }
	void ServerPause_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerPause_Implementation"); }
	void SetName(FString* S) { NativeCall<void, FString *>((DWORD64)this, "APlayerController", "SetName", S); }
	void ServerChangeName_Implementation(FString* S) { NativeCall<void, FString *>((DWORD64)this, "APlayerController", "ServerChangeName_Implementation", S); }
	bool ServerChangeName_Validate(FString* S) { return NativeCall<bool, FString *>((DWORD64)this, "APlayerController", "ServerChangeName_Validate", S); }
	void SwitchLevel(FString* FURL) { NativeCall<void, FString *>((DWORD64)this, "APlayerController", "SwitchLevel", FURL); }
	void NotifyLoadedWorld(FName WorldPackageName, bool bFinalDest) { NativeCall<void, FName, bool>((DWORD64)this, "APlayerController", "NotifyLoadedWorld", WorldPackageName, bFinalDest); }
	void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) { NativeCall<void, AActor *, bool>((DWORD64)this, "APlayerController", "GameHasEnded", EndGameFocus, bIsWinner); }
	void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner) { NativeCall<void, AActor *, bool>((DWORD64)this, "APlayerController", "ClientGameEnded_Implementation", EndGameFocus, bIsWinner); }
	//bool GetHitResultUnderCursor(ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ECollisionChannel, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultUnderCursor", TraceChannel, bTraceComplex, HitResult); }
	//bool GetHitResultUnderCursorByChannel(ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETraceTypeQuery, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultUnderCursorByChannel", TraceChannel, bTraceComplex, HitResult); }
	//bool GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<enum EObjectTypeQuery>> * ObjectTypes, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, TArray<TEnumAsByte<enum EObjectTypeQuery>> *, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultUnderCursorForObjects", ObjectTypes, bTraceComplex, HitResult); }
	//bool GetHitResultUnderFinger(ETouchIndex::Type FingerIndex, ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETouchIndex::Type, ECollisionChannel, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultUnderFinger", FingerIndex, TraceChannel, bTraceComplex, HitResult); }
	//bool GetHitResultUnderFingerByChannel(ETouchIndex::Type FingerIndex, ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETouchIndex::Type, ETraceTypeQuery, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultUnderFingerByChannel", FingerIndex, TraceChannel, bTraceComplex, HitResult); }
	//bool GetHitResultUnderFingerForObjects(ETouchIndex::Type FingerIndex, TArray<TEnumAsByte<enum EObjectTypeQuery>> * ObjectTypes, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETouchIndex::Type, TArray<TEnumAsByte<enum EObjectTypeQuery>> *, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultUnderFingerForObjects", FingerIndex, ObjectTypes, bTraceComplex, HitResult); }
	bool DeprojectMousePositionToWorld(FVector* WorldLocation, FVector* WorldDirection) { return NativeCall<bool, FVector *, FVector *>((DWORD64)this, "APlayerController", "DeprojectMousePositionToWorld", WorldLocation, WorldDirection); }
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector* WorldLocation, FVector* WorldDirection) { return NativeCall<bool, float, float, FVector *, FVector *>((DWORD64)this, "APlayerController", "DeprojectScreenPositionToWorld", ScreenX, ScreenY, WorldLocation, WorldDirection); }
	bool ProjectWorldLocationToScreen() { return NativeCall<bool>((DWORD64)this, "APlayerController", "ProjectWorldLocationToScreen"); }
	//bool GetHitResultAtScreenPosition(FVector2D ScreenPosition, ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, FVector2D, ECollisionChannel, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultAtScreenPosition", ScreenPosition, TraceChannel, bTraceComplex, HitResult); }
	//bool GetHitResultAtScreenPosition(FVector2D ScreenPosition, ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, FVector2D, ETraceTypeQuery, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultAtScreenPosition", ScreenPosition, TraceChannel, bTraceComplex, HitResult); }
	//bool GetHitResultAtScreenPosition(FVector2D ScreenPosition, TArray<TEnumAsByte<enum EObjectTypeQuery>> * ObjectTypes, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, FVector2D, TArray<TEnumAsByte<enum EObjectTypeQuery>> *, bool, FHitResult *>((DWORD64)this, "APlayerController", "GetHitResultAtScreenPosition", ScreenPosition, ObjectTypes, bTraceComplex, HitResult); }
	void PlayerTick(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "APlayerController", "PlayerTick", DeltaTime); }
	void FlushPressedKeys() { NativeCall<void>((DWORD64)this, "APlayerController", "FlushPressedKeys"); }
	bool InputKey() { return NativeCall<bool>((DWORD64)this, "APlayerController", "InputKey"); }
	bool InputAxis() { return NativeCall<bool>((DWORD64)this, "APlayerController", "InputAxis"); }
	bool InputMotion(FVector* Tilt, FVector* RotationRate, FVector* Gravity, FVector* Acceleration) { return NativeCall<bool, FVector *, FVector *, FVector *, FVector *>((DWORD64)this, "APlayerController", "InputMotion", Tilt, RotationRate, Gravity, Acceleration); }
	bool ShouldShowMouseCursor() { return NativeCall<bool>((DWORD64)this, "APlayerController", "ShouldShowMouseCursor"); }
	void SetupInputComponent() { NativeCall<void>((DWORD64)this, "APlayerController", "SetupInputComponent"); }
	void ProcessPlayerInput(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>((DWORD64)this, "APlayerController", "ProcessPlayerInput", DeltaTime, bGamePaused); }
	void PostProcessInput(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>((DWORD64)this, "APlayerController", "PostProcessInput", DeltaTime, bGamePaused); }
	void ResetIgnoreInputFlags() { NativeCall<void>((DWORD64)this, "APlayerController", "ResetIgnoreInputFlags"); }
	void SetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool>((DWORD64)this, "APlayerController", "SetCinematicMode", bInCinematicMode, bAffectsMovement, bAffectsTurning); }
	void SetIgnoreMoveInput(bool bNewMoveInput) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "SetIgnoreMoveInput", bNewMoveInput); }
	bool IsMoveInputIgnored() { return NativeCall<bool>((DWORD64)this, "APlayerController", "IsMoveInputIgnored"); }
	void SetIgnoreLookInput(bool bNewLookInput) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "SetIgnoreLookInput", bNewLookInput); }
	bool IsLookInputIgnored() { return NativeCall<bool>((DWORD64)this, "APlayerController", "IsLookInputIgnored"); }
	void ClientSetViewTarget_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientSetViewTarget_Implementation"); }
	void ServerVerifyViewTarget_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerVerifyViewTarget_Implementation"); }
	void SpawnPlayerCameraManager() { NativeCall<void>((DWORD64)this, "APlayerController", "SpawnPlayerCameraManager"); }
	void GetAudioListenerPosition(FVector* OutLocation, FVector* OutFrontDir, FVector* OutRightDir) { NativeCall<void, FVector *, FVector *, FVector *>((DWORD64)this, "APlayerController", "GetAudioListenerPosition", OutLocation, OutFrontDir, OutRightDir); }
	void ServerCheckClientPossession_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerCheckClientPossession_Implementation"); }
	void SafeServerCheckClientPossession() { NativeCall<void>((DWORD64)this, "APlayerController", "SafeServerCheckClientPossession"); }
	void SafeServerUpdateSpectatorState() { NativeCall<void>((DWORD64)this, "APlayerController", "SafeServerUpdateSpectatorState"); }
	void ServerSetSpectatorLocation_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerSetSpectatorLocation_Implementation"); }
	void ServerViewNextPlayer_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerViewNextPlayer_Implementation"); }
	void ServerViewPrevPlayer_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerViewPrevPlayer_Implementation"); }
	APlayerState* GetNextViewablePlayer(int dir) { return NativeCall<APlayerState *, int>((DWORD64)this, "APlayerController", "GetNextViewablePlayer", dir); }
	void ViewAPlayer(int dir) { NativeCall<void, int>((DWORD64)this, "APlayerController", "ViewAPlayer", dir); }
	void ServerViewSelf_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerViewSelf_Implementation"); }
	void StartFire(char FireModeNum) { NativeCall<void, char>((DWORD64)this, "APlayerController", "StartFire", FireModeNum); }
	bool NotifyServerReceivedClientData(APawn* InPawn, float TimeStamp) { return NativeCall<bool, APawn *, float>((DWORD64)this, "APlayerController", "NotifyServerReceivedClientData", InPawn, TimeStamp); }
	void ServerRestartPlayer_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerRestartPlayer_Implementation"); }
	bool CanRestartPlayer() { return NativeCall<bool>((DWORD64)this, "APlayerController", "CanRestartPlayer"); }
	void ClientIgnoreMoveInput_Implementation(bool bIgnore) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "ClientIgnoreMoveInput_Implementation", bIgnore); }
	void ClientIgnoreLookInput_Implementation(bool bIgnore) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "ClientIgnoreLookInput_Implementation", bIgnore); }
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool, bool, bool>((DWORD64)this, "APlayerController", "SetCinematicMode", bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning); }
	void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) { NativeCall<void, bool, bool, bool, bool>((DWORD64)this, "APlayerController", "ClientSetCinematicMode_Implementation", bInCinematicMode, bAffectsMovement, bAffectsTurning, bAffectsHUD); }
	void ClientForceGarbageCollection_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientForceGarbageCollection_Implementation"); }
	void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast) { NativeCall<void, FName, bool, bool>((DWORD64)this, "APlayerController", "ClientPrepareMapChange_Implementation", LevelName, bFirst, bLast); }
	void DelayedPrepareMapChange() { NativeCall<void>((DWORD64)this, "APlayerController", "DelayedPrepareMapChange"); }
	void ClientCommitMapChange_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientCommitMapChange_Implementation"); }
	void ClientCancelPendingMapChange_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientCancelPendingMapChange_Implementation"); }
	void ClientSetBlockOnAsyncLoading_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientSetBlockOnAsyncLoading_Implementation"); }
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor *>* ActorList) { NativeCall<void, bool, TArray<AActor *> *>((DWORD64)this, "APlayerController", "GetSeamlessTravelActorList", bToEntry, ActorList); }
	void SeamlessTravelFrom(APlayerController* OldPC) { NativeCall<void, APlayerController *>((DWORD64)this, "APlayerController", "SeamlessTravelFrom", OldPC); }
	void ClientEnableNetworkVoice_Implementation(bool bEnable) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "ClientEnableNetworkVoice_Implementation", bEnable); }
	void StartTalking() { NativeCall<void>((DWORD64)this, "APlayerController", "StartTalking"); }
	void ToggleSpeaking(bool bSpeaking) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "ToggleSpeaking", bSpeaking); }
	void ClientVoiceHandshakeComplete_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientVoiceHandshakeComplete_Implementation"); }
	void ServerMutePlayer_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerMutePlayer_Implementation"); }
	bool ServerUnmutePlayer_Validate() { return NativeCall<bool>((DWORD64)this, "APlayerController", "ServerUnmutePlayer_Validate"); }
	void ServerUnmutePlayer_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerUnmutePlayer_Implementation"); }
	void ClientMutePlayer_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientMutePlayer_Implementation"); }
	void ClientUnmutePlayer_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientUnmutePlayer_Implementation"); }
	bool IsPlayerMuted(FUniqueNetId* PlayerId) { return NativeCall<bool, FUniqueNetId *>((DWORD64)this, "APlayerController", "IsPlayerMuted", PlayerId); }
	bool ShouldReplicateVoicePacketFrom(FUniqueNetId* Sender, char* PlaybackFlags) { return NativeCall<bool, FUniqueNetId *, char *>((DWORD64)this, "APlayerController", "ShouldReplicateVoicePacketFrom", Sender, PlaybackFlags); }
	void ClientWasKicked_Implementation(FText* KickReason) { NativeCall<void, FText *>((DWORD64)this, "APlayerController", "ClientWasKicked_Implementation", KickReason); }
	bool IsSplitscreenPlayer(int* OutSplitscreenPlayerIndex) { return NativeCall<bool, int *>((DWORD64)this, "APlayerController", "IsSplitscreenPlayer", OutSplitscreenPlayerIndex); }
	void ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups) { NativeCall<void, AActor *, float, bool, int>((DWORD64)this, "APlayerController", "ClientPrestreamTextures_Implementation", ForcedActor, ForceDuration, bEnableStreaming, CinematicTextureGroups); }
	void PlayDynamicForceFeedback() { NativeCall<void>((DWORD64)this, "APlayerController", "PlayDynamicForceFeedback"); }
	void ProcessForceFeedback(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>((DWORD64)this, "APlayerController", "ProcessForceFeedback", DeltaTime, bGamePaused); }
	void ClientPlayCameraShake_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientPlayCameraShake_Implementation"); }
	void ClientPlayCameraAnim_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientPlayCameraAnim_Implementation"); }
	void ClientClearCameraLensEffects_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientClearCameraLensEffects_Implementation"); }
	void SetPawn(APawn* InPawn) { NativeCall<void, APawn *>((DWORD64)this, "APlayerController", "SetPawn", InPawn); }
	void SetPlayer(UPlayer* InPlayer) { NativeCall<void, UPlayer *>((DWORD64)this, "APlayerController", "SetPlayer", InPlayer); }
	void TickPlayerInput(const float DeltaSeconds, const bool bGamePaused) { NativeCall<void, const float, const bool>((DWORD64)this, "APlayerController", "TickPlayerInput", DeltaSeconds, bGamePaused); }
	bool IsNetRelevantFor(APlayerController* RealViewer, AActor* Viewer, FVector* SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, FVector *>((DWORD64)this, "APlayerController", "IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	void ClientTravel() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientTravel"); }
	void ClientTravelInternal_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientTravelInternal_Implementation"); }
	bool DefaultCanUnpause() { return NativeCall<bool>((DWORD64)this, "APlayerController", "DefaultCanUnpause"); }
	void StartSpectatingOnly() { NativeCall<void>((DWORD64)this, "APlayerController", "StartSpectatingOnly"); }
	void EndPlayingState() { NativeCall<void>((DWORD64)this, "APlayerController", "EndPlayingState"); }
	void BeginSpectatingState() { NativeCall<void>((DWORD64)this, "APlayerController", "BeginSpectatingState"); }
	void DestroySpectatorPawn() { NativeCall<void>((DWORD64)this, "APlayerController", "DestroySpectatorPawn"); }
	void UpdateStateInputComponents() { NativeCall<void>((DWORD64)this, "APlayerController", "UpdateStateInputComponents"); }
	void ChangeState(FName NewState) { NativeCall<void, FName>((DWORD64)this, "APlayerController", "ChangeState", NewState); }
	void EndSpectatingState() { NativeCall<void>((DWORD64)this, "APlayerController", "EndSpectatingState"); }
	void BeginInactiveState() { NativeCall<void>((DWORD64)this, "APlayerController", "BeginInactiveState"); }
	void AddPitchInput(float Val) { NativeCall<void, float>((DWORD64)this, "APlayerController", "AddPitchInput", Val); }
	void AddYawInput(float Val) { NativeCall<void, float>((DWORD64)this, "APlayerController", "AddYawInput", Val); }
	void AddRollInput(float Val) { NativeCall<void, float>((DWORD64)this, "APlayerController", "AddRollInput", Val); }
	bool IsInputKeyDown() { return NativeCall<bool>((DWORD64)this, "APlayerController", "IsInputKeyDown"); }
	bool WasInputKeyJustPressed() { return NativeCall<bool>((DWORD64)this, "APlayerController", "WasInputKeyJustPressed"); }
	bool WasInputKeyJustReleased() { return NativeCall<bool>((DWORD64)this, "APlayerController", "WasInputKeyJustReleased"); }
	float GetInputAnalogKeyState() { return NativeCall<float>((DWORD64)this, "APlayerController", "GetInputAnalogKeyState"); }
	FVector* GetInputVectorKeyState() { return NativeCall<FVector *>((DWORD64)this, "APlayerController", "GetInputVectorKeyState"); }
	void GetInputMotionState(FVector* Tilt, FVector* RotationRate, FVector* Gravity, FVector* Acceleration) { NativeCall<void, FVector *, FVector *, FVector *, FVector *>((DWORD64)this, "APlayerController", "GetInputMotionState", Tilt, RotationRate, Gravity, Acceleration); }
	float GetInputKeyTimeDown() { return NativeCall<float>((DWORD64)this, "APlayerController", "GetInputKeyTimeDown"); }
	bool GetMousePosition(float* LocationX, float* LocationY) { return NativeCall<bool, float *, float *>((DWORD64)this, "APlayerController", "GetMousePosition", LocationX, LocationY); }
	void GetInputMouseDelta(float* DeltaX, float* DeltaY) { NativeCall<void, float *, float *>((DWORD64)this, "APlayerController", "GetInputMouseDelta", DeltaX, DeltaY); }
	void EnableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController *>((DWORD64)this, "APlayerController", "EnableInput", PlayerController); }
	void DisableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController *>((DWORD64)this, "APlayerController", "DisableInput", PlayerController); }
	void SetVirtualJoystickVisibility(bool bVisible) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "SetVirtualJoystickVisibility", bVisible); }
	void UpdateCameraManager(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APlayerController", "UpdateCameraManager", DeltaSeconds); }
	void ClientRepObjRef_Implementation(UObject* Object) { NativeCall<void, UObject *>((DWORD64)this, "APlayerController", "ClientRepObjRef_Implementation", Object); }
	void NetSpawnActorAtLocation_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "NetSpawnActorAtLocation_Implementation"); }
	void ServerReceivedPlayerControllerAck_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerReceivedPlayerControllerAck_Implementation"); }
	void ClientProcessNetExecCommandUnreliable_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientProcessNetExecCommandUnreliable_Implementation"); }
	void ServerProcessNetExecCommand_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerProcessNetExecCommand_Implementation"); }
	void ClientProcessNetExecCommandBP_Implementation() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientProcessNetExecCommandBP_Implementation"); }
	void ClientClearCameraLensEffects() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientClearCameraLensEffects"); }
	void ClientCommitMapChange() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientCommitMapChange"); }
	void ClientEnableNetworkVoice(bool bEnable) { NativeCall<void, bool>((DWORD64)this, "APlayerController", "ClientEnableNetworkVoice", bEnable); }
	void ClientMessage(FString* S, FName Type, float MsgLifeTime) { NativeCall<void, FString *, FName, float>((DWORD64)this, "APlayerController", "ClientMessage", S, Type, MsgLifeTime); }
	void ClientMutePlayer() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientMutePlayer"); }
	void ClientPlayCameraShake() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientPlayCameraShake"); }
	void ClientProcessNetExecCommandBP() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientProcessNetExecCommandBP"); }
	void ClientProcessNetExecCommandUnreliableBP() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientProcessNetExecCommandUnreliableBP"); }
	void ClientRepObjRef(UObject* Object) { NativeCall<void, UObject *>((DWORD64)this, "APlayerController", "ClientRepObjRef", Object); }
	void ClientReturnToMainMenu(FString* ReturnReason) { NativeCall<void, FString *>((DWORD64)this, "APlayerController", "ClientReturnToMainMenu", ReturnReason); }
	void ClientSetViewTarget() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientSetViewTarget"); }
	void ClientTeamMessage(APlayerState* SenderPlayerState, FString* S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState *, FString *, FName, float>((DWORD64)this, "APlayerController", "ClientTeamMessage", SenderPlayerState, S, Type, MsgLifeTime); }
	void ClientUnmutePlayer() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientUnmutePlayer"); }
	void ClientVoiceHandshakeComplete() { NativeCall<void>((DWORD64)this, "APlayerController", "ClientVoiceHandshakeComplete"); }
	void ClientWasKicked(FText* KickReason) { NativeCall<void, FText *>((DWORD64)this, "APlayerController", "ClientWasKicked", KickReason); }
	void ServerChangeName(FString* S) { NativeCall<void, FString *>((DWORD64)this, "APlayerController", "ServerChangeName", S); }
	void ServerMutePlayer() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerMutePlayer"); }
	void ServerProcessNetExecCommand() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerProcessNetExecCommand"); }
	void ServerProcessNetExecCommandUnreliable() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerProcessNetExecCommandUnreliable"); }
	void ServerRestartPlayer() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerRestartPlayer"); }
	void ServerUnmutePlayer() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerUnmutePlayer"); }
	void ServerVerifyViewTarget() { NativeCall<void>((DWORD64)this, "APlayerController", "ServerVerifyViewTarget"); }
};

struct AShooterPlayerController : APlayerController
{
	char* GetHeldItemSlotField() const { return GetNativeField<char*>(this, "AShooterPlayerController", "HeldItemSlot"); } //char[10]
	char* GetUsedItemSlotField() const { return GetNativeField<char*>(this, "AShooterPlayerController", "UsedItemSlot"); } //char[10]
	FVector GetCurrentPlayerCharacterLocationField() const { return GetNativeField<FVector>(this, "AShooterPlayerController", "CurrentPlayerCharacterLocation"); }
	void SetCurrentPlayerCharacterLocationField(FVector newValue) { SetNativeField(this, "AShooterPlayerController", "CurrentPlayerCharacterLocation", newValue); }
	//APrimalStructurePlacer * GetStructurePlacerField() const { return GetNativeField<APrimalStructurePlacer *>(this, "AShooterPlayerController", "StructurePlacer"); }
	FVector GetLastDeathLocationField() const { return GetNativeField<FVector>(this, "AShooterPlayerController", "LastDeathLocation"); }
	void SetLastDeathLocationField(FVector newValue) { SetNativeField(this, "AShooterPlayerController", "LastDeathLocation", newValue); }
	long double GetLastDeathTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastDeathTime"); }
	void SetLastDeathTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastDeathTime", newValue); }
	TWeakObjectPtr<APrimalCharacter> GetLastDeathPrimalCharacterField() const { return GetNativeField<TWeakObjectPtr<APrimalCharacter>>(this, "AShooterPlayerController", "LastDeathPrimalCharacter"); }
	void SetLastDeathPrimalCharacterField(TWeakObjectPtr<APrimalCharacter> newValue) { SetNativeField(this, "AShooterPlayerController", "LastDeathPrimalCharacter", newValue); }
	bool GetbWasDeadField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bWasDead"); }
	void SetbWasDeadField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bWasDead", newValue); }
	long double GetLastDeadCharacterDestructionTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastDeadCharacterDestructionTime"); }
	void SetLastDeadCharacterDestructionTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastDeadCharacterDestructionTime", newValue); }
	bool GetbShowGameModeHUDField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bShowGameModeHUD"); }
	void SetbShowGameModeHUDField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bShowGameModeHUD", newValue); }
	FVector2D GetCurrentRadialDirection1Field() const { return GetNativeField<FVector2D>(this, "AShooterPlayerController", "CurrentRadialDirection1"); }
	void SetCurrentRadialDirection1Field(FVector2D newValue) { SetNativeField(this, "AShooterPlayerController", "CurrentRadialDirection1", newValue); }
	FVector2D GetCurrentRadialDirection2Field() const { return GetNativeField<FVector2D>(this, "AShooterPlayerController", "CurrentRadialDirection2"); }
	void SetCurrentRadialDirection2Field(FVector2D newValue) { SetNativeField(this, "AShooterPlayerController", "CurrentRadialDirection2", newValue); }
	TWeakObjectPtr<UPrimalItem> GetSelectedSlotItemField() const { return GetNativeField<TWeakObjectPtr<UPrimalItem>>(this, "AShooterPlayerController", "SelectedSlotItem"); }
	void SetSelectedSlotItemField(TWeakObjectPtr<UPrimalItem> newValue) { SetNativeField(this, "AShooterPlayerController", "SelectedSlotItem", newValue); }
	USoundCue* GetSelectSlotSoundField() const { return GetNativeField<USoundCue *>(this, "AShooterPlayerController", "SelectSlotSound"); }
	void SetSelectSlotSoundField(USoundCue* newValue) { SetNativeField(this, "AShooterPlayerController", "SelectSlotSound", newValue); }
	bool GetbPlayerSpeakingField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bPlayerSpeaking"); }
	void SetbPlayerSpeakingField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bPlayerSpeaking", newValue); }
	int GetCurrentGameModeMaxNumOfRespawnsField() const { return GetNativeField<int>(this, "AShooterPlayerController", "CurrentGameModeMaxNumOfRespawns"); }
	void SetCurrentGameModeMaxNumOfRespawnsField(int newValue) { SetNativeField(this, "AShooterPlayerController", "CurrentGameModeMaxNumOfRespawns", newValue); }
	unsigned __int64 GetTargetOrbitedPlayerIdField() const { return GetNativeField<unsigned __int64>(this, "AShooterPlayerController", "TargetOrbitedPlayerId"); }
	void SetTargetOrbitedPlayerIdField(unsigned __int64 newValue) { SetNativeField(this, "AShooterPlayerController", "TargetOrbitedPlayerId", newValue); }
	char GetTargetOrbitedTrialCountField() const { return GetNativeField<char>(this, "AShooterPlayerController", "TargetOrbitedTrialCount"); }
	void SetTargetOrbitedTrialCountField(char newValue) { SetNativeField(this, "AShooterPlayerController", "TargetOrbitedTrialCount", newValue); }
	TWeakObjectPtr<AShooterCharacter> GetLastControlledPlayerCharacterField() const { return GetNativeField<TWeakObjectPtr<AShooterCharacter>>(this, "AShooterPlayerController", "LastControlledPlayerCharacter"); }
	void SetLastControlledPlayerCharacterField(TWeakObjectPtr<AShooterCharacter> newValue) { SetNativeField(this, "AShooterPlayerController", "LastControlledPlayerCharacter", newValue); }
	float GetMaxUseDistanceField() const { return GetNativeField<float>(this, "AShooterPlayerController", "MaxUseDistance"); }
	void SetMaxUseDistanceField(float newValue) { SetNativeField(this, "AShooterPlayerController", "MaxUseDistance", newValue); }
	float GetMaxUseCheckRadiusField() const { return GetNativeField<float>(this, "AShooterPlayerController", "MaxUseCheckRadius"); }
	void SetMaxUseCheckRadiusField(float newValue) { SetNativeField(this, "AShooterPlayerController", "MaxUseCheckRadius", newValue); }
	TArray<TWeakObjectPtr<UPrimalInventoryComponent>> GetRemoteViewingInventoriesField() const { return GetNativeField<TArray<TWeakObjectPtr<UPrimalInventoryComponent>>>(this, "AShooterPlayerController", "RemoteViewingInventories"); }
	void SetRemoteViewingInventoriesField(TArray<TWeakObjectPtr<UPrimalInventoryComponent>> newValue) { SetNativeField(this, "AShooterPlayerController", "RemoteViewingInventories", newValue); }
	TWeakObjectPtr<AActor> GetLastHeldUseActorField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "AShooterPlayerController", "LastHeldUseActor"); }
	void SetLastHeldUseActorField(TWeakObjectPtr<AActor> newValue) { SetNativeField(this, "AShooterPlayerController", "LastHeldUseActor", newValue); }
	int GetLastHeldUseHitBodyIndexField() const { return GetNativeField<int>(this, "AShooterPlayerController", "LastHeldUseHitBodyIndex"); }
	void SetLastHeldUseHitBodyIndexField(int newValue) { SetNativeField(this, "AShooterPlayerController", "LastHeldUseHitBodyIndex", newValue); }
	bool GetbUsePressedFromGamepadField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bUsePressedFromGamepad"); }
	void SetbUsePressedFromGamepadField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bUsePressedFromGamepad", newValue); }
	TWeakObjectPtr<APrimalStructure> GetSpawnAtBedField() const { return GetNativeField<TWeakObjectPtr<APrimalStructure>>(this, "AShooterPlayerController", "SpawnAtBed"); }
	void SetSpawnAtBedField(TWeakObjectPtr<APrimalStructure> newValue) { SetNativeField(this, "AShooterPlayerController", "SpawnAtBed", newValue); }
	APawn* GetTempLastLostPawnField() const { return GetNativeField<APawn *>(this, "AShooterPlayerController", "TempLastLostPawn"); }
	void SetTempLastLostPawnField(APawn* newValue) { SetNativeField(this, "AShooterPlayerController", "TempLastLostPawn", newValue); }
	bool GetbLockedInputDontRecenterMouseField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bLockedInputDontRecenterMouse"); }
	void SetbLockedInputDontRecenterMouseField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bLockedInputDontRecenterMouse", newValue); }
	long double GetLastRespawnTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastRespawnTime"); }
	void SetLastRespawnTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastRespawnTime", newValue); }
	bool GetbIsFirstSpawnField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bIsFirstSpawn"); }
	void SetbIsFirstSpawnField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bIsFirstSpawn", newValue); }
	bool GetbIsRespawningField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bIsRespawning"); }
	void SetbIsRespawningField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bIsRespawning", newValue); }
	bool GetbIsVRPlayerField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bIsVRPlayer"); }
	void SetbIsVRPlayerField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bIsVRPlayer", newValue); }
	FItemNetID GetLastEquipedItemNetIDField() const { return GetNativeField<FItemNetID>(this, "AShooterPlayerController", "LastEquipedItemNetID"); }
	void SetLastEquipedItemNetIDField(FItemNetID newValue) { SetNativeField(this, "AShooterPlayerController", "LastEquipedItemNetID", newValue); }
	FItemNetID GetLastUnequippedItemNetIDField() const { return GetNativeField<FItemNetID>(this, "AShooterPlayerController", "LastUnequippedItemNetID"); }
	void SetLastUnequippedItemNetIDField(FItemNetID newValue) { SetNativeField(this, "AShooterPlayerController", "LastUnequippedItemNetID", newValue); }
	__int64 GetLinkedPlayerIDField() const { return GetNativeField<__int64>(this, "AShooterPlayerController", "LinkedPlayerID"); }
	void SetLinkedPlayerIDField(__int64 newValue) { SetNativeField(this, "AShooterPlayerController", "LinkedPlayerID", newValue); }
	bool GetbDrawLocationField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bDrawLocation"); }
	void SetbDrawLocationField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bDrawLocation", newValue); }
	int GetPlayerControllerNumField() const { return GetNativeField<int>(this, "AShooterPlayerController", "PlayerControllerNum"); }
	void SetPlayerControllerNumField(int newValue) { SetNativeField(this, "AShooterPlayerController", "PlayerControllerNum", newValue); }
	FVector GetLastTurnSpeedField() const { return GetNativeField<FVector>(this, "AShooterPlayerController", "LastTurnSpeed"); }
	void SetLastTurnSpeedField(FVector newValue) { SetNativeField(this, "AShooterPlayerController", "LastTurnSpeed", newValue); }
	long double GetLastMultiUseInteractionTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastMultiUseInteractionTime"); }
	void SetLastMultiUseInteractionTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastMultiUseInteractionTime", newValue); }
	float GetLastTimeSentCarriedRotationField() const { return GetNativeField<float>(this, "AShooterPlayerController", "LastTimeSentCarriedRotation"); }
	void SetLastTimeSentCarriedRotationField(float newValue) { SetNativeField(this, "AShooterPlayerController", "LastTimeSentCarriedRotation", newValue); }
	FItemNetID GetLastSteamItemIDToRemoveField() const { return GetNativeField<FItemNetID>(this, "AShooterPlayerController", "LastSteamItemIDToRemove"); }
	void SetLastSteamItemIDToRemoveField(FItemNetID newValue) { SetNativeField(this, "AShooterPlayerController", "LastSteamItemIDToRemove", newValue); }
	FItemNetID GetLastSteamItemIDToAddField() const { return GetNativeField<FItemNetID>(this, "AShooterPlayerController", "LastSteamItemIDToAdd"); }
	void SetLastSteamItemIDToAddField(FItemNetID newValue) { SetNativeField(this, "AShooterPlayerController", "LastSteamItemIDToAdd", newValue); }
	bool GetbConsumeItemSucceededField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bConsumeItemSucceeded"); }
	void SetbConsumeItemSucceededField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bConsumeItemSucceeded", newValue); }
	bool GetbRefreshedInvetoryForRemoveField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bRefreshedInvetoryForRemove"); }
	void SetbRefreshedInvetoryForRemoveField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bRefreshedInvetoryForRemove", newValue); }
	bool GetbServerRefreshedSteamInventoryField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bServerRefreshedSteamInventory"); }
	void SetbServerRefreshedSteamInventoryField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bServerRefreshedSteamInventory", newValue); }
	bool GetbServerRefreshStatusField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bServerRefreshStatus"); }
	void SetbServerRefreshStatusField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bServerRefreshStatus", newValue); }
	bool GetbCloseSteamStatusSceneField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bCloseSteamStatusScene"); }
	void SetbCloseSteamStatusSceneField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bCloseSteamStatusScene", newValue); }
	long double GetLastSteamInventoryRefreshTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastSteamInventoryRefreshTime"); }
	void SetLastSteamInventoryRefreshTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastSteamInventoryRefreshTime", newValue); }
	long double GetLastRequesteDinoAncestorsTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastRequesteDinoAncestorsTime"); }
	void SetLastRequesteDinoAncestorsTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastRequesteDinoAncestorsTime", newValue); }
	long double GetLastDiedMessageTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastDiedMessageTime"); }
	void SetLastDiedMessageTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastDiedMessageTime", newValue); }
	long double GetLastNotifiedTorpidityIncreaseTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastNotifiedTorpidityIncreaseTime"); }
	void SetLastNotifiedTorpidityIncreaseTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastNotifiedTorpidityIncreaseTime", newValue); }
	long double GetLastInvDropRequestTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastInvDropRequestTime"); }
	void SetLastInvDropRequestTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastInvDropRequestTime", newValue); }
	long double GetLastHadPawnTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastHadPawnTime"); }
	void SetLastHadPawnTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastHadPawnTime", newValue); }
	long double GetLastChatMessageTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastChatMessageTime"); }
	void SetLastChatMessageTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastChatMessageTime", newValue); }
	FItemNetInfo GetARKTributeItemNetInfoField() const { return GetNativeField<FItemNetInfo>(this, "AShooterPlayerController", "ARKTributeItemNetInfo"); }
	void SetARKTributeItemNetInfoField(FItemNetInfo newValue) { SetNativeField(this, "AShooterPlayerController", "ARKTributeItemNetInfo", newValue); }
	bool GetbServerIsPaintingField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bServerIsPainting"); }
	void SetbServerIsPaintingField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bServerIsPainting", newValue); }
	bool GetbServerPaintingSuccessField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bServerPaintingSuccess"); }
	void SetbServerPaintingSuccessField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bServerPaintingSuccess", newValue); }
	long double GetLastListenServerNotifyOutOfRangeTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastListenServerNotifyOutOfRangeTime"); }
	void SetLastListenServerNotifyOutOfRangeTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastListenServerNotifyOutOfRangeTime", newValue); }
	int GetSpectatorCycleIndexField() const { return GetNativeField<int>(this, "AShooterPlayerController", "SpectatorCycleIndex"); }
	void SetSpectatorCycleIndexField(int newValue) { SetNativeField(this, "AShooterPlayerController", "SpectatorCycleIndex", newValue); }
	bool GetbPossessedAnyPawnField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bPossessedAnyPawn"); }
	void SetbPossessedAnyPawnField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bPossessedAnyPawn", newValue); }
	bool GetbIsFastTravellingField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bIsFastTravelling"); }
	void SetbIsFastTravellingField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bIsFastTravelling", newValue); }
	bool GetbSuppressAdminIconField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bSuppressAdminIcon"); }
	void SetbSuppressAdminIconField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bSuppressAdminIcon", newValue); }
	long double GetWaitingForSpawnUITimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "WaitingForSpawnUITime"); }
	void SetWaitingForSpawnUITimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "WaitingForSpawnUITime", newValue); }
	float GetChatSpamWeightField() const { return GetNativeField<float>(this, "AShooterPlayerController", "ChatSpamWeight"); }
	void SetChatSpamWeightField(float newValue) { SetNativeField(this, "AShooterPlayerController", "ChatSpamWeight", newValue); }
	bool GetbChatSpammedField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bChatSpammed"); }
	void SetbChatSpammedField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bChatSpammed", newValue); }
	long double GetEnteredSpectatingStateTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "EnteredSpectatingStateTime"); }
	void SetEnteredSpectatingStateTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "EnteredSpectatingStateTime", newValue); }
	bool GetbPreventPaintingStreamingField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bPreventPaintingStreaming"); }
	void SetbPreventPaintingStreamingField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bPreventPaintingStreaming", newValue); }
	long double GetLastUsePressTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastUsePressTime"); }
	void SetLastUsePressTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastUsePressTime", newValue); }
	TArray<int> GetPlayerAppIDsField() const { return GetNativeField<TArray<int>>(this, "AShooterPlayerController", "PlayerAppIDs"); }
	void SetPlayerAppIDsField(TArray<int> newValue) { SetNativeField(this, "AShooterPlayerController", "PlayerAppIDs", newValue); }
	TArray<int> GetNotifiedTribeWarIDsField() const { return GetNativeField<TArray<int>>(this, "AShooterPlayerController", "NotifiedTribeWarIDs"); }
	void SetNotifiedTribeWarIDsField(TArray<int> newValue) { SetNativeField(this, "AShooterPlayerController", "NotifiedTribeWarIDs", newValue); }
	TArray<FString> GetNotifiedTribeWarNamesField() const { return GetNativeField<TArray<FString>>(this, "AShooterPlayerController", "NotifiedTribeWarNames"); }
	void SetNotifiedTribeWarNamesField(TArray<FString> newValue) { SetNativeField(this, "AShooterPlayerController", "NotifiedTribeWarNames", newValue); }
	int GetServerTribeLogLastLogIndexField() const { return GetNativeField<int>(this, "AShooterPlayerController", "ServerTribeLogLastLogIndex"); }
	void SetServerTribeLogLastLogIndexField(int newValue) { SetNativeField(this, "AShooterPlayerController", "ServerTribeLogLastLogIndex", newValue); }
	int GetServerTribeLogLastTribeIDField() const { return GetNativeField<int>(this, "AShooterPlayerController", "ServerTribeLogLastTribeID"); }
	void SetServerTribeLogLastTribeIDField(int newValue) { SetNativeField(this, "AShooterPlayerController", "ServerTribeLogLastTribeID", newValue); }
	FVector GetLastViewLocationField() const { return GetNativeField<FVector>(this, "AShooterPlayerController", "LastViewLocation"); }
	void SetLastViewLocationField(FVector newValue) { SetNativeField(this, "AShooterPlayerController", "LastViewLocation", newValue); }
	bool GetbHasGottenInitialSpawnLocationField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bHasGottenInitialSpawnLocation"); }
	void SetbHasGottenInitialSpawnLocationField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bHasGottenInitialSpawnLocation", newValue); }
	bool GetbClientReceivedTribeLogField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bClientReceivedTribeLog"); }
	void SetbClientReceivedTribeLogField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bClientReceivedTribeLog", newValue); }
	TArray<FString> GetCurrentTribeLogField() const { return GetNativeField<TArray<FString>>(this, "AShooterPlayerController", "CurrentTribeLog"); }
	void SetCurrentTribeLogField(TArray<FString> newValue) { SetNativeField(this, "AShooterPlayerController", "CurrentTribeLog", newValue); }
	long double GetLastTribeLogRequestTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastTribeLogRequestTime"); }
	void SetLastTribeLogRequestTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastTribeLogRequestTime", newValue); }
	long double GetLastRPCStayAliveTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastRPCStayAliveTime"); }
	void SetLastRPCStayAliveTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastRPCStayAliveTime", newValue); }
	int GetPlayerBadgeGroupField() const { return GetNativeField<int>(this, "AShooterPlayerController", "PlayerBadgeGroup"); }
	void SetPlayerBadgeGroupField(int newValue) { SetNativeField(this, "AShooterPlayerController", "PlayerBadgeGroup", newValue); }
	long double GetLastMultiUseTraceTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastMultiUseTraceTime"); }
	void SetLastMultiUseTraceTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastMultiUseTraceTime", newValue); }
	FVector GetLastLargeMoveLocationField() const { return GetNativeField<FVector>(this, "AShooterPlayerController", "LastLargeMoveLocation"); }
	void SetLastLargeMoveLocationField(FVector newValue) { SetNativeField(this, "AShooterPlayerController", "LastLargeMoveLocation", newValue); }
	long double GetLastLargeMoveTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastLargeMoveTime"); }
	void SetLastLargeMoveTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastLargeMoveTime", newValue); }
	long double GetLastNotOnUnriddenDinoTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastNotOnUnriddenDinoTime"); }
	void SetLastNotOnUnriddenDinoTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastNotOnUnriddenDinoTime", newValue); }
	long double GetLastHitMarkerCharacterTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastHitMarkerCharacterTime"); }
	void SetLastHitMarkerCharacterTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastHitMarkerCharacterTime", newValue); }
	bool GetbLastHitMarkerCharacterAllyField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bLastHitMarkerCharacterAlly"); }
	void SetbLastHitMarkerCharacterAllyField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bLastHitMarkerCharacterAlly", newValue); }
	long double GetLastHitMarkerStructureTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastHitMarkerStructureTime"); }
	void SetLastHitMarkerStructureTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastHitMarkerStructureTime", newValue); }
	bool GetbLastHitMarkerStructureAllyField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bLastHitMarkerStructureAlly"); }
	void SetbLastHitMarkerStructureAllyField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bLastHitMarkerStructureAlly", newValue); }
	float GetDoFSettingCurrentTimerField() const { return GetNativeField<float>(this, "AShooterPlayerController", "DoFSettingCurrentTimer"); }
	void SetDoFSettingCurrentTimerField(float newValue) { SetNativeField(this, "AShooterPlayerController", "DoFSettingCurrentTimer", newValue); }
	float GetDoFSettingTargetTimerField() const { return GetNativeField<float>(this, "AShooterPlayerController", "DoFSettingTargetTimer"); }
	void SetDoFSettingTargetTimerField(float newValue) { SetNativeField(this, "AShooterPlayerController", "DoFSettingTargetTimer", newValue); }
	//TArray<FSteamInventoryItemInfo> GetPlayerInventoryItemsField() const { return GetNativeField<TArray<FSteamInventoryItemInfo>>(this, "AShooterPlayerController", "PlayerInventoryItems"); }
	int GetLastSpawnPointIDField() const { return GetNativeField<int>(this, "AShooterPlayerController", "LastSpawnPointID"); }
	void SetLastSpawnPointIDField(int newValue) { SetNativeField(this, "AShooterPlayerController", "LastSpawnPointID", newValue); }
	int GetLastSpawnRegionIndexField() const { return GetNativeField<int>(this, "AShooterPlayerController", "LastSpawnRegionIndex"); }
	void SetLastSpawnRegionIndexField(int newValue) { SetNativeField(this, "AShooterPlayerController", "LastSpawnRegionIndex", newValue); }
	unsigned __int64 GetLastTransferredPlayerIDField() const { return GetNativeField<unsigned __int64>(this, "AShooterPlayerController", "LastTransferredPlayerID"); }
	void SetLastTransferredPlayerIDField(unsigned __int64 newValue) { SetNativeField(this, "AShooterPlayerController", "LastTransferredPlayerID", newValue); }
	bool GetbReceivedSubscribedAppsField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bReceivedSubscribedApps"); }
	void SetbReceivedSubscribedAppsField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bReceivedSubscribedApps", newValue); }
	bool GetbIsTransferringCharacterField() const { return GetNativeField<bool>(this, "AShooterPlayerController", "bIsTransferringCharacter"); }
	void SetbIsTransferringCharacterField(bool newValue) { SetNativeField(this, "AShooterPlayerController", "bIsTransferringCharacter", newValue); }
	long double GetPossessedFirstPawnTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "PossessedFirstPawnTime"); }
	void SetPossessedFirstPawnTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "PossessedFirstPawnTime", newValue); }
	int GetSnapPointCycleField() const { return GetNativeField<int>(this, "AShooterPlayerController", "SnapPointCycle"); }
	void SetSnapPointCycleField(int newValue) { SetNativeField(this, "AShooterPlayerController", "SnapPointCycle", newValue); }
	FVector GetLastSnapPointCyclePositionField() const { return GetNativeField<FVector>(this, "AShooterPlayerController", "LastSnapPointCyclePosition"); }
	void SetLastSnapPointCyclePositionField(FVector newValue) { SetNativeField(this, "AShooterPlayerController", "LastSnapPointCyclePosition", newValue); }
	int GetViewingWheelCategoryField() const { return GetNativeField<int>(this, "AShooterPlayerController", "ViewingWheelCategory"); }
	void SetViewingWheelCategoryField(int newValue) { SetNativeField(this, "AShooterPlayerController", "ViewingWheelCategory", newValue); }
	long double GetForceDrawCurrentGroupsUntilTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "ForceDrawCurrentGroupsUntilTime"); }
	void SetForceDrawCurrentGroupsUntilTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "ForceDrawCurrentGroupsUntilTime", newValue); }
	long double GetLastRequestedPlaceStructureTimeField() const { return GetNativeField<long double>(this, "AShooterPlayerController", "LastRequestedPlaceStructureTime"); }
	void SetLastRequestedPlaceStructureTimeField(long double newValue) { SetNativeField(this, "AShooterPlayerController", "LastRequestedPlaceStructureTime", newValue); }
	int GetPersonalDinoTameCountField() const { return GetNativeField<int>(this, "AShooterPlayerController", "PersonalDinoTameCount"); }
	void SetPersonalDinoTameCountField(int newValue) { SetNativeField(this, "AShooterPlayerController", "PersonalDinoTameCount", newValue); }

	// Functions

	void EnableCheats(FString Pass) { NativeCall<void, FString>((DWORD64)this, "AShooterPlayerController", "EnableCheats", Pass); }
	void CheckCheatsPassword_Implementation(FString* Pass) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "CheckCheatsPassword_Implementation", Pass); }
	void CheckRequestSpectator_Implementation(FString* InSpectatorPass) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "CheckRequestSpectator_Implementation", InSpectatorPass); }
	void ServerStopSpectating_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerStopSpectating_Implementation"); }
	TArray<FString>* GetCheatsCommands(TArray<FString>* result) { return NativeCall<TArray<FString> *, TArray<FString> *>((DWORD64)this, "AShooterPlayerController", "GetCheatsCommands", result); }
	void SetupInputComponent() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "SetupInputComponent"); }
	void OnLevelView() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnLevelView"); }
	void LevelView() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "LevelView"); }
	void SpectatorDetachOrbitCamera() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "SpectatorDetachOrbitCamera"); }
	void SpectatorPreviousPlayer() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "SpectatorPreviousPlayer"); }
	void SpectatorNextPlayer() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "SpectatorNextPlayer"); }
	void DelayedTeamSpectatorSetup() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "DelayedTeamSpectatorSetup"); }
	void ServerCycleSpectator_Implementation(bool bNext) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ServerCycleSpectator_Implementation", bNext); }
	void ServerSpectateToPlayerByID_Implementation(unsigned __int64 PlayerID) { NativeCall<void, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "ServerSpectateToPlayerByID_Implementation", PlayerID); }
	void ClientTeleportSpectator_Implementation(FVector Location, unsigned __int64 PlayerID) { NativeCall<void, FVector, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "ClientTeleportSpectator_Implementation", Location, PlayerID); }
	void ForceCraftPressed() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ForceCraftPressed"); }
	void ForceCraftReleased() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ForceCraftReleased"); }
	void StopTalkingWrapper() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "StopTalkingWrapper"); }
	void ToggleHUDHidden() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ToggleHUDHidden"); }
	void OnUseItemSlotForStructure(int ItemSlotNumber) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "OnUseItemSlotForStructure", ItemSlotNumber); }
	void OnUsePress(bool bFromGamepad) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "OnUsePress", bFromGamepad); }
	//bool GetAllAimedHarvestActors(float MaxDistance, TArray<AActor *> * OutHarvestActors, TArray<UActorComponent *> * OutHarvestComponents, TArray<int> * OutHitBodyIndices) { return NativeCall<bool, float, TArray<AActor *> *, TArray<UActorComponent *> *, TArray<int> *>((DWORD64)this, "AShooterPlayerController", "GetAllAimedHarvestActors", MaxDistance, OutHarvestActors, OutHarvestComponents, OutHitBodyIndices); }
	//AActor * GetAimedUseActor(UActorComponent ** UseComponent, int * hitBodyIndex) { return NativeCall<AActor *, UActorComponent **, int *>((DWORD64)this, "AShooterPlayerController", "GetAimedUseActor", UseComponent, hitBodyIndex); }
	void OnUseRelease(bool bFromGamepad) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "OnUseRelease", bFromGamepad); }
	void ActivateMultiUseSelection() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ActivateMultiUseSelection"); }
	void CancelMultiUseSelection() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "CancelMultiUseSelection"); }
	void OnKeyboardUsePress() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnKeyboardUsePress"); }
	void OnKeyboardUseRelease() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnKeyboardUseRelease"); }
	void OnGamepadUsePress() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnGamepadUsePress"); }
	void OnGamepadUseRelease() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnGamepadUseRelease"); }
	void OnRepeatUseHeldTimer() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnRepeatUseHeldTimer"); }
	void OnUseHeldTimer() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnUseHeldTimer"); }
	void SetMultiUseWheelCategory(int Category) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "SetMultiUseWheelCategory", Category); }
	void StartInventoryRadialSelector() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "StartInventoryRadialSelector"); }
	void EndInventoryRadialSelector() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "EndInventoryRadialSelector"); }
	void StartPlayerActionRadialSelector() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "StartPlayerActionRadialSelector"); }
	void EndPlayerActionRadialSelector() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "EndPlayerActionRadialSelector"); }
	void OnEmoteKey2Press() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnEmoteKey2Press"); }
	void OnEmoteKey1Release() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnEmoteKey1Release"); }
	void SaveSpectatorPos(int Index) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "SaveSpectatorPos", Index); }
	void LoadSpectatorPos(int Index) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "LoadSpectatorPos", Index); }
	void OnEmoteKey2Release() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnEmoteKey2Release"); }
	void StartEmoteSelection() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "StartEmoteSelection"); }
	void OnWhistlePress() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnWhistlePress"); }
	void StartWhistleSelection() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "StartWhistleSelection"); }
	void EndWhistleSelection() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "EndWhistleSelection"); }
	void EndEmoteSelection() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "EndEmoteSelection"); }
	void TriggerPlayerAction(int ActionIndex) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "TriggerPlayerAction", ActionIndex); }
	void ShowMyInventory() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowMyInventory"); }
	void ShowMyCraftables() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowMyCraftables"); }
	void ShowTribeManager() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowTribeManager"); }
	void ShowGlobalChat() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowGlobalChat"); }
	void ShowTribeChat() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowTribeChat"); }
	void ShowAllianceChat() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowAllianceChat"); }
	void ShowLocalChat() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowLocalChat"); }
	void ShowTutorial(int TutorialIndex, bool bForceDisplay) { NativeCall<void, int, bool>((DWORD64)this, "AShooterPlayerController", "ShowTutorial", TutorialIndex, bForceDisplay); }
	void ClearTutorials() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClearTutorials"); }
	void ToggleAutoChat() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ToggleAutoChat"); }
	void ScrollChatDown() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ScrollChatDown"); }
	void ScrollChatUp() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ScrollChatUp"); }
	void ToggleMap() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ToggleMap"); }
	void OpenMapMarkers() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OpenMapMarkers"); }
	void ShowAllPlayersListToFollow() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowAllPlayersListToFollow"); }
	void ToggleShowAllPlayersWhenSpectatingLocal() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ToggleShowAllPlayersWhenSpectatingLocal"); }
	void ToggleDinoNameTags() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ToggleDinoNameTags"); }
	void ToggleShowAllPlayersWhenSpectating() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ToggleShowAllPlayersWhenSpectating"); }
	void ToggleWeaponAccessory() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ToggleWeaponAccessory"); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "BeginPlay"); }
	void SaveProfile() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "SaveProfile"); }
	void ClientNotifyPaintFinished_Implementation(bool bSuccess) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ClientNotifyPaintFinished_Implementation", bSuccess); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "IsValidUnStasisCaster"); }
	void ServerSetSpectatorLocation_Implementation(FVector NewLoc) { NativeCall<void, FVector>((DWORD64)this, "AShooterPlayerController", "ServerSetSpectatorLocation_Implementation", NewLoc); }
	void SetPlayer(UPlayer* InPlayer) { NativeCall<void, UPlayer *>((DWORD64)this, "AShooterPlayerController", "SetPlayer", InPlayer); }
	void UnFreeze() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "UnFreeze"); }
	void ServerCheckUnfreeze_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerCheckUnfreeze_Implementation"); }
	void DoServerCheckUnfreeze_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "DoServerCheckUnfreeze_Implementation"); }
	void FailedToSpawnPawn() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "FailedToSpawnPawn"); }
	void EnableSpectator() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "EnableSpectator"); }
	void DisableSpectator() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "DisableSpectator"); }
	void OnDisableSpectator_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnDisableSpectator_Implementation"); }
	void ServerSaveWorld_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerSaveWorld_Implementation"); }
	void ServerLoadWorld_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerLoadWorld_Implementation"); }
	void CheckforOrbiting() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "CheckforOrbiting"); }
	bool CheckforOrbitingInstantaneously() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "CheckforOrbitingInstantaneously"); }
	void OnToggleInGameMenu() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnToggleInGameMenu"); }
	void OnToggleDoFMenu() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnToggleDoFMenu"); }
	void MoveForward(float Val) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "MoveForward", Val); }
	void MoveRight(float Val) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "MoveRight", Val); }
	void TurnAtRate(float Val) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "TurnAtRate", Val); }
	void LookUpAtRate(float Val) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "LookUpAtRate", Val); }
	void SpectatorTurn(float Val) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "SpectatorTurn", Val); }
	void TurnInput(float Val) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "TurnInput", Val); }
	void LookInput(float Val) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "LookInput", Val); }
	void OnStartFire() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStartFire"); }
	void OnStopFire() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStopFire"); }
	void OnStartGamepadRightFire() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStartGamepadRightFire"); }
	void OnStopGamepadRightFire() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStopGamepadRightFire"); }
	void ShowBattleGameModeHUD() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowBattleGameModeHUD"); }
	void OnStartTargeting() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStartTargeting"); }
	void OnStopTargeting() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStopTargeting"); }
	void OnStartGamepadLeftFire() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStartGamepadLeftFire"); }
	void OnStopGamepadLeftFire() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnStopGamepadLeftFire"); }
	void ServerRequestPlaceStructure_Implementation(int StructureIndex, FVector BuildLocation, FRotator BuildRotation, FRotator PlayerViewRotation, APawn* AttachToPawn, APrimalDinoCharacter* DinoCharacter, FName BoneName, FItemNetID PlaceUsingItemID, bool bSnapped, bool bIsCheat, bool bIsFlipped, int SnapPoCycle) { NativeCall<void, int, FVector, FRotator, FRotator, APawn *, APrimalDinoCharacter *, FName, FItemNetID, bool, bool, bool, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestPlaceStructure_Implementation", StructureIndex, BuildLocation, BuildRotation, PlayerViewRotation, AttachToPawn, DinoCharacter, BoneName, PlaceUsingItemID, bSnapped, bIsCheat, bIsFlipped, SnapPoCycle); }
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool, bool, bool>((DWORD64)this, "AShooterPlayerController", "SetCinematicMode", bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning); }
	void PawnLeavingGame() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "PawnLeavingGame"); }
	void InitInputSystem() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "InitInputSystem"); }
	void EnemyInVisible(bool Invisible) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "EnemyInVisible", Invisible); }
	void ServerSuicide_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerSuicide_Implementation"); }
	void ServerRemovePassenger_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerRemovePassenger_Implementation"); }
	void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, FString* S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState *, FString *, FName, float>((DWORD64)this, "AShooterPlayerController", "ClientTeamMessage_Implementation", SenderPlayerState, S, Type, MsgLifeTime); }
	void SetControlRotation(FRotator* NewRotation) { NativeCall<void, FRotator *>((DWORD64)this, "AShooterPlayerController", "SetControlRotation", NewRotation); }
	void AcknowledgePossession(APawn* P) { NativeCall<void, APawn *>((DWORD64)this, "AShooterPlayerController", "AcknowledgePossession", P); }
	void LeaveMeAlone() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "LeaveMeAlone"); }
	void InfiniteStats() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "InfiniteStats"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "Destroyed"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "PostInitializeComponents"); }
	void ServerGetMessageOfTheDay_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerGetMessageOfTheDay_Implementation"); }
	void ClientGetMessageOfTheDay_Implementation(FString* Message) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ClientGetMessageOfTheDay_Implementation", Message); }
	void ServerReadMessageOFTheDay_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerReadMessageOFTheDay_Implementation"); }
	void ClientStartReceivingActorItems_Implementation(UPrimalInventoryComponent* forInventory, bool bEquippedItems) { NativeCall<void, UPrimalInventoryComponent *, bool>((DWORD64)this, "AShooterPlayerController", "ClientStartReceivingActorItems_Implementation", forInventory, bEquippedItems); }
	void ClientFinishedReceivingActorItems_Implementation(UPrimalInventoryComponent* forInventory, bool bEquippedItems) { NativeCall<void, UPrimalInventoryComponent *, bool>((DWORD64)this, "AShooterPlayerController", "ClientFinishedReceivingActorItems_Implementation", forInventory, bEquippedItems); }
	void ClientAddActorItem_Implementation(UPrimalInventoryComponent* forInventory, FItemNetInfo itemInfo, bool bEquipItem, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool, bool>((DWORD64)this, "AShooterPlayerController", "ClientAddActorItem_Implementation", forInventory, itemInfo, bEquipItem, ShowHUDNotification); }
	void ClientAddItemToArk_Implementation(UPrimalInventoryComponent* forInventory, FItemNetInfo itemInfo, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool>((DWORD64)this, "AShooterPlayerController", "ClientAddItemToArk_Implementation", forInventory, itemInfo, bFromLoad); }
	void ClientAddFolderToInventoryComponent_Implementation(UPrimalInventoryComponent* forInventory, FString* NewCustomFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, FString *, int>((DWORD64)this, "AShooterPlayerController", "ClientAddFolderToInventoryComponent_Implementation", forInventory, NewCustomFolderName, InventoryCompType); }
	void ClientLoadArkItems_Implementation(UPrimalInventoryComponent* forInventory, TArray<FItemNetInfo>* itemInfos) { NativeCall<void, UPrimalInventoryComponent *, TArray<FItemNetInfo> *>((DWORD64)this, "AShooterPlayerController", "ClientLoadArkItems_Implementation", forInventory, itemInfos); }
	void ClientFinishedLoadArkItems_Implementation(UPrimalInventoryComponent* forInventory) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "AShooterPlayerController", "ClientFinishedLoadArkItems_Implementation", forInventory); }
	void ClientInsertActorItem_Implementation(UPrimalInventoryComponent* forInventory, FItemNetInfo itemInfo, FItemNetID InsertAfterItemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ClientInsertActorItem_Implementation", forInventory, itemInfo, InsertAfterItemID); }
	void ClientRemoveActorItem_Implementation(UPrimalInventoryComponent* forInventory, FItemNetID itemID, bool showHUDMessage) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool>((DWORD64)this, "AShooterPlayerController", "ClientRemoveActorItem_Implementation", forInventory, itemID, showHUDMessage); }
	void ClientSwapActorItems_Implementation(UPrimalInventoryComponent* forInventory, FItemNetID itemID1, FItemNetID itemID2) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ClientSwapActorItems_Implementation", forInventory, itemID1, itemID2); }
	void ServerRequestActorItems_Implementation(UPrimalInventoryComponent* forInventory, bool bInventoryItems, bool bIsFirstSpawn) { NativeCall<void, UPrimalInventoryComponent *, bool, bool>((DWORD64)this, "AShooterPlayerController", "ServerRequestActorItems_Implementation", forInventory, bInventoryItems, bIsFirstSpawn); }
	void ServerRemovePawnItem_Implementation(FItemNetID itemID, bool bSecondryAction) { NativeCall<void, FItemNetID, bool>((DWORD64)this, "AShooterPlayerController", "ServerRemovePawnItem_Implementation", itemID, bSecondryAction); }
	void ServerEquipPawnItem_Implementation(FItemNetID itemID) { NativeCall<void, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerEquipPawnItem_Implementation", itemID); }
	void ServerDeleteCustomFolder_Implementation(UPrimalInventoryComponent* forInventory, FString* CFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, FString *, int>((DWORD64)this, "AShooterPlayerController", "ServerDeleteCustomFolder_Implementation", forInventory, CFolderName, InventoryCompType); }
	void ServerAddItemToCustomFolder_Implementation(UPrimalInventoryComponent* forInventory, FString* CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, FString *, int, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerAddItemToCustomFolder_Implementation", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerDeleteItemFromCustomFolder_Implementation(UPrimalInventoryComponent* forInventory, FString* CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, FString *, int, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerDeleteItemFromCustomFolder_Implementation", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerCraftItem_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerCraftItem_Implementation", inventoryComp, itemID); }
	void ServerRepairItem_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRepairItem_Implementation", inventoryComp, itemID); }
	void ServerRequestInventorySwapItems_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID1, FItemNetID itemID2) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventorySwapItems_Implementation", inventoryComp, itemID1, itemID2); }
	void ServerRequestInventoryUseItemWithItem_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID1, FItemNetID itemID2, int AdditionalData) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventoryUseItemWithItem_Implementation", inventoryComp, itemID1, itemID2, AdditionalData); }
	void ServerRequestInventoryUseItemWithActor_Implementation(AActor* anActor, UPrimalInventoryComponent* inventoryComp, FItemNetID itemID1, int AdditionalData) { NativeCall<void, AActor *, UPrimalInventoryComponent *, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventoryUseItemWithActor_Implementation", anActor, inventoryComp, itemID1, AdditionalData); }
	void ServerRequestInventoryUseItem_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventoryUseItem_Implementation", inventoryComp, itemID); }
	void ServerActorViewRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "AShooterPlayerController", "ServerActorViewRemoteInventory_Implementation", inventoryComp); }
	void ServerActorCloseRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "AShooterPlayerController", "ServerActorCloseRemoteInventory_Implementation", inventoryComp); }
	void ServerDropFromRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerDropFromRemoteInventory_Implementation", inventoryComp, itemID); }
	void ServerInventoryClearCraftQueue_Implementation(UPrimalInventoryComponent* inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "AShooterPlayerController", "ServerInventoryClearCraftQueue_Implementation", inventoryComp); }
	void ServerRequestRemoveItemSkin_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestRemoveItemSkin_Implementation", inventoryComp, itemID); }
	void ServerRequestRemoveItemSkinOnly_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestRemoveItemSkinOnly_Implementation", inventoryComp, itemID); }
	void ServerRequestRemoveWeaponAccessoryOnly_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestRemoveWeaponAccessoryOnly_Implementation", inventoryComp, itemID); }
	void ServerRequestRemoveWeaponClipAmmo_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestRemoveWeaponClipAmmo_Implementation", inventoryComp, itemID); }
	void ServerEquipToRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerEquipToRemoteInventory_Implementation", inventoryComp, itemID); }
	void ServerTransferFromRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID, int requestedQuantity, int ToSlotIndex, bool bEquipItem) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int, int, bool>((DWORD64)this, "AShooterPlayerController", "ServerTransferFromRemoteInventory_Implementation", inventoryComp, itemID, requestedQuantity, ToSlotIndex, bEquipItem); }
	void ServerTransferAllFromRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FString* CurrentCustomFolderFilter, FString* CurrentNameFilter) { NativeCall<void, UPrimalInventoryComponent *, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerTransferAllFromRemoteInventory_Implementation", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter); }
	void ServerTransferAllToRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FString* CurrentCustomFolderFilter, FString* CurrentNameFilter) { NativeCall<void, UPrimalInventoryComponent *, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerTransferAllToRemoteInventory_Implementation", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter); }
	void ServerTransferToRemoteInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID, bool bAlsoTryToEqup, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, int>((DWORD64)this, "AShooterPlayerController", "ServerTransferToRemoteInventory_Implementation", inventoryComp, itemID, bAlsoTryToEqup, requestedQuantity); }
	void ClientFailedToAddItemFromArkInventory_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientFailedToAddItemFromArkInventory_Implementation"); }
	void ServerAddItemFromArkInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ServerAddItemFromArkInventory_Implementation", inventoryComp, itemID, requestedQuantity); }
	void OnRefreshSteamInventoryFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "OnRefreshSteamInventoryFinished", bSuccess, SteamID); }
	void ServerTakeItemFromArkInventoryAfterRefresh() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerTakeItemFromArkInventoryAfterRefresh"); }
	void ClientRemoveItemFromArk_Implementation(UPrimalInventoryComponent* forInventory, FItemNetID RemovedItemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ClientRemoveItemFromArk_Implementation", forInventory, RemovedItemID); }
	void ServerRequestCreateNewPlayerWithArkData(TArray<unsigned char>* PlayerArkDataBytes, unsigned __int64 TribeID) { NativeCall<void, TArray<unsigned char> *, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "ServerRequestCreateNewPlayerWithArkData", PlayerArkDataBytes, TribeID); }
	void ServerUploadCurrentCharacterAndItems_Implementation(UPrimalInventoryComponent* inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "AShooterPlayerController", "ServerUploadCurrentCharacterAndItems_Implementation", inventoryComp); }
	void ClientOnCurrentCharacterAndItemsUploaded_Implementation(unsigned __int64 TransferringPlayerDataId) { NativeCall<void, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "ClientOnCurrentCharacterAndItemsUploaded_Implementation", TransferringPlayerDataId); }
	void OnCurrentCharacterAndItemsUploaded(bool Success) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "OnCurrentCharacterAndItemsUploaded", Success); }
	void ServerUploadCharaterDataToArk_Implementation(UPrimalInventoryComponent* inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "AShooterPlayerController", "ServerUploadCharaterDataToArk_Implementation", inventoryComp); }
	void RemoveInvetoryItem(unsigned int ItemID) { NativeCall<void, unsigned int>((DWORD64)this, "AShooterPlayerController", "RemoveInvetoryItem", ItemID); }
	AShooterCharacter* GetPlayerCharacter() { return NativeCall<AShooterCharacter *>((DWORD64)this, "AShooterPlayerController", "GetPlayerCharacter"); }
	void SetPawn(APawn* InPawn) { NativeCall<void, APawn *>((DWORD64)this, "AShooterPlayerController", "SetPawn", InPawn); }
	void ServerRepeatMultiUse_Implementation(UObject* ForObject, int useIndex) { NativeCall<void, UObject *, int>((DWORD64)this, "AShooterPlayerController", "ServerRepeatMultiUse_Implementation", ForObject, useIndex); }
	void ServerMultiUse_Implementation(UObject* ForObject, int useIndex) { NativeCall<void, UObject *, int>((DWORD64)this, "AShooterPlayerController", "ServerMultiUse_Implementation", ForObject, useIndex); }
	void ClientDoMultiUse_Implementation(UObject* ForObject, int useIndex) { NativeCall<void, UObject *, int>((DWORD64)this, "AShooterPlayerController", "ClientDoMultiUse_Implementation", ForObject, useIndex); }
	void ClientUpdateItemQuantity_Implementation(UPrimalInventoryComponent* forInventory, FItemNetID itemID, int ItemQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ClientUpdateItemQuantity_Implementation", forInventory, itemID, ItemQuantity); }
	void ClientUpdateItemDurability_Implementation(UPrimalInventoryComponent* forInventory, FItemNetID itemID, float ItemDurability) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, float>((DWORD64)this, "AShooterPlayerController", "ClientUpdateItemDurability_Implementation", forInventory, itemID, ItemDurability); }
	void ClientUpdateItemWeaponClipAmmo_Implementation(UPrimalInventoryComponent* forInventory, FItemNetID itemID, int Ammo) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ClientUpdateItemWeaponClipAmmo_Implementation", forInventory, itemID, Ammo); }
	void ClientUsedActorItem_Implementation(UPrimalInventoryComponent* forInventory, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ClientUsedActorItem_Implementation", forInventory, itemID); }
	void UnPossess() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "UnPossess"); }
	void Possess(APawn* inPawn) { NativeCall<void, APawn *>((DWORD64)this, "AShooterPlayerController", "Possess", inPawn); }
	void UpdateRotation(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "UpdateRotation", DeltaTime); }
	bool CanDoPlayerCharacterInput(bool bIgnoreCurrentWeapon, bool bWeaponForcesMountedWeaponry) { return NativeCall<bool, bool, bool>((DWORD64)this, "AShooterPlayerController", "CanDoPlayerCharacterInput", bIgnoreCurrentWeapon, bWeaponForcesMountedWeaponry); }
	AActor* GetPlayerControllerViewerOverride() { return NativeCall<AActor *>((DWORD64)this, "AShooterPlayerController", "GetPlayerControllerViewerOverride"); }
	void ForceTame(bool bCheatTame) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ForceTame", bCheatTame); }
	void SetImprintQuality(float ImprintingQuality) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "SetImprintQuality", ImprintingQuality); }
	void GiveToMe() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "GiveToMe"); }
	void GiveActorToMe(AActor* anAct, bool bNotifyNetwork) { NativeCall<void, AActor *, bool>((DWORD64)this, "AShooterPlayerController", "GiveActorToMe", anAct, bNotifyNetwork); }
	void AddExperience(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, float, bool, bool>((DWORD64)this, "AShooterPlayerController", "AddExperience", HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void ServerRequestSetPin_Implementation(UObject* forTarget, int PinValue, bool bIsSetting, int TheCustomIndex) { NativeCall<void, UObject *, int, bool, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestSetPin_Implementation", forTarget, PinValue, bIsSetting, TheCustomIndex); }
	void ClientNotifyTribeXP_Implementation(float HowMuch) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "ClientNotifyTribeXP_Implementation", HowMuch); }
	void ServerRequestRespawnAtPoint_Implementation(int spawnPoID, int spawnRegionIndex) { NativeCall<void, int, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestRespawnAtPoint_Implementation", spawnPoID, spawnRegionIndex); }
	void ServerRequestFastTravelToPoint_Implementation(int fromSpawnPoID, int spawnPoID) { NativeCall<void, int, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestFastTravelToPoint_Implementation", fromSpawnPoID, spawnPoID); }
	void ServerUploadDino_Implementation(APrimalDinoCharacter* DownloadedDino) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterPlayerController", "ServerUploadDino_Implementation", DownloadedDino); }
	void ServerRequestRemoteDropAllItems_Implementation(UPrimalInventoryComponent* inventoryComp, FString* CurrentCustomFolderFilter, FString* CurrentNameFilter) { NativeCall<void, UPrimalInventoryComponent *, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerRequestRemoteDropAllItems_Implementation", inventoryComp, CurrentCustomFolderFilter, CurrentNameFilter); }
	void ServerRequestDropAllItems_Implementation(FString* CurrentCustomFolderFilter, FString* CurrentNameFilter) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerRequestDropAllItems_Implementation", CurrentCustomFolderFilter, CurrentNameFilter); }
	void ClientShowSpawnUI_Implementation(float Delay) { NativeCall<void, float>((DWORD64)this, "AShooterPlayerController", "ClientShowSpawnUI_Implementation", Delay); }
	void ClientShowCharacterCreationUI_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientShowCharacterCreationUI_Implementation"); }
	AActor* SpawnActor(FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, bool bDoDeferBeginPlay) { return NativeCall<AActor *, FString *, float, float, float, bool>((DWORD64)this, "AShooterPlayerController", "SpawnActor", blueprintPath, spawnDistance, spawnYOffset, ZOffset, bDoDeferBeginPlay); }
	bool GiveItem(FString* blueprintPath, int quantityOverride, float qualityOverride, bool bForceBluepr) { return NativeCall<bool, FString *, int, float, bool>((DWORD64)this, "AShooterPlayerController", "GiveItem", blueprintPath, quantityOverride, qualityOverride, bForceBluepr); }
	bool GiveSlotItem(FString* blueprintPath, int slotNum, int quantityOverride) { return NativeCall<bool, FString *, int, int>((DWORD64)this, "AShooterPlayerController", "GiveSlotItem", blueprintPath, slotNum, quantityOverride); }
	bool GiveSlotItemNum(int masterIndexNum, int slotNum, int quantityOverride) { return NativeCall<bool, int, int, int>((DWORD64)this, "AShooterPlayerController", "GiveSlotItemNum", masterIndexNum, slotNum, quantityOverride); }
	bool GiveItemNum(int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBluepr) { return NativeCall<bool, int, int, float, bool>((DWORD64)this, "AShooterPlayerController", "GiveItemNum", masterIndexNum, quantityOverride, qualityOverride, bForceBluepr); }
	FString* GetUniqueNetIdAsString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterPlayerController", "GetUniqueNetIdAsString", result); }
	void ClientOnAddedItemsToAllClustersInventory_Implementation(bool Success, FString* UserId, TArray<int>* MasterIndexNum) { NativeCall<void, bool, FString *, TArray<int> *>((DWORD64)this, "AShooterPlayerController", "ClientOnAddedItemsToAllClustersInventory_Implementation", Success, UserId, MasterIndexNum); }
	void OnAddedItemsToAllClustersInventory(bool Success, FString* UserId, TArray<int>* MasterIndexNum) { NativeCall<void, bool, FString *, TArray<int> *>((DWORD64)this, "AShooterPlayerController", "OnAddedItemsToAllClustersInventory", Success, UserId, MasterIndexNum); }
	bool AddItemToAllClustersInventory(FString UserId, int MasterIndexNum) { return NativeCall<bool, FString, int>((DWORD64)this, "AShooterPlayerController", "AddItemToAllClustersInventory", UserId, MasterIndexNum); }
	void BeginInactiveState() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "BeginInactiveState"); }
	void PawnPendingDestroy(APawn* inPawn) { NativeCall<void, APawn *>((DWORD64)this, "AShooterPlayerController", "PawnPendingDestroy", inPawn); }
	void BeginSpectatingState() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "BeginSpectatingState"); }
	void SetGraphicsQuality(int val) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "SetGraphicsQuality", val); }
	void GetPlayerViewPoint(FVector* out_Location, FRotator* out_Rotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "AShooterPlayerController", "GetPlayerViewPoint", out_Location, out_Rotation); }
	void GetPlayerViewPoint(FVector* out_Location, FRotator* out_Rotation, bool ForAiming) { NativeCall<void, FVector *, FRotator *, bool>((DWORD64)this, "AShooterPlayerController", "GetPlayerViewPoint", out_Location, out_Rotation, ForAiming); }
	void GetPlayerViewPointNoModifiers(FVector* out_Location, FRotator* out_Rotation, bool ForAiming, bool bNoTPVAim) { NativeCall<void, FVector *, FRotator *, bool, bool>((DWORD64)this, "AShooterPlayerController", "GetPlayerViewPointNoModifiers", out_Location, out_Rotation, ForAiming, bNoTPVAim); }
	void ClientNotifyEditText_Implementation(TSubclassOf<UObject> ForObjectClass, unsigned int ExtraID1, unsigned int ExtraID2, UObject* ForObject) { NativeCall<void, TSubclassOf<UObject>, unsigned int, unsigned int, UObject *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyEditText_Implementation", ForObjectClass, ExtraID1, ExtraID2, ForObject); }
	void ServerNotifyEditText_Implementation(FString* TextToUse, bool checkedBox, TSubclassOf<UObject> ForObjectClass, unsigned int ExtraID1, unsigned int ExtraID2, UObject* ForObject) { NativeCall<void, FString *, bool, TSubclassOf<UObject>, unsigned int, unsigned int, UObject *>((DWORD64)this, "AShooterPlayerController", "ServerNotifyEditText_Implementation", TextToUse, checkedBox, ForObjectClass, ExtraID1, ExtraID2, ForObject); }
	void ServerSendChatMessage_Implementation(FString* ChatMessage, EChatSendMode::Type SendMode) { NativeCall<void, FString *, EChatSendMode::Type>((DWORD64)this, "AShooterPlayerController", "ServerSendChatMessage_Implementation", ChatMessage, SendMode); }
	void ClientChatMessage_Implementation(FChatMessage Chat) { NativeCall<void, FChatMessage>((DWORD64)this, "AShooterPlayerController", "ClientChatMessage_Implementation", Chat); }
	void ClientServerChatMessage_Implementation(FString* MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, FString *, FLinearColor, bool>((DWORD64)this, "AShooterPlayerController", "ClientServerChatMessage_Implementation", MessageText, MessageColor, bIsBold); }
	void ClientServerChatDirectMessage_Implementation(FString* MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, FString *, FLinearColor, bool>((DWORD64)this, "AShooterPlayerController", "ClientServerChatDirectMessage_Implementation", MessageText, MessageColor, bIsBold); }
	void ClientServerNotification_Implementation(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay) { NativeCall<void, FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>((DWORD64)this, "AShooterPlayerController", "ClientServerNotification_Implementation", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	void ClientServerNotificationSingle_Implementation(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay, int MessageTypeID) { NativeCall<void, FString *, FLinearColor, float, float, UTexture2D *, USoundBase *, int>((DWORD64)this, "AShooterPlayerController", "ClientServerNotificationSingle_Implementation", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, MessageTypeID); }
	void ClientServerSOTFNotificationCustom_Implementation(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay) { NativeCall<void, FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>((DWORD64)this, "AShooterPlayerController", "ClientServerSOTFNotificationCustom_Implementation", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	FString* WritePNTScreenshot(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterPlayerController", "WritePNTScreenshot", result); }
	void TestNotification() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "TestNotification"); }
	void TestPhysxPerf() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "TestPhysxPerf"); }
	void ClientReset_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientReset_Implementation"); }
	void Reset() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "Reset"); }
	void TestAlarmNotification(FString Title, FString Message) { NativeCall<void, FString, FString>((DWORD64)this, "AShooterPlayerController", "TestAlarmNotification", Title, Message); }
	void SendAlarmNotification(FString SteamID, FString Title, FString Message) { NativeCall<void, FString, FString, FString>((DWORD64)this, "AShooterPlayerController", "SendAlarmNotification", SteamID, Title, Message); }
	bool SendUseItemSlotToStructure() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "SendUseItemSlotToStructure"); }
	void SpectatorUseItem(int Index) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "SpectatorUseItem", Index); }
	void ApplyDepthOfFieldSetting(int Index, float CurrentTimer) { NativeCall<void, int, float>((DWORD64)this, "AShooterPlayerController", "ApplyDepthOfFieldSetting", Index, CurrentTimer); }
	void ServerReleaseSeatingStructure_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerReleaseSeatingStructure_Implementation"); }
	void AdminCheat(FString* Msg) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "AdminCheat", Msg); }
	void OnExtendedInfoPress() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnExtendedInfoPress"); }
	void OnExtendedInfoRelease() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnExtendedInfoRelease"); }
	void ClientNotifyPlayerDeath_Implementation(APawn* InstigatingPawn) { NativeCall<void, APawn *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyPlayerDeath_Implementation", InstigatingPawn); }
	void ClientNotifyPlayerDeathReason_Implementation(FString* ReasonString) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyPlayerDeathReason_Implementation", ReasonString); }
	void ServerShowMessageOfTheDay_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerShowMessageOfTheDay_Implementation"); }
	void ServerSetMessageOfTheDay_Implementation(FString* Message) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ServerSetMessageOfTheDay_Implementation", Message); }
	void ClientNotifyMessageOfTheDay_Implementation(FString* Message, float TimeToDisplay) { NativeCall<void, FString *, float>((DWORD64)this, "AShooterPlayerController", "ClientNotifyMessageOfTheDay_Implementation", Message, TimeToDisplay); }
	void ClientNotifyRemotePlayerDeath_Implementation(FString* PlayerName, FString* AttackerName) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyRemotePlayerDeath_Implementation", PlayerName, AttackerName); }
	void ClientNotifyPlayerKill_Implementation(AActor* PlayerPawn, APawn* VictimPawn) { NativeCall<void, AActor *, APawn *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyPlayerKill_Implementation", PlayerPawn, VictimPawn); }
	void ClientNotifyDinoKill_Implementation(APrimalDinoCharacter* InstigatingPawn, APawn* VictimPawn) { NativeCall<void, APrimalDinoCharacter *, APawn *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyDinoKill_Implementation", InstigatingPawn, VictimPawn); }
	void ClientNotifyDinoDeath_Implementation(FString* DinoName, FString* AttackerName, bool bIsVehicle) { NativeCall<void, FString *, FString *, bool>((DWORD64)this, "AShooterPlayerController", "ClientNotifyDinoDeath_Implementation", DinoName, AttackerName, bIsVehicle); }
	void ClientNotifyRespawned_Implementation(APawn* NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn *, bool>((DWORD64)this, "AShooterPlayerController", "ClientNotifyRespawned_Implementation", NewPawn, IsFirstSpawn); }
	void ClientResetRespawningFlag_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientResetRespawningFlag_Implementation"); }
	void CheckForPlayerInventory() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "CheckForPlayerInventory"); }
	void ReportSpawnManagers() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ReportSpawnManagers"); }
	void ReportLeastSpawnManagers() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ReportLeastSpawnManagers"); }
	void FlushLevelStreaming() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "FlushLevelStreaming"); }
	void DoFlushLevelStreaming() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "DoFlushLevelStreaming"); }
	void FinalFlushLevelStreaming() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "FinalFlushLevelStreaming"); }
	void ClientNotifyCantHarvest_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyCantHarvest_Implementation"); }
	void ClientNotifyHitHarvest_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyHitHarvest_Implementation"); }
	void ClientNotifyCantHitHarvest_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyCantHitHarvest_Implementation"); }
	void ServerSetVRPlayer_Implementation(bool bSetVRPlayer) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ServerSetVRPlayer_Implementation", bSetVRPlayer); }
	void ClientNotifyTamedDino_Implementation(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>((DWORD64)this, "AShooterPlayerController", "ClientNotifyTamedDino_Implementation", DinoClass); }
	void ClientNotifySummonedDino_Implementation(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>((DWORD64)this, "AShooterPlayerController", "ClientNotifySummonedDino_Implementation", DinoClass); }
	void ClientNotifyDefeatedDino_Implementation(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>((DWORD64)this, "AShooterPlayerController", "ClientNotifyDefeatedDino_Implementation", DinoClass); }
	void SetPlayerPos(float X, float Y, float Z) { NativeCall<void, float, float, float>((DWORD64)this, "AShooterPlayerController", "SetPlayerPos", X, Y, Z); }
	void SPI(float X, float Y, float Z, float Yaw, float Pitch) { NativeCall<void, float, float, float, float, float>((DWORD64)this, "AShooterPlayerController", "SPI", X, Y, Z, Yaw, Pitch); }
	void ClientSetSpectatorLocation_Implementation(FVector NewLocation) { NativeCall<void, FVector>((DWORD64)this, "AShooterPlayerController", "ClientSetSpectatorLocation_Implementation", NewLocation); }
	void ClientSetControlRotation_Implementation(FRotator NewRotation) { NativeCall<void, FRotator>((DWORD64)this, "AShooterPlayerController", "ClientSetControlRotation_Implementation", NewRotation); }
	bool ShouldReplicateVoicePacketFrom(FUniqueNetId* Sender, char* PlaybackFlags) { return NativeCall<bool, FUniqueNetId *, char *>((DWORD64)this, "AShooterPlayerController", "ShouldReplicateVoicePacketFrom", Sender, PlaybackFlags); }
	bool HasRadio(bool allowVoice) { return NativeCall<bool, bool>((DWORD64)this, "AShooterPlayerController", "HasRadio", allowVoice); }
	TArray<unsigned int>* GetRadioFrequencies(TArray<unsigned int>* result) { return NativeCall<TArray<unsigned int> *, TArray<unsigned int> *>((DWORD64)this, "AShooterPlayerController", "GetRadioFrequencies", result); }
	bool HasSameRadioFrequency(AShooterPlayerController* OtherPC, unsigned int* SharedFrequency) { return NativeCall<bool, AShooterPlayerController *, unsigned int *>((DWORD64)this, "AShooterPlayerController", "HasSameRadioFrequency", OtherPC, SharedFrequency); }
	bool CanCommunicateVoiceWithRadio(AShooterPlayerController* otherPC) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "AShooterPlayerController", "CanCommunicateVoiceWithRadio", otherPC); }
	void ToggleSpeaking(bool bSpeaking) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ToggleSpeaking", bSpeaking); }
	void ForceUnstasisAtLocation(FVector AtLocation) { NativeCall<void, FVector>((DWORD64)this, "AShooterPlayerController", "ForceUnstasisAtLocation", AtLocation); }
	void SpawnActorSpread(FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, FString *, float, float, float, int, float>((DWORD64)this, "AShooterPlayerController", "SpawnActorSpread", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void SpawnActorSpreadTamed(FString* blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, FString *, float, float, float, int, float>((DWORD64)this, "AShooterPlayerController", "SpawnActorSpreadTamed", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void GiveResources() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "GiveResources"); }
	void GiveEngrams() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "GiveEngrams"); }
	void ForceTribes(FString* PlayerName1, FString* PlayerName2, FString* NewTribeName) { NativeCall<void, FString *, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ForceTribes", PlayerName1, PlayerName2, NewTribeName); }
	void ClientPlayLocalSound_Implementation(USoundBase* aSound) { NativeCall<void, USoundBase *>((DWORD64)this, "AShooterPlayerController", "ClientPlayLocalSound_Implementation", aSound); }
	void ServerAddItemToArkInventory_Implementation(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ServerAddItemToArkInventory_Implementation", inventoryComp, itemID, requestedQuantity); }
	void OnArkTributeAllClustersInventoryItemsLoaded(TArray<FItemNetInfo>* Items) { NativeCall<void, TArray<FItemNetInfo> *>((DWORD64)this, "AShooterPlayerController", "OnArkTributeAllClustersInventoryItemsLoaded", Items); }
	void OnArkTributeSaved(bool Success) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "OnArkTributeSaved", Success); }
	void ClientSetArkTributeLimits_Implementation(bool LimitItems, bool LimitDinos, bool LimitCharacters, int MaxItems, int MaxDinos, int MaxCharacters) { NativeCall<void, bool, bool, bool, int, int, int>((DWORD64)this, "AShooterPlayerController", "ClientSetArkTributeLimits_Implementation", LimitItems, LimitDinos, LimitCharacters, MaxItems, MaxDinos, MaxCharacters); }
	void ServerLoadArkInventoryItems_Implementation(TArray<FItemNetInfo>* ArkInventoryItemsInfo) { NativeCall<void, TArray<FItemNetInfo> *>((DWORD64)this, "AShooterPlayerController", "ServerLoadArkInventoryItems_Implementation", ArkInventoryItemsInfo); }
	void GetTamedDinosNearBy(TArray<TWeakObjectPtr<APrimalDinoCharacter>>* Dinos, float RangeRadius) { NativeCall<void, TArray<TWeakObjectPtr<APrimalDinoCharacter>> *, float>((DWORD64)this, "AShooterPlayerController", "GetTamedDinosNearBy", Dinos, RangeRadius); }
	bool IsTamedDinoNearBy(APrimalDinoCharacter* Dino, float RangeRadius) { return NativeCall<bool, APrimalDinoCharacter *, float>((DWORD64)this, "AShooterPlayerController", "IsTamedDinoNearBy", Dino, RangeRadius); }
	void RequestCreateNewPlayerWithArkData(TArray<unsigned char> PlayerArkDataBytes, unsigned __int64 TribeID) { NativeCall<void, TArray<unsigned char>, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "RequestCreateNewPlayerWithArkData", PlayerArkDataBytes, TribeID); }
	void LoadLocalPlayerArkData() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "LoadLocalPlayerArkData"); }
	void ServerLoadUploadedDinos_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerLoadUploadedDinos_Implementation"); }
	void ClientDownloadDinoRequestFinished_Implementation(bool Success) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ClientDownloadDinoRequestFinished_Implementation", Success); }
	void ServerLoadUploadedCharacters_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerLoadUploadedCharacters_Implementation"); }
	void ClientOnStartDownloadTransferredPlayerCharacter_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientOnStartDownloadTransferredPlayerCharacter_Implementation"); }
	void ClientOnEndDownloadTransferredPlayerCharacter_Implementation(bool Success, int FailureResponseCode, FString* FailureResponseMessage) { NativeCall<void, bool, int, FString *>((DWORD64)this, "AShooterPlayerController", "ClientOnEndDownloadTransferredPlayerCharacter_Implementation", Success, FailureResponseCode, FailureResponseMessage); }
	void DownloadTransferredPlayerCharacter() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "DownloadTransferredPlayerCharacter"); }
	void ClientDownloadPlayerCharacterRequestFinished_Implementation(bool Success) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ClientDownloadPlayerCharacterRequestFinished_Implementation", Success); }
	void ServerSetSubscribedApps_Implementation(TArray<int>* AppIDs) { NativeCall<void, TArray<int> *>((DWORD64)this, "AShooterPlayerController", "ServerSetSubscribedApps_Implementation", AppIDs); }
	void ServerGiveInitialInventory_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerGiveInitialInventory_Implementation"); }
	void ServerAddItemToSteamInventory(int ItemSteamDefID, int Quantity) { NativeCall<void, int, int>((DWORD64)this, "AShooterPlayerController", "ServerAddItemToSteamInventory", ItemSteamDefID, Quantity); }
	void ClientRemoveItemFromSteamInventory_Implementation(TArray<unsigned __int64>* ItemSteamUserID, int Quantity) { NativeCall<void, TArray<unsigned __int64> *, int>((DWORD64)this, "AShooterPlayerController", "ClientRemoveItemFromSteamInventory_Implementation", ItemSteamUserID, Quantity); }
	void ServerRemoveSteamItemSucceeded_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerRemoveSteamItemSucceeded_Implementation"); }
	void OnConsumeItemFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "OnConsumeItemFinished", bSuccess, SteamID); }
	void OnAddItemFinished(bool bSuccess, TArray<unsigned __int64> SteamItemUserIds, unsigned __int64 SteamID) { NativeCall<void, bool, TArray<unsigned __int64>, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "OnAddItemFinished", bSuccess, SteamItemUserIds, SteamID); }
	void ServerRefreshSteamInventoryForRemove() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerRefreshSteamInventoryForRemove"); }
	void ServerRefreshSteamInventoryToCheckConsume() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerRefreshSteamInventoryToCheckConsume"); }
	void ServerRefreshSteamInventory_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerRefreshSteamInventory_Implementation"); }
	void OnServerRefreshSteamInventoryFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "OnServerRefreshSteamInventoryFinished", bSuccess, SteamID); }
	void OnRefreshSteamInventoryToCheckConsumeFinished(bool bSuccess, unsigned __int64 SteamID) { NativeCall<void, bool, unsigned __int64>((DWORD64)this, "AShooterPlayerController", "OnRefreshSteamInventoryToCheckConsumeFinished", bSuccess, SteamID); }
	void ClientRefreshSteamInventoryFinished_Implementation(bool bSuccess) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ClientRefreshSteamInventoryFinished_Implementation", bSuccess); }
	void RefreshSteamInventory() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "RefreshSteamInventory"); }
	void ServerRemoveSteamItem_Implementation(unsigned int ItemdDefId) { NativeCall<void, unsigned int>((DWORD64)this, "AShooterPlayerController", "ServerRemoveSteamItem_Implementation", ItemdDefId); }
	void ReceivedPlayerState() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ReceivedPlayerState"); }
	void CloseSteamStatusScene() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "CloseSteamStatusScene"); }
	void ServerAllowPlayerToJoinNoCheck_Implementation(FString* PlayerId) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ServerAllowPlayerToJoinNoCheck_Implementation", PlayerId); }
	void ServerDisallowPlayerToJoinNoCheck_Implementation(FString* PlayerId) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ServerDisallowPlayerToJoinNoCheck_Implementation", PlayerId); }
	void ServerSendDirectMessage_Implementation(FString* PlayerSteamID, FString* MessageText) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerSendDirectMessage_Implementation", PlayerSteamID, MessageText); }
	void ServerListPlayers_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerListPlayers_Implementation"); }
	void KickPlayer(FString PlayerSteamName) { NativeCall<void, FString>((DWORD64)this, "AShooterPlayerController", "KickPlayer", PlayerSteamName); }
	void ServerKickPlayer_Implementation(FString* PlayerSteamName, FString* PlayerSteamID) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerKickPlayer_Implementation", PlayerSteamName, PlayerSteamID); }
	void BanPlayer(FString PlayerSteamName) { NativeCall<void, FString>((DWORD64)this, "AShooterPlayerController", "BanPlayer", PlayerSteamName); }
	void ServerBanPlayer_Implementation(FString* PlayerSteamName, FString* PlayerSteamID) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerBanPlayer_Implementation", PlayerSteamName, PlayerSteamID); }
	void UnbanPlayer(FString PlayerSteamName) { NativeCall<void, FString>((DWORD64)this, "AShooterPlayerController", "UnbanPlayer", PlayerSteamName); }
	void ServerUnbanPlayer_Implementation(FString* PlayerSteamName, FString* PlayerSteamID) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerUnbanPlayer_Implementation", PlayerSteamName, PlayerSteamID); }
	void SetKickedNotification(FString KickReason) { NativeCall<void, FString>((DWORD64)this, "AShooterPlayerController", "SetKickedNotification", KickReason); }
	void ClientUnlockAchievement_Implementation(FString* AchievementID) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ClientUnlockAchievement_Implementation", AchievementID); }
	void ClientNotifyLevelUp_Implementation(APrimalCharacter* ForChar, int NewLevel) { NativeCall<void, APrimalCharacter *, int>((DWORD64)this, "AShooterPlayerController", "ClientNotifyLevelUp_Implementation", ForChar, NewLevel); }
	void ClientNotifyAdmin_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyAdmin_Implementation"); }
	void ClientNotifyTorpidityIncrease_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyTorpidityIncrease_Implementation"); }
	void InitCharacterPainting_Implementation(APrimalCharacter* Char) { NativeCall<void, APrimalCharacter *>((DWORD64)this, "AShooterPlayerController", "InitCharacterPainting_Implementation", Char); }
	void ClientNotifyListenServerOutOfRange_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyListenServerOutOfRange_Implementation"); }
	void StopLoadingMusic() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "StopLoadingMusic"); }
	void FadeOutLoadingMusic() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "FadeOutLoadingMusic"); }
	void ChangeState(FName NewState) { NativeCall<void, FName>((DWORD64)this, "AShooterPlayerController", "ChangeState", NewState); }
	bool IsSpectator() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "IsSpectator"); }
	void ClientFailedRemoveSaddle_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientFailedRemoveSaddle_Implementation"); }
	void PrintColors() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "PrintColors"); }
	FString* ConsoleCommand(FString* result, FString* Command, bool bWriteToLog) { return NativeCall<FString *, FString *, FString *, bool>((DWORD64)this, "AShooterPlayerController", "ConsoleCommand", result, Command, bWriteToLog); }
	void GiveColors(int quantity) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "GiveColors", quantity); }
	void ClientShowPaintingUI_Implementation(UObject* ObjectToPaint) { NativeCall<void, UObject *>((DWORD64)this, "AShooterPlayerController", "ClientShowPaintingUI_Implementation", ObjectToPaint); }
	void HideRiders(bool bDoHide) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "HideRiders", bDoHide); }
	void SetAdminIcon(bool bAdminIcon) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "SetAdminIcon", bAdminIcon); }
	void SpawnPlayerCameraManager() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "SpawnPlayerCameraManager"); }
	void ServerSetSupressAdminIcon_Implementation(bool bSuppress) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ServerSetSupressAdminIcon_Implementation", bSuppress); }
	void NotifyTribeWarStatus_Implementation(FString* EnemyTribeString, int StatusType) { NativeCall<void, FString *, int>((DWORD64)this, "AShooterPlayerController", "NotifyTribeWarStatus_Implementation", EnemyTribeString, StatusType); }
	void ServerRequestTribeLog_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerRequestTribeLog_Implementation"); }
	void ClientStartReceivingTribeLog_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientStartReceivingTribeLog_Implementation"); }
	void ClientReceiveTribeLog_Implementation(FString* LogString) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ClientReceiveTribeLog_Implementation", LogString); }
	void ClientEndReceivingTribeLog_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientEndReceivingTribeLog_Implementation"); }
	void RPCStayAlive_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "RPCStayAlive_Implementation"); }
	FString* GetPlayerCharacterName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterPlayerController", "GetPlayerCharacterName", result); }
	void ClientCollectedAchievementItem_Implementation(TSubclassOf<UPrimalItem> ItemClass) { NativeCall<void, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterPlayerController", "ClientCollectedAchievementItem_Implementation", ItemClass); }
	bool UseTribeGroupRanks() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "UseTribeGroupRanks"); }
	bool IsTribeAdmin() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "IsTribeAdmin"); }
	void PlayHitMarkerCharacter_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "PlayHitMarkerCharacter_Implementation"); }
	void PlayHitMarkerStructure_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "PlayHitMarkerStructure_Implementation"); }
	void PlayHitMarkerCharacterAlly_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "PlayHitMarkerCharacterAlly_Implementation"); }
	void PlayHitMarkerStructureAlly_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "PlayHitMarkerStructureAlly_Implementation"); }
	void ClientShowTransferredPlayerConfirmationDialog_Implementation() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientShowTransferredPlayerConfirmationDialog_Implementation"); }
	void ShowTransferCharacterConfirmationDialog() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ShowTransferCharacterConfirmationDialog"); }
	void OnTransferCharacterConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "OnTransferCharacterConfirmationDialogClosed", bAccept); }
	void ServerTransferredPlayerConfirmationResult_Implementation(bool bAccpet) { NativeCall<void, bool>((DWORD64)this, "AShooterPlayerController", "ServerTransferredPlayerConfirmationResult_Implementation", bAccpet); }
	void ServerDownloadTransferredPlayer_Implementation(int spawnPoID, int spawnPoRegionIndex) { NativeCall<void, int, int>((DWORD64)this, "AShooterPlayerController", "ServerDownloadTransferredPlayer_Implementation", spawnPoID, spawnPoRegionIndex); }
	void GetAudioListenerPosition(FVector* OutLocation, FVector* OutFrontDir, FVector* OutRightDir) { NativeCall<void, FVector *, FVector *, FVector *>((DWORD64)this, "AShooterPlayerController", "GetAudioListenerPosition", OutLocation, OutFrontDir, OutRightDir); }
	void ServerStartWeaponFire_Implementation(AShooterWeapon* weapon) { NativeCall<void, AShooterWeapon *>((DWORD64)this, "AShooterPlayerController", "ServerStartWeaponFire_Implementation", weapon); }
	void ServerStopWeaponFire_Implementation(AShooterWeapon* weapon) { NativeCall<void, AShooterWeapon *>((DWORD64)this, "AShooterPlayerController", "ServerStopWeaponFire_Implementation", weapon); }
	void ServerStartWeaponAltFire_Implementation(AShooterWeapon* weapon) { NativeCall<void, AShooterWeapon *>((DWORD64)this, "AShooterPlayerController", "ServerStartWeaponAltFire_Implementation", weapon); }
	void ServerStopWeaponAltFire_Implementation(AShooterWeapon* weapon) { NativeCall<void, AShooterWeapon *>((DWORD64)this, "AShooterPlayerController", "ServerStopWeaponAltFire_Implementation", weapon); }
	void ClientStartSurfaceCameraForPassenger_Implementation(float yaw, float pitch, float roll, bool bInvertTurnInput) { NativeCall<void, float, float, float, bool>((DWORD64)this, "AShooterPlayerController", "ClientStartSurfaceCameraForPassenger_Implementation", yaw, pitch, roll, bInvertTurnInput); }
	void ServerUnlockPerMapExplorerNote_Implementation(int ExplorerNoteIndex) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "ServerUnlockPerMapExplorerNote_Implementation", ExplorerNoteIndex); }
	void UnlockExplorerNote(int ExplorerNoteIndex) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "UnlockExplorerNote", ExplorerNoteIndex); }
	void ClientUnlockExplorerNote_Implementation(int ExplorerNoteIndex) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "ClientUnlockExplorerNote_Implementation", ExplorerNoteIndex); }
	APawn* GetResponsibleDamager(AActor* DamageCauser) { return NativeCall<APawn *, AActor *>((DWORD64)this, "AShooterPlayerController", "GetResponsibleDamager", DamageCauser); }
	void UnlockEmote(FName EmoteName) { NativeCall<void, FName>((DWORD64)this, "AShooterPlayerController", "UnlockEmote", EmoteName); }
	bool IsEmoteUnlocked(FName EmoteName) { return NativeCall<bool, FName>((DWORD64)this, "AShooterPlayerController", "IsEmoteUnlocked", EmoteName); }
	int GetCurrentMultiUseWheelCategory() { return NativeCall<int>((DWORD64)this, "AShooterPlayerController", "GetCurrentMultiUseWheelCategory"); }
	void ServerRequestDinoAncestors_Implementation(APrimalDinoCharacter* ForDino) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterPlayerController", "ServerRequestDinoAncestors_Implementation", ForDino); }
	void OnPressGroupAddOrRemoveTame() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "OnPressGroupAddOrRemoveTame"); }
	AActor* BaseGetPlayerCharacter() { return NativeCall<AActor *>((DWORD64)this, "AShooterPlayerController", "BaseGetPlayerCharacter"); }
	void ClientNotifyUnlockedEngram_Implementation(TSubclassOf<UPrimalItem> ItemClass, bool bTekGram) { NativeCall<void, TSubclassOf<UPrimalItem>, bool>((DWORD64)this, "AShooterPlayerController", "ClientNotifyUnlockedEngram_Implementation", ItemClass, bTekGram); }
	void ClientTeleportSucceeded_Implementation(FVector TeleportLoc, FRotator TeleportRot) { NativeCall<void, FVector, FRotator>((DWORD64)this, "AShooterPlayerController", "ClientTeleportSucceeded_Implementation", TeleportLoc, TeleportRot); }
	bool IsAtPersonalTameLimit() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "IsAtPersonalTameLimit"); }
	FString* GetPersonalTameLimitString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterPlayerController", "GetPersonalTameLimitString", result); }
	void ClientSetPersonalDinoTameCount_Implementation(int NewPersonalDinoTameCount) { NativeCall<void, int>((DWORD64)this, "AShooterPlayerController", "ClientSetPersonalDinoTameCount_Implementation", NewPersonalDinoTameCount); }
	void UpdatePostProcessVolumes() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "UpdatePostProcessVolumes"); }
	bool IsSavingData() { return NativeCall<bool>((DWORD64)this, "AShooterPlayerController", "IsSavingData"); }
	void StaticRegisterNativesAShooterPlayerController() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "StaticRegisterNativesAShooterPlayerController"); }
	void CheckCheatsPassword(FString* pass) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "CheckCheatsPassword", pass); }
	void CheckRequestSpectator(FString* InSpectatorPass) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "CheckRequestSpectator", InSpectatorPass); }
	void ClientAddActorItem(UPrimalInventoryComponent* forInventory, FItemNetInfo itemInfo, bool bEquipItem, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool, bool>((DWORD64)this, "AShooterPlayerController", "ClientAddActorItem", forInventory, itemInfo, bEquipItem, ShowHUDNotification); }
	void ClientAddItemToArk(UPrimalInventoryComponent* forInventory, FItemNetInfo itemInfo, bool bFromLoad) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, bool>((DWORD64)this, "AShooterPlayerController", "ClientAddItemToArk", forInventory, itemInfo, bFromLoad); }
	void ClientChatMessage(FChatMessage Chat) { NativeCall<void, FChatMessage>((DWORD64)this, "AShooterPlayerController", "ClientChatMessage", Chat); }
	void ClientCollectedAchievementItem(TSubclassOf<UPrimalItem> ItemClass) { NativeCall<void, TSubclassOf<UPrimalItem>>((DWORD64)this, "AShooterPlayerController", "ClientCollectedAchievementItem", ItemClass); }
	void ClientDoMultiUse(UObject* ForObject, int useIndex) { NativeCall<void, UObject *, int>((DWORD64)this, "AShooterPlayerController", "ClientDoMultiUse", ForObject, useIndex); }
	void ClientFailedRemoveSaddle() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientFailedRemoveSaddle"); }
	void ClientFailedToAddItemFromArkInventory() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientFailedToAddItemFromArkInventory"); }
	void ClientInsertActorItem(UPrimalInventoryComponent* forInventory, FItemNetInfo itemInfo, FItemNetID InsertAfterItemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetInfo, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ClientInsertActorItem", forInventory, itemInfo, InsertAfterItemID); }
	void ClientNotifyAdmin() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyAdmin"); }
	void ClientNotifyDinoDeath(FString* DinoName, FString* AttackerName, bool bIsVehicle) { NativeCall<void, FString *, FString *, bool>((DWORD64)this, "AShooterPlayerController", "ClientNotifyDinoDeath", DinoName, AttackerName, bIsVehicle); }
	void ClientNotifyDinoKill(APrimalDinoCharacter* InstigatingPawn, APawn* VictimPawn) { NativeCall<void, APrimalDinoCharacter *, APawn *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyDinoKill", InstigatingPawn, VictimPawn); }
	void ClientNotifyEditText(TSubclassOf<UObject> ForObjectClass, unsigned int ExtraID1, unsigned int ExtraID2, UObject* ForObject) { NativeCall<void, TSubclassOf<UObject>, unsigned int, unsigned int, UObject *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyEditText", ForObjectClass, ExtraID1, ExtraID2, ForObject); }
	void ClientNotifyListenServerOutOfRange() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientNotifyListenServerOutOfRange"); }
	void ClientNotifyMessageOfTheDay(FString* Message, float timeToDisplay) { NativeCall<void, FString *, float>((DWORD64)this, "AShooterPlayerController", "ClientNotifyMessageOfTheDay", Message, timeToDisplay); }
	void ClientNotifyPlayerDeathReason(FString* ReasonString) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyPlayerDeathReason", ReasonString); }
	void ClientNotifyPlayerKill(AActor* PlayerPawn, APawn* VictimPawn) { NativeCall<void, AActor *, APawn *>((DWORD64)this, "AShooterPlayerController", "ClientNotifyPlayerKill", PlayerPawn, VictimPawn); }
	void ClientNotifyTamedDino(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>((DWORD64)this, "AShooterPlayerController", "ClientNotifyTamedDino", DinoClass); }
	void ClientOnAddedItemsToAllClustersInventory(bool Success, FString* UserId, TArray<int>* MasterIndexNum) { NativeCall<void, bool, FString *, TArray<int> *>((DWORD64)this, "AShooterPlayerController", "ClientOnAddedItemsToAllClustersInventory", Success, UserId, MasterIndexNum); }
	void ClientOnEndDownloadTransferredPlayerCharacter(bool Success, int FailureResponseCode, FString* FailureResponseMessage) { NativeCall<void, bool, int, FString *>((DWORD64)this, "AShooterPlayerController", "ClientOnEndDownloadTransferredPlayerCharacter", Success, FailureResponseCode, FailureResponseMessage); }
	void ClientPlayLocalSound(USoundBase* aSound) { NativeCall<void, USoundBase *>((DWORD64)this, "AShooterPlayerController", "ClientPlayLocalSound", aSound); }
	void ClientReceiveTribeLog(FString* LogString) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ClientReceiveTribeLog", LogString); }
	void ClientRemoveItemFromSteamInventory(TArray<unsigned __int64>* ItemSteamUserID, int Quantity) { NativeCall<void, TArray<unsigned __int64> *, int>((DWORD64)this, "AShooterPlayerController", "ClientRemoveItemFromSteamInventory", ItemSteamUserID, Quantity); }
	void ClientServerChatDirectMessage(FString* MessageText, FLinearColor MessageColor, bool bIsBold) { NativeCall<void, FString *, FLinearColor, bool>((DWORD64)this, "AShooterPlayerController", "ClientServerChatDirectMessage", MessageText, MessageColor, bIsBold); }
	void ClientServerNotification(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay) { NativeCall<void, FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>((DWORD64)this, "AShooterPlayerController", "ClientServerNotification", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	void ClientServerSOTFNotificationCustom(FString* MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D* MessageIcon, USoundBase* SoundToPlay) { NativeCall<void, FString *, FLinearColor, float, float, UTexture2D *, USoundBase *>((DWORD64)this, "AShooterPlayerController", "ClientServerSOTFNotificationCustom", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay); }
	void ClientSetArkTributeLimits(bool LimitItems, bool LimitDinos, bool LimitCharacters, int MaxItems, int MaxDinos, int MaxCharacters) { NativeCall<void, bool, bool, bool, int, int, int>((DWORD64)this, "AShooterPlayerController", "ClientSetArkTributeLimits", LimitItems, LimitDinos, LimitCharacters, MaxItems, MaxDinos, MaxCharacters); }
	void ClientShowCharacterCreationUI() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ClientShowCharacterCreationUI"); }
	void ClientShowPaintingUI(UObject* ObjectToPaint) { NativeCall<void, UObject *>((DWORD64)this, "AShooterPlayerController", "ClientShowPaintingUI", ObjectToPaint); }
	void ClientUnlockAchievement(FString* AchievementID) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ClientUnlockAchievement", AchievementID); }
	void NotifyTribeWarStatus(FString* EnemyTribeString, int StatusType) { NativeCall<void, FString *, int>((DWORD64)this, "AShooterPlayerController", "NotifyTribeWarStatus", EnemyTribeString, StatusType); }
	void ServerAddItemToCustomFolder(UPrimalInventoryComponent* forInventory, FString* CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, FString *, int, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerAddItemToCustomFolder", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerAllowPlayerToJoinNoCheck(FString* PlayerId) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ServerAllowPlayerToJoinNoCheck", PlayerId); }
	void ServerBanPlayer(FString* PlayerSteamName, FString* PlayerSteamID) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerBanPlayer", PlayerSteamName, PlayerSteamID); }
	void ServerCraftItem(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerCraftItem", inventoryComp, itemID); }
	void ServerDeleteCustomFolder(UPrimalInventoryComponent* forInventory, FString* CFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, FString *, int>((DWORD64)this, "AShooterPlayerController", "ServerDeleteCustomFolder", forInventory, CFolderName, InventoryCompType); }
	void ServerDeleteItemFromCustomFolder(UPrimalInventoryComponent* forInventory, FString* CFolderName, int InventoryCompType, FItemNetID ItemId) { NativeCall<void, UPrimalInventoryComponent *, FString *, int, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerDeleteItemFromCustomFolder", forInventory, CFolderName, InventoryCompType, ItemId); }
	void ServerDisallowPlayerToJoinNoCheck(FString* PlayerId) { NativeCall<void, FString *>((DWORD64)this, "AShooterPlayerController", "ServerDisallowPlayerToJoinNoCheck", PlayerId); }
	void ServerDropFromRemoteInventory(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerDropFromRemoteInventory", inventoryComp, itemID); }
	void ServerEquipPawnItem(FItemNetID itemID) { NativeCall<void, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerEquipPawnItem", itemID); }
	void ServerEquipToRemoteInventory(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerEquipToRemoteInventory", inventoryComp, itemID); }
	void ServerKickPlayer(FString* PlayerSteamName, FString* PlayerSteamID) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerKickPlayer", PlayerSteamName, PlayerSteamID); }
	void ServerMultiUse(UObject* ForObject, int useIndex) { NativeCall<void, UObject *, int>((DWORD64)this, "AShooterPlayerController", "ServerMultiUse", ForObject, useIndex); }
	void ServerRemovePassenger() { NativeCall<void>((DWORD64)this, "AShooterPlayerController", "ServerRemovePassenger"); }
	void ServerRemovePawnItem(FItemNetID itemID, bool bSecondryAction) { NativeCall<void, FItemNetID, bool>((DWORD64)this, "AShooterPlayerController", "ServerRemovePawnItem", itemID, bSecondryAction); }
	void ServerRepairItem(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRepairItem", inventoryComp, itemID); }
	void ServerRequestInventorySwapItems(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID1, FItemNetID itemID2) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventorySwapItems", inventoryComp, itemID1, itemID2); }
	void ServerRequestInventoryUseItem(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventoryUseItem", inventoryComp, itemID); }
	void ServerRequestInventoryUseItemWithActor(AActor* anActor, UPrimalInventoryComponent* inventoryComp, FItemNetID itemID1, int AdditionalData) { NativeCall<void, AActor *, UPrimalInventoryComponent *, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventoryUseItemWithActor", anActor, inventoryComp, itemID1, AdditionalData); }
	void ServerRequestInventoryUseItemWithItem(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID1, FItemNetID itemID2, int AdditionalData) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, FItemNetID, int>((DWORD64)this, "AShooterPlayerController", "ServerRequestInventoryUseItemWithItem", inventoryComp, itemID1, itemID2, AdditionalData); }
	void ServerRequestRemoveWeaponClipAmmo(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID>((DWORD64)this, "AShooterPlayerController", "ServerRequestRemoveWeaponClipAmmo", inventoryComp, itemID); }
	void ServerSendChatMessage(FString* ChatMessage, EChatSendMode::Type SendMode) { NativeCall<void, FString *, EChatSendMode::Type>((DWORD64)this, "AShooterPlayerController", "ServerSendChatMessage", ChatMessage, SendMode); }
	void ServerSendDirectMessage(FString* PlayerSteamID, FString* Message) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerSendDirectMessage", PlayerSteamID, Message); }
	void ServerTransferFromRemoteInventory(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID, int requestedQuantity, int ToSlotIndex, bool bEquipItem) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, int, int, bool>((DWORD64)this, "AShooterPlayerController", "ServerTransferFromRemoteInventory", inventoryComp, itemID, requestedQuantity, ToSlotIndex, bEquipItem); }
	void ServerTransferToRemoteInventory(UPrimalInventoryComponent* inventoryComp, FItemNetID itemID, bool bAlsoTryToEqup, int requestedQuantity) { NativeCall<void, UPrimalInventoryComponent *, FItemNetID, bool, int>((DWORD64)this, "AShooterPlayerController", "ServerTransferToRemoteInventory", inventoryComp, itemID, bAlsoTryToEqup, requestedQuantity); }
	void ServerUnbanPlayer(FString* PlayerSteamName, FString* PlayerSteamID) { NativeCall<void, FString *, FString *>((DWORD64)this, "AShooterPlayerController", "ServerUnbanPlayer", PlayerSteamName, PlayerSteamID); }
	void ServerUploadCurrentCharacterAndItems(UPrimalInventoryComponent* inventoryComp) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "AShooterPlayerController", "ServerUploadCurrentCharacterAndItems", inventoryComp); }
};

// Character

struct ACharacter : public APawn
{
	FVector GetBaseTranslationOffsetField() const { return GetNativeField<FVector>(this, "ACharacter", "BaseTranslationOffset"); }
	void SetBaseTranslationOffsetField(FVector newValue) { SetNativeField(this, "ACharacter", "BaseTranslationOffset", newValue); }
	char GetReplicatedMovementModeField() const { return GetNativeField<char>(this, "ACharacter", "ReplicatedMovementMode"); }
	void SetReplicatedMovementModeField(char newValue) { SetNativeField(this, "ACharacter", "ReplicatedMovementMode", newValue); }
	bool GetbInBaseReplicationField() const { return GetNativeField<bool>(this, "ACharacter", "bInBaseReplication"); }
	void SetbInBaseReplicationField(bool newValue) { SetNativeField(this, "ACharacter", "bInBaseReplication", newValue); }
	float GetLeftDynamicActorBaseTimeField() const { return GetNativeField<float>(this, "ACharacter", "LeftDynamicActorBaseTime"); }
	void SetLeftDynamicActorBaseTimeField(float newValue) { SetNativeField(this, "ACharacter", "LeftDynamicActorBaseTime", newValue); }
	float GetCrouchedEyeHeightField() const { return GetNativeField<float>(this, "ACharacter", "CrouchedEyeHeight"); }
	void SetCrouchedEyeHeightField(float newValue) { SetNativeField(this, "ACharacter", "CrouchedEyeHeight", newValue); }
	float GetProneEyeHeightField() const { return GetNativeField<float>(this, "ACharacter", "ProneEyeHeight"); }
	void SetProneEyeHeightField(float newValue) { SetNativeField(this, "ACharacter", "ProneEyeHeight", newValue); }
	float GetJumpKeyHoldTimeField() const { return GetNativeField<float>(this, "ACharacter", "JumpKeyHoldTime"); }
	void SetJumpKeyHoldTimeField(float newValue) { SetNativeField(this, "ACharacter", "JumpKeyHoldTime", newValue); }
	float GetJumpMaxHoldTimeField() const { return GetNativeField<float>(this, "ACharacter", "JumpMaxHoldTime"); }
	void SetJumpMaxHoldTimeField(float newValue) { SetNativeField(this, "ACharacter", "JumpMaxHoldTime", newValue); }

	// Functions

	bool NotifyLanded(FHitResult* Hit) { return NativeCall<bool, FHitResult *>((DWORD64)this, "ACharacter", "NotifyLanded", Hit); }
	bool IsJumping() { return NativeCall<bool>((DWORD64)this, "ACharacter", "IsJumping"); }
	void GetSimpleCollisionCylinder(float* CollisionRadius, float* CollisionHalfHeight) { NativeCall<void, float *, float *>((DWORD64)this, "ACharacter", "GetSimpleCollisionCylinder", CollisionRadius, CollisionHalfHeight); }
	void ApplyWorldOffset(FVector* InOffset, bool bWorldShift) { NativeCall<void, FVector *, bool>((DWORD64)this, "ACharacter", "ApplyWorldOffset", InOffset, bWorldShift); }
	float GetDefaultHalfHeight() { return NativeCall<float>((DWORD64)this, "ACharacter", "GetDefaultHalfHeight"); }
	void Landed(FHitResult* Hit) { NativeCall<void, FHitResult *>((DWORD64)this, "ACharacter", "Landed", Hit); }
	bool CanJump() { return NativeCall<bool>((DWORD64)this, "ACharacter", "CanJump"); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>((DWORD64)this, "ACharacter", "CanJumpInternal_Implementation"); }
	bool DoJump(bool bReplayingMoves) { return NativeCall<bool, bool>((DWORD64)this, "ACharacter", "DoJump", bReplayingMoves); }
	void RecalculateBaseEyeHeight() { NativeCall<void>((DWORD64)this, "ACharacter", "RecalculateBaseEyeHeight"); }
	void OnRep_IsCrouched() { NativeCall<void>((DWORD64)this, "ACharacter", "OnRep_IsCrouched"); }
	void OnRep_IsProne() { NativeCall<void>((DWORD64)this, "ACharacter", "OnRep_IsProne"); }
	bool CanCrouch() { return NativeCall<bool>((DWORD64)this, "ACharacter", "CanCrouch"); }
	void Crouch(bool bClientSimulation) { NativeCall<void, bool>((DWORD64)this, "ACharacter", "Crouch", bClientSimulation); }
	void UnCrouch(bool bClientSimulation) { NativeCall<void, bool>((DWORD64)this, "ACharacter", "UnCrouch", bClientSimulation); }
	bool CanProne() { return NativeCall<bool>((DWORD64)this, "ACharacter", "CanProne"); }
	void Prone(bool bClientSimulation) { NativeCall<void, bool>((DWORD64)this, "ACharacter", "Prone", bClientSimulation); }
	void UnProne(bool bClientSimulation) { NativeCall<void, bool>((DWORD64)this, "ACharacter", "UnProne", bClientSimulation); }
	void OnEndCrouch(float HeightAdjust, float ScaledHeightAdjust) { NativeCall<void, float, float>((DWORD64)this, "ACharacter", "OnEndCrouch", HeightAdjust, ScaledHeightAdjust); }
	void OnStartCrouch(float HeightAdjust, float ScaledHeightAdjust) { NativeCall<void, float, float>((DWORD64)this, "ACharacter", "OnStartCrouch", HeightAdjust, ScaledHeightAdjust); }
	void ApplyDamageMomentum(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "ACharacter", "ApplyDamageMomentum", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void TeleportSucceeded(bool bIsATest) { NativeCall<void, bool>((DWORD64)this, "ACharacter", "TeleportSucceeded", bIsATest); }
	void ClearCrossLevelReferences() { NativeCall<void>((DWORD64)this, "ACharacter", "ClearCrossLevelReferences"); }
	bool IsBasedOnDynamicActor() { return NativeCall<bool>((DWORD64)this, "ACharacter", "IsBasedOnDynamicActor"); }
	void TurnOff() { NativeCall<void>((DWORD64)this, "ACharacter", "TurnOff"); }
	void Restart() { NativeCall<void>((DWORD64)this, "ACharacter", "Restart"); }
	void PawnClientRestart() { NativeCall<void>((DWORD64)this, "ACharacter", "PawnClientRestart"); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController *>((DWORD64)this, "ACharacter", "PossessedBy", NewController); }
	void UnPossessed() { NativeCall<void>((DWORD64)this, "ACharacter", "UnPossessed"); }
	void TornOff() { NativeCall<void>((DWORD64)this, "ACharacter", "TornOff"); }
	void BaseChange() { NativeCall<void>((DWORD64)this, "ACharacter", "BaseChange"); }
	void LaunchCharacter() { NativeCall<void>((DWORD64)this, "ACharacter", "LaunchCharacter"); }
	bool ShouldNotifyLanded(FHitResult* Hit) { return NativeCall<bool, FHitResult *>((DWORD64)this, "ACharacter", "ShouldNotifyLanded", Hit); }
	void Jump() { NativeCall<void>((DWORD64)this, "ACharacter", "Jump"); }
	void StopJumping() { NativeCall<void>((DWORD64)this, "ACharacter", "StopJumping"); }
	void CheckJumpInput(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "ACharacter", "CheckJumpInput", DeltaTime); }
	void ClearJumpInput() { NativeCall<void>((DWORD64)this, "ACharacter", "ClearJumpInput"); }
	float GetJumpMaxHoldTime() { return NativeCall<float>((DWORD64)this, "ACharacter", "GetJumpMaxHoldTime"); }
	void PreNetReceive() { NativeCall<void>((DWORD64)this, "ACharacter", "PreNetReceive"); }
	void PostNetReceive() { NativeCall<void>((DWORD64)this, "ACharacter", "PostNetReceive"); }
	void OnRep_ReplicatedBasedMovement() { NativeCall<void>((DWORD64)this, "ACharacter", "OnRep_ReplicatedBasedMovement"); }
	void OnRep_ReplicatedMovement() { NativeCall<void>((DWORD64)this, "ACharacter", "OnRep_ReplicatedMovement"); }
	void OnRep_RootMotion() { NativeCall<void>((DWORD64)this, "ACharacter", "OnRep_RootMotion"); }
	void SimulatedRootMotionPositionFixup(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "ACharacter", "SimulatedRootMotionPositionFixup", DeltaSeconds); }
	void UpdateSimulatedPosition(FVector* NewLocation, FRotator* NewRotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "ACharacter", "UpdateSimulatedPosition", NewLocation, NewRotation); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>((DWORD64)this, "ACharacter", "PostNetReceiveLocationAndRotation"); }
	bool TeleportTo(FVector* DestLocation, FRotator* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, FVector *, FRotator *, bool, bool>((DWORD64)this, "ACharacter", "TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	bool IsPlayingRootMotion() { return NativeCall<bool>((DWORD64)this, "ACharacter", "IsPlayingRootMotion"); }
	//float PlayAnimMontage(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, UAnimMontage *, float, FName, bool, bool>((DWORD64)this, "ACharacter", "PlayAnimMontage", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	//void StopAnimMontage(UAnimMontage * AnimMontage) { NativeCall<void, UAnimMontage *>((DWORD64)this, "ACharacter", "StopAnimMontage", AnimMontage); }
	//UAnimMontage * GetCurrentMontage() { return NativeCall<UAnimMontage *>((DWORD64)this, "ACharacter", "GetCurrentMontage"); }
	void ClientCheatWalk_Implementation() { NativeCall<void>((DWORD64)this, "ACharacter", "ClientCheatWalk_Implementation"); }
	void ClientCheatFly_Implementation() { NativeCall<void>((DWORD64)this, "ACharacter", "ClientCheatFly_Implementation"); }
	void ClientCheatGhost_Implementation() { NativeCall<void>((DWORD64)this, "ACharacter", "ClientCheatGhost_Implementation"); }
	bool ShouldReplicateRotPitch() { return NativeCall<bool>((DWORD64)this, "ACharacter", "ShouldReplicateRotPitch"); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "ACharacter", "GetPrivateStaticClass"); }
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>((DWORD64)this, "ACharacter", "K2_OnEndCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>((DWORD64)this, "ACharacter", "K2_OnStartCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void K2_UpdateCustomMovement(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "ACharacter", "K2_UpdateCustomMovement", DeltaTime); }
	void OnJumped() { NativeCall<void>((DWORD64)this, "ACharacter", "OnJumped"); }
	void OnLanded(FHitResult* Hit) { NativeCall<void, FHitResult *>((DWORD64)this, "ACharacter", "OnLanded", Hit); }
	void OnLaunched() { NativeCall<void>((DWORD64)this, "ACharacter", "OnLaunched"); }
	void OnWalkingOffLedge() { NativeCall<void>((DWORD64)this, "ACharacter", "OnWalkingOffLedge"); }
};

struct APrimalCharacter : public ACharacter
{
	FVector GetOldLocationField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "OldLocation"); }
	void SetOldLocationField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "OldLocation", newValue); }
	FRotator GetOldRotationField() const { return GetNativeField<FRotator>(this, "APrimalCharacter", "OldRotation"); }
	void SetOldRotationField(FRotator newValue) { SetNativeField(this, "APrimalCharacter", "OldRotation", newValue); }
	float GetEffectorInterpSpeedField() const { return GetNativeField<float>(this, "APrimalCharacter", "EffectorInterpSpeed"); }
	void SetEffectorInterpSpeedField(float newValue) { SetNativeField(this, "APrimalCharacter", "EffectorInterpSpeed", newValue); }
	float GetHalfLegLengthField() const { return GetNativeField<float>(this, "APrimalCharacter", "HalfLegLength"); }
	void SetHalfLegLengthField(float newValue) { SetNativeField(this, "APrimalCharacter", "HalfLegLength", newValue); }
	float GetTwoLeggedVirtualPointDistFactorField() const { return GetNativeField<float>(this, "APrimalCharacter", "TwoLeggedVirtualPointDistFactor"); }
	void SetTwoLeggedVirtualPointDistFactorField(float newValue) { SetNativeField(this, "APrimalCharacter", "TwoLeggedVirtualPointDistFactor", newValue); }
	float GetFullIKDistanceField() const { return GetNativeField<float>(this, "APrimalCharacter", "FullIKDistance"); }
	void SetFullIKDistanceField(float newValue) { SetNativeField(this, "APrimalCharacter", "FullIKDistance", newValue); }
	float GetSimpleIkRateField() const { return GetNativeField<float>(this, "APrimalCharacter", "SimpleIkRate"); }
	void SetSimpleIkRateField(float newValue) { SetNativeField(this, "APrimalCharacter", "SimpleIkRate", newValue); }
	FVector GetGroundCheckExtentField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "GroundCheckExtent"); }
	void SetGroundCheckExtentField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "GroundCheckExtent", newValue); }
	long double GetLastForceAimedCharactersTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastForceAimedCharactersTime"); }
	void SetLastForceAimedCharactersTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastForceAimedCharactersTime", newValue); }
	//TArray<APrimalBuff *> GetBuffsField() const { return GetNativeField<TArray<APrimalBuff *>>(this, "APrimalCharacter", "Buffs"); }
	//void SetBuffsField(TArray<APrimalBuff *> newValue) { SetNativeField(this, "APrimalCharacter", "Buffs", newValue); }
	FString GetTribeNameField() const { return GetNativeField<FString>(this, "APrimalCharacter", "TribeName"); }
	void SetTribeNameField(FString newValue) { SetNativeField(this, "APrimalCharacter", "TribeName", newValue); }
	float GetWaterSubmergedDepthThresholdField() const { return GetNativeField<float>(this, "APrimalCharacter", "WaterSubmergedDepthThreshold"); }
	void SetWaterSubmergedDepthThresholdField(float newValue) { SetNativeField(this, "APrimalCharacter", "WaterSubmergedDepthThreshold", newValue); }
	float GetProneWaterSubmergedDepthThresholdField() const { return GetNativeField<float>(this, "APrimalCharacter", "ProneWaterSubmergedDepthThreshold"); }
	void SetProneWaterSubmergedDepthThresholdField(float newValue) { SetNativeField(this, "APrimalCharacter", "ProneWaterSubmergedDepthThreshold", newValue); }
	TEnumAsByte<enum EMovementMode> GetSubmergedWaterMovementModeField() const { return GetNativeField<TEnumAsByte<enum EMovementMode>>(this, "APrimalCharacter", "SubmergedWaterMovementMode"); }
	void SetSubmergedWaterMovementModeField(TEnumAsByte<enum EMovementMode> newValue) { SetNativeField(this, "APrimalCharacter", "SubmergedWaterMovementMode", newValue); }
	TEnumAsByte<enum EMovementMode> GetUnSubmergedWaterMovementModeField() const { return GetNativeField<TEnumAsByte<enum EMovementMode>>(this, "APrimalCharacter", "UnSubmergedWaterMovementMode"); }
	void SetUnSubmergedWaterMovementModeField(TEnumAsByte<enum EMovementMode> newValue) { SetNativeField(this, "APrimalCharacter", "UnSubmergedWaterMovementMode", newValue); }
	TSubclassOf<UPrimalItem> GetPoopItemClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalCharacter", "PoopItemClass"); }
	void SetPoopItemClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalCharacter", "PoopItemClass", newValue); }
	FName GetDragBoneNameField() const { return GetNativeField<FName>(this, "APrimalCharacter", "DragBoneName"); }
	void SetDragBoneNameField(FName newValue) { SetNativeField(this, "APrimalCharacter", "DragBoneName", newValue); }
	FName GetDragSocketNameField() const { return GetNativeField<FName>(this, "APrimalCharacter", "DragSocketName"); }
	void SetDragSocketNameField(FName newValue) { SetNativeField(this, "APrimalCharacter", "DragSocketName", newValue); }
	float GetMaxDragDistanceField() const { return GetNativeField<float>(this, "APrimalCharacter", "MaxDragDistance"); }
	void SetMaxDragDistanceField(float newValue) { SetNativeField(this, "APrimalCharacter", "MaxDragDistance", newValue); }
	float GetMaxDragDistanceTimeoutField() const { return GetNativeField<float>(this, "APrimalCharacter", "MaxDragDistanceTimeout"); }
	void SetMaxDragDistanceTimeoutField(float newValue) { SetNativeField(this, "APrimalCharacter", "MaxDragDistanceTimeout", newValue); }
	TArray<FName> GetBonesToIngoreWhileDraggedField() const { return GetNativeField<TArray<FName>>(this, "APrimalCharacter", "BonesToIngoreWhileDragged"); }
	void SetBonesToIngoreWhileDraggedField(TArray<FName> newValue) { SetNativeField(this, "APrimalCharacter", "BonesToIngoreWhileDragged", newValue); }
	float GetPreviewCameraMaxZoomMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "PreviewCameraMaxZoomMultiplier"); }
	void SetPreviewCameraMaxZoomMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "PreviewCameraMaxZoomMultiplier", newValue); }
	float GetPreviewCameraDefaultZoomMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "PreviewCameraDefaultZoomMultiplier"); }
	void SetPreviewCameraDefaultZoomMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "PreviewCameraDefaultZoomMultiplier", newValue); }
	float GetPreviewCameraDistanceScaleFactorField() const { return GetNativeField<float>(this, "APrimalCharacter", "PreviewCameraDistanceScaleFactor"); }
	void SetPreviewCameraDistanceScaleFactorField(float newValue) { SetNativeField(this, "APrimalCharacter", "PreviewCameraDistanceScaleFactor", newValue); }
	APrimalCharacter* GetDraggedCharacterField() const { return GetNativeField<APrimalCharacter *>(this, "APrimalCharacter", "DraggedCharacter"); }
	void SetDraggedCharacterField(APrimalCharacter* newValue) { SetNativeField(this, "APrimalCharacter", "DraggedCharacter", newValue); }
	APrimalCharacter* GetDraggingCharacterField() const { return GetNativeField<APrimalCharacter *>(this, "APrimalCharacter", "DraggingCharacter"); }
	void SetDraggingCharacterField(APrimalCharacter* newValue) { SetNativeField(this, "APrimalCharacter", "DraggingCharacter", newValue); }
	FTransform GetLocalDraggedCharacterTransformField() const { return GetNativeField<FTransform>(this, "APrimalCharacter", "LocalDraggedCharacterTransform"); }
	void SetLocalDraggedCharacterTransformField(FTransform newValue) { SetNativeField(this, "APrimalCharacter", "LocalDraggedCharacterTransform", newValue); }
	long double GetStartDraggingTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "StartDraggingTime"); }
	void SetStartDraggingTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "StartDraggingTime", newValue); }
	long double GetLastDragUpdateTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastDragUpdateTime"); }
	void SetLastDragUpdateTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastDragUpdateTime", newValue); }
	AActor* GetImmobilizationActorField() const { return GetNativeField<AActor *>(this, "APrimalCharacter", "ImmobilizationActor"); }
	void SetImmobilizationActorField(AActor* newValue) { SetNativeField(this, "APrimalCharacter", "ImmobilizationActor", newValue); }
	int GetCurrentFrameAnimPreventInputField() const { return GetNativeField<int>(this, "APrimalCharacter", "CurrentFrameAnimPreventInput"); }
	void SetCurrentFrameAnimPreventInputField(int newValue) { SetNativeField(this, "APrimalCharacter", "CurrentFrameAnimPreventInput", newValue); }
	float GetBPTimerServerMinField() const { return GetNativeField<float>(this, "APrimalCharacter", "BPTimerServerMin"); }
	void SetBPTimerServerMinField(float newValue) { SetNativeField(this, "APrimalCharacter", "BPTimerServerMin", newValue); }
	float GetBPTimerServerMaxField() const { return GetNativeField<float>(this, "APrimalCharacter", "BPTimerServerMax"); }
	void SetBPTimerServerMaxField(float newValue) { SetNativeField(this, "APrimalCharacter", "BPTimerServerMax", newValue); }
	float GetBPTimerNonDedicatedMinField() const { return GetNativeField<float>(this, "APrimalCharacter", "BPTimerNonDedicatedMin"); }
	void SetBPTimerNonDedicatedMinField(float newValue) { SetNativeField(this, "APrimalCharacter", "BPTimerNonDedicatedMin", newValue); }
	float GetBPTimerNonDedicatedMaxField() const { return GetNativeField<float>(this, "APrimalCharacter", "BPTimerNonDedicatedMax"); }
	void SetBPTimerNonDedicatedMaxField(float newValue) { SetNativeField(this, "APrimalCharacter", "BPTimerNonDedicatedMax", newValue); }
	long double GetNextBPTimerServerField() const { return GetNativeField<long double>(this, "APrimalCharacter", "NextBPTimerServer"); }
	void SetNextBPTimerServerField(long double newValue) { SetNativeField(this, "APrimalCharacter", "NextBPTimerServer", newValue); }
	long double GetNextBPTimerNonDedicatedField() const { return GetNativeField<long double>(this, "APrimalCharacter", "NextBPTimerNonDedicated"); }
	void SetNextBPTimerNonDedicatedField(long double newValue) { SetNativeField(this, "APrimalCharacter", "NextBPTimerNonDedicated", newValue); }
	TArray<TSubclassOf<APrimalStructure>> GetImmobilizationTrapsToIgnoreField() const { return GetNativeField<TArray<TSubclassOf<APrimalStructure>>>(this, "APrimalCharacter", "ImmobilizationTrapsToIgnore"); }
	void SetImmobilizationTrapsToIgnoreField(TArray<TSubclassOf<APrimalStructure>> newValue) { SetNativeField(this, "APrimalCharacter", "ImmobilizationTrapsToIgnore", newValue); }
	//TWeakObjectPtr<APrimalStructureElevatorPlatform> GetBasedElevatorField() const { return GetNativeField<TWeakObjectPtr<APrimalStructureElevatorPlatform>>(this, "APrimalCharacter", "BasedElevator"); }
	TWeakObjectPtr<APrimalDinoCharacter> GetCarryingDinoField() const { return GetNativeField<TWeakObjectPtr<APrimalDinoCharacter>>(this, "APrimalCharacter", "CarryingDino"); }
	FName GetDediOverrideCapsuleCollisionProfileNameField() const { return GetNativeField<FName>(this, "APrimalCharacter", "DediOverrideCapsuleCollisionProfileName"); }
	void SetDediOverrideCapsuleCollisionProfileNameField(FName newValue) { SetNativeField(this, "APrimalCharacter", "DediOverrideCapsuleCollisionProfileName", newValue); }
	FName GetDediOverrideMeshCollisionProfileNameField() const { return GetNativeField<FName>(this, "APrimalCharacter", "DediOverrideMeshCollisionProfileName"); }
	void SetDediOverrideMeshCollisionProfileNameField(FName newValue) { SetNativeField(this, "APrimalCharacter", "DediOverrideMeshCollisionProfileName", newValue); }
	FName GetSnaredFromSocketField() const { return GetNativeField<FName>(this, "APrimalCharacter", "SnaredFromSocket"); }
	void SetSnaredFromSocketField(FName newValue) { SetNativeField(this, "APrimalCharacter", "SnaredFromSocket", newValue); }
	float GetDamageNotifyTeamAggroMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "DamageNotifyTeamAggroMultiplier"); }
	void SetDamageNotifyTeamAggroMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "DamageNotifyTeamAggroMultiplier", newValue); }
	float GetDamageNotifyTeamAggroRangeField() const { return GetNativeField<float>(this, "APrimalCharacter", "DamageNotifyTeamAggroRange"); }
	void SetDamageNotifyTeamAggroRangeField(float newValue) { SetNativeField(this, "APrimalCharacter", "DamageNotifyTeamAggroRange", newValue); }
	float GetDamageNotifyTeamAggroRangeFalloffField() const { return GetNativeField<float>(this, "APrimalCharacter", "DamageNotifyTeamAggroRangeFalloff"); }
	void SetDamageNotifyTeamAggroRangeFalloffField(float newValue) { SetNativeField(this, "APrimalCharacter", "DamageNotifyTeamAggroRangeFalloff", newValue); }
	float GetReplicatedCurrentHealthField() const { return GetNativeField<float>(this, "APrimalCharacter", "ReplicatedCurrentHealth"); }
	void SetReplicatedCurrentHealthField(float newValue) { SetNativeField(this, "APrimalCharacter", "ReplicatedCurrentHealth", newValue); }
	float GetReplicatedMaxHealthField() const { return GetNativeField<float>(this, "APrimalCharacter", "ReplicatedMaxHealth"); }
	void SetReplicatedMaxHealthField(float newValue) { SetNativeField(this, "APrimalCharacter", "ReplicatedMaxHealth", newValue); }
	float GetReplicatedCurrentTorporField() const { return GetNativeField<float>(this, "APrimalCharacter", "ReplicatedCurrentTorpor"); }
	void SetReplicatedCurrentTorporField(float newValue) { SetNativeField(this, "APrimalCharacter", "ReplicatedCurrentTorpor", newValue); }
	float GetReplicatedMaxTorporField() const { return GetNativeField<float>(this, "APrimalCharacter", "ReplicatedMaxTorpor"); }
	void SetReplicatedMaxTorporField(float newValue) { SetNativeField(this, "APrimalCharacter", "ReplicatedMaxTorpor", newValue); }
	FVector GetDragOffsetField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "DragOffset"); }
	void SetDragOffsetField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "DragOffset", newValue); }
	AShooterCharacter* GetLastGrapHookPullingOwnerField() const { return GetNativeField<AShooterCharacter *>(this, "APrimalCharacter", "LastGrapHookPullingOwner"); }
	void SetLastGrapHookPullingOwnerField(AShooterCharacter* newValue) { SetNativeField(this, "APrimalCharacter", "LastGrapHookPullingOwner", newValue); }
	long double GetLastIkUpdateTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastIkUpdateTime"); }
	void SetLastIkUpdateTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastIkUpdateTime", newValue); }
	long double GetLastUpdatedAimOffsetsTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastUpdatedAimOffsetsTime"); }
	void SetLastUpdatedAimOffsetsTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastUpdatedAimOffsetsTime", newValue); }
	FVector GetMeshPreRagdollRelativeLocationField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "MeshPreRagdollRelativeLocation"); }
	void SetMeshPreRagdollRelativeLocationField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "MeshPreRagdollRelativeLocation", newValue); }
	FRotator GetMeshPreRagdollRelativeRotationField() const { return GetNativeField<FRotator>(this, "APrimalCharacter", "MeshPreRagdollRelativeRotation"); }
	void SetMeshPreRagdollRelativeRotationField(FRotator newValue) { SetNativeField(this, "APrimalCharacter", "MeshPreRagdollRelativeRotation", newValue); }
	int GetDraggingBodyIndexField() const { return GetNativeField<int>(this, "APrimalCharacter", "DraggingBodyIndex"); }
	void SetDraggingBodyIndexField(int newValue) { SetNativeField(this, "APrimalCharacter", "DraggingBodyIndex", newValue); }
	int GetDraggedBoneIndexField() const { return GetNativeField<int>(this, "APrimalCharacter", "DraggedBoneIndex"); }
	void SetDraggedBoneIndexField(int newValue) { SetNativeField(this, "APrimalCharacter", "DraggedBoneIndex", newValue); }
	float GetRunningSpeedModifierField() const { return GetNativeField<float>(this, "APrimalCharacter", "RunningSpeedModifier"); }
	void SetRunningSpeedModifierField(float newValue) { SetNativeField(this, "APrimalCharacter", "RunningSpeedModifier", newValue); }
	float GetLowHealthPercentageField() const { return GetNativeField<float>(this, "APrimalCharacter", "LowHealthPercentage"); }
	void SetLowHealthPercentageField(float newValue) { SetNativeField(this, "APrimalCharacter", "LowHealthPercentage", newValue); }
	float GetBaseTurnRateField() const { return GetNativeField<float>(this, "APrimalCharacter", "BaseTurnRate"); }
	void SetBaseTurnRateField(float newValue) { SetNativeField(this, "APrimalCharacter", "BaseTurnRate", newValue); }
	float GetBaseLookUpRateField() const { return GetNativeField<float>(this, "APrimalCharacter", "BaseLookUpRate"); }
	void SetBaseLookUpRateField(float newValue) { SetNativeField(this, "APrimalCharacter", "BaseLookUpRate", newValue); }
	float GetMaxFallSpeedField() const { return GetNativeField<float>(this, "APrimalCharacter", "MaxFallSpeed"); }
	void SetMaxFallSpeedField(float newValue) { SetNativeField(this, "APrimalCharacter", "MaxFallSpeed", newValue); }
	float GetFallDamageMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "FallDamageMultiplier"); }
	void SetFallDamageMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "FallDamageMultiplier", newValue); }
	float GetCurrentCarriedYawField() const { return GetNativeField<float>(this, "APrimalCharacter", "CurrentCarriedYaw"); }
	void SetCurrentCarriedYawField(float newValue) { SetNativeField(this, "APrimalCharacter", "CurrentCarriedYaw", newValue); }
	//APrimalStructureExplosiveTransGPS * GetCurrentTransponderField() const { return GetNativeField<APrimalStructureExplosiveTransGPS *>(this, "APrimalCharacter", "CurrentTransponder"); }
	float GetTargetCarriedYawField() const { return GetNativeField<float>(this, "APrimalCharacter", "TargetCarriedYaw"); }
	void SetTargetCarriedYawField(float newValue) { SetNativeField(this, "APrimalCharacter", "TargetCarriedYaw", newValue); }
	float GetServerTargetCarriedYawField() const { return GetNativeField<float>(this, "APrimalCharacter", "ServerTargetCarriedYaw"); }
	void SetServerTargetCarriedYawField(float newValue) { SetNativeField(this, "APrimalCharacter", "ServerTargetCarriedYaw", newValue); }
	TWeakObjectPtr<APrimalDinoCharacter> GetMountedDinoField() const { return GetNativeField<TWeakObjectPtr<APrimalDinoCharacter>>(this, "APrimalCharacter", "MountedDino"); }
	float GetMountedDinoTimeField() const { return GetNativeField<float>(this, "APrimalCharacter", "MountedDinoTime"); }
	TWeakObjectPtr<APrimalDinoCharacter> GetPreviousMountedDinoField() const { return GetNativeField<TWeakObjectPtr<APrimalDinoCharacter>>(this, "APrimalCharacter", "PreviousMountedDino"); }
	FVector GetLastForceFallCheckBaseLocationField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "LastForceFallCheckBaseLocation"); }
	void SetLastForceFallCheckBaseLocationField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "LastForceFallCheckBaseLocation", newValue); }
	FVector GetLastHitWallSweepCheckLocationField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "LastHitWallSweepCheckLocation"); }
	void SetLastHitWallSweepCheckLocationField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "LastHitWallSweepCheckLocation", newValue); }
	long double GetLastTimeBasedMovementHadCurrentActorField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastTimeBasedMovementHadCurrentActor"); }
	void SetLastTimeBasedMovementHadCurrentActorField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastTimeBasedMovementHadCurrentActor", newValue); }
	float GetGrabWeightThresholdField() const { return GetNativeField<float>(this, "APrimalCharacter", "GrabWeightThreshold"); }
	void SetGrabWeightThresholdField(float newValue) { SetNativeField(this, "APrimalCharacter", "GrabWeightThreshold", newValue); }
	float GetDragWeightField() const { return GetNativeField<float>(this, "APrimalCharacter", "DragWeight"); }
	void SetDragWeightField(float newValue) { SetNativeField(this, "APrimalCharacter", "DragWeight", newValue); }
	FString GetDescriptiveNameField() const { return GetNativeField<FString>(this, "APrimalCharacter", "DescriptiveName"); }
	void SetDescriptiveNameField(FString newValue) { SetNativeField(this, "APrimalCharacter", "DescriptiveName", newValue); }
	FRotator GetReplicatedRootRotationField() const { return GetNativeField<FRotator>(this, "APrimalCharacter", "ReplicatedRootRotation"); }
	void SetReplicatedRootRotationField(FRotator newValue) { SetNativeField(this, "APrimalCharacter", "ReplicatedRootRotation", newValue); }
	TArray<int> GetReplicatedBonesIndiciesField() const { return GetNativeField<TArray<int>>(this, "APrimalCharacter", "ReplicatedBonesIndicies"); }
	void SetReplicatedBonesIndiciesField(TArray<int> newValue) { SetNativeField(this, "APrimalCharacter", "ReplicatedBonesIndicies", newValue); }
	float GetKillXPBaseField() const { return GetNativeField<float>(this, "APrimalCharacter", "KillXPBase"); }
	void SetKillXPBaseField(float newValue) { SetNativeField(this, "APrimalCharacter", "KillXPBase", newValue); }
	TArray<FName> GetReplicatedBonesField() const { return GetNativeField<TArray<FName>>(this, "APrimalCharacter", "ReplicatedBones"); }
	void SetReplicatedBonesField(TArray<FName> newValue) { SetNativeField(this, "APrimalCharacter", "ReplicatedBones", newValue); }
	float GetRagdollReplicationIntervalField() const { return GetNativeField<float>(this, "APrimalCharacter", "RagdollReplicationInterval"); }
	void SetRagdollReplicationIntervalField(float newValue) { SetNativeField(this, "APrimalCharacter", "RagdollReplicationInterval", newValue); }
	float GetClientRotationInterpSpeedField() const { return GetNativeField<float>(this, "APrimalCharacter", "ClientRotationInterpSpeed"); }
	void SetClientRotationInterpSpeedField(float newValue) { SetNativeField(this, "APrimalCharacter", "ClientRotationInterpSpeed", newValue); }
	float GetClientLocationInterpSpeedField() const { return GetNativeField<float>(this, "APrimalCharacter", "ClientLocationInterpSpeed"); }
	void SetClientLocationInterpSpeedField(float newValue) { SetNativeField(this, "APrimalCharacter", "ClientLocationInterpSpeed", newValue); }
	float GetMaxDragMovementSpeedField() const { return GetNativeField<float>(this, "APrimalCharacter", "MaxDragMovementSpeed"); }
	void SetMaxDragMovementSpeedField(float newValue) { SetNativeField(this, "APrimalCharacter", "MaxDragMovementSpeed", newValue); }
	FRotator GetCurrentAimRotField() const { return GetNativeField<FRotator>(this, "APrimalCharacter", "CurrentAimRot"); }
	void SetCurrentAimRotField(FRotator newValue) { SetNativeField(this, "APrimalCharacter", "CurrentAimRot", newValue); }
	FVector GetCurrentRootLocField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "CurrentRootLoc"); }
	void SetCurrentRootLocField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "CurrentRootLoc", newValue); }
	int GetLastYawSpeedWorldFrameCounterField() const { return GetNativeField<int>(this, "APrimalCharacter", "LastYawSpeedWorldFrameCounter"); }
	void SetLastYawSpeedWorldFrameCounterField(int newValue) { SetNativeField(this, "APrimalCharacter", "LastYawSpeedWorldFrameCounter", newValue); }
	FName GetMeshPreRagdollCollisionProfileNameField() const { return GetNativeField<FName>(this, "APrimalCharacter", "MeshPreRagdollCollisionProfileName"); }
	void SetMeshPreRagdollCollisionProfileNameField(FName newValue) { SetNativeField(this, "APrimalCharacter", "MeshPreRagdollCollisionProfileName", newValue); }
	FName GetCapsulePreRagdollCollisionProfileNameField() const { return GetNativeField<FName>(this, "APrimalCharacter", "CapsulePreRagdollCollisionProfileName"); }
	void SetCapsulePreRagdollCollisionProfileNameField(FName newValue) { SetNativeField(this, "APrimalCharacter", "CapsulePreRagdollCollisionProfileName", newValue); }
	UPrimalCharacterStatusComponent* GetMyCharacterStatusComponentField() const { return GetNativeField<UPrimalCharacterStatusComponent *>(this, "APrimalCharacter", "MyCharacterStatusComponent"); }
	void SetMyCharacterStatusComponentField(UPrimalCharacterStatusComponent* newValue) { SetNativeField(this, "APrimalCharacter", "MyCharacterStatusComponent", newValue); }
	UPrimalInventoryComponent* GetMyInventoryComponentField() const { return GetNativeField<UPrimalInventoryComponent *>(this, "APrimalCharacter", "MyInventoryComponent"); }
	void SetMyInventoryComponentField(UPrimalInventoryComponent* newValue) { SetNativeField(this, "APrimalCharacter", "MyInventoryComponent", newValue); }
	long double GetLastRunningTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastRunningTime"); }
	void SetLastRunningTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastRunningTime", newValue); }
	FVector GetTPVCameraOffsetField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "TPVCameraOffset"); }
	void SetTPVCameraOffsetField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "TPVCameraOffset", newValue); }
	FVector GetTPVCameraOffsetMultiplierField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "TPVCameraOffsetMultiplier"); }
	void SetTPVCameraOffsetMultiplierField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "TPVCameraOffsetMultiplier", newValue); }
	FVector GetTPVCameraOrgOffsetField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "TPVCameraOrgOffset"); }
	void SetTPVCameraOrgOffsetField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "TPVCameraOrgOffset", newValue); }
	float GetLandedSoundMaxRangeField() const { return GetNativeField<float>(this, "APrimalCharacter", "LandedSoundMaxRange"); }
	void SetLandedSoundMaxRangeField(float newValue) { SetNativeField(this, "APrimalCharacter", "LandedSoundMaxRange", newValue); }
	float GetFallingDamageHealthScaleBaseField() const { return GetNativeField<float>(this, "APrimalCharacter", "FallingDamageHealthScaleBase"); }
	void SetFallingDamageHealthScaleBaseField(float newValue) { SetNativeField(this, "APrimalCharacter", "FallingDamageHealthScaleBase", newValue); }
	float GetFootstepsMaxRangeField() const { return GetNativeField<float>(this, "APrimalCharacter", "FootstepsMaxRange"); }
	void SetFootstepsMaxRangeField(float newValue) { SetNativeField(this, "APrimalCharacter", "FootstepsMaxRange", newValue); }
	float GetMinTimeBetweenFootstepsField() const { return GetNativeField<float>(this, "APrimalCharacter", "MinTimeBetweenFootsteps"); }
	void SetMinTimeBetweenFootstepsField(float newValue) { SetNativeField(this, "APrimalCharacter", "MinTimeBetweenFootsteps", newValue); }
	long double GetLastPlayedFootstepTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastPlayedFootstepTime"); }
	void SetLastPlayedFootstepTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastPlayedFootstepTime", newValue); }
	float GetMinTimeBetweenFootstepsRunningField() const { return GetNativeField<float>(this, "APrimalCharacter", "MinTimeBetweenFootstepsRunning"); }
	void SetMinTimeBetweenFootstepsRunningField(float newValue) { SetNativeField(this, "APrimalCharacter", "MinTimeBetweenFootstepsRunning", newValue); }
	long double GetLastNetDidLandField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastNetDidLand"); }
	int GetCachedNumberOfClientRagdollCorrectionAttemptsField() const { return GetNativeField<int>(this, "APrimalCharacter", "CachedNumberOfClientRagdollCorrectionAttempts"); }
	void SetCachedNumberOfClientRagdollCorrectionAttemptsField(int newValue) { SetNativeField(this, "APrimalCharacter", "CachedNumberOfClientRagdollCorrectionAttempts", newValue); }
	int GetNumberOfClientRagdollCorrectionAttemptsField() const { return GetNativeField<int>(this, "APrimalCharacter", "NumberOfClientRagdollCorrectionAttempts"); }
	void SetNumberOfClientRagdollCorrectionAttemptsField(int newValue) { SetNativeField(this, "APrimalCharacter", "NumberOfClientRagdollCorrectionAttempts", newValue); }
	float GetServerForceSleepRagdollIntervalField() const { return GetNativeField<float>(this, "APrimalCharacter", "ServerForceSleepRagdollInterval"); }
	void SetServerForceSleepRagdollIntervalField(float newValue) { SetNativeField(this, "APrimalCharacter", "ServerForceSleepRagdollInterval", newValue); }
	float GetClientForceSleepRagdollIntervalField() const { return GetNativeField<float>(this, "APrimalCharacter", "ClientForceSleepRagdollInterval"); }
	void SetClientForceSleepRagdollIntervalField(float newValue) { SetNativeField(this, "APrimalCharacter", "ClientForceSleepRagdollInterval", newValue); }
	float GetNonRelevantServerForceSleepRagdollIntervalField() const { return GetNativeField<float>(this, "APrimalCharacter", "NonRelevantServerForceSleepRagdollInterval"); }
	void SetNonRelevantServerForceSleepRagdollIntervalField(float newValue) { SetNativeField(this, "APrimalCharacter", "NonRelevantServerForceSleepRagdollInterval", newValue); }
	long double GetCorpseDestructionTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "CorpseDestructionTime"); }
	void SetCorpseDestructionTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "CorpseDestructionTime", newValue); }
	float GetCorpseLifespanField() const { return GetNativeField<float>(this, "APrimalCharacter", "CorpseLifespan"); }
	void SetCorpseLifespanField(float newValue) { SetNativeField(this, "APrimalCharacter", "CorpseLifespan", newValue); }
	float GetTPVStructurePlacingHeightMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "TPVStructurePlacingHeightMultiplier"); }
	void SetTPVStructurePlacingHeightMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "TPVStructurePlacingHeightMultiplier", newValue); }
	float GetCorpseFadeAwayTimeField() const { return GetNativeField<float>(this, "APrimalCharacter", "CorpseFadeAwayTime"); }
	void SetCorpseFadeAwayTimeField(float newValue) { SetNativeField(this, "APrimalCharacter", "CorpseFadeAwayTime", newValue); }
	float GetRagdollDeathImpulseScalerField() const { return GetNativeField<float>(this, "APrimalCharacter", "RagdollDeathImpulseScaler"); }
	void SetRagdollDeathImpulseScalerField(float newValue) { SetNativeField(this, "APrimalCharacter", "RagdollDeathImpulseScaler", newValue); }
	float GetBaseTargetingDesirabilityField() const { return GetNativeField<float>(this, "APrimalCharacter", "BaseTargetingDesirability"); }
	void SetBaseTargetingDesirabilityField(float newValue) { SetNativeField(this, "APrimalCharacter", "BaseTargetingDesirability", newValue); }
	float GetDeadBaseTargetingDesirabilityField() const { return GetNativeField<float>(this, "APrimalCharacter", "DeadBaseTargetingDesirability"); }
	void SetDeadBaseTargetingDesirabilityField(float newValue) { SetNativeField(this, "APrimalCharacter", "DeadBaseTargetingDesirability", newValue); }
	FRotator GetOrbitCamRotField() const { return GetNativeField<FRotator>(this, "APrimalCharacter", "OrbitCamRot"); }
	void SetOrbitCamRotField(FRotator newValue) { SetNativeField(this, "APrimalCharacter", "OrbitCamRot", newValue); }
	float GetOrbitCamZoomField() const { return GetNativeField<float>(this, "APrimalCharacter", "OrbitCamZoom"); }
	void SetOrbitCamZoomField(float newValue) { SetNativeField(this, "APrimalCharacter", "OrbitCamZoom", newValue); }
	FVector GetLastSubmergedCheckLocField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "LastSubmergedCheckLoc"); }
	void SetLastSubmergedCheckLocField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "LastSubmergedCheckLoc", newValue); }
	long double GetLastTimeNotInFallingField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastTimeNotInFalling"); }
	void SetLastTimeNotInFallingField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastTimeNotInFalling", newValue); }
	float GetMaxCursorHUDDistanceField() const { return GetNativeField<float>(this, "APrimalCharacter", "MaxCursorHUDDistance"); }
	void SetMaxCursorHUDDistanceField(float newValue) { SetNativeField(this, "APrimalCharacter", "MaxCursorHUDDistance", newValue); }
	float GetAddForwardVelocityOnJumpField() const { return GetNativeField<float>(this, "APrimalCharacter", "AddForwardVelocityOnJump"); }
	void SetAddForwardVelocityOnJumpField(float newValue) { SetNativeField(this, "APrimalCharacter", "AddForwardVelocityOnJump", newValue); }
	FVector GetDeathActorTargetingOffsetField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "DeathActorTargetingOffset"); }
	void SetDeathActorTargetingOffsetField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "DeathActorTargetingOffset", newValue); }
	FName GetSocketOverrideTargetingLocationField() const { return GetNativeField<FName>(this, "APrimalCharacter", "SocketOverrideTargetingLocation"); }
	void SetSocketOverrideTargetingLocationField(FName newValue) { SetNativeField(this, "APrimalCharacter", "SocketOverrideTargetingLocation", newValue); }
	FDamageEvent* GetCurrentDamageEventField() const { return GetNativeField<FDamageEvent *>(this, "APrimalCharacter", "CurrentDamageEvent"); }
	void SetCurrentDamageEventField(FDamageEvent* newValue) { SetNativeField(this, "APrimalCharacter", "CurrentDamageEvent", newValue); }
	FVector GetLastApproximatePhysVolumeLocationField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "LastApproximatePhysVolumeLocation"); }
	void SetLastApproximatePhysVolumeLocationField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "LastApproximatePhysVolumeLocation", newValue); }
	long double GetLastTimeSubmergedField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastTimeSubmerged"); }
	void SetLastTimeSubmergedField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastTimeSubmerged", newValue); }
	long double GetLastFootPhysicalSurfaceCheckTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastFootPhysicalSurfaceCheckTime"); }
	void SetLastFootPhysicalSurfaceCheckTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastFootPhysicalSurfaceCheckTime", newValue); }
	float GetFootPhysicalSurfaceCheckIntervalField() const { return GetNativeField<float>(this, "APrimalCharacter", "FootPhysicalSurfaceCheckInterval"); }
	void SetFootPhysicalSurfaceCheckIntervalField(float newValue) { SetNativeField(this, "APrimalCharacter", "FootPhysicalSurfaceCheckInterval", newValue); }
	TWeakObjectPtr<APrimalCharacter> GetLastHurtByNearbyPlayerField() const { return GetNativeField<TWeakObjectPtr<APrimalCharacter>>(this, "APrimalCharacter", "LastHurtByNearbyPlayer"); }
	float GetLastHurtByNearbyPlayerTimeField() const { return GetNativeField<float>(this, "APrimalCharacter", "LastHurtByNearbyPlayerTime"); }
	TWeakObjectPtr<APrimalCharacter> GetLastAttackedNearbyPlayerField() const { return GetNativeField<TWeakObjectPtr<APrimalCharacter>>(this, "APrimalCharacter", "LastAttackedNearbyPlayer"); }
	void SetLastAttackedNearbyPlayerTimeField(float newValue) { SetNativeField(this, "APrimalCharacter", "LastAttackedNearbyPlayerTime", newValue); }
	long double GetLastStartFallingRagdollTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastStartFallingRagdollTime"); }
	void SetLastStartFallingRagdollTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastStartFallingRagdollTime", newValue); }
	FVector GetRagdollLastFrameLinearVelocityField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "RagdollLastFrameLinearVelocity"); }
	void SetRagdollLastFrameLinearVelocityField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "RagdollLastFrameLinearVelocity", newValue); }
	float GetRagdollImpactDamageVelocityScaleField() const { return GetNativeField<float>(this, "APrimalCharacter", "RagdollImpactDamageVelocityScale"); }
	void SetRagdollImpactDamageVelocityScaleField(float newValue) { SetNativeField(this, "APrimalCharacter", "RagdollImpactDamageVelocityScale", newValue); }
	float GetRagdollImpactDamageMinDecelerationSpeedField() const { return GetNativeField<float>(this, "APrimalCharacter", "RagdollImpactDamageMinDecelerationSpeed"); }
	void SetRagdollImpactDamageMinDecelerationSpeedField(float newValue) { SetNativeField(this, "APrimalCharacter", "RagdollImpactDamageMinDecelerationSpeed", newValue); }
	float GetStartFallingImpactRagdollTimeIntervalField() const { return GetNativeField<float>(this, "APrimalCharacter", "StartFallingImpactRagdollTimeInterval"); }
	void SetStartFallingImpactRagdollTimeIntervalField(float newValue) { SetNativeField(this, "APrimalCharacter", "StartFallingImpactRagdollTimeInterval", newValue); }
	FVector GetPreviousRagdollLocationField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "PreviousRagdollLocation"); }
	void SetPreviousRagdollLocationField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "PreviousRagdollLocation", newValue); }
	long double GetNextBlinkTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "NextBlinkTime"); }
	void SetNextBlinkTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "NextBlinkTime", newValue); }
	long double GetBlinkTimerField() const { return GetNativeField<long double>(this, "APrimalCharacter", "BlinkTimer"); }
	void SetBlinkTimerField(long double newValue) { SetNativeField(this, "APrimalCharacter", "BlinkTimer", newValue); }
	long double GetLastInSwimmingSoundTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastInSwimmingSoundTime"); }
	long double GetLastRelevantToPlayerTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastRelevantToPlayerTime"); }
	void SetLastRelevantToPlayerTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastRelevantToPlayerTime", newValue); }
	long double GetMeshStopForceUpdatingAtTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "MeshStopForceUpdatingAtTime"); }
	void SetMeshStopForceUpdatingAtTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "MeshStopForceUpdatingAtTime", newValue); }
	long double GetLastWalkingTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastWalkingTime"); }
	void SetLastWalkingTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastWalkingTime", newValue); }
	long double GetLastSpecialDamageTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastSpecialDamageTime"); }
	void SetLastSpecialDamageTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastSpecialDamageTime", newValue); }
	float GetCorpseDraggedDecayRateField() const { return GetNativeField<float>(this, "APrimalCharacter", "CorpseDraggedDecayRate"); }
	void SetCorpseDraggedDecayRateField(float newValue) { SetNativeField(this, "APrimalCharacter", "CorpseDraggedDecayRate", newValue); }
	float GetPoopAltItemChanceField() const { return GetNativeField<float>(this, "APrimalCharacter", "PoopAltItemChance"); }
	void SetPoopAltItemChanceField(float newValue) { SetNativeField(this, "APrimalCharacter", "PoopAltItemChance", newValue); }
	TSubclassOf<UPrimalItem> GetPoopAltItemClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalCharacter", "PoopAltItemClass"); }
	void SetPoopAltItemClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalCharacter", "PoopAltItemClass", newValue); }
	//TArray<TSubclassOf<APrimalBuff>> GetDefaultBuffsField() const { return GetNativeField<TArray<TSubclassOf<APrimalBuff>>>(this, "APrimalCharacter", "DefaultBuffs"); }
	float GetRunningMaxDesiredRotDeltaField() const { return GetNativeField<float>(this, "APrimalCharacter", "RunningMaxDesiredRotDelta"); }
	void SetRunningMaxDesiredRotDeltaField(float newValue) { SetNativeField(this, "APrimalCharacter", "RunningMaxDesiredRotDelta", newValue); }
	long double GetCorpseDestructionTimerField() const { return GetNativeField<long double>(this, "APrimalCharacter", "CorpseDestructionTimer"); }
	void SetCorpseDestructionTimerField(long double newValue) { SetNativeField(this, "APrimalCharacter", "CorpseDestructionTimer", newValue); }
	float GetOriginalCorpseLifespanField() const { return GetNativeField<float>(this, "APrimalCharacter", "OriginalCorpseLifespan"); }
	void SetOriginalCorpseLifespanField(float newValue) { SetNativeField(this, "APrimalCharacter", "OriginalCorpseLifespan", newValue); }
	float GetCorpseHarvestFadeTimeField() const { return GetNativeField<float>(this, "APrimalCharacter", "CorpseHarvestFadeTime"); }
	void SetCorpseHarvestFadeTimeField(float newValue) { SetNativeField(this, "APrimalCharacter", "CorpseHarvestFadeTime", newValue); }
	FVector GetCurrentLocalRootLocField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "CurrentLocalRootLoc"); }
	void SetCurrentLocalRootLocField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "CurrentLocalRootLoc", newValue); }
	float GetRootYawField() const { return GetNativeField<float>(this, "APrimalCharacter", "RootYaw"); }
	void SetRootYawField(float newValue) { SetNativeField(this, "APrimalCharacter", "RootYaw", newValue); }
	long double GetLastTimeInSwimmingField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastTimeInSwimming"); }
	void SetLastTimeInSwimmingField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastTimeInSwimming", newValue); }
	long double GetLastListenRangePushTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastListenRangePushTime"); }
	void SetLastListenRangePushTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastListenRangePushTime", newValue); }
	float GetLastDamageAmountMaterialValueField() const { return GetNativeField<float>(this, "APrimalCharacter", "LastDamageAmountMaterialValue"); }
	void SetLastDamageAmountMaterialValueField(float newValue) { SetNativeField(this, "APrimalCharacter", "LastDamageAmountMaterialValue", newValue); }
	float GetBuffedDamageMultField() const { return GetNativeField<float>(this, "APrimalCharacter", "BuffedDamageMult"); }
	void SetBuffedDamageMultField(float newValue) { SetNativeField(this, "APrimalCharacter", "BuffedDamageMult", newValue); }
	float GetBuffedResistanceMultField() const { return GetNativeField<float>(this, "APrimalCharacter", "BuffedResistanceMult"); }
	float GetExtraMaxSpeedModifierField() const { return GetNativeField<float>(this, "APrimalCharacter", "ExtraMaxSpeedModifier"); }
	void SetExtraMaxSpeedModifierField(float newValue) { SetNativeField(this, "APrimalCharacter", "ExtraMaxSpeedModifier", newValue); }
	float GetTamedDinoCallOutRangeField() const { return GetNativeField<float>(this, "APrimalCharacter", "TamedDinoCallOutRange"); }
	void SetTamedDinoCallOutRangeField(float newValue) { SetNativeField(this, "APrimalCharacter", "TamedDinoCallOutRange", newValue); }
	long double GetLastBumpedDamageTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastBumpedDamageTime"); }
	void SetLastBumpedDamageTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastBumpedDamageTime", newValue); }
	FVector GetTargetPathfindingLocationOffsetField() const { return GetNativeField<FVector>(this, "APrimalCharacter", "TargetPathfindingLocationOffset"); }
	void SetTargetPathfindingLocationOffsetField(FVector newValue) { SetNativeField(this, "APrimalCharacter", "TargetPathfindingLocationOffset", newValue); }
	long double GetLastTookDamageTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastTookDamageTime"); }
	void SetLastTookDamageTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastTookDamageTime", newValue); }
	float GetExtraReceiveDamageMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "ExtraReceiveDamageMultiplier"); }
	void SetExtraReceiveDamageMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "ExtraReceiveDamageMultiplier", newValue); }
	float GetExtraMeleeDamageMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "ExtraMeleeDamageMultiplier"); }
	void SetExtraMeleeDamageMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "ExtraMeleeDamageMultiplier", newValue); }
	float GetLastFallingZField() const { return GetNativeField<float>(this, "APrimalCharacter", "LastFallingZ"); }
	void SetLastFallingZField(float newValue) { SetNativeField(this, "APrimalCharacter", "LastFallingZ", newValue); }
	int GetNumFallZFailsField() const { return GetNativeField<int>(this, "APrimalCharacter", "NumFallZFails"); }
	void SetNumFallZFailsField(int newValue) { SetNativeField(this, "APrimalCharacter", "NumFallZFails", newValue); }
	TArray<TWeakObjectPtr<APrimalCharacter>> GetCharactersGrappledToMeField() const { return GetNativeField<TArray<TWeakObjectPtr<APrimalCharacter>>>(this, "APrimalCharacter", "CharactersGrappledToMe"); }
	float GetDamageTheMeleeDamageCauserPercentField() const { return GetNativeField<float>(this, "APrimalCharacter", "DamageTheMeleeDamageCauserPercent"); }
	void SetDamageTheMeleeDamageCauserPercentField(float newValue) { SetNativeField(this, "APrimalCharacter", "DamageTheMeleeDamageCauserPercent", newValue); }
	float GetDurabilityDegrateTheMeleeDamageCauserPercentField() const { return GetNativeField<float>(this, "APrimalCharacter", "DurabilityDegrateTheMeleeDamageCauserPercent"); }
	void SetDurabilityDegrateTheMeleeDamageCauserPercentField(float newValue) { SetNativeField(this, "APrimalCharacter", "DurabilityDegrateTheMeleeDamageCauserPercent", newValue); }
	TSubclassOf<UDamageType> GetDamageTheMeleeDamageCauserDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalCharacter", "DamageTheMeleeDamageCauserDamageType"); }
	void SetDamageTheMeleeDamageCauserDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalCharacter", "DamageTheMeleeDamageCauserDamageType", newValue); }
	char GetTribeGroupInventoryRankField() const { return GetNativeField<char>(this, "APrimalCharacter", "TribeGroupInventoryRank"); }
	void SetTribeGroupInventoryRankField(char newValue) { SetNativeField(this, "APrimalCharacter", "TribeGroupInventoryRank", newValue); }
	float GetCharacterDamageImpulseMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "CharacterDamageImpulseMultiplier"); }
	void SetCharacterDamageImpulseMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "CharacterDamageImpulseMultiplier", newValue); }
	long double GetForceCheckPushThroughWallsTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "ForceCheckPushThroughWallsTime"); }
	void SetForceCheckPushThroughWallsTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "ForceCheckPushThroughWallsTime", newValue); }
	long double GetLastStoppedEatAnimationTimeField() const { return GetNativeField<long double>(this, "APrimalCharacter", "LastStoppedEatAnimationTime"); }
	void SetLastStoppedEatAnimationTimeField(long double newValue) { SetNativeField(this, "APrimalCharacter", "LastStoppedEatAnimationTime", newValue); }
	float GetClientRotationInterpSpeedMultiplierGroundField() const { return GetNativeField<float>(this, "APrimalCharacter", "ClientRotationInterpSpeedMultiplierGround"); }
	void SetClientRotationInterpSpeedMultiplierGroundField(float newValue) { SetNativeField(this, "APrimalCharacter", "ClientRotationInterpSpeedMultiplierGround", newValue); }
	float GetGlideGravityScaleMultiplierField() const { return GetNativeField<float>(this, "APrimalCharacter", "GlideGravityScaleMultiplier"); }
	void SetGlideGravityScaleMultiplierField(float newValue) { SetNativeField(this, "APrimalCharacter", "GlideGravityScaleMultiplier", newValue); }
	float GetGlideMaxCarriedWeightField() const { return GetNativeField<float>(this, "APrimalCharacter", "GlideMaxCarriedWeight"); }
	void SetGlideMaxCarriedWeightField(float newValue) { SetNativeField(this, "APrimalCharacter", "GlideMaxCarriedWeight", newValue); }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalCharacter", "GetPrivateStaticClass"); }
	float BPGetAddForwardVelocityOnJump_Implementation() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "BPGetAddForwardVelocityOnJump_Implementation"); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "CanJumpInternal_Implementation"); }
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PreInitializeComponents"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PostInitializeComponents"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "Destroyed"); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "BeginPlay"); }
	void FellOutOfWorld(UDamageType* dmgType) { NativeCall<void, UDamageType *>((DWORD64)this, "APrimalCharacter", "FellOutOfWorld", dmgType); }
	void Suicide() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "Suicide"); }
	bool IsDead() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsDead"); }
	void AdjustDamage(float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float *, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalCharacter", "AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	//bool CanBeTargetedBy(ITargetableInterface * Attacker) { return NativeCall<bool, ITargetableInterface *>((DWORD64)this, "APrimalCharacter", "CanBeTargetedBy", Attacker); }
	bool IsValidForCombatMusic() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsValidForCombatMusic"); }
	float TakeDamage(float Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalCharacter", "TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool CanDie(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalCharacter", "CanDie", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool Die(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalCharacter", "Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DeathHarvestingDepleted() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "DeathHarvestingDepleted"); }
	void PlayDyingPoint_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayDyingPoint_Implementation"); }
	void PlayDyingRadial_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayDyingRadial_Implementation"); }
	void SetDeath(bool bForceRagdoll) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "SetDeath", bForceRagdoll); }
	bool CanIgnoreImmobilizationTrap(UClass* TrapClass, bool* bForceTrigger) { return NativeCall<bool, UClass*, bool *>((DWORD64)this, "APrimalCharacter", "CanIgnoreImmobilizationTrap", TrapClass, bForceTrigger); }
	void Immobilize(bool bImmobilize, AActor* UsingActor, bool bImmobilizeFalling) { NativeCall<void, bool, AActor *, bool>((DWORD64)this, "APrimalCharacter", "Immobilize", bImmobilize, UsingActor, bImmobilizeFalling); }
	float GetCorpseLifespan() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetCorpseLifespan"); }
	void PlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "APrimalCharacter", "PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectGeneric_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayHitEffectGeneric_Implementation"); }
	void PlayHitEffectRadial_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayHitEffectRadial_Implementation"); }
	bool IsGameInputAllowed() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsGameInputAllowed"); }
	void PlayHitEffect(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *, bool>((DWORD64)this, "APrimalCharacter", "PlayHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void DoSetRagdollPhysics() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "DoSetRagdollPhysics"); }
	void SetRagdollPhysics(bool bUseRagdollLocationOffset, bool bForceRecreateBones, bool bForLoading) { NativeCall<void, bool, bool, bool>((DWORD64)this, "APrimalCharacter", "SetRagdollPhysics", bUseRagdollLocationOffset, bForceRecreateBones, bForLoading); }
	void CheckOnDinoPlatformSaddle() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "CheckOnDinoPlatformSaddle"); }
	void ForceSleepRagdollEx() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ForceSleepRagdollEx"); }
	void ForceSleepRagdoll() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ForceSleepRagdoll"); }
	void ClearRagdollPhysics() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ClearRagdollPhysics"); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset) { NativeCall<void, bool, bool>((DWORD64)this, "APrimalCharacter", "SetSleeping", bSleeping, bUseRagdollLocationOffset); }
	void ExecSetSleeping(bool bEnable) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "ExecSetSleeping", bEnable); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>((DWORD64)this, "APrimalCharacter", "ChangeActorTeam", NewTeam); }
	void UpdateTribeName() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "UpdateTribeName"); }
	void NetUpdateTribeName_Implementation(FString* NewTribeName) { NativeCall<void, FString *>((DWORD64)this, "APrimalCharacter", "NetUpdateTribeName_Implementation", NewTribeName); }
	float GetMaxCursorHUDDistance(AShooterPlayerController* PC) { return NativeCall<float, AShooterPlayerController *>((DWORD64)this, "APrimalCharacter", "GetMaxCursorHUDDistance", PC); }
	bool IsSubmerged(bool bDontCheckSwimming, bool bUseFullThreshold, bool bForceCheck) { return NativeCall<bool, bool, bool, bool>((DWORD64)this, "APrimalCharacter", "IsSubmerged", bDontCheckSwimming, bUseFullThreshold, bForceCheck); }
	float GetWaterSubmergedDepthThreshold() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetWaterSubmergedDepthThreshold"); }
	//float PlayAnimMontage(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, UAnimMontage *, float, FName, bool, bool>((DWORD64)this, "APrimalCharacter", "PlayAnimMontage", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	//void StopAnimMontage(UAnimMontage * AnimMontage) { NativeCall<void, UAnimMontage *>((DWORD64)this, "APrimalCharacter", "StopAnimMontage", AnimMontage); }
	//bool IsMontagePlaying(UAnimMontage * AnimMontage, float TimeFromEndToConsiderFinished) { return NativeCall<bool, UAnimMontage *, float>((DWORD64)this, "APrimalCharacter", "IsMontagePlaying", AnimMontage, TimeFromEndToConsiderFinished); }
	void StopAllAnimMontages(float BlendOutTime) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "StopAllAnimMontages", BlendOutTime); }
	void TryGiveDefaultWeapon() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryGiveDefaultWeapon"); }
	void TryPoop() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryPoop"); }
	void OrbitCamToggle() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OrbitCamToggle"); }
	void OrbitCamOn() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OrbitCamOn"); }
	void OrbitCamOff() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OrbitCamOff"); }
	void ServerRequestDrag_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerRequestDrag_Implementation"); }
	//void ServerDinoOrder_Implementation(APrimalDinoCharacter * aDino, EDinoTamedOrder::Type OrderType) { NativeCall<void, APrimalDinoCharacter *, EDinoTamedOrder::Type>((DWORD64)this, "APrimalCharacter", "ServerDinoOrder_Implementation", aDino, OrderType); }
	void MoveForward(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "MoveForward", Val); }
	void MoveRight(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "MoveRight", Val); }
	void MoveUp(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "MoveUp", Val); }
	void TurnInput(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "TurnInput", Val); }
	void LookInput(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "LookInput", Val); }
	void TurnAtRate(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "TurnAtRate", Val); }
	void LookUpAtRate(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "LookUpAtRate", Val); }
	bool IsInputAllowed() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsInputAllowed"); }
	void OnStartRunning() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnStartRunning"); }
	void OnStopRunning() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnStopRunning"); }
	void OnRunToggle() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnRunToggle"); }
	bool IsRunning() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsRunning"); }
	bool IsMoving() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsMoving"); }
	void UpdateStatusComponent(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "UpdateStatusComponent", DeltaSeconds); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "Tick", DeltaSeconds); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>((DWORD64)this, "APrimalCharacter", "SetCharacterMeshesMaterialScalarParamValue", ParamName, Value); }
	void UpdateSwimmingState() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "UpdateSwimmingState"); }
	FVector* GetRootBodyBoneLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalCharacter", "GetRootBodyBoneLocation", result); }
	void ZoomIn() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ZoomIn"); }
	void ZoomOut() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ZoomOut"); }
	void OnStartJump() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnStartJump"); }
	void PlayJumpAnim() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayJumpAnim"); }
	void PlayLandedAnim() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayLandedAnim"); }
	void OnJumped_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnJumped_Implementation"); }
	void NetOnJumped_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "NetOnJumped_Implementation"); }
	void OnStopJump() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnStopJump"); }
	float GetRunningSpeedModifier(bool bIsForDefaultSpeed) { return NativeCall<float, bool>((DWORD64)this, "APrimalCharacter", "GetRunningSpeedModifier", bIsForDefaultSpeed); }
	float GetMaxHealth() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetMaxHealth"); }
	bool AllowFirstPerson() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "AllowFirstPerson"); }
	//AActor * GetAimedActor(ECollisionChannel CollisionChannel, UActorComponent ** HitComponent, float MaxDistanceOverride, float CheckRadius, int * hitBodyIndex, FHitResult * outHitResult, bool bForceUseCameraLocation, bool bForceUpdateAimedActors) { return NativeCall<AActor *, ECollisionChannel, UActorComponent **, float, float, int *, FHitResult *, bool, bool>((DWORD64)this, "APrimalCharacter", "GetAimedActor", CollisionChannel, HitComponent, MaxDistanceOverride, CheckRadius, hitBodyIndex, outHitResult, bForceUseCameraLocation, bForceUpdateAimedActors); }
	void OnPrimalCharacterSleeped() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnPrimalCharacterSleeped"); }
	void OnPrimalCharacterUnsleeped() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnPrimalCharacterUnsleeped"); }
	//float PlayAnimEx(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, UAnimMontage *, float, FName, bool, bool, bool, bool>((DWORD64)this, "APrimalCharacter", "PlayAnimEx", AnimMontage, InPlayRate, StartSectionName, bReplicate, bReplicateToOwner, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	//void StopAnimEx(UAnimMontage * AnimMontage, bool bReplicate, bool bReplicateToOwner, float BlendOutTime) { NativeCall<void, UAnimMontage *, bool, bool, float>((DWORD64)this, "APrimalCharacter", "StopAnimEx", AnimMontage, bReplicate, bReplicateToOwner, BlendOutTime); }
	void SetRunning(bool bNewRunning) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "SetRunning", bNewRunning); }
	void ServerSetRunning_Implementation(bool bNewRunning) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "ServerSetRunning_Implementation", bNewRunning); }
	void UpdateRunSounds(bool bNewRunning) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "UpdateRunSounds", bNewRunning); }
	void ControllerLeavingGame(AShooterPlayerController* theController) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "APrimalCharacter", "ControllerLeavingGame", theController); }
	float GetLowHealthPercentage() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetLowHealthPercentage"); }
	bool IsAlive() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsAlive"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalCharacter", "GetDescriptiveName", result); }
	float GetHealthPercentage() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetHealthPercentage"); }
	float GetHealth() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetHealth"); }
	FVector* GetInterpolatedLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalCharacter", "GetInterpolatedLocation", result); }
	FRotator* GetInterpolatedRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "APrimalCharacter", "GetInterpolatedRotation", result); }
	float GetClientRotationInterpSpeed(FVector* RootLoc) { return NativeCall<float, FVector *>((DWORD64)this, "APrimalCharacter", "GetClientRotationInterpSpeed", RootLoc); }
	FRotator* GetAimOffsets(FRotator* result, float DeltaTime, FRotator* RootRotOffset, float* RootYawSpeed, float MaxYawAimClamp, FVector* RootLocOffset) { return NativeCall<FRotator *, FRotator *, float, FRotator *, float *, float, FVector *>((DWORD64)this, "APrimalCharacter", "GetAimOffsets", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset); }
	void ForceRefreshBones() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ForceRefreshBones"); }
	void StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly) { NativeCall<void, float, bool, bool>((DWORD64)this, "APrimalCharacter", "StartForceSkelUpdate", ForTime, bForceUpdateMesh, bServerOnly); }
	void EndForceSkelUpdate() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "EndForceSkelUpdate"); }
	bool IsConscious() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsConscious"); }
	void Stasis() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "Stasis"); }
	void Unstasis() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "Unstasis"); }
	UPrimalCharacterStatusComponent* GetCharacterStatusComponent() { return NativeCall<UPrimalCharacterStatusComponent *>((DWORD64)this, "APrimalCharacter", "GetCharacterStatusComponent"); }
	bool IsValidForStatusUpdate() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsValidForStatusUpdate"); }
	float GetMaxSpeedModifier() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetMaxSpeedModifier"); }
	float GetJumpZModifier() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetJumpZModifier"); }
	bool CanBeBaseForCharacter(APawn* Pawn) { return NativeCall<bool, APawn *>((DWORD64)this, "APrimalCharacter", "CanBeBaseForCharacter", Pawn); }
	float GetDefaultMovementSpeed() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetDefaultMovementSpeed"); }
	void TakeFallingDamage(FHitResult* Hit) { NativeCall<void, FHitResult *>((DWORD64)this, "APrimalCharacter", "TakeFallingDamage", Hit); }
	void OnLanded(FHitResult* Hit) { NativeCall<void, FHitResult *>((DWORD64)this, "APrimalCharacter", "OnLanded", Hit); }
	void NetDidLand_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "NetDidLand_Implementation"); }
	void DidLand() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "DidLand"); }
	void FadeOutLoadingMusic() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "FadeOutLoadingMusic"); }
	void LocalPossessedBy(APlayerController* ByController) { NativeCall<void, APlayerController *>((DWORD64)this, "APrimalCharacter", "LocalPossessedBy", ByController); }
	void LocalUnpossessed_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "LocalUnpossessed_Implementation"); }
	void PlayFootstep() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayFootstep"); }
	bool ModifyInputAcceleration(FVector* InputAcceleration) { return NativeCall<bool, FVector *>((DWORD64)this, "APrimalCharacter", "ModifyInputAcceleration", InputAcceleration); }
	bool ShouldAttackStopMoveCollapsing() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "ShouldAttackStopMoveCollapsing"); }
	bool AnimationPreventsInput() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "AnimationPreventsInput"); }
	float SetHealth(float newHealth) { return NativeCall<float, float>((DWORD64)this, "APrimalCharacter", "SetHealth", newHealth); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>((DWORD64)this, "APrimalCharacter", "IsOfTribe", ID); }
	void SetRagdollReplication(bool Enabled) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "SetRagdollReplication", Enabled); }
	void ReplicateRagdoll() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ReplicateRagdoll"); }
	void InitRagdollRepConstraints() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "InitRagdollRepConstraints"); }
	void TermRagdollRepConstraints() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TermRagdollRepConstraints"); }
	void ClientRagdollUpdate_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ClientRagdollUpdate_Implementation"); }
	void SleepBodies() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "SleepBodies"); }
	void UpdateRagdollReplicationOnClient() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "UpdateRagdollReplicationOnClient"); }
	void ClientEndRagdollUpdate_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ClientEndRagdollUpdate_Implementation"); }
	void OnRep_RagdollPositions() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnRep_RagdollPositions"); }
	void InitRagdollReplication() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "InitRagdollReplication"); }
	bool CanDragCharacter(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter *>((DWORD64)this, "APrimalCharacter", "CanDragCharacter", Character); }
	bool CanBeDragged() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "CanBeDragged"); }
	bool IsInvincible() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsInvincible"); }
	int GetNearestBoneIndexForDrag() { return NativeCall<int>((DWORD64)this, "APrimalCharacter", "GetNearestBoneIndexForDrag"); }
	void TryDragCharacter() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryDragCharacter"); }
	void UpdateDragging() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "UpdateDragging"); }
	void OnBeginDrag_Implementation(APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter *, int, bool>((DWORD64)this, "APrimalCharacter", "OnBeginDrag_Implementation", Dragged, BoneIndex, bWithGrapHook); }
	void OnEndDrag_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnEndDrag_Implementation"); }
	void OnBeginDragged(APrimalCharacter* Dragger) { NativeCall<void, APrimalCharacter *>((DWORD64)this, "APrimalCharacter", "OnBeginDragged", Dragger); }
	void OnEndDragged(APrimalCharacter* Dragger) { NativeCall<void, APrimalCharacter *>((DWORD64)this, "APrimalCharacter", "OnEndDragged", Dragger); }
	float GetKillXP() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetKillXP"); }
	void UpdateIK() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "UpdateIK"); }
	bool IKFootTrace() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IKFootTrace"); }
	void SetEnableIK(bool bEnable, bool bForceOnDedicated) { NativeCall<void, bool, bool>((DWORD64)this, "APrimalCharacter", "SetEnableIK", bEnable, bForceOnDedicated); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>((DWORD64)this, "APrimalCharacter", "TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>((DWORD64)this, "APrimalCharacter", "ClientMultiUse", ForPC, UseIndex); }
	void ForceTickPoseDelta() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ForceTickPoseDelta"); }
	void CheckJumpOutOfWater() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "CheckJumpOutOfWater"); }
	bool IsTargetableDead() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsTargetableDead"); }
	void Poop() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "Poop"); }
	void EmitPoop() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "EmitPoop"); }
	bool IsValidForStatusRecovery() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsValidForStatusRecovery"); }
	bool GetGroundLocation(FVector* theGroundLoc, FVector* OffsetUp, FVector* OffsetDown) { return NativeCall<bool, FVector *, FVector *, FVector *>((DWORD64)this, "APrimalCharacter", "GetGroundLocation", theGroundLoc, OffsetUp, OffsetDown); }
	void DeathHarvestingFadeOut_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "DeathHarvestingFadeOut_Implementation"); }
	void ServerUploadCharacter(AShooterPlayerController* UploadedBy) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "APrimalCharacter", "ServerUploadCharacter", UploadedBy); }
	FRotator* GetBaseAimRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "APrimalCharacter", "GetBaseAimRotation", result); }
	void ApplyDamageMomentum(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "APrimalCharacter", "ApplyDamageMomentum", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void NetAddCharacterMovementImpulse_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "NetAddCharacterMovementImpulse_Implementation"); }
	bool AllowSaving() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "AllowSaving"); }
	bool IsWatered() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsWatered"); }
	FVector* GetTargetingLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalCharacter", "GetTargetingLocation", result); }
	void CheckJumpInput(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "APrimalCharacter", "CheckJumpInput", DeltaTime); }
	void ServerTryPoop_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerTryPoop_Implementation"); }
	void ClientFailedPoop_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ClientFailedPoop_Implementation"); }
	void ClientDidPoop_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ClientDidPoop_Implementation"); }
	void TryAccessInventory() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryAccessInventory"); }
	bool IsRagdolled() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsRagdolled"); }
	bool HasBuff(UClass* BuffClass) { return NativeCall<bool, UClass*>((DWORD64)this, "APrimalCharacter", "HasBuff", BuffClass); }
	//void AttachGPSTransponder(APrimalStructureExplosiveTransGPS * Transponder) { NativeCall<void, APrimalStructureExplosiveTransGPS *>((DWORD64)this, "APrimalCharacter", "AttachGPSTransponder", Transponder); }
	void UpdateNetDynamicMusic() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "UpdateNetDynamicMusic"); }
	//void NetPlaySoundOnCharacter_Implementation(USoundBase * SoundToPlay, bool bPlayOnOwner) { NativeCall<void, USoundBase *, bool>((DWORD64)this, "APrimalCharacter", "NetPlaySoundOnCharacter_Implementation", SoundToPlay, bPlayOnOwner); }
	float GetCorpseDecayRate() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetCorpseDecayRate"); }
	void TagFriendlyStructures() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TagFriendlyStructures"); }
	void OnAttachedToCharacter() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnAttachedToCharacter"); }
	void OnDetachedFromCharacter(APrimalCharacter* aCharacter) { NativeCall<void, APrimalCharacter *>((DWORD64)this, "APrimalCharacter", "OnDetachedFromCharacter", aCharacter); }
	void ClearMountedDino(bool fromMountedDino) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "ClearMountedDino", fromMountedDino); }
	bool DinoMountOnMe(APrimalDinoCharacter* dinoCharacter) { return NativeCall<bool, APrimalDinoCharacter *>((DWORD64)this, "APrimalCharacter", "DinoMountOnMe", dinoCharacter); }
	bool CanMountOnMe(APrimalDinoCharacter* dinoCharacter) { return NativeCall<bool, APrimalDinoCharacter *>((DWORD64)this, "APrimalCharacter", "CanMountOnMe", dinoCharacter); }
	void OnRep_MountedDino() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnRep_MountedDino"); }
	float GetDragWeight(APrimalCharacter* ForDragger) { return NativeCall<float, APrimalCharacter *>((DWORD64)this, "APrimalCharacter", "GetDragWeight", ForDragger); }
	void UnPossessed() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "UnPossessed"); }
	void TryCallAttackTarget() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryCallAttackTarget"); }
	void TryCallMoveTo() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryCallMoveTo"); }
	bool CanBePainted() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "CanBePainted"); }
	bool AllowColoringBy(APlayerController* ForPC, UObject* anItem) { return NativeCall<bool, APlayerController *, UObject *>((DWORD64)this, "APrimalCharacter", "AllowColoringBy", ForPC, anItem); }
	void NetStopAllAnimMontage_Implementation() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "NetStopAllAnimMontage_Implementation"); }
	void DeactivateBuffs(UClass* ForBuffClass, UPrimalItem* ForInstigatorItem) { NativeCall<void, UClass*, UPrimalItem *>((DWORD64)this, "APrimalCharacter", "DeactivateBuffs", ForBuffClass, ForInstigatorItem); }
	FVector* GetVelocity(FVector* result, bool bIsForRagdoll) { return NativeCall<FVector *, FVector *, bool>((DWORD64)this, "APrimalCharacter", "GetVelocity", result, bIsForRagdoll); }
	void TryCallStayOne() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryCallStayOne"); }
	void TryCallFollowOne() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryCallFollowOne"); }
	void TryCallFollowDistanceCycleOne() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "TryCallFollowDistanceCycleOne"); }
	void OnRep_AttachmentReplication() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnRep_AttachmentReplication"); }
	bool SimulatedPreventBasedPhysics() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "SimulatedPreventBasedPhysics"); }
	APrimalDinoCharacter* GetBasedOnDino() { return NativeCall<APrimalDinoCharacter *>((DWORD64)this, "APrimalCharacter", "GetBasedOnDino"); }
	FVector* GetTargetPathfindingLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalCharacter", "GetTargetPathfindingLocation", result); }
	void ClientHandleNetDestroy() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ClientHandleNetDestroy"); }
	bool UseClearOnConsumeInput() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "UseClearOnConsumeInput"); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetDamageTorpidityIncreaseMultiplierScale"); }
	void NotifyBumpedByPawn(APrimalCharacter* ByPawn) { NativeCall<void, APrimalCharacter *>((DWORD64)this, "APrimalCharacter", "NotifyBumpedByPawn", ByPawn); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn *>((DWORD64)this, "APrimalCharacter", "NotifyBumpedPawn", BumpedPawn); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController *>((DWORD64)this, "APrimalCharacter", "PossessedBy", NewController); }
	void BPNetAddCharacterMovementImpulse() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "BPNetAddCharacterMovementImpulse"); }
	float GetGravityZScale() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetGravityZScale"); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, char PreviousCustomMode) { NativeCall<void, EMovementMode, char>((DWORD64)this, "APrimalCharacter", "OnMovementModeChanged", PrevMovementMode, PreviousCustomMode); }
	void EnableBPTimerServer(bool bEnable) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "EnableBPTimerServer", bEnable); }
	void EnableBPTimerNonDedicated(bool bEnable) { NativeCall<void, bool>((DWORD64)this, "APrimalCharacter", "EnableBPTimerNonDedicated", bEnable); }
	void CheckRagdollPenetration() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "CheckRagdollPenetration"); }
	void DownCallOne() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "DownCallOne"); }
	UObject* GetUObjectInterfaceTargetableInterface() { return NativeCall<UObject *>((DWORD64)this, "APrimalCharacter", "GetUObjectInterfaceTargetableInterface"); }
	bool IsProneOrSitting() { return NativeCall<bool>((DWORD64)this, "APrimalCharacter", "IsProneOrSitting"); }
	float GetBaseDragWeight() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "GetBaseDragWeight"); }
	float BPAdjustDamage() { return NativeCall<float>((DWORD64)this, "APrimalCharacter", "BPAdjustDamage"); }
	void BPNotifyLevelUp(int ExtraCharacterLevel) { NativeCall<void, int>((DWORD64)this, "APrimalCharacter", "BPNotifyLevelUp", ExtraCharacterLevel); }
	void LocalUnpossessed() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "LocalUnpossessed"); }
	void NetUpdateTribeName(FString* NewTribeName) { NativeCall<void, FString *>((DWORD64)this, "APrimalCharacter", "NetUpdateTribeName", NewTribeName); }
	void OnBeginDrag(APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter *, int, bool>((DWORD64)this, "APrimalCharacter", "OnBeginDrag", Dragged, BoneIndex, bWithGrapHook); }
	void OnEndDrag() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "OnEndDrag"); }
	void PlayDyingGeneric() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayDyingGeneric"); }
	void PlayDyingPoint() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayDyingPoint"); }
	void PlayDyingRadial() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayDyingRadial"); }
	void PlayHitEffectPoint() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayHitEffectPoint"); }
	void PlayHitEffectRadial() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "PlayHitEffectRadial"); }
	void ServerCallAggressive() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerCallAggressive"); }
	void ServerCallFollow() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerCallFollow"); }
	void ServerCallNeutral() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerCallNeutral"); }
	void ServerCallPassive() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerCallPassive"); }
	void ServerCallSetAggressive() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerCallSetAggressive"); }
	void ServerCallStay() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerCallStay"); }
	//void ServerDinoOrder(APrimalDinoCharacter * aDino, EDinoTamedOrder::Type OrderType) { NativeCall<void, APrimalDinoCharacter *, EDinoTamedOrder::Type>((DWORD64)this, "APrimalCharacter", "ServerDinoOrder", aDino, OrderType); }
	void ServerGiveDefaultWeapon() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerGiveDefaultWeapon"); }
	void ServerRequestDrag() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerRequestDrag"); }
	void ServerTryPoop() { NativeCall<void>((DWORD64)this, "APrimalCharacter", "ServerTryPoop"); }
};

struct AShooterCharacter : public APrimalCharacter
{
	//TArray<FTransponderInfo> GetClientTranspondersInfoField() const { return GetNativeField<TArray<FTransponderInfo>>(this, "AShooterCharacter", "ClientTranspondersInfo"); }
	bool GetbWasProneField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bWasProne"); }
	void SetbWasProneField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bWasProne", newValue); }
	bool GetbIsPreviewCharacterField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bIsPreviewCharacter"); }
	void SetbIsPreviewCharacterField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bIsPreviewCharacter", newValue); }
	bool GetbIsVoiceTalkingField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bIsVoiceTalking"); }
	void SetbIsVoiceTalkingField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bIsVoiceTalking", newValue); }
	long double GetLastStartedTalkingTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastStartedTalkingTime"); }
	void SetLastStartedTalkingTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastStartedTalkingTime", newValue); }
	float GetOriginalCollisionHeightField() const { return GetNativeField<float>(this, "AShooterCharacter", "OriginalCollisionHeight"); }
	void SetOriginalCollisionHeightField(float newValue) { SetNativeField(this, "AShooterCharacter", "OriginalCollisionHeight", newValue); }
	float GetWalkBobMagnitudeField() const { return GetNativeField<float>(this, "AShooterCharacter", "WalkBobMagnitude"); }
	void SetWalkBobMagnitudeField(float newValue) { SetNativeField(this, "AShooterCharacter", "WalkBobMagnitude", newValue); }
	float GetWalkBobInterpSpeedField() const { return GetNativeField<float>(this, "AShooterCharacter", "WalkBobInterpSpeed"); }
	void SetWalkBobInterpSpeedField(float newValue) { SetNativeField(this, "AShooterCharacter", "WalkBobInterpSpeed", newValue); }
	float GetTargetingTimeField() const { return GetNativeField<float>(this, "AShooterCharacter", "TargetingTime"); }
	void SetTargetingTimeField(float newValue) { SetNativeField(this, "AShooterCharacter", "TargetingTime", newValue); }
	float GetBobMaxMovementSpeedField() const { return GetNativeField<float>(this, "AShooterCharacter", "BobMaxMovementSpeed"); }
	void SetBobMaxMovementSpeedField(float newValue) { SetNativeField(this, "AShooterCharacter", "BobMaxMovementSpeed", newValue); }
	float GetWeaponBobMaxMovementSpeedField() const { return GetNativeField<float>(this, "AShooterCharacter", "WeaponBobMaxMovementSpeed"); }
	void SetWeaponBobMaxMovementSpeedField(float newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobMaxMovementSpeed", newValue); }
	TSubclassOf<AShooterWeapon> GetDefaultWeaponField() const { return GetNativeField<TSubclassOf<AShooterWeapon>>(this, "AShooterCharacter", "DefaultWeapon"); }
	TSubclassOf<AShooterWeapon> GetMapWeaponField() const { return GetNativeField<TSubclassOf<AShooterWeapon>>(this, "AShooterCharacter", "MapWeapon"); }
	TSubclassOf<AShooterWeapon> GetGPSWeaponField() const { return GetNativeField<TSubclassOf<AShooterWeapon>>(this, "AShooterCharacter", "GPSWeapon"); }
	TSubclassOf<AShooterWeapon> GetCompassWeaponField() const { return GetNativeField<TSubclassOf<AShooterWeapon>>(this, "AShooterCharacter", "CompassWeapon"); }
	//TWeakObjectPtr<APrimalStructureLadder> GetClimbingLadderField() const { return GetNativeField<TWeakObjectPtr<APrimalStructureLadder>>(this, "AShooterCharacter", "ClimbingLadder"); }
	FString GetPlayerNameField() const { return GetNativeField<FString>(this, "AShooterCharacter", "PlayerName"); }
	void SetPlayerNameField(FString newValue) { SetNativeField(this, "AShooterCharacter", "PlayerName", newValue); }
	TWeakObjectPtr<APrimalDinoCharacter> GetRidingDinoField() const { return GetNativeField<TWeakObjectPtr<APrimalDinoCharacter>>(this, "AShooterCharacter", "RidingDino"); }
	TArray<FName> GetLowerBodyPartRootBonesField() const { return GetNativeField<TArray<FName>>(this, "AShooterCharacter", "LowerBodyPartRootBones"); }
	void SetLowerBodyPartRootBonesField(TArray<FName> newValue) { SetNativeField(this, "AShooterCharacter", "LowerBodyPartRootBones", newValue); }
	FRotator GetLastDinoAimRotationOffsetField() const { return GetNativeField<FRotator>(this, "AShooterCharacter", "LastDinoAimRotationOffset"); }
	void SetLastDinoAimRotationOffsetField(FRotator newValue) { SetNativeField(this, "AShooterCharacter", "LastDinoAimRotationOffset", newValue); }
	FRotator GetLastAimRotOffsetField() const { return GetNativeField<FRotator>(this, "AShooterCharacter", "LastAimRotOffset"); }
	void SetLastAimRotOffsetField(FRotator newValue) { SetNativeField(this, "AShooterCharacter", "LastAimRotOffset", newValue); }
	int Get_GrapHookCableObjectCountField() const { return GetNativeField<int>(this, "AShooterCharacter", "_GrapHookCableObjectCount"); }
	void Set_GrapHookCableObjectCountField(int newValue) { SetNativeField(this, "AShooterCharacter", "_GrapHookCableObjectCount", newValue); }
	FVector GetGrapHookDefaultOffsetField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "GrapHookDefaultOffset"); }
	void SetGrapHookDefaultOffsetField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "GrapHookDefaultOffset", newValue); }
	float GetGrapHookCableWidthField() const { return GetNativeField<float>(this, "AShooterCharacter", "GrapHookCableWidth"); }
	void SetGrapHookCableWidthField(float newValue) { SetNativeField(this, "AShooterCharacter", "GrapHookCableWidth", newValue); }
	float GetGrapHookPulledRopeDistanceField() const { return GetNativeField<float>(this, "AShooterCharacter", "GrapHookPulledRopeDistance"); }
	void SetGrapHookPulledRopeDistanceField(float newValue) { SetNativeField(this, "AShooterCharacter", "GrapHookPulledRopeDistance", newValue); }
	float GetGrapHookSyncTimeField() const { return GetNativeField<float>(this, "AShooterCharacter", "GrapHookSyncTime"); }
	void SetGrapHookSyncTimeField(float newValue) { SetNativeField(this, "AShooterCharacter", "GrapHookSyncTime", newValue); }
	bool GetbReleasingGrapHookField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bReleasingGrapHook"); }
	void SetbReleasingGrapHookField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bReleasingGrapHook", newValue); }
	FString GetPlatformProfileNameField() const { return GetNativeField<FString>(this, "AShooterCharacter", "PlatformProfileName"); }
	long double GetLastUncrouchTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastUncrouchTime"); }
	void SetLastUncrouchTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastUncrouchTime", newValue); }
	long double GetLastUnproneTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastUnproneTime"); }
	void SetLastUnproneTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastUnproneTime", newValue); }
	float GetCurrentWeaponBobSpeedField() const { return GetNativeField<float>(this, "AShooterCharacter", "CurrentWeaponBobSpeed"); }
	void SetCurrentWeaponBobSpeedField(float newValue) { SetNativeField(this, "AShooterCharacter", "CurrentWeaponBobSpeed", newValue); }
	float GetWalkBobOldSpeedField() const { return GetNativeField<float>(this, "AShooterCharacter", "WalkBobOldSpeed"); }
	void SetWalkBobOldSpeedField(float newValue) { SetNativeField(this, "AShooterCharacter", "WalkBobOldSpeed", newValue); }
	float GetAppliedBobField() const { return GetNativeField<float>(this, "AShooterCharacter", "AppliedBob"); }
	void SetAppliedBobField(float newValue) { SetNativeField(this, "AShooterCharacter", "AppliedBob", newValue); }
	float GetBobTimeField() const { return GetNativeField<float>(this, "AShooterCharacter", "BobTime"); }
	void SetBobTimeField(float newValue) { SetNativeField(this, "AShooterCharacter", "BobTime", newValue); }
	long double GetLastPressReloadTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastPressReloadTime"); }
	void SetLastPressReloadTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastPressReloadTime", newValue); }
	FName GetWeaponAttachPointField() const { return GetNativeField<FName>(this, "AShooterCharacter", "WeaponAttachPoint"); }
	void SetWeaponAttachPointField(FName newValue) { SetNativeField(this, "AShooterCharacter", "WeaponAttachPoint", newValue); }
	float GetTargetingSpeedModifierField() const { return GetNativeField<float>(this, "AShooterCharacter", "TargetingSpeedModifier"); }
	void SetTargetingSpeedModifierField(float newValue) { SetNativeField(this, "AShooterCharacter", "TargetingSpeedModifier", newValue); }
	float GetWeaponBobTimeField() const { return GetNativeField<float>(this, "AShooterCharacter", "WeaponBobTime"); }
	void SetWeaponBobTimeField(float newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobTime", newValue); }
	float GetCurrentAimBlendingField() const { return GetNativeField<float>(this, "AShooterCharacter", "CurrentAimBlending"); }
	void SetCurrentAimBlendingField(float newValue) { SetNativeField(this, "AShooterCharacter", "CurrentAimBlending", newValue); }
	bool GetbWasFirstPersonField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bWasFirstPerson"); }
	void SetbWasFirstPersonField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bWasFirstPerson", newValue); }
	bool GetbWasOverrideHiddenShadowValueField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bWasOverrideHiddenShadowValue"); }
	void SetbWasOverrideHiddenShadowValueField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bWasOverrideHiddenShadowValue", newValue); }
	bool GetbLastLocInterpProneField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bLastLocInterpProne"); }
	void SetbLastLocInterpProneField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bLastLocInterpProne", newValue); }
	bool GetbLastLocInterpCrouchedField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bLastLocInterpCrouched"); }
	void SetbLastLocInterpCrouchedField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bLastLocInterpCrouched", newValue); }
	long double GetInterpLastCrouchProneStateChangeTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "InterpLastCrouchProneStateChangeTime"); }
	void SetInterpLastCrouchProneStateChangeTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "InterpLastCrouchProneStateChangeTime", newValue); }
	long double GetPressCrouchProneToggleTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "PressCrouchProneToggleTime"); }
	void SetPressCrouchProneToggleTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "PressCrouchProneToggleTime", newValue); }
	float GetCraftingMovementSpeedModifierField() const { return GetNativeField<float>(this, "AShooterCharacter", "CraftingMovementSpeedModifier"); }
	void SetCraftingMovementSpeedModifierField(float newValue) { SetNativeField(this, "AShooterCharacter", "CraftingMovementSpeedModifier", newValue); }
	FVector GetWeaponBobMagnitudesField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "WeaponBobMagnitudes"); }
	void SetWeaponBobMagnitudesField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobMagnitudes", newValue); }
	FVector GetWeaponBobPeriodsField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "WeaponBobPeriods"); }
	void SetWeaponBobPeriodsField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobPeriods", newValue); }
	FVector GetWeaponBobOffsetsField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "WeaponBobOffsets"); }
	void SetWeaponBobOffsetsField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobOffsets", newValue); }
	FVector GetWeaponBobMagnitudes_TargetingField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "WeaponBobMagnitudes_Targeting"); }
	void SetWeaponBobMagnitudes_TargetingField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobMagnitudes_Targeting", newValue); }
	FVector GetWeaponBobPeriods_TargetingField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "WeaponBobPeriods_Targeting"); }
	void SetWeaponBobPeriods_TargetingField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobPeriods_Targeting", newValue); }
	FVector GetWeaponBobOffsets_TargetingField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "WeaponBobOffsets_Targeting"); }
	void SetWeaponBobOffsets_TargetingField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobOffsets_Targeting", newValue); }
	float GetWeaponBobMinimumSpeedField() const { return GetNativeField<float>(this, "AShooterCharacter", "WeaponBobMinimumSpeed"); }
	void SetWeaponBobMinimumSpeedField(float newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobMinimumSpeed", newValue); }
	float GetWeaponBobSpeedBaseField() const { return GetNativeField<float>(this, "AShooterCharacter", "WeaponBobSpeedBase"); }
	void SetWeaponBobSpeedBaseField(float newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobSpeedBase", newValue); }
	float GetWeaponBobSpeedBaseFallingField() const { return GetNativeField<float>(this, "AShooterCharacter", "WeaponBobSpeedBaseFalling"); }
	void SetWeaponBobSpeedBaseFallingField(float newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobSpeedBaseFalling", newValue); }
	float GetWeaponBobTargetingBlendField() const { return GetNativeField<float>(this, "AShooterCharacter", "WeaponBobTargetingBlend"); }
	void SetWeaponBobTargetingBlendField(float newValue) { SetNativeField(this, "AShooterCharacter", "WeaponBobTargetingBlend", newValue); }
	//TArray<FItemAttachmentInfo> GetDefaultAttachmentInfosField() const { return GetNativeField<TArray<FItemAttachmentInfo>>(this, "AShooterCharacter", "DefaultAttachmentInfos"); }
	FItemNetID GetNextWeaponItemIDField() const { return GetNativeField<FItemNetID>(this, "AShooterCharacter", "NextWeaponItemID"); }
	TSubclassOf<AShooterWeapon> GetNextInventoryWeaponField() const { return GetNativeField<TSubclassOf<AShooterWeapon>>(this, "AShooterCharacter", "NextInventoryWeapon"); }
	void SetNextInventoryWeaponField(TSubclassOf<AShooterWeapon> newValue) { SetNativeField(this, "AShooterCharacter", "NextInventoryWeapon", newValue); }
	FItemNetID GetPreMapWeaponItemNetIDField() const { return GetNativeField<FItemNetID>(this, "AShooterCharacter", "PreMapWeaponItemNetID"); }
	void SetPreMapWeaponItemNetIDField(FItemNetID newValue) { SetNativeField(this, "AShooterCharacter", "PreMapWeaponItemNetID", newValue); }
	float GetServerSeatedViewRotationYawField() const { return GetNativeField<float>(this, "AShooterCharacter", "ServerSeatedViewRotationYaw"); }
	void SetServerSeatedViewRotationYawField(float newValue) { SetNativeField(this, "AShooterCharacter", "ServerSeatedViewRotationYaw", newValue); }
	float GetServerSeatedViewRotationPitchField() const { return GetNativeField<float>(this, "AShooterCharacter", "ServerSeatedViewRotationPitch"); }
	void SetServerSeatedViewRotationPitchField(float newValue) { SetNativeField(this, "AShooterCharacter", "ServerSeatedViewRotationPitch", newValue); }
	AShooterWeapon* GetCurrentWeaponField() const { return GetNativeField<AShooterWeapon *>(this, "AShooterCharacter", "CurrentWeapon"); }
	void SetCurrentWeaponField(AShooterWeapon* newValue) { SetNativeField(this, "AShooterCharacter", "CurrentWeapon", newValue); }
	unsigned __int64 GetLinkedPlayerDataIDField() const { return GetNativeField<unsigned __int64>(this, "AShooterCharacter", "LinkedPlayerDataID"); }
	void SetLinkedPlayerDataIDField(unsigned __int64 newValue) { SetNativeField(this, "AShooterCharacter", "LinkedPlayerDataID", newValue); }
	long double GetLastTimeInFallingField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastTimeInFalling"); }
	void SetLastTimeInFallingField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastTimeInFalling", newValue); }
	long double GetStartedRidingTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "StartedRidingTime"); }
	void SetStartedRidingTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "StartedRidingTime", newValue); }
	long double GetTimeSinceLastControllerField() const { return GetNativeField<long double>(this, "AShooterCharacter", "TimeSinceLastController"); }
	void SetTimeSinceLastControllerField(long double newValue) { SetNativeField(this, "AShooterCharacter", "TimeSinceLastController", newValue); }
	TWeakObjectPtr<AController> GetLastControllerField() const { return GetNativeField<TWeakObjectPtr<AController>>(this, "AShooterCharacter", "LastController"); }
	long double GetLastRequestedTribeTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastRequestedTribeTime"); }
	void SetLastRequestedTribeTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastRequestedTribeTime", newValue); }
	unsigned __int64 GetLastRequestedTribeIDField() const { return GetNativeField<unsigned __int64>(this, "AShooterCharacter", "LastRequestedTribeID"); }
	void SetLastRequestedTribeIDField(unsigned __int64 newValue) { SetNativeField(this, "AShooterCharacter", "LastRequestedTribeID", newValue); }
	FString GetLastRequestedTribeNameField() const { return GetNativeField<FString>(this, "AShooterCharacter", "LastRequestedTribeName"); }
	void SetLastRequestedTribeNameField(FString newValue) { SetNativeField(this, "AShooterCharacter", "LastRequestedTribeName", newValue); }
	TWeakObjectPtr<AShooterCharacter> GetLastRequestedTribePlayerCharacterField() const { return GetNativeField<TWeakObjectPtr<AShooterCharacter>>(this, "AShooterCharacter", "LastRequestedTribePlayerCharacter"); }
	float GetIndoorsHyperthermiaInsulationField() const { return GetNativeField<float>(this, "AShooterCharacter", "IndoorsHyperthermiaInsulation"); }
	void SetIndoorsHyperthermiaInsulationField(float newValue) { SetNativeField(this, "AShooterCharacter", "IndoorsHyperthermiaInsulation", newValue); }
	float GetIndoorsHypothermiaInsulationField() const { return GetNativeField<float>(this, "AShooterCharacter", "IndoorsHypothermiaInsulation"); }
	void SetIndoorsHypothermiaInsulationField(float newValue) { SetNativeField(this, "AShooterCharacter", "IndoorsHypothermiaInsulation", newValue); }
	float GetIndoorCheckIntervalField() const { return GetNativeField<float>(this, "AShooterCharacter", "IndoorCheckInterval"); }
	void SetIndoorCheckIntervalField(float newValue) { SetNativeField(this, "AShooterCharacter", "IndoorCheckInterval", newValue); }
	long double GetLastIndoorCheckTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastIndoorCheckTime"); }
	void SetLastIndoorCheckTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastIndoorCheckTime", newValue); }
	FItemNetID GetPreRidingWeaponItemNetIDField() const { return GetNativeField<FItemNetID>(this, "AShooterCharacter", "PreRidingWeaponItemNetID"); }
	void SetPreRidingWeaponItemNetIDField(FItemNetID newValue) { SetNativeField(this, "AShooterCharacter", "PreRidingWeaponItemNetID", newValue); }
	FItemNetID GetPreInventoryWeaponItemNetIDField() const { return GetNativeField<FItemNetID>(this, "AShooterCharacter", "PreInventoryWeaponItemNetID"); }
	void SetPreInventoryWeaponItemNetIDField(FItemNetID newValue) { SetNativeField(this, "AShooterCharacter", "PreInventoryWeaponItemNetID", newValue); }
	//TArray<FOverrideAnimBlueprintEntry> GetOverrideAnimBlueprintsField() const { return GetNativeField<TArray<FOverrideAnimBlueprintEntry>>(this, "AShooterCharacter", "OverrideAnimBlueprints"); }
	bool GetbPlayingShieldCoverAnimationField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bPlayingShieldCoverAnimation"); }
	void SetbPlayingShieldCoverAnimationField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bPlayingShieldCoverAnimation", newValue); }
	bool GetbPlayingShieldCoverAnimationForCrouchField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bPlayingShieldCoverAnimationForCrouch"); }
	void SetbPlayingShieldCoverAnimationForCrouchField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bPlayingShieldCoverAnimationForCrouch", newValue); }
	float GetEnemyPlayerMaxCursorHUDDistanceProneField() const { return GetNativeField<float>(this, "AShooterCharacter", "EnemyPlayerMaxCursorHUDDistanceProne"); }
	void SetEnemyPlayerMaxCursorHUDDistanceProneField(float newValue) { SetNativeField(this, "AShooterCharacter", "EnemyPlayerMaxCursorHUDDistanceProne", newValue); }
	float GetEnemyPlayerMaxCursorHUDDistanceCrouchedField() const { return GetNativeField<float>(this, "AShooterCharacter", "EnemyPlayerMaxCursorHUDDistanceCrouched"); }
	void SetEnemyPlayerMaxCursorHUDDistanceCrouchedField(float newValue) { SetNativeField(this, "AShooterCharacter", "EnemyPlayerMaxCursorHUDDistanceCrouched", newValue); }
	float GetEnemyPlayerMaxCursorHUDDistanceStandingField() const { return GetNativeField<float>(this, "AShooterCharacter", "EnemyPlayerMaxCursorHUDDistanceStanding"); }
	void SetEnemyPlayerMaxCursorHUDDistanceStandingField(float newValue) { SetNativeField(this, "AShooterCharacter", "EnemyPlayerMaxCursorHUDDistanceStanding", newValue); }
	//FSaddlePassengerSeatDefinition GetCurrentPassengerSeatDefinitionField() const { return GetNativeField<FSaddlePassengerSeatDefinition>(this, "AShooterCharacter", "CurrentPassengerSeatDefinition"); }
	float GetPreviousRootYawSpeedField() const { return GetNativeField<float>(this, "AShooterCharacter", "PreviousRootYawSpeed"); }
	void SetPreviousRootYawSpeedField(float newValue) { SetNativeField(this, "AShooterCharacter", "PreviousRootYawSpeed", newValue); }
	//FLinearColor[3] GetBodyColorsField() const { return GetNativeField<FLinearColor[3]>(this, "AShooterCharacter", "BodyColors"); }
	//void SetBodyColorsField(FLinearColor[3] newValue) { SetNativeField(this, "AShooterCharacter", "BodyColors", newValue); }
	float GetLoggedOutTargetingDesirabilityField() const { return GetNativeField<float>(this, "AShooterCharacter", "LoggedOutTargetingDesirability"); }
	void SetLoggedOutTargetingDesirabilityField(float newValue) { SetNativeField(this, "AShooterCharacter", "LoggedOutTargetingDesirability", newValue); }
	bool GetbIsRainWateredField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bIsRainWatered"); }
	void SetbIsRainWateredField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bIsRainWatered", newValue); }
	long double GetLastAttackTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastAttackTime"); }
	void SetLastAttackTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastAttackTime", newValue); }
	bool GetbCacheRidingDinoWeaponField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bCacheRidingDinoWeapon"); }
	void SetbCacheRidingDinoWeaponField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bCacheRidingDinoWeapon", newValue); }
	bool GetbWasLocallyControlledField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bWasLocallyControlled"); }
	void SetbWasLocallyControlledField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bWasLocallyControlled", newValue); }
	unsigned int GetUniqueNetIdTypeHashField() const { return GetNativeField<unsigned int>(this, "AShooterCharacter", "UniqueNetIdTypeHash"); }
	void SetUniqueNetIdTypeHashField(unsigned int newValue) { SetNativeField(this, "AShooterCharacter", "UniqueNetIdTypeHash", newValue); }
	long double GetLastUseHarvestTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastUseHarvestTime"); }
	void SetLastUseHarvestTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastUseHarvestTime", newValue); }
	long double GetStopRidingTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "StopRidingTime"); }
	void SetStopRidingTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "StopRidingTime", newValue); }
	long double GetLocalLastViewingInventoryTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LocalLastViewingInventoryTime"); }
	void SetLocalLastViewingInventoryTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LocalLastViewingInventoryTime", newValue); }
	FVector GetLastStasisCastPositionField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "LastStasisCastPosition"); }
	void SetLastStasisCastPositionField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "LastStasisCastPosition", newValue); }
	bool GetbWasHostPlayerField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bWasHostPlayer"); }
	void SetbWasHostPlayerField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bWasHostPlayer", newValue); }
	long double GetLastTimeHadControllerField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastTimeHadController"); }
	void SetLastTimeHadControllerField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastTimeHadController", newValue); }
	long double GetLastTaggedTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastTaggedTime"); }
	void SetLastTaggedTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastTaggedTime", newValue); }
	long double GetLastTaggedTimeExtraField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastTaggedTimeExtra"); }
	void SetLastTaggedTimeExtraField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastTaggedTimeExtra", newValue); }
	long double GetLastTaggedTimeThirdField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastTaggedTimeThird"); }
	void SetLastTaggedTimeThirdField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastTaggedTimeThird", newValue); }
	float GetExtraFloatVarField() const { return GetNativeField<float>(this, "AShooterCharacter", "ExtraFloatVar"); }
	void SetExtraFloatVarField(float newValue) { SetNativeField(this, "AShooterCharacter", "ExtraFloatVar", newValue); }
	FVector GetExtraVectorVarField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "ExtraVectorVar"); }
	void SetExtraVectorVarField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "ExtraVectorVar", newValue); }
	FVector GetExtraExtraVectorVarField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "ExtraExtraVectorVar"); }
	void SetExtraExtraVectorVarField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "ExtraExtraVectorVar", newValue); }
	FName GetExtraNameVarField() const { return GetNativeField<FName>(this, "AShooterCharacter", "ExtraNameVar"); }
	void SetExtraNameVarField(FName newValue) { SetNativeField(this, "AShooterCharacter", "ExtraNameVar", newValue); }
	bool GetbIsOnSeatingStructureField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bIsOnSeatingStructure"); }
	void SetbIsOnSeatingStructureField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bIsOnSeatingStructure", newValue); }
	bool GetbIsControllingBallistaField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bIsControllingBallista"); }
	void SetbIsControllingBallistaField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bIsControllingBallista", newValue); }
	bool GetbUseBallistaAimOffsetField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bUseBallistaAimOffset"); }
	void SetbUseBallistaAimOffsetField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bUseBallistaAimOffset", newValue); }
	float GetCurrentControlledBallistaYawField() const { return GetNativeField<float>(this, "AShooterCharacter", "CurrentControlledBallistaYaw"); }
	void SetCurrentControlledBallistaYawField(float newValue) { SetNativeField(this, "AShooterCharacter", "CurrentControlledBallistaYaw", newValue); }
	bool GetbIsServerAdminField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bIsServerAdmin"); }
	void SetbIsServerAdminField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bIsServerAdmin", newValue); }
	//TWeakObjectPtr<APrimalStructureSeating> GetSeatingStructureField() const { return GetNativeField<TWeakObjectPtr<APrimalStructureSeating>>(this, "AShooterCharacter", "SeatingStructure"); }
	long double GetNextPlayerUndergroundCheckField() const { return GetNativeField<long double>(this, "AShooterCharacter", "NextPlayerUndergroundCheck"); }
	void SetNextPlayerUndergroundCheckField(long double newValue) { SetNativeField(this, "AShooterCharacter", "NextPlayerUndergroundCheck", newValue); }
	int GetPlayerNumUnderGroundFailField() const { return GetNativeField<int>(this, "AShooterCharacter", "PlayerNumUnderGroundFail"); }
	void SetPlayerNumUnderGroundFailField(int newValue) { SetNativeField(this, "AShooterCharacter", "PlayerNumUnderGroundFail", newValue); }
	float GetLastSweepCapsuleHeightField() const { return GetNativeField<float>(this, "AShooterCharacter", "LastSweepCapsuleHeight"); }
	void SetLastSweepCapsuleHeightField(float newValue) { SetNativeField(this, "AShooterCharacter", "LastSweepCapsuleHeight", newValue); }
	float GetLastSweepCapsuleRadiusField() const { return GetNativeField<float>(this, "AShooterCharacter", "LastSweepCapsuleRadius"); }
	void SetLastSweepCapsuleRadiusField(float newValue) { SetNativeField(this, "AShooterCharacter", "LastSweepCapsuleRadius", newValue); }
	float GetClientSeatedViewRotationPitchField() const { return GetNativeField<float>(this, "AShooterCharacter", "ClientSeatedViewRotationPitch"); }
	void SetClientSeatedViewRotationPitchField(float newValue) { SetNativeField(this, "AShooterCharacter", "ClientSeatedViewRotationPitch", newValue); }
	float GetClientSeatedViewRotationYawField() const { return GetNativeField<float>(this, "AShooterCharacter", "ClientSeatedViewRotationYaw"); }
	void SetClientSeatedViewRotationYawField(float newValue) { SetNativeField(this, "AShooterCharacter", "ClientSeatedViewRotationYaw", newValue); }
	long double GetLastReleaseSeatingStructureTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastReleaseSeatingStructureTime"); }
	void SetLastReleaseSeatingStructureTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastReleaseSeatingStructureTime", newValue); }
	char GetPlayerBadgeGroupField() const { return GetNativeField<char>(this, "AShooterCharacter", "PlayerBadgeGroup"); }
	void SetPlayerBadgeGroupField(char newValue) { SetNativeField(this, "AShooterCharacter", "PlayerBadgeGroup", newValue); }
	bool GetbShouldInvertTurnInputField() const { return GetNativeField<bool>(this, "AShooterCharacter", "bShouldInvertTurnInput"); }
	void SetbShouldInvertTurnInputField(bool newValue) { SetNativeField(this, "AShooterCharacter", "bShouldInvertTurnInput", newValue); }
	int GetAllianceInviteRequestingTeamField() const { return GetNativeField<int>(this, "AShooterCharacter", "AllianceInviteRequestingTeam"); }
	void SetAllianceInviteRequestingTeamField(int newValue) { SetNativeField(this, "AShooterCharacter", "AllianceInviteRequestingTeam", newValue); }
	unsigned int GetAllianceInviteIDField() const { return GetNativeField<unsigned int>(this, "AShooterCharacter", "AllianceInviteID"); }
	void SetAllianceInviteIDField(unsigned int newValue) { SetNativeField(this, "AShooterCharacter", "AllianceInviteID", newValue); }
	FString GetAllianceInviteNameField() const { return GetNativeField<FString>(this, "AShooterCharacter", "AllianceInviteName"); }
	void SetAllianceInviteNameField(FString newValue) { SetNativeField(this, "AShooterCharacter", "AllianceInviteName", newValue); }
	long double GetAllianceInviteTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "AllianceInviteTime"); }
	void SetAllianceInviteTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "AllianceInviteTime", newValue); }
	long double GetLastUpdatedAimActorsTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastUpdatedAimActorsTime"); }
	void SetLastUpdatedAimActorsTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastUpdatedAimActorsTime", newValue); }
	FVector GetUpdateHyperThermalInsulationPositionField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "UpdateHyperThermalInsulationPosition"); }
	void SetUpdateHyperThermalInsulationPositionField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "UpdateHyperThermalInsulationPosition", newValue); }
	FVector GetUpdateHypoThermalInsulationPositionField() const { return GetNativeField<FVector>(this, "AShooterCharacter", "UpdateHypoThermalInsulationPosition"); }
	void SetUpdateHypoThermalInsulationPositionField(FVector newValue) { SetNativeField(this, "AShooterCharacter", "UpdateHypoThermalInsulationPosition", newValue); }
	long double GetNextUpdateHyperThermalInsulationTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "NextUpdateHyperThermalInsulationTime"); }
	void SetNextUpdateHyperThermalInsulationTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "NextUpdateHyperThermalInsulationTime", newValue); }
	long double GetNextUpdateHypoThermalInsulationTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "NextUpdateHypoThermalInsulationTime"); }
	void SetNextUpdateHypoThermalInsulationTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "NextUpdateHypoThermalInsulationTime", newValue); }
	float GetLastAdditionalHypoThermalInsulationField() const { return GetNativeField<float>(this, "AShooterCharacter", "LastAdditionalHypoThermalInsulation"); }
	void SetLastAdditionalHypoThermalInsulationField(float newValue) { SetNativeField(this, "AShooterCharacter", "LastAdditionalHypoThermalInsulation", newValue); }
	float GetLastAdditionalHyperThermalInsulationField() const { return GetNativeField<float>(this, "AShooterCharacter", "LastAdditionalHyperThermalInsulation"); }
	void SetLastAdditionalHyperThermalInsulationField(float newValue) { SetNativeField(this, "AShooterCharacter", "LastAdditionalHyperThermalInsulation", newValue); }
	float GetWaterLossRateMultiplierField() const { return GetNativeField<float>(this, "AShooterCharacter", "WaterLossRateMultiplier"); }
	void SetWaterLossRateMultiplierField(float newValue) { SetNativeField(this, "AShooterCharacter", "WaterLossRateMultiplier", newValue); }
	long double GetLastTryAccessInventoryFailTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastTryAccessInventoryFailTime"); }
	void SetLastTryAccessInventoryFailTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastTryAccessInventoryFailTime", newValue); }
	long double GetLastEmotePlayTimeField() const { return GetNativeField<long double>(this, "AShooterCharacter", "LastEmotePlayTime"); }
	void SetLastEmotePlayTimeField(long double newValue) { SetNativeField(this, "AShooterCharacter", "LastEmotePlayTime", newValue); }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "AShooterCharacter", "GetPrivateStaticClass"); }
	void OnRep_RawBoneModifiers() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnRep_RawBoneModifiers"); }
	void UpdateTransponders() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "UpdateTransponders"); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "BeginPlay"); }
	void PlaySpawnAnim() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "PlaySpawnAnim"); }
	void ClearSpawnAnim() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClearSpawnAnim"); }
	void PlayJumpAnim() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "PlayJumpAnim"); }
	void PlayLandedAnim() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "PlayLandedAnim"); }
	void DedicatedServerBoneFixup() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "DedicatedServerBoneFixup"); }
	void ControllerLeavingGame(AShooterPlayerController* theController) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "AShooterCharacter", "ControllerLeavingGame", theController); }
	void ModifyFirstPersonCameraLocation(FVector* Loc, float DeltaTime) { NativeCall<void, FVector *, float>((DWORD64)this, "AShooterCharacter", "ModifyFirstPersonCameraLocation", Loc, DeltaTime); }
	void PossessedBy(AController* InController) { NativeCall<void, AController *>((DWORD64)this, "AShooterCharacter", "PossessedBy", InController); }
	void LocalPossessedBy(APlayerController* ByController) { NativeCall<void, APlayerController *>((DWORD64)this, "AShooterCharacter", "LocalPossessedBy", ByController); }
	void ServerDetachGrapHookCable_Implementation(bool bDoUpwardsJump, float UpwardsJumpYaw) { NativeCall<void, bool, float>((DWORD64)this, "AShooterCharacter", "ServerDetachGrapHookCable_Implementation", bDoUpwardsJump, UpwardsJumpYaw); }
	void ServerReleaseGrapHookCable_Implementation(bool bReleasing) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "ServerReleaseGrapHookCable_Implementation", bReleasing); }
	void DetachGrapHookCable_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "DetachGrapHookCable_Implementation"); }
	void SyncGrapHookDistance_Implementation(float Distance) { NativeCall<void, float>((DWORD64)this, "AShooterCharacter", "SyncGrapHookDistance_Implementation", Distance); }
	void UpdateGrapHook(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "AShooterCharacter", "UpdateGrapHook", DeltaSeconds); }
	void SetCarriedPitchYaw_Implementation(float NewCarriedPitch, float NewCarriedYaw) { NativeCall<void, float, float>((DWORD64)this, "AShooterCharacter", "SetCarriedPitchYaw_Implementation", NewCarriedPitch, NewCarriedYaw); }
	FRotator* GetAimOffsets(FRotator* result, float DeltaTime, FRotator* RootRotOffset, float* RootYawSpeed, float MaxYawAimClamp, FVector* RootLocOffset) { return NativeCall<FRotator *, FRotator *, float, FRotator *, float *, float, FVector *>((DWORD64)this, "AShooterCharacter", "GetAimOffsets", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset); }
	void UpdatePawnMeshes(bool bForceThirdPerson, bool bForceFlush) { NativeCall<void, bool, bool>((DWORD64)this, "AShooterCharacter", "UpdatePawnMeshes", bForceThirdPerson, bForceFlush); }
	void OnCameraUpdate(FVector* CameraLocation, FRotator* CameraRotation) { NativeCall<void, FVector *, FRotator *>((DWORD64)this, "AShooterCharacter", "OnCameraUpdate", CameraLocation, CameraRotation); }
	void GiveDefaultWeapon(bool bForceGiveDefaultWeapon) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "GiveDefaultWeapon", bForceGiveDefaultWeapon); }
	void GiveMapWeapon() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "GiveMapWeapon"); }
	void SwitchMap() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "SwitchMap"); }
	void DelayGiveDefaultWeapon(float DelayTime) { NativeCall<void, float>((DWORD64)this, "AShooterCharacter", "DelayGiveDefaultWeapon", DelayTime); }
	void ServerSwitchMap_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerSwitchMap_Implementation"); }
	void ServerGiveDefaultWeapon_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerGiveDefaultWeapon_Implementation"); }
	void GivePrimalItemWeapon(UPrimalItem* aPrimalItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "AShooterCharacter", "GivePrimalItemWeapon", aPrimalItem); }
	void StartWeaponSwitch(UPrimalItem* aPrimalItem, bool bDontClearLastWeapon) { NativeCall<void, UPrimalItem *, bool>((DWORD64)this, "AShooterCharacter", "StartWeaponSwitch", aPrimalItem, bDontClearLastWeapon); }
	void FinishWeaponSwitch() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "FinishWeaponSwitch"); }
	float GetMaxCursorHUDDistance(AShooterPlayerController* PC) { return NativeCall<float, AShooterPlayerController *>((DWORD64)this, "AShooterCharacter", "GetMaxCursorHUDDistance", PC); }
	void DrawFloatingChatMessage() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "DrawFloatingChatMessage"); }
	void SetCurrentWeapon(AShooterWeapon* NewWeapon, AShooterWeapon* LastWeapon) { NativeCall<void, AShooterWeapon *, AShooterWeapon *>((DWORD64)this, "AShooterCharacter", "SetCurrentWeapon", NewWeapon, LastWeapon); }
	void ForceSleep() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ForceSleep"); }
	bool CanFire() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CanFire"); }
	void SetTargeting(bool bNewTargeting) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "SetTargeting", bNewTargeting); }
	void ServerSetTargeting_Implementation(bool bNewTargeting) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "ServerSetTargeting_Implementation", bNewTargeting); }
	void ZoomIn() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ZoomIn"); }
	void ZoomOut() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ZoomOut"); }
	bool CanProne() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CanProne"); }
	bool CanCrouch() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CanCrouch"); }
	void OnPressCrouch() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnPressCrouch"); }
	void OnPressProne() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnPressProne"); }
	void OnPressCrouchProneToggle() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnPressCrouchProneToggle"); }
	void OnReleaseCrouchProneToggle() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnReleaseCrouchProneToggle"); }
	void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>((DWORD64)this, "AShooterCharacter", "OnEndCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>((DWORD64)this, "AShooterCharacter", "OnStartCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void OnStartFire(bool bFromGamepadRight) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "OnStartFire", bFromGamepadRight); }
	void OnStopFire(bool bFromGamepadRight) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "OnStopFire", bFromGamepadRight); }
	void OnStartAltFire() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnStartAltFire"); }
	void OnStopAltFire() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnStopAltFire"); }
	void OnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "OnStartTargeting", bFromGamepadLeft); }
	void OnStopTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "OnStopTargeting", bFromGamepadLeft); }
	void OnPressReload() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnPressReload"); }
	void OnReload() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnReload"); }
	bool IsRunning() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsRunning"); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset) { NativeCall<void, bool, bool>((DWORD64)this, "AShooterCharacter", "SetSleeping", bSleeping, bUseRagdollLocationOffset); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsValidUnStasisCaster"); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "CheckAndHandleBasedPlayersBeingPushedThroughWalls"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "AShooterCharacter", "Tick", DeltaSeconds); }
	void UpdateCarriedLocationAndRotation(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "AShooterCharacter", "UpdateCarriedLocationAndRotation", DeltaSeconds); }
	float GetCarryingSocketYaw(bool RefreshBones) { return NativeCall<float, bool>((DWORD64)this, "AShooterCharacter", "GetCarryingSocketYaw", RefreshBones); }
	bool CanBeCarried() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CanBeCarried"); }
	bool IsTargeting() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsTargeting"); }
	bool IsFirstPerson() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsFirstPerson"); }
	bool AllowFirstPerson() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "AllowFirstPerson"); }
	void SetCameraMode(bool bFirstperson) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "SetCameraMode", bFirstperson); }
	void PlaySpawnIntro() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "PlaySpawnIntro"); }
	void FinishSpawnIntro() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "FinishSpawnIntro"); }
	bool ValidToRestoreForPC(AShooterPlayerController* aPC) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "AShooterCharacter", "ValidToRestoreForPC", aPC); }
	AShooterCharacter* FindForPlayerController(AShooterPlayerController* aPC) { return NativeCall<AShooterCharacter *, AShooterPlayerController *>((DWORD64)this, "AShooterCharacter", "FindForPlayerController", aPC); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterCharacter", "GetDescriptiveName", result); }
	UPrimalPlayerData* GetPlayerData() { return NativeCall<UPrimalPlayerData *>((DWORD64)this, "AShooterCharacter", "GetPlayerData"); }
	void PlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "AShooterCharacter", "PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	bool IsUsingShield() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsUsingShield"); }
	bool IsBlockingWithShield() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsBlockingWithShield"); }
	bool GetBlockingShieldOffsets(FVector* OutBlockingShieldFPVTranslation, FRotator* OutBlockingShieldFPVRotation) { return NativeCall<bool, FVector *, FRotator *>((DWORD64)this, "AShooterCharacter", "GetBlockingShieldOffsets", OutBlockingShieldFPVTranslation, OutBlockingShieldFPVRotation); }
	void ServerForceUpdatedAimedActors(float OverrideMaxDistance) { NativeCall<void, float>((DWORD64)this, "AShooterCharacter", "ServerForceUpdatedAimedActors", OverrideMaxDistance); }
	void ServerSetBallistaNewRotation_Implementation(float Pitch, float Yaw) { NativeCall<void, float, float>((DWORD64)this, "AShooterCharacter", "ServerSetBallistaNewRotation_Implementation", Pitch, Yaw); }
	void ServerNotifyBallistaShot_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerNotifyBallistaShot_Implementation"); }
	float GetMaxSpeedModifier() { return NativeCall<float>((DWORD64)this, "AShooterCharacter", "GetMaxSpeedModifier"); }
	void SetRidingDino(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterCharacter", "SetRidingDino", aDino); }
	void ClearRidingDino(bool bFromDino) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "ClearRidingDino", bFromDino); }
	void SetCarryingDino(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterCharacter", "SetCarryingDino", aDino); }
	void ClearCarryingDino(bool bFromDino) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "ClearCarryingDino", bFromDino); }
	//void SetRidingDinoAsPassenger(APrimalDinoCharacter * aDino, FSaddlePassengerSeatDefinition * SeatDefinition) { NativeCall<void, APrimalDinoCharacter *, FSaddlePassengerSeatDefinition *>((DWORD64)this, "AShooterCharacter", "SetRidingDinoAsPassenger", aDino, SeatDefinition); }
	void ClearRidingDinoAsPassenger(bool bFromDino) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "ClearRidingDinoAsPassenger", bFromDino); }
	void ServerLaunchMountedDino_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerLaunchMountedDino_Implementation"); }
	void ClientPlayHarvestAnim_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClientPlayHarvestAnim_Implementation"); }
	void LaunchMountedDino() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "LaunchMountedDino"); }
	void OnPrimalCharacterSleeped() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnPrimalCharacterSleeped"); }
	bool Die(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "AShooterCharacter", "Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CanJumpInternal_Implementation"); }
	bool CanCrouchInternal() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CanCrouchInternal"); }
	bool CanProneInternal() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CanProneInternal"); }
	bool IsCrafting() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsCrafting"); }
	void RemoveAttachments() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "RemoveAttachments"); }
	void NotifyEquippedItems() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "NotifyEquippedItems"); }
	void RefreshDefaultAttachments(AActor* UseOtherActor) { NativeCall<void, AActor *>((DWORD64)this, "AShooterCharacter", "RefreshDefaultAttachments", UseOtherActor); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>((DWORD64)this, "AShooterCharacter", "ClientMultiUse", ForPC, UseIndex); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>((DWORD64)this, "AShooterCharacter", "TryMultiUse", ForPC, UseIndex); }
	void RefreshTribeName() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "RefreshTribeName"); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>((DWORD64)this, "AShooterCharacter", "ChangeActorTeam", NewTeam); }
	void ClientClearTribeRequest_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClientClearTribeRequest_Implementation"); }
	void ClientNotifyTribeRequest_Implementation(FString* RequestTribeName, AShooterCharacter* PlayerCharacter) { NativeCall<void, FString *, AShooterCharacter *>((DWORD64)this, "AShooterCharacter", "ClientNotifyTribeRequest_Implementation", RequestTribeName, PlayerCharacter); }
	void PlayDrinkingAnimation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "PlayDrinkingAnimation"); }
	float GetCharacterAdditionalHypothermiaInsulationValue() { return NativeCall<float>((DWORD64)this, "AShooterCharacter", "GetCharacterAdditionalHypothermiaInsulationValue"); }
	bool CalcIsIndoors() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "CalcIsIndoors"); }
	//float GetInsulationFromItem(FHitResult * HitOut, EPrimalItemStat::Type TypeInsulation) { return NativeCall<float, FHitResult *, EPrimalItemStat::Type>((DWORD64)this, "AShooterCharacter", "GetInsulationFromItem", HitOut, TypeInsulation); }
	//float GetCharacterAdditionalInsulationValueFromStructure(UWorld * theWorld, FVector * actorLoc, EPrimalItemStat::Type TypeInsulation) { return NativeCall<float, UWorld *, FVector *, EPrimalItemStat::Type>((DWORD64)this, "AShooterCharacter", "GetCharacterAdditionalInsulationValueFromStructure", theWorld, actorLoc, TypeInsulation); }
	float GetCharacterAdditionalHyperthermiaInsulationValue() { return NativeCall<float>((DWORD64)this, "AShooterCharacter", "GetCharacterAdditionalHyperthermiaInsulationValue"); }
	void PreInitializeComponents() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "PreInitializeComponents"); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, char PreviousCustomMode) { NativeCall<void, EMovementMode, char>((DWORD64)this, "AShooterCharacter", "OnMovementModeChanged", PrevMovementMode, PreviousCustomMode); }
	void OnBeginDrag_Implementation(APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter *, int, bool>((DWORD64)this, "AShooterCharacter", "OnBeginDrag_Implementation", Dragged, BoneIndex, bWithGrapHook); }
	void OnEndDrag_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnEndDrag_Implementation"); }
	bool IsSubmerged(bool bDontCheckSwimming, bool bUseHalfThreshold, bool bForceCheck) { return NativeCall<bool, bool, bool, bool>((DWORD64)this, "AShooterCharacter", "IsSubmerged", bDontCheckSwimming, bUseHalfThreshold, bForceCheck); }
	void UpdateSwimmingState() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "UpdateSwimmingState"); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>((DWORD64)this, "AShooterCharacter", "SetCharacterMeshesMaterialScalarParamValue", ParamName, Value); }
	float GetRidingDinoAnimSpeedRatio() { return NativeCall<float>((DWORD64)this, "AShooterCharacter", "GetRidingDinoAnimSpeedRatio"); }
	//UAnimSequence * GetDinoRidingAnimation() { return NativeCall<UAnimSequence *>((DWORD64)this, "AShooterCharacter", "GetDinoRidingAnimation"); }
	//UAnimSequence * GetDinoRidingMoveAnimation() { return NativeCall<UAnimSequence *>((DWORD64)this, "AShooterCharacter", "GetDinoRidingMoveAnimation"); }
	//UAnimSequence * GetSeatingAnimation() { return NativeCall<UAnimSequence *>((DWORD64)this, "AShooterCharacter", "GetSeatingAnimation"); }
	//float GetBaseTargetingDesire(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>((DWORD64)this, "AShooterCharacter", "GetBaseTargetingDesire", Attacker); }
	void ApplyBodyColors() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ApplyBodyColors"); }
	void ApplyBoneModifiers() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ApplyBoneModifiers"); }
	//float GetTargetingDesirability(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>((DWORD64)this, "AShooterCharacter", "GetTargetingDesirability", Attacker); }
	//UAnimMontage * GetOverridenMontage(UAnimMontage * AnimMontage) { return NativeCall<UAnimMontage *, UAnimMontage *>((DWORD64)this, "AShooterCharacter", "GetOverridenMontage", AnimMontage); }
	//UAnimSequence * GetOverridenAnimSequence(UAnimSequence * AnimSeq) { return NativeCall<UAnimSequence *, UAnimSequence *>((DWORD64)this, "AShooterCharacter", "GetOverridenAnimSequence", AnimSeq); }
	bool IsWatered() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsWatered"); }
	void AdjustDamage(float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float *, FDamageEvent *, AController *, AActor *>((DWORD64)this, "AShooterCharacter", "AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool IsBlockedByShield(FHitResult* HitInfo, FVector* ShotDirection) { return NativeCall<bool, FHitResult *, FVector *>((DWORD64)this, "AShooterCharacter", "IsBlockedByShield", HitInfo, ShotDirection); }
	void ClientNotifyLevelUp_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClientNotifyLevelUp_Implementation"); }
	void OrbitCamOn() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OrbitCamOn"); }
	void OrbitCamToggle() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OrbitCamToggle"); }
	void SetRagdollPhysics(bool bUseRagdollLocationOffset, bool bForceRecreateBones, bool bForLoading) { NativeCall<void, bool, bool, bool>((DWORD64)this, "AShooterCharacter", "SetRagdollPhysics", bUseRagdollLocationOffset, bForceRecreateBones, bForLoading); }
	bool IsPlayingUpperBodyCallAnimation_Implementation() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsPlayingUpperBodyCallAnimation_Implementation"); }
	void ServerCallFollow_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCallFollow_Implementation"); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterCharacter", "ServerCallFollowOne_Implementation", ForDinoChar); }
	void ServerCallStay_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCallStay_Implementation"); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterCharacter", "ServerCallStayOne_Implementation", ForDinoChar); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "AShooterCharacter", "ServerCallFollowDistanceCycleOne_Implementation", ForDinoChar); }
	void ServerCallAggressive_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCallAggressive_Implementation"); }
	void ServerCallNeutral_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCallNeutral_Implementation"); }
	void ServerCallPassive_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCallPassive_Implementation"); }
	void ServerCallSetAggressive_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCallSetAggressive_Implementation"); }
	void ServerCallAttackTarget_Implementation(AActor* TheTarget) { NativeCall<void, AActor *>((DWORD64)this, "AShooterCharacter", "ServerCallAttackTarget_Implementation", TheTarget); }
	void ClientOrderedMoveTo_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClientOrderedMoveTo_Implementation"); }
	void ClientOrderedAttackTarget_Implementation(AActor* attackTarget) { NativeCall<void, AActor *>((DWORD64)this, "AShooterCharacter", "ClientOrderedAttackTarget_Implementation", attackTarget); }
	void ServerCallMoveTo_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCallMoveTo_Implementation"); }
	void TryAccessInventory() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "TryAccessInventory"); }
	FString* GetGenderString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "AShooterCharacter", "GetGenderString", result); }
	void PlayEmoteAnimation_Implementation(char EmoteIndex) { NativeCall<void, char>((DWORD64)this, "AShooterCharacter", "PlayEmoteAnimation_Implementation", EmoteIndex); }
	void OnVoiceTalkingStateChanged(bool talking) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "OnVoiceTalkingStateChanged", talking); }
	void OnFailedJumped() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnFailedJumped"); }
	float GetRecoilMultiplier() { return NativeCall<float>((DWORD64)this, "AShooterCharacter", "GetRecoilMultiplier"); }
	void StasisingCharacter() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "StasisingCharacter"); }
	bool UseAdditiveStandingAnim() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "UseAdditiveStandingAnim"); }
	bool GetAdditiveStandingAnimNonAdditive() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "GetAdditiveStandingAnimNonAdditive"); }
	void ClosedInventoryUI() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClosedInventoryUI"); }
	void ServerSetViewingInventory_Implementation(bool bIsViewing) { NativeCall<void, bool>((DWORD64)this, "AShooterCharacter", "ServerSetViewingInventory_Implementation", bIsViewing); }
	void ServerCheckDrinkingWater_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerCheckDrinkingWater_Implementation"); }
	void GameStateHandleEvent_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "GameStateHandleEvent_Implementation"); }
	APrimalDinoCharacter* GetRidingDino() { return NativeCall<APrimalDinoCharacter *>((DWORD64)this, "AShooterCharacter", "GetRidingDino"); }
	void AttachToLadder_Implementation(USceneComponent* Parent) { NativeCall<void, USceneComponent *>((DWORD64)this, "AShooterCharacter", "AttachToLadder_Implementation", Parent); }
	void DetachFromLadder_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "DetachFromLadder_Implementation"); }
	bool IsOnSeatingStructure() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsOnSeatingStructure"); }
	bool IsControllingBallistaTurret() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsControllingBallistaTurret"); }
	//APrimalStructureTurretBallista * GetControlledTurretBallista() { return NativeCall<APrimalStructureTurretBallista *>((DWORD64)this, "AShooterCharacter", "GetControlledTurretBallista"); }
	void OnAttachedToSeatingStructure() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "OnAttachedToSeatingStructure"); }
	//void OnDetachedFromSeatingStructure(APrimalStructureSeating * InSeatingStructure) { NativeCall<void, APrimalStructureSeating *>((DWORD64)this, "AShooterCharacter", "OnDetachedFromSeatingStructure", InSeatingStructure); }
	//void TakeSeatingStructure(APrimalStructureSeating * InSeatingStructure, int SeatNumber) { NativeCall<void, APrimalStructureSeating *, int>((DWORD64)this, "AShooterCharacter", "TakeSeatingStructure", InSeatingStructure, SeatNumber); }
	//void ReleaseSeatingStructure(APrimalStructureSeating * InSeatingStructure) { NativeCall<void, APrimalStructureSeating *>((DWORD64)this, "AShooterCharacter", "ReleaseSeatingStructure", InSeatingStructure); }
	void ServerPlayFireBallistaAnimation_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerPlayFireBallistaAnimation_Implementation"); }
	void ServerStopFireBallista_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerStopFireBallista_Implementation"); }
	void ServerToClientsPlayFireBallistaAnimation_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerToClientsPlayFireBallistaAnimation_Implementation"); }
	void ServerFireBallistaProjectile_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerFireBallistaProjectile_Implementation"); }
	void ServerSeatingStructureAction_Implementation(char ActionNumber) { NativeCall<void, char>((DWORD64)this, "AShooterCharacter", "ServerSeatingStructureAction_Implementation", ActionNumber); }
	void WasPushed(ACharacter* ByOtherCharacter) { NativeCall<void, ACharacter *>((DWORD64)this, "AShooterCharacter", "WasPushed", ByOtherCharacter); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn *>((DWORD64)this, "AShooterCharacter", "NotifyBumpedPawn", BumpedPawn); }
	void ClientNetEndClimbingLadder_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClientNetEndClimbingLadder_Implementation"); }
	void ServerNetEndClimbingLadder_Implementation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerNetEndClimbingLadder_Implementation"); }
	void RenamePlayer_Implementation(FString* NewName) { NativeCall<void, FString *>((DWORD64)this, "AShooterCharacter", "RenamePlayer_Implementation", NewName); }
	bool AllowDinoTargetingRange(FVector* AtLoc, float TargetingRange) { return NativeCall<bool, FVector *, float>((DWORD64)this, "AShooterCharacter", "AllowDinoTargetingRange", AtLoc, TargetingRange); }
	bool IsCarriedAsPassenger() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsCarriedAsPassenger"); }
	FVector* GetPawnViewLocation(FVector* result, bool bAllTransforms) { return NativeCall<FVector *, FVector *, bool>((DWORD64)this, "AShooterCharacter", "GetPawnViewLocation", result, bAllTransforms); }
	FRotator* GetPassengerAttachedRotation(FRotator* result) { return NativeCall<FRotator *, FRotator *>((DWORD64)this, "AShooterCharacter", "GetPassengerAttachedRotation", result); }
	void ClientInviteToAlliance_Implementation(int RequestingTeam, unsigned int AllianceID, FString* AllianceName, FString* InviteeName) { NativeCall<void, int, unsigned int, FString *, FString *>((DWORD64)this, "AShooterCharacter", "ClientInviteToAlliance_Implementation", RequestingTeam, AllianceID, AllianceName, InviteeName); }
	void InviteToAlliance() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "InviteToAlliance"); }
	bool CanDragCharacter(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter *>((DWORD64)this, "AShooterCharacter", "CanDragCharacter", Character); }
	void GiveDefaultWeaponTimer() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "GiveDefaultWeaponTimer"); }
	bool IsCarryingSomething(bool bNotForRunning) { return NativeCall<bool, bool>((DWORD64)this, "AShooterCharacter", "IsCarryingSomething", bNotForRunning); }
	void ForceGiveDefaultWeapon() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ForceGiveDefaultWeapon"); }
	APrimalDinoCharacter* GetBasedOnDino() { return NativeCall<APrimalDinoCharacter *>((DWORD64)this, "AShooterCharacter", "GetBasedOnDino"); }
	void ResetCollisionSweepLocation(FVector* newLocation) { NativeCall<void, FVector *>((DWORD64)this, "AShooterCharacter", "ResetCollisionSweepLocation", newLocation); }
	void HideWeapon() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "HideWeapon"); }
	void ShowWeapon() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ShowWeapon"); }
	void ServerStartSurfaceCameraForPassenger_Implementation(float yaw, float roll, float pitch, bool bShouldInvertInput) { NativeCall<void, float, float, float, bool>((DWORD64)this, "AShooterCharacter", "ServerStartSurfaceCameraForPassenger_Implementation", yaw, roll, pitch, bShouldInvertInput); }
	float ModifyAirControl(float AirControlIn) { return NativeCall<float, float>((DWORD64)this, "AShooterCharacter", "ModifyAirControl", AirControlIn); }
	FVector* GetLastSweepLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AShooterCharacter", "GetLastSweepLocation", result); }
	unsigned int GetUniqueNetIdTypeHash() { return NativeCall<unsigned int>((DWORD64)this, "AShooterCharacter", "GetUniqueNetIdTypeHash"); }
	bool IsSitting() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsSitting"); }
	bool IsProneOrSitting() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsProneOrSitting"); }
	UPrimalItem* GetShieldItem() { return NativeCall<UPrimalItem *>((DWORD64)this, "AShooterCharacter", "GetShieldItem"); }
	void ClientInviteToAlliance(int RequestingTeam, unsigned int AllianceID, FString* AllianceName, FString* InviteeName) { NativeCall<void, int, unsigned int, FString *, FString *>((DWORD64)this, "AShooterCharacter", "ClientInviteToAlliance", RequestingTeam, AllianceID, AllianceName, InviteeName); }
	void ClientNetEndClimbingLadder() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ClientNetEndClimbingLadder"); }
	void ClientNotifyTribeRequest(FString* RequestTribeName, AShooterCharacter* PlayerCharacter) { NativeCall<void, FString *, AShooterCharacter *>((DWORD64)this, "AShooterCharacter", "ClientNotifyTribeRequest", RequestTribeName, PlayerCharacter); }
	void DetachFromLadder() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "DetachFromLadder"); }
	void DetachGrapHookCable() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "DetachGrapHookCable"); }
	void GameStateHandleEvent() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "GameStateHandleEvent"); }
	bool IsPlayingUpperBodyCallAnimation() { return NativeCall<bool>((DWORD64)this, "AShooterCharacter", "IsPlayingUpperBodyCallAnimation"); }
	void RenamePlayer(FString* NewName) { NativeCall<void, FString *>((DWORD64)this, "AShooterCharacter", "RenamePlayer", NewName); }
	void ServerDetachGrapHookCable(bool bDoUpwardsJump, float UpwardsJumpYaw) { NativeCall<void, bool, float>((DWORD64)this, "AShooterCharacter", "ServerDetachGrapHookCable", bDoUpwardsJump, UpwardsJumpYaw); }
	void ServerLaunchMountedDino() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerLaunchMountedDino"); }
	void ServerNotifyBallistaShot() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerNotifyBallistaShot"); }
	void ServerPlayFireBallistaAnimation() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerPlayFireBallistaAnimation"); }
	void ServerSeatingStructureAction(char ActionNumber) { NativeCall<void, char>((DWORD64)this, "AShooterCharacter", "ServerSeatingStructureAction", ActionNumber); }
	void ServerSetBallistaNewRotation(float Pitch, float Yaw) { NativeCall<void, float, float>((DWORD64)this, "AShooterCharacter", "ServerSetBallistaNewRotation", Pitch, Yaw); }
	void ServerStartSurfaceCameraForPassenger(float yaw, float pitch, float roll, bool bShouldInvertInput) { NativeCall<void, float, float, float, bool>((DWORD64)this, "AShooterCharacter", "ServerStartSurfaceCameraForPassenger", yaw, pitch, roll, bShouldInvertInput); }
	void ServerStopFireBallista() { NativeCall<void>((DWORD64)this, "AShooterCharacter", "ServerStopFireBallista"); }
};

// Other

struct FPlayerDeathReason
{
	int PlayerID;
	FString DeathReason;
	long double DiedAtTime;
};

struct FUniqueNetIdRepl
{
	TSharedPtr<FUniqueNetId> UniqueNetId;
};

struct FPrimalPersistentCharacterStatsStruct
{
	unsigned __int16 GetCharacterStatusComponent_ExtraCharacterLevelField() const { return GetNativeField<unsigned __int16>(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExtraCharacterLevel"); }
	void SetCharacterStatusComponent_ExtraCharacterLevelField(unsigned __int16 newValue) { SetNativeField(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExtraCharacterLevel", newValue); }
	float GetCharacterStatusComponent_ExperiencePointsField() const { return GetNativeField<float>(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExperiencePoints"); }
	void SetCharacterStatusComponent_ExperiencePointsField(float newValue) { SetNativeField(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExperiencePoints", newValue); }
	int GetPlayerState_TotalEngramPointsField() const { return GetNativeField<int>(this, "FPrimalPersistentCharacterStatsStruct", "PlayerState_TotalEngramPoints"); }
	void SetPlayerState_TotalEngramPointsField(int newValue) { SetNativeField(this, "FPrimalPersistentCharacterStatsStruct", "PlayerState_TotalEngramPoints", newValue); }
	TArray<unsigned int> GetPerMapExplorerNoteUnlocksField() const { return GetNativeField<TArray<unsigned int>>(this, "FPrimalPersistentCharacterStatsStruct", "PerMapExplorerNoteUnlocks"); }
	void SetPerMapExplorerNoteUnlocksField(TArray<unsigned int> newValue) { SetNativeField(this, "FPrimalPersistentCharacterStatsStruct", "PerMapExplorerNoteUnlocks", newValue); }
	TArray<FName> GetEmoteUnlocksField() const { return GetNativeField<TArray<FName>>(this, "FPrimalPersistentCharacterStatsStruct", "EmoteUnlocks"); }
	void SetEmoteUnlocksField(TArray<FName> newValue) { SetNativeField(this, "FPrimalPersistentCharacterStatsStruct", "EmoteUnlocks", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetPlayerState_EngramBlueprintsField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "FPrimalPersistentCharacterStatsStruct", "PlayerState_EngramBlueprints"); }
	void SetPlayerState_EngramBlueprintsField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "FPrimalPersistentCharacterStatsStruct", "PlayerState_EngramBlueprints", newValue); }
	//FDinoOrderGroup[10] GetDinoOrderGroupsField() const { return GetNativeField<FDinoOrderGroup[10]>(this, "FPrimalPersistentCharacterStatsStruct", "DinoOrderGroups"); }
	int GetCurrentlySelectedDinoOrderGroupField() const { return GetNativeField<int>(this, "FPrimalPersistentCharacterStatsStruct", "CurrentlySelectedDinoOrderGroup"); }
	void SetCurrentlySelectedDinoOrderGroupField(int newValue) { SetNativeField(this, "FPrimalPersistentCharacterStatsStruct", "CurrentlySelectedDinoOrderGroup", newValue); }

	// Functions

	bool IsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>((DWORD64)this, "FPrimalPersistentCharacterStatsStruct", "IsPerMapExplorerNoteUnlocked", ExplorerNoteIndex); }
	void ApplyToPrimalCharacter(APrimalCharacter* aChar, AShooterPlayerController* forPC, bool bIgnoreStats) { NativeCall<void, APrimalCharacter *, AShooterPlayerController *, bool>((DWORD64)this, "FPrimalPersistentCharacterStatsStruct", "ApplyToPrimalCharacter", aChar, forPC, bIgnoreStats); }
	void GiveEngramsToPlayerState(APrimalCharacter* aChar, AShooterPlayerController* forPC) { NativeCall<void, APrimalCharacter *, AShooterPlayerController *>((DWORD64)this, "FPrimalPersistentCharacterStatsStruct", "GiveEngramsToPlayerState", aChar, forPC); }
};

// Player Data

struct __declspec(align(8)) FPrimalPlayerCharacterConfigStruct
{
	__int8 bIsFemale : 1;
	FLinearColor BodyColors[3];
	FString PlayerCharacterName;
	float RawBoneModifiers[22];
	int PlayerSpawnRegionIndex;
};

struct FPrimalPlayerDataStruct
{
	unsigned __int64 GetPlayerDataIDField() const { return GetNativeField<unsigned __int64>(this, "FPrimalPlayerDataStruct", "PlayerDataID"); }
	FUniqueNetIdRepl GetUniqueIDField() const { return GetNativeField<FUniqueNetIdRepl>(this, "FPrimalPlayerDataStruct", "UniqueID"); }
	FString GetSavedNetworkAddressField() const { return GetNativeField<FString>(this, "FPrimalPlayerDataStruct", "SavedNetworkAddress"); }
	FString GetPlayerNameField() const { return GetNativeField<FString>(this, "FPrimalPlayerDataStruct", "PlayerName"); }
	void SetPlayerNameField(FString newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "PlayerName", newValue); }
	unsigned int GetLocalPlayerIndexField() const { return GetNativeField<unsigned int>(this, "FPrimalPlayerDataStruct", "LocalPlayerIndex"); }
	void SetLocalPlayerIndexField(unsigned int newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "LocalPlayerIndex", newValue); }
	FPrimalPlayerCharacterConfigStruct* GetMyPlayerCharacterConfigField() const { return GetNativePointerField<FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerDataStruct", "MyPlayerCharacterConfig"); }
	FPrimalPersistentCharacterStatsStruct* GetMyPersistentCharacterStatsField() const { return GetNativePointerField<FPrimalPersistentCharacterStatsStruct*>(this, "FPrimalPlayerDataStruct", "MyPersistentCharacterStats"); }
	int GetTribeIDField() const { return GetNativeField<int>(this, "FPrimalPlayerDataStruct", "TribeID"); }
	void SetTribeIDField(int newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "TribeID", newValue); }
	int GetPlayerDataVersionField() const { return GetNativeField<int>(this, "FPrimalPlayerDataStruct", "PlayerDataVersion"); }
	void SetPlayerDataVersionField(int newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "PlayerDataVersion", newValue); }
	long double GetNextAllowedRespawnTimeField() const { return GetNativeField<long double>(this, "FPrimalPlayerDataStruct", "NextAllowedRespawnTime"); }
	void SetNextAllowedRespawnTimeField(long double newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "NextAllowedRespawnTime", newValue); }
	long double GetLastTimeDiedToEnemyTeamField() const { return GetNativeField<long double>(this, "FPrimalPlayerDataStruct", "LastTimeDiedToEnemyTeam"); }
	void SetLastTimeDiedToEnemyTeamField(long double newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "LastTimeDiedToEnemyTeam", newValue); }
	float GetAllowedRespawnIntervalField() const { return GetNativeField<float>(this, "FPrimalPlayerDataStruct", "AllowedRespawnInterval"); }
	void SetAllowedRespawnIntervalField(float newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "AllowedRespawnInterval", newValue); }
	float GetNumOfDeathsField() const { return GetNativeField<float>(this, "FPrimalPlayerDataStruct", "NumOfDeaths"); }
	void SetNumOfDeathsField(float newValue) { SetNativeField(this, "FPrimalPlayerDataStruct", "NumOfDeaths", newValue); }
};

struct UPrimalPlayerData
{
	FPrimalPlayerDataStruct* GetMyDataField() const { return GetNativePointerField<FPrimalPlayerDataStruct*>(this, "UPrimalPlayerData", "MyData"); }
	//TArray<UPrimalBuffPersistentData *> GetMyPersistentBuffDatasField() const { return GetNativeField<TArray<UPrimalBuffPersistentData *>>(this, "UPrimalPlayerData", "MyPersistentBuffDatas"); }
	bool GetbIsLocalPlayerField() const { return GetNativeField<bool>(this, "UPrimalPlayerData", "bIsLocalPlayer"); }
	void SetbIsLocalPlayerField(bool newValue) { SetNativeField(this, "UPrimalPlayerData", "bIsLocalPlayer", newValue); }
	float GetLastXPWritePercentField() const { return GetNativeField<float>(this, "UPrimalPlayerData", "LastXPWritePercent"); }
	void SetLastXPWritePercentField(float newValue) { SetNativeField(this, "UPrimalPlayerData", "LastXPWritePercent", newValue); }

	// Functions

	bool MatchesPlayer(AShooterPlayerState* aPlayerState, bool bCheckForExistingPlayer) { return NativeCall<bool, AShooterPlayerState *, bool>((DWORD64)this, "UPrimalPlayerData", "MatchesPlayer", aPlayerState, bCheckForExistingPlayer); }
	void InitForPlayer(AShooterPlayerState* aPlayerState, bool bDontSaveData) { NativeCall<void, AShooterPlayerState *, bool>((DWORD64)this, "UPrimalPlayerData", "InitForPlayer", aPlayerState, bDontSaveData); }
	AShooterPlayerState* GetPlayerState(AShooterPlayerState* ignorePlayerState, bool bOnlyCheckExistingPlayers) { return NativeCall<AShooterPlayerState *, AShooterPlayerState *, bool>((DWORD64)this, "UPrimalPlayerData", "GetPlayerState", ignorePlayerState, bOnlyCheckExistingPlayers); }
	UPrimalPlayerData* GetDataForID(unsigned __int64 PlayerDataID) { return NativeCall<UPrimalPlayerData *, unsigned __int64>((DWORD64)this, "UPrimalPlayerData", "GetDataForID", PlayerDataID); }
	void ApplyToPlayerState(AShooterPlayerState* aPlayerState) { NativeCall<void, AShooterPlayerState *>((DWORD64)this, "UPrimalPlayerData", "ApplyToPlayerState", aPlayerState); }
	void GiveInitialItems(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "UPrimalPlayerData", "GiveInitialItems", ForPC); }
	FString* GetUniqueIdString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UPrimalPlayerData", "GetUniqueIdString", result); }
	void SavePlayerData(UWorld* ForWorld) { NativeCall<void, UWorld *>((DWORD64)this, "UPrimalPlayerData", "SavePlayerData", ForWorld); }
	void ApplyToPlayerCharacter(AShooterCharacter* NewPawn) { NativeCall<void, AShooterCharacter *>((DWORD64)this, "UPrimalPlayerData", "ApplyToPlayerCharacter", NewPawn); }
	void RefreshPersistentBuffs() { NativeCall<void>((DWORD64)this, "UPrimalPlayerData", "RefreshPersistentBuffs"); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "UPrimalPlayerData", "GetPrivateStaticClass"); }
};

struct UPrimalCharacterStatusComponent
{
	float* GetMaxStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "MaxStatusValues"); }
	float* GetBaseLevelMaxStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "BaseLevelMaxStatusValues"); }
	void SetBaseLevelMaxStatusValuesField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BaseLevelMaxStatusValues", newValue); }
	char* GetNumberOfLevelUpPointsAppliedField() const { return GetNativePointerField<char*>(this, "UPrimalCharacterStatusComponent", "NumberOfLevelUpPointsApplied"); }
	void SetNumberOfLevelUpPointsAppliedField(char* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "NumberOfLevelUpPointsApplied", newValue); }
	char* GetNumberOfLevelUpPointsAppliedTamedField() const { return GetNativePointerField<char*>(this, "UPrimalCharacterStatusComponent", "NumberOfLevelUpPointsAppliedTamed"); }
	void SetNumberOfLevelUpPointsAppliedTamedField(char* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "NumberOfLevelUpPointsAppliedTamed", newValue); }
	float GetTamedIneffectivenessModifierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "TamedIneffectivenessModifier"); }
	void SetTamedIneffectivenessModifierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TamedIneffectivenessModifier", newValue); }
	float GetMovingStaminaRecoveryRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "MovingStaminaRecoveryRateMultiplier"); }
	void SetMovingStaminaRecoveryRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "MovingStaminaRecoveryRateMultiplier", newValue); }
	float* GetRecoveryRateStatusValueField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "RecoveryRateStatusValue"); }
	void SetRecoveryRateStatusValueField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "RecoveryRateStatusValue", newValue); }
	float* GetTimeToRecoverAfterDepletionStatusValueField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "TimeToRecoverAfterDepletionStatusValue"); }
	void SetTimeToRecoverAfterDepletionStatusValueField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TimeToRecoverAfterDepletionStatusValue", newValue); }
	float* GetTimeToRecoverAfterDecreaseStatusValueField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "TimeToRecoverAfterDecreaseStatusValue"); }
	void SetTimeToRecoverAfterDecreaseStatusValueField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TimeToRecoverAfterDecreaseStatusValue", newValue); }
	float* GetAmountMaxGainedPerLevelUpValueField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "AmountMaxGainedPerLevelUpValue"); }
	void SetAmountMaxGainedPerLevelUpValueField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "AmountMaxGainedPerLevelUpValue", newValue); }
	float* GetAmountMaxGainedPerLevelUpValueTamedField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "AmountMaxGainedPerLevelUpValueTamed"); }
	void SetAmountMaxGainedPerLevelUpValueTamedField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "AmountMaxGainedPerLevelUpValueTamed", newValue); }
	char* GetMaxGainedPerLevelUpValueIsPercentField() const { return GetNativePointerField<char*>(this, "UPrimalCharacterStatusComponent", "MaxGainedPerLevelUpValueIsPercent"); }
	void SetMaxGainedPerLevelUpValueIsPercentField(char* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "MaxGainedPerLevelUpValueIsPercent", newValue); }
	char* GetRecoveryRateIsPercentField() const { return GetNativePointerField<char*>(this, "UPrimalCharacterStatusComponent", "RecoveryRateIsPercent"); }
	void SetRecoveryRateIsPercentField(char* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "RecoveryRateIsPercent", newValue); }
	float* GetTamingMaxStatMultipliersField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "TamingMaxStatMultipliers"); }
	void SetTamingMaxStatMultipliersField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TamingMaxStatMultipliers", newValue); }
	float* GetTamingMaxStatAdditionsField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "TamingMaxStatAdditions"); }
	void SetTamingMaxStatAdditionsField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TamingMaxStatAdditions", newValue); }
	float* GetMaxLevelUpMultiplierField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "MaxLevelUpMultiplier"); }
	void SetMaxLevelUpMultiplierField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "MaxLevelUpMultiplier", newValue); }
	float GetTamingIneffectivenessMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "TamingIneffectivenessMultiplier"); }
	void SetTamingIneffectivenessMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TamingIneffectivenessMultiplier", newValue); }
	float GetDinoRiderWeightMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DinoRiderWeightMultiplier"); }
	void SetDinoRiderWeightMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DinoRiderWeightMultiplier", newValue); }
	char* GetCanLevelUpValueField() const { return GetNativePointerField<char*>(this, "UPrimalCharacterStatusComponent", "CanLevelUpValue"); }
	void SetCanLevelUpValueField(char* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CanLevelUpValue", newValue); }
	char* GetDontUseValueField() const { return GetNativePointerField<char*>(this, "UPrimalCharacterStatusComponent", "DontUseValue"); }
	void SetDontUseValueField(char* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DontUseValue", newValue); }
	float GetExperienceAutomaticConsciousIncreaseSpeedField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExperienceAutomaticConsciousIncreaseSpeed"); }
	void SetExperienceAutomaticConsciousIncreaseSpeedField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExperienceAutomaticConsciousIncreaseSpeed", newValue); }
	float GetCheatMaxWeightField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "CheatMaxWeight"); }
	void SetCheatMaxWeightField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CheatMaxWeight", newValue); }
	int GetCharacterStatusComponentPriorityField() const { return GetNativeField<int>(this, "UPrimalCharacterStatusComponent", "CharacterStatusComponentPriority"); }
	void SetCharacterStatusComponentPriorityField(int newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CharacterStatusComponentPriority", newValue); }
	float GetSuffocationHealthPercentDecreaseSpeedField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "SuffocationHealthPercentDecreaseSpeed"); }
	void SetSuffocationHealthPercentDecreaseSpeedField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "SuffocationHealthPercentDecreaseSpeed", newValue); }
	float GetUnsubmergedOxygenIncreaseSpeedField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "UnsubmergedOxygenIncreaseSpeed"); }
	void SetUnsubmergedOxygenIncreaseSpeedField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "UnsubmergedOxygenIncreaseSpeed", newValue); }
	float GetSubmergedOxygenDecreaseSpeedField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "SubmergedOxygenDecreaseSpeed"); }
	void SetSubmergedOxygenDecreaseSpeedField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "SubmergedOxygenDecreaseSpeed", newValue); }
	float GetRunningStaminaConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "RunningStaminaConsumptionRate"); }
	void SetRunningStaminaConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "RunningStaminaConsumptionRate", newValue); }
	float GetWalkingStaminaConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WalkingStaminaConsumptionRate"); }
	void SetWalkingStaminaConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WalkingStaminaConsumptionRate", newValue); }
	float GetSwimmingOrFlyingStaminaConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "SwimmingOrFlyingStaminaConsumptionRate"); }
	void SetSwimmingOrFlyingStaminaConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "SwimmingOrFlyingStaminaConsumptionRate", newValue); }
	float GetJumpStaminaConsumptionField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "JumpStaminaConsumption"); }
	void SetJumpStaminaConsumptionField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "JumpStaminaConsumption", newValue); }
	float GetWindedSpeedModifierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifier"); }
	void SetWindedSpeedModifierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifier", newValue); }
	float GetWindedSpeedModifierSwimmingOrFlyingField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifierSwimmingOrFlying"); }
	void SetWindedSpeedModifierSwimmingOrFlyingField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifierSwimmingOrFlying", newValue); }
	float GetInjuredSpeedModifierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "InjuredSpeedModifier"); }
	void SetInjuredSpeedModifierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "InjuredSpeedModifier", newValue); }
	float GetHypothermicHealthDecreaseRateBaseField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRateBase"); }
	void SetHypothermicHealthDecreaseRateBaseField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRateBase", newValue); }
	float GetHypothermicHealthDecreaseRatePerDegreeField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRatePerDegree"); }
	void SetHypothermicHealthDecreaseRatePerDegreeField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRatePerDegree", newValue); }
	float GetHyperthermicHealthDecreaseRateBaseField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRateBase"); }
	void SetHyperthermicHealthDecreaseRateBaseField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRateBase", newValue); }
	float GetHyperthermicHealthDecreaseRatePerDegreeField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRatePerDegree"); }
	void SetHyperthermicHealthDecreaseRatePerDegreeField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRatePerDegree", newValue); }
	float GetXPEarnedPerStaminaConsumedField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "XPEarnedPerStaminaConsumed"); }
	void SetXPEarnedPerStaminaConsumedField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "XPEarnedPerStaminaConsumed", newValue); }
	float GetKillXPMultiplierPerCharacterLevelField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "KillXPMultiplierPerCharacterLevel"); }
	void SetKillXPMultiplierPerCharacterLevelField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "KillXPMultiplierPerCharacterLevel", newValue); }
	float GetShareXPWithTribeRangeField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ShareXPWithTribeRange"); }
	void SetShareXPWithTribeRangeField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ShareXPWithTribeRange", newValue); }
	int GetBaseCharacterLevelField() const { return GetNativeField<int>(this, "UPrimalCharacterStatusComponent", "BaseCharacterLevel"); }
	void SetBaseCharacterLevelField(int newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BaseCharacterLevel", newValue); }
	unsigned __int16 GetExtraCharacterLevelField() const { return GetNativeField<unsigned __int16>(this, "UPrimalCharacterStatusComponent", "ExtraCharacterLevel"); }
	void SetExtraCharacterLevelField(unsigned __int16 newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExtraCharacterLevel", newValue); }
	float GetExperiencePointsField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExperiencePoints"); }
	void SetExperiencePointsField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExperiencePoints", newValue); }
	float GetReplicatedExperiencePointsField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ReplicatedExperiencePoints"); }
	void SetReplicatedExperiencePointsField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ReplicatedExperiencePoints", newValue); }
	//TEnumAsByte<enum ELevelExperienceRampType::Type> GetLevelExperienceRampTypeField() const { return GetNativeField<TEnumAsByte<enum ELevelExperienceRampType::Type>>(this, "UPrimalCharacterStatusComponent", "LevelExperienceRampType"); }
	//void SetLevelExperienceRampTypeField(TEnumAsByte<enum ELevelExperienceRampType::Type> newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LevelExperienceRampType", newValue); }
	float GetMaxExperiencePointsField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "MaxExperiencePoints"); }
	void SetMaxExperiencePointsField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "MaxExperiencePoints", newValue); }
	float GetBaseFoodConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "BaseFoodConsumptionRate"); }
	void SetBaseFoodConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BaseFoodConsumptionRate", newValue); }
	float GetBaseWaterConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "BaseWaterConsumptionRate"); }
	void SetBaseWaterConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BaseWaterConsumptionRate", newValue); }
	float GetFortitudeTorpidityDecreaseMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityDecreaseMultiplier"); }
	void SetFortitudeTorpidityDecreaseMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityDecreaseMultiplier", newValue); }
	float GetFortitudeTorpidityIncreaseResistanceField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityIncreaseResistance"); }
	void SetFortitudeTorpidityIncreaseResistanceField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityIncreaseResistance", newValue); }
	float GetSubmergedWaterIncreaseRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "SubmergedWaterIncreaseRate"); }
	void SetSubmergedWaterIncreaseRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "SubmergedWaterIncreaseRate", newValue); }
	float GetCrouchedWaterFoodConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "CrouchedWaterFoodConsumptionMultiplier"); }
	void SetCrouchedWaterFoodConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CrouchedWaterFoodConsumptionMultiplier", newValue); }
	float GetProneWaterFoodConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ProneWaterFoodConsumptionMultiplier"); }
	void SetProneWaterFoodConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ProneWaterFoodConsumptionMultiplier", newValue); }
	float GetStaminaRecoveryDecreaseFoodMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseFoodMultiplier"); }
	void SetStaminaRecoveryDecreaseFoodMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseFoodMultiplier", newValue); }
	float GetStaminaRecoveryDecreaseWaterMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseWaterMultiplier"); }
	void SetStaminaRecoveryDecreaseWaterMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseWaterMultiplier", newValue); }
	float GetHealthRecoveryDecreaseFoodMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HealthRecoveryDecreaseFoodMultiplier"); }
	void SetHealthRecoveryDecreaseFoodMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HealthRecoveryDecreaseFoodMultiplier", newValue); }
	float GetBabyDinoConsumingFoodRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "BabyDinoConsumingFoodRateMultiplier"); }
	void SetBabyDinoConsumingFoodRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BabyDinoConsumingFoodRateMultiplier", newValue); }
	float GetDinoTamedAdultConsumingFoodRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DinoTamedAdultConsumingFoodRateMultiplier"); }
	void SetDinoTamedAdultConsumingFoodRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DinoTamedAdultConsumingFoodRateMultiplier", newValue); }
	float GetBabyGestationConsumingFoodRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "BabyGestationConsumingFoodRateMultiplier"); }
	void SetBabyGestationConsumingFoodRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BabyGestationConsumingFoodRateMultiplier", newValue); }
	float GetBabyDinoStarvationHealthDecreaseRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "BabyDinoStarvationHealthDecreaseRateMultiplier"); }
	void SetBabyDinoStarvationHealthDecreaseRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BabyDinoStarvationHealthDecreaseRateMultiplier", newValue); }
	float GetBabyMaxHealthPercentField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "BabyMaxHealthPercent"); }
	void SetBabyMaxHealthPercentField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BabyMaxHealthPercent", newValue); }
	float GetCrouchedStaminaConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "CrouchedStaminaConsumptionMultiplier"); }
	void SetCrouchedStaminaConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CrouchedStaminaConsumptionMultiplier", newValue); }
	float GetProneStaminaConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ProneStaminaConsumptionMultiplier"); }
	void SetProneStaminaConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ProneStaminaConsumptionMultiplier", newValue); }
	float GetStarvationHealthConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StarvationHealthConsumptionRate"); }
	void SetStarvationHealthConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StarvationHealthConsumptionRate", newValue); }
	float GetDehyrdationHealthConsumptionRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DehyrdationHealthConsumptionRate"); }
	void SetDehyrdationHealthConsumptionRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DehyrdationHealthConsumptionRate", newValue); }
	float GetStaminaConsumptionDecreaseWaterMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseWaterMultiplier"); }
	void SetStaminaConsumptionDecreaseWaterMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseWaterMultiplier", newValue); }
	float GetStaminaConsumptionDecreaseFoodMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseFoodMultiplier"); }
	void SetStaminaConsumptionDecreaseFoodMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseFoodMultiplier", newValue); }
	float GetHypothermiaDecreaseFoodMultiplierBaseField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierBase"); }
	void SetHypothermiaDecreaseFoodMultiplierBaseField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierBase", newValue); }
	float GetHypothermiaDecreaseFoodMultiplierPerDegreeField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierPerDegree"); }
	void SetHypothermiaDecreaseFoodMultiplierPerDegreeField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierPerDegree", newValue); }
	float GetHyperthermiaDecreaseWaterMultiplierBaseField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierBase"); }
	void SetHyperthermiaDecreaseWaterMultiplierBaseField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierBase", newValue); }
	float GetHyperthermiaDecreaseWaterMultiplierPerDegreeField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierPerDegree"); }
	void SetHyperthermiaDecreaseWaterMultiplierPerDegreeField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierPerDegree", newValue); }
	float GetHyperthermiaTemperatureThresholdField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HyperthermiaTemperatureThreshold"); }
	void SetHyperthermiaTemperatureThresholdField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HyperthermiaTemperatureThreshold", newValue); }
	float GetHypothermiaTemperatureThresholdField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HypothermiaTemperatureThreshold"); }
	void SetHypothermiaTemperatureThresholdField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HypothermiaTemperatureThreshold", newValue); }
	float GetTorporExitPercentThresholdField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "TorporExitPercentThreshold"); }
	void SetTorporExitPercentThresholdField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TorporExitPercentThreshold", newValue); }
	float GetKnockedOutTorpidityRecoveryRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "KnockedOutTorpidityRecoveryRateMultiplier"); }
	void SetKnockedOutTorpidityRecoveryRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "KnockedOutTorpidityRecoveryRateMultiplier", newValue); }
	float GetDehydrationTorpidityMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DehydrationTorpidityMultiplier"); }
	void SetDehydrationTorpidityMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DehydrationTorpidityMultiplier", newValue); }
	float GetStarvationTorpidityMultuplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityMultuplier"); }
	void SetStarvationTorpidityMultuplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityMultuplier", newValue); }
	float GetStarvationTorpidityIncreaseRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityIncreaseRate"); }
	void SetStarvationTorpidityIncreaseRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityIncreaseRate", newValue); }
	float GetDehyrdationTorpidityIncreaseRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DehyrdationTorpidityIncreaseRate"); }
	void SetDehyrdationTorpidityIncreaseRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DehyrdationTorpidityIncreaseRate", newValue); }
	float GetInjuredTorpidityIncreaseMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "InjuredTorpidityIncreaseMultiplier"); }
	void SetInjuredTorpidityIncreaseMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "InjuredTorpidityIncreaseMultiplier", newValue); }
	float GetWeightSpeedDecreasePowerField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WeightSpeedDecreasePower"); }
	void SetWeightSpeedDecreasePowerField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WeightSpeedDecreasePower", newValue); }
	float GetWeightJumpDecreasePowerField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WeightJumpDecreasePower"); }
	void SetWeightJumpDecreasePowerField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WeightJumpDecreasePower", newValue); }
	float GetPoopItemMinFoodConsumptionIntervalField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "PoopItemMinFoodConsumptionInterval"); }
	void SetPoopItemMinFoodConsumptionIntervalField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "PoopItemMinFoodConsumptionInterval", newValue); }
	float GetPoopItemMaxFoodConsumptionIntervalField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "PoopItemMaxFoodConsumptionInterval"); }
	void SetPoopItemMaxFoodConsumptionIntervalField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "PoopItemMaxFoodConsumptionInterval", newValue); }
	float GetTheMaxTorporIncreasePerBaseLevelField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "TheMaxTorporIncreasePerBaseLevel"); }
	void SetTheMaxTorporIncreasePerBaseLevelField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "TheMaxTorporIncreasePerBaseLevel", newValue); }
	float GetCurrentStatusValuesReplicationIntervalField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "CurrentStatusValuesReplicationInterval"); }
	void SetCurrentStatusValuesReplicationIntervalField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CurrentStatusValuesReplicationInterval", newValue); }
	float GetInsulationHyperthermiaOffsetExponentField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetExponent"); }
	void SetInsulationHyperthermiaOffsetExponentField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetExponent", newValue); }
	float GetInsulationHyperthermiaOffsetScalerField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetScaler"); }
	void SetInsulationHyperthermiaOffsetScalerField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetScaler", newValue); }
	float GetInsulationHypothermiaOffsetExponentField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetExponent"); }
	void SetInsulationHypothermiaOffsetExponentField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetExponent", newValue); }
	float GetInsulationHypothermiaOffsetScalerField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetScaler"); }
	void SetInsulationHypothermiaOffsetScalerField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetScaler", newValue); }
	float GetHypoCharacterInsulationValueField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HypoCharacterInsulationValue"); }
	void SetHypoCharacterInsulationValueField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HypoCharacterInsulationValue", newValue); }
	float GetHyperCharacterInsulationValueField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HyperCharacterInsulationValue"); }
	void SetHyperCharacterInsulationValueField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HyperCharacterInsulationValue", newValue); }
	float GetPoopItemFoodConsumptionCacheField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "PoopItemFoodConsumptionCache"); }
	void SetPoopItemFoodConsumptionCacheField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "PoopItemFoodConsumptionCache", newValue); }
	float GetLastHypothermalCharacterInsulationValueField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "LastHypothermalCharacterInsulationValue"); }
	void SetLastHypothermalCharacterInsulationValueField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LastHypothermalCharacterInsulationValue", newValue); }
	float GetLastHyperthermalCharacterInsulationValueField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "LastHyperthermalCharacterInsulationValue"); }
	float GetGenericXPMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "GenericXPMultiplier"); }
	void SetGenericXPMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "GenericXPMultiplier", newValue); }
	float GetCraftEarnXPMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "CraftEarnXPMultiplier"); }
	void SetCraftEarnXPMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CraftEarnXPMultiplier", newValue); }
	float GetKillEarnXPMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "KillEarnXPMultiplier"); }
	void SetKillEarnXPMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "KillEarnXPMultiplier", newValue); }
	float GetGenericEarnXPMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "GenericEarnXPMultiplier"); }
	void SetGenericEarnXPMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "GenericEarnXPMultiplier", newValue); }
	float GetSpecialEarnXPMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "SpecialEarnXPMultiplier"); }
	void SetSpecialEarnXPMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "SpecialEarnXPMultiplier", newValue); }
	float GetHarvestEarnXPMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "HarvestEarnXPMultiplier"); }
	void SetHarvestEarnXPMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "HarvestEarnXPMultiplier", newValue); }
	float GetDefaultHyperthermicInsulationField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DefaultHyperthermicInsulation"); }
	void SetDefaultHyperthermicInsulationField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DefaultHyperthermicInsulation", newValue); }
	float GetDefaultHypothermicInsulationField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DefaultHypothermicInsulation"); }
	void SetDefaultHypothermicInsulationField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DefaultHypothermicInsulation", newValue); }
	float GetMaxTamingEffectivenessBaseLevelMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "MaxTamingEffectivenessBaseLevelMultiplier"); }
	void SetMaxTamingEffectivenessBaseLevelMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "MaxTamingEffectivenessBaseLevelMultiplier", newValue); }
	float GetBabyUnstasisFoodConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "BabyUnstasisFoodConsumptionMultiplier"); }
	void SetBabyUnstasisFoodConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "BabyUnstasisFoodConsumptionMultiplier", newValue); }
	//TArray<FPrimalCharacterStatusValueModifier> GetStatusValueModifiersField() const { return GetNativeField<TArray<FPrimalCharacterStatusValueModifier>>(this, "UPrimalCharacterStatusComponent", "StatusValueModifiers"); }
	//void SetStatusValueModifiersField(TArray<FPrimalCharacterStatusValueModifier> newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StatusValueModifiers", newValue); }
	TArray<unsigned char> GetStatusValueModifierDescriptionIndicesField() const { return GetNativeField<TArray<unsigned char>>(this, "UPrimalCharacterStatusComponent", "StatusValueModifierDescriptionIndices"); }
	void SetStatusValueModifierDescriptionIndicesField(TArray<unsigned char> newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StatusValueModifierDescriptionIndices", newValue); }
	float* GetCurrentStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "CurrentStatusValues"); }
	void SetCurrentStatusValuesField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CurrentStatusValues", newValue); }
	float* GetAdditionalStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "AdditionalStatusValues"); }
	void SetAdditionalStatusValuesField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "AdditionalStatusValues", newValue); }
	float* GetReplicatedCurrentStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "ReplicatedCurrentStatusValues"); }
	void SetReplicatedCurrentStatusValuesField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ReplicatedCurrentStatusValues", newValue); }
	float* GetReplicatedGlobalMaxStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "ReplicatedGlobalMaxStatusValues"); }
	void SetReplicatedGlobalMaxStatusValuesField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ReplicatedGlobalMaxStatusValues", newValue); }
	float* GetReplicatedBaseLevelMaxStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "ReplicatedBaseLevelMaxStatusValues"); }
	void SetReplicatedBaseLevelMaxStatusValuesField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ReplicatedBaseLevelMaxStatusValues", newValue); }
	float* GetReplicatedGlobalCurrentStatusValuesField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "ReplicatedGlobalCurrentStatusValues"); }
	void SetReplicatedGlobalCurrentStatusValuesField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ReplicatedGlobalCurrentStatusValues", newValue); }
	char* GetCurrentStatusStatesField() const { return GetNativePointerField<char*>(this, "UPrimalCharacterStatusComponent", "CurrentStatusStates"); }
	void SetCurrentStatusStatesField(char* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "CurrentStatusStates", newValue); }
	long double* GetLastDecreasedStatusValuesTimesField() const { return GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent", "LastDecreasedStatusValuesTimes"); }
	void SetLastDecreasedStatusValuesTimesField(long double* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LastDecreasedStatusValuesTimes", newValue); }
	long double* GetLastIncreasedStatusValuesTimesField() const { return GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent", "LastIncreasedStatusValuesTimes"); }
	void SetLastIncreasedStatusValuesTimesField(long double* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LastIncreasedStatusValuesTimes", newValue); }
	long double* GetLastMaxedStatusValuesTimesField() const { return GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent", "LastMaxedStatusValuesTimes"); }
	void SetLastMaxedStatusValuesTimesField(long double* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LastMaxedStatusValuesTimes", newValue); }
	long double* GetLastDepletedStatusValuesTimesField() const { return GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent", "LastDepletedStatusValuesTimes"); }
	void SetLastDepletedStatusValuesTimesField(long double* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LastDepletedStatusValuesTimes", newValue); }
	float GetStaminaRecoveryExtraResourceDecreaseMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryExtraResourceDecreaseMultiplier"); }
	void SetStaminaRecoveryExtraResourceDecreaseMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryExtraResourceDecreaseMultiplier", newValue); }
	float GetDehydrationStaminaRecoveryRateField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DehydrationStaminaRecoveryRate"); }
	void SetDehydrationStaminaRecoveryRateField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DehydrationStaminaRecoveryRate", newValue); }
	float GetWaterConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WaterConsumptionMultiplier"); }
	void SetWaterConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WaterConsumptionMultiplier", newValue); }
	float GetFoodConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "FoodConsumptionMultiplier"); }
	void SetFoodConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "FoodConsumptionMultiplier", newValue); }
	float GetExtraOxygenSpeedStatMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExtraOxygenSpeedStatMultiplier"); }
	void SetExtraOxygenSpeedStatMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExtraOxygenSpeedStatMultiplier", newValue); }
	float GetExtraTamedHealthMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExtraTamedHealthMultiplier"); }
	void SetExtraTamedHealthMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExtraTamedHealthMultiplier", newValue); }
	float GetWakingTameFoodConsumptionRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WakingTameFoodConsumptionRateMultiplier"); }
	void SetWakingTameFoodConsumptionRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WakingTameFoodConsumptionRateMultiplier", newValue); }
	float GetSwimmingStaminaRecoveryRateMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "SwimmingStaminaRecoveryRateMultiplier"); }
	void SetSwimmingStaminaRecoveryRateMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "SwimmingStaminaRecoveryRateMultiplier", newValue); }
	float GetExtraWaterConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExtraWaterConsumptionMultiplier"); }
	void SetExtraWaterConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExtraWaterConsumptionMultiplier", newValue); }
	float GetExtraFoodConsumptionMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExtraFoodConsumptionMultiplier"); }
	void SetExtraFoodConsumptionMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExtraFoodConsumptionMultiplier", newValue); }
	float GetDefaultMaxOxygenField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DefaultMaxOxygen"); }
	void SetDefaultMaxOxygenField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DefaultMaxOxygen", newValue); }
	long double GetLastReplicatedCurrentStatusValuesTimeField() const { return GetNativeField<long double>(this, "UPrimalCharacterStatusComponent", "LastReplicatedCurrentStatusValuesTime"); }
	void SetLastReplicatedCurrentStatusValuesTimeField(long double newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LastReplicatedCurrentStatusValuesTime", newValue); }
	float GetOriginalMaxTorporField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "OriginalMaxTorpor"); }
	void SetOriginalMaxTorporField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "OriginalMaxTorpor", newValue); }
	float GetMountedDinoDinoWeightMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "MountedDinoDinoWeightMultiplier"); }
	void SetMountedDinoDinoWeightMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "MountedDinoDinoWeightMultiplier", newValue); }
	float GetExtraWildDinoDamageMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExtraWildDinoDamageMultiplier"); }
	void SetExtraWildDinoDamageMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExtraWildDinoDamageMultiplier", newValue); }
	float GetExtraTamedDinoDamageMultiplierField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "ExtraTamedDinoDamageMultiplier"); }
	void SetExtraTamedDinoDamageMultiplierField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "ExtraTamedDinoDamageMultiplier", newValue); }
	float GetWeightMultiplierForCarriedPassengersField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForCarriedPassengers"); }
	void SetWeightMultiplierForCarriedPassengersField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForCarriedPassengers", newValue); }
	float GetWeightMultiplierForPlatformPassengersInventoryField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForPlatformPassengersInventory"); }
	void SetWeightMultiplierForPlatformPassengersInventoryField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForPlatformPassengersInventory", newValue); }
	float* GetDinoMaxStatAddMultiplierImprintingField() const { return GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent", "DinoMaxStatAddMultiplierImprinting"); }
	void SetDinoMaxStatAddMultiplierImprintingField(float* newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DinoMaxStatAddMultiplierImprinting", newValue); }
	float GetDinoImprintingQualityField() const { return GetNativeField<float>(this, "UPrimalCharacterStatusComponent", "DinoImprintingQuality"); }
	void SetDinoImprintingQualityField(float newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "DinoImprintingQuality", newValue); }
	bool GetbInWeightLockField() const { return GetNativeField<bool>(this, "UPrimalCharacterStatusComponent", "bInWeightLock"); }
	void SetbInWeightLockField(bool newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "bInWeightLock", newValue); }
	long double GetLastReplicatedXPTimeField() const { return GetNativeField<long double>(this, "UPrimalCharacterStatusComponent", "LastReplicatedXPTime"); }
	void SetLastReplicatedXPTimeField(long double newValue) { SetNativeField(this, "UPrimalCharacterStatusComponent", "LastReplicatedXPTime", newValue); }

	// Functions

	void InitializeComponent() { NativeCall<void>((DWORD64)this, "UPrimalCharacterStatusComponent", "InitializeComponent"); }
	float GetTotalStatusModifierDescriptionIndex(int StatusValueModifierDescriptionIndex) { return NativeCall<float, int>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetTotalStatusModifierDescriptionIndex", StatusValueModifierDescriptionIndex); }
	//void AddStatusValueModifier(EPrimalCharacterStatusValue::Type ValueType, float Amount, float Speed, bool bContinueOnUnchangedValue, bool bSetValue, int StatusValueModifierDescriptionIndex, bool bResetExistingModifierDescriptionIndex, float LimitExistingModifierDescriptionToMax, bool bSetAdditionalValue, bool StopAtValueNearMax, EPrimalCharacterStatusValue::Type bMakeUntameable, bool) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, float, bool, bool, int, bool, float, bool, bool, EPrimalCharacterStatusValue::Type, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "AddStatusValueModifier", ValueType, Amount, Speed, bContinueOnUnchangedValue, bSetValue, StatusValueModifierDescriptionIndex, bResetExistingModifierDescriptionIndex, LimitExistingModifierDescriptionToMax, bSetAdditionalValue, StopAtValueNearMax, bMakeUntameable); }
	void ApplyStatusValueModifiers(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "UPrimalCharacterStatusComponent", "ApplyStatusValueModifiers", DeltaTime); }
	void TickStatus(float DeltaTime, bool bForceStatusUpdate) { NativeCall<void, float, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "TickStatus", DeltaTime, bForceStatusUpdate); }
	void UpdateStatusValue(EPrimalCharacterStatusValue::Type valueType, float DeltaTime, bool bManualUpdate) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "UpdateStatusValue", valueType, DeltaTime, bManualUpdate); }
	void UpdateWeightStat() { NativeCall<void>((DWORD64)this, "UPrimalCharacterStatusComponent", "UpdateWeightStat"); }
	void AdjustStatusValueModification(EPrimalCharacterStatusValue::Type valueType, float* Amount, TSubclassOf<UDamageType> DamageTypeClass) { NativeCall<void, EPrimalCharacterStatusValue::Type, float *, TSubclassOf<UDamageType>>((DWORD64)this, "UPrimalCharacterStatusComponent", "AdjustStatusValueModification", valueType, Amount, DamageTypeClass); }
	float ModifyCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float Amount, bool bPercentOfMax, bool bPercentOfCurrent, bool bManualModification, bool bSetValue, TSubclassOf<UDamageType> DamageTypeClass, bool bDamageDontKill) { return NativeCall<float, EPrimalCharacterStatusValue::Type, float, bool, bool, bool, bool, TSubclassOf<UDamageType>, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "ModifyCurrentStatusValue", valueType, Amount, bPercentOfMax, bPercentOfCurrent, bManualModification, bSetValue, DamageTypeClass, bDamageDontKill); }
	void ChangedStatusState(EPrimalCharacterStatusState::Type valueType, bool bEnteredState) { NativeCall<void, EPrimalCharacterStatusState::Type, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "ChangedStatusState", valueType, bEnteredState); }
	void CharacterUpdatedInventory(bool bEquippedOrUneqippedItem) { NativeCall<void, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "CharacterUpdatedInventory", bEquippedOrUneqippedItem); }
	void RefreshInsulation() { NativeCall<void>((DWORD64)this, "UPrimalCharacterStatusComponent", "RefreshInsulation"); }
	void RescaleMaxStat(EPrimalCharacterStatusValue::Type LevelUpValueType, float TargetValue, bool bIsPercentOfTrueValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "RescaleMaxStat", LevelUpValueType, TargetValue, bIsPercentOfTrueValue); }
	void RefreshTemperature() { NativeCall<void>((DWORD64)this, "UPrimalCharacterStatusComponent", "RefreshTemperature"); }
	void UpdatedCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float Amount, bool bManualModification, TSubclassOf<UDamageType> DamageTypeClass, bool bDamageDontKill) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool, TSubclassOf<UDamageType>, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "UpdatedCurrentStatusValue", valueType, Amount, bManualModification, DamageTypeClass, bDamageDontKill); }
	float GetStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetStatusValueRecoveryRate", valueType); }
	bool IsInStatusState(EPrimalCharacterStatusState::Type StateType) { return NativeCall<bool, EPrimalCharacterStatusState::Type>((DWORD64)this, "UPrimalCharacterStatusComponent", "IsInStatusState", StateType); }
	void OnJumped() { NativeCall<void>((DWORD64)this, "UPrimalCharacterStatusComponent", "OnJumped"); }
	float GetMeleeDamageModifier() { return NativeCall<float>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetMeleeDamageModifier"); }
	float GetMovementSpeedModifier() { return NativeCall<float>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetMovementSpeedModifier"); }
	float GetJumpZModifier() { return NativeCall<float>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetJumpZModifier"); }
	void ServerSyncReplicatedValues() { NativeCall<void>((DWORD64)this, "UPrimalCharacterStatusComponent", "ServerSyncReplicatedValues"); }
	bool CanLevelUp(EPrimalCharacterStatusValue::Type LevelUpValueType) { return NativeCall<bool, EPrimalCharacterStatusValue::Type>((DWORD64)this, "UPrimalCharacterStatusComponent", "CanLevelUp", LevelUpValueType); }
	void ServerApplyLevelUp(EPrimalCharacterStatusValue::Type LevelUpValueType, AShooterPlayerController* ByPC) { NativeCall<void, EPrimalCharacterStatusValue::Type, AShooterPlayerController *>((DWORD64)this, "UPrimalCharacterStatusComponent", "ServerApplyLevelUp", LevelUpValueType, ByPC); }
	void SetBaseLevel(int Level, bool bDontCurrentSetToMax) { NativeCall<void, int, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "SetBaseLevel", Level, bDontCurrentSetToMax); }
	void SetTameable(bool bTameable) { NativeCall<void, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "SetTameable", bTameable); }
	void SetTamed(float TameIneffectivenessModifier) { NativeCall<void, float>((DWORD64)this, "UPrimalCharacterStatusComponent", "SetTamed", TameIneffectivenessModifier); }
	void ApplyTamingStatModifiers(float TameIneffectivenessModifier) { NativeCall<void, float>((DWORD64)this, "UPrimalCharacterStatusComponent", "ApplyTamingStatModifiers", TameIneffectivenessModifier); }
	FString* GetStatusValueString(FString* result, EPrimalCharacterStatusValue::Type ValueType, bool bValueOnly) { return NativeCall<FString *, FString *, EPrimalCharacterStatusValue::Type, bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetStatusValueString", result, ValueType, bValueOnly); }
	void AddExperience(float HowMuch, bool bShareWithTribe, EXPType::Type XPType) { NativeCall<void, float, bool, EXPType::Type>((DWORD64)this, "UPrimalCharacterStatusComponent", "AddExperience", HowMuch, bShareWithTribe, XPType); }
	int GetNumLevelUpsAvailable() { return NativeCall<int>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetNumLevelUpsAvailable"); }
	float GetExperienceRequiredForNextLevelUp() { return NativeCall<float>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetExperienceRequiredForNextLevelUp"); }
	float GetExperienceRequiredForPreviousLevelUp() { return NativeCall<float>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetExperienceRequiredForPreviousLevelUp"); }
	bool IsAtMaxLevel() { return NativeCall<bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "IsAtMaxLevel"); }
	bool HasExperienceForLevelUp() { return NativeCall<bool>((DWORD64)this, "UPrimalCharacterStatusComponent", "HasExperienceForLevelUp"); }
	float GetExperiencePercent() { return NativeCall<float>((DWORD64)this, "UPrimalCharacterStatusComponent", "GetExperiencePercent"); }
	void NetSyncMaxStatusValues_Implementation(TArray<float>* NetMaxStatusValues, TArray<float>* NetBaseMaxStatusValues) { NativeCall<void, TArray<float> *, TArray<float> *>((DWORD64)this, "UPrimalCharacterStatusComponent", "NetSyncMaxStatusValues_Implementation", NetMaxStatusValues, NetBaseMaxStatusValues); }
	void ClientSyncMaxStatusValues_Implementation(TArray<float>* NetMaxStatusValues, TArray<float>* NetBaseMaxStatusValues) { NativeCall<void, TArray<float> *, TArray<float> *>((DWORD64)this, "UPrimalCharacterStatusComponent", "ClientSyncMaxStatusValues_Implementation", NetMaxStatusValues, NetBaseMaxStatusValues); }
	void SetMaxStatusValue(EPrimalCharacterStatusValue::Type StatType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>((DWORD64)this, "UPrimalCharacterStatusComponent", "SetMaxStatusValue", StatType, newValue); }
	void RescaleAllStats() { NativeCall<void>((DWORD64)this, "UPrimalCharacterStatusComponent", "RescaleAllStats"); }
};

// Dino

struct APrimalDinoCharacter : APrimalCharacter
{
	TWeakObjectPtr<AActor> GetForcedMasterTargetField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "APrimalDinoCharacter", "ForcedMasterTarget"); }
	void SetForcedMasterTargetField(TWeakObjectPtr<AActor> newValue) { SetNativeField(this, "APrimalDinoCharacter", "ForcedMasterTarget", newValue); }
	FName GetMountCharacterSocketNameField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "MountCharacterSocketName"); }
	void SetMountCharacterSocketNameField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "MountCharacterSocketName", newValue); }
	TWeakObjectPtr<APrimalCharacter> GetMountCharacterField() const { return GetNativeField<TWeakObjectPtr<APrimalCharacter>>(this, "APrimalDinoCharacter", "MountCharacter"); }
	void SetMountCharacterField(TWeakObjectPtr<APrimalCharacter> newValue) { SetNativeField(this, "APrimalDinoCharacter", "MountCharacter", newValue); }
	//ECollisionChannel GetMeshOriginalCollisionChannelField() const { return GetNativeField<ECollisionChannel>(this, "APrimalDinoCharacter", "MeshOriginalCollisionChannel"); }
	float GetColorizationIntensityField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ColorizationIntensity"); }
	void SetColorizationIntensityField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ColorizationIntensity", newValue); }
	FVector GetRidingAttackExtraVelocityField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "RidingAttackExtraVelocity"); }
	void SetRidingAttackExtraVelocityField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "RidingAttackExtraVelocity", newValue); }
	float GetPaintConsumptionMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "PaintConsumptionMultiplier"); }
	void SetPaintConsumptionMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "PaintConsumptionMultiplier", newValue); }
	float GetChargingBlockedStopTimeThresholdField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargingBlockedStopTimeThreshold"); }
	void SetChargingBlockedStopTimeThresholdField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargingBlockedStopTimeThreshold", newValue); }
	TArray<FName> GetMeleeSwingSocketsField() const { return GetNativeField<TArray<FName>>(this, "APrimalDinoCharacter", "MeleeSwingSockets"); }
	void SetMeleeSwingSocketsField(TArray<FName> newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeSwingSockets", newValue); }
	int GetMeleeDamageAmountField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "MeleeDamageAmount"); }
	void SetMeleeDamageAmountField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeDamageAmount", newValue); }
	float GetMeleeDamageImpulseField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MeleeDamageImpulse"); }
	void SetMeleeDamageImpulseField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeDamageImpulse", newValue); }
	float GetMeleeSwingRadiusField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MeleeSwingRadius"); }
	void SetMeleeSwingRadiusField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeSwingRadius", newValue); }
	//TArray<FDinoAttackInfo> GetAttackInfosField() const { return GetNativeField<TArray<FDinoAttackInfo>>(this, "APrimalDinoCharacter", "AttackInfos"); }
	char GetCurrentAttackIndexField() const { return GetNativeField<char>(this, "APrimalDinoCharacter", "CurrentAttackIndex"); }
	void SetCurrentAttackIndexField(char newValue) { SetNativeField(this, "APrimalDinoCharacter", "CurrentAttackIndex", newValue); }
	char GetLastAttackIndexField() const { return GetNativeField<char>(this, "APrimalDinoCharacter", "LastAttackIndex"); }
	void SetLastAttackIndexField(char newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastAttackIndex", newValue); }
	TSubclassOf<UDamageType> GetMeleeDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalDinoCharacter", "MeleeDamageType"); }
	void SetMeleeDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeDamageType", newValue); }
	TSubclassOf<UDamageType> GetStepActorDamageTypeOverrideField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalDinoCharacter", "StepActorDamageTypeOverride"); }
	void SetStepActorDamageTypeOverrideField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepActorDamageTypeOverride", newValue); }
	float GetAttackOffsetField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AttackOffset"); }
	void SetAttackOffsetField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AttackOffset", newValue); }
	float GetFleeHealthPercentageField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FleeHealthPercentage"); }
	void SetFleeHealthPercentageField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FleeHealthPercentage", newValue); }
	float GetBreakFleeHealthPercentageField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BreakFleeHealthPercentage"); }
	void SetBreakFleeHealthPercentageField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BreakFleeHealthPercentage", newValue); }
	FString GetTamerStringField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "TamerString"); }
	void SetTamerStringField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamerString", newValue); }
	FString GetTamedNameField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "TamedName"); }
	void SetTamedNameField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedName", newValue); }
	FVector2D GetOverlayTooltipPaddingField() const { return GetNativeField<FVector2D>(this, "APrimalDinoCharacter", "OverlayTooltipPadding"); }
	void SetOverlayTooltipPaddingField(FVector2D newValue) { SetNativeField(this, "APrimalDinoCharacter", "OverlayTooltipPadding", newValue); }
	FVector2D GetOverlayTooltipScaleField() const { return GetNativeField<FVector2D>(this, "APrimalDinoCharacter", "OverlayTooltipScale"); }
	void SetOverlayTooltipScaleField(FVector2D newValue) { SetNativeField(this, "APrimalDinoCharacter", "OverlayTooltipScale", newValue); }
	FVector GetRiderFPVCameraOffsetField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "RiderFPVCameraOffset"); }
	void SetRiderFPVCameraOffsetField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderFPVCameraOffset", newValue); }
	FVector GetLandingLocationField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "LandingLocation"); }
	void SetLandingLocationField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "LandingLocation", newValue); }
	long double GetStartLandingTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "StartLandingTime"); }
	void SetStartLandingTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "StartLandingTime", newValue); }
	long double GetLastAxisStartPressTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastAxisStartPressTime"); }
	void SetLastAxisStartPressTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastAxisStartPressTime", newValue); }
	long double GetLastMoveForwardTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastMoveForwardTime"); }
	void SetLastMoveForwardTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastMoveForwardTime", newValue); }
	float GetLandingTraceMaxDistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LandingTraceMaxDistance"); }
	void SetLandingTraceMaxDistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LandingTraceMaxDistance", newValue); }
	float GetFlyingWanderFixedDistanceAmountField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FlyingWanderFixedDistanceAmount"); }
	void SetFlyingWanderFixedDistanceAmountField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyingWanderFixedDistanceAmount", newValue); }
	float GetFlyingWanderRandomDistanceAmountField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FlyingWanderRandomDistanceAmount"); }
	void SetFlyingWanderRandomDistanceAmountField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyingWanderRandomDistanceAmount", newValue); }
	float GetAcceptableLandingRadiusField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AcceptableLandingRadius"); }
	void SetAcceptableLandingRadiusField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AcceptableLandingRadius", newValue); }
	float GetMaxLandingTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MaxLandingTime"); }
	void SetMaxLandingTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MaxLandingTime", newValue); }
	float* GetGenderSpeedMultipliersField() const { return GetNativePointerField<float*>(this, "APrimalDinoCharacter", "GenderSpeedMultipliers"); }
	float GetChargeSpeedMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargeSpeedMultiplier"); }
	void SetChargeSpeedMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargeSpeedMultiplier", newValue); }
	float GetChargingStaminaPerSecondDrainField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargingStaminaPerSecondDrain"); }
	void SetChargingStaminaPerSecondDrainField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargingStaminaPerSecondDrain", newValue); }
	float GetChargingStopDotTresholdField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargingStopDotTreshold"); }
	void SetChargingStopDotTresholdField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargingStopDotTreshold", newValue); }
	FVector GetLastChargeLocationField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "LastChargeLocation"); }
	void SetLastChargeLocationField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastChargeLocation", newValue); }
	long double GetLastStartChargingTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastStartChargingTime"); }
	void SetLastStartChargingTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastStartChargingTime", newValue); }
	TWeakObjectPtr<AShooterCharacter> GetRiderField() const { return GetNativeField<TWeakObjectPtr<AShooterCharacter>>(this, "APrimalDinoCharacter", "Rider"); }
	void SetRiderField(TWeakObjectPtr<AShooterCharacter> newValue) { SetNativeField(this, "APrimalDinoCharacter", "Rider", newValue); }
	TWeakObjectPtr<AShooterCharacter> GetPreviousRiderField() const { return GetNativeField<TWeakObjectPtr<AShooterCharacter>>(this, "APrimalDinoCharacter", "PreviousRider"); }
	void SetPreviousRiderField(TWeakObjectPtr<AShooterCharacter> newValue) { SetNativeField(this, "APrimalDinoCharacter", "PreviousRider", newValue); }
	TSubclassOf<UPrimalItem> GetSaddleItemClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalDinoCharacter", "SaddleItemClass"); }
	void SetSaddleItemClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalDinoCharacter", "SaddleItemClass", newValue); }
	//TArray<FSaddlePassengerSeatDefinition> GetNoSaddlePassengerSeatsField() const { return GetNativeField<TArray<FSaddlePassengerSeatDefinition>>(this, "APrimalDinoCharacter", "NoSaddlePassengerSeats"); }
	TWeakObjectPtr<APrimalCharacter> GetCarriedCharacterField() const { return GetNativeField<TWeakObjectPtr<APrimalCharacter>>(this, "APrimalDinoCharacter", "CarriedCharacter"); }
	void SetCarriedCharacterField(TWeakObjectPtr<APrimalCharacter> newValue) { SetNativeField(this, "APrimalDinoCharacter", "CarriedCharacter", newValue); }
	TWeakObjectPtr<APrimalCharacter> GetPreviousCarriedCharacterField() const { return GetNativeField<TWeakObjectPtr<APrimalCharacter>>(this, "APrimalDinoCharacter", "PreviousCarriedCharacter"); }
	void SetPreviousCarriedCharacterField(TWeakObjectPtr<APrimalCharacter> newValue) { SetNativeField(this, "APrimalDinoCharacter", "PreviousCarriedCharacter", newValue); }
	TArray<TWeakObjectPtr<AShooterCharacter>> GetPassengerPerSeatField() const { return GetNativeField<TArray<TWeakObjectPtr<AShooterCharacter>>>(this, "APrimalDinoCharacter", "PassengerPerSeat"); }
	void SetPassengerPerSeatField(TArray<TWeakObjectPtr<AShooterCharacter>> newValue) { SetNativeField(this, "APrimalDinoCharacter", "PassengerPerSeat", newValue); }
	TArray<TWeakObjectPtr<AShooterCharacter>> GetPrevPassengerPerSeatField() const { return GetNativeField<TArray<TWeakObjectPtr<AShooterCharacter>>>(this, "APrimalDinoCharacter", "PrevPassengerPerSeat"); }
	void SetPrevPassengerPerSeatField(TArray<TWeakObjectPtr<AShooterCharacter>> newValue) { SetNativeField(this, "APrimalDinoCharacter", "PrevPassengerPerSeat", newValue); }
	long double GetLastClientCameraRotationServerUpdateField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastClientCameraRotationServerUpdate"); }
	void SetLastClientCameraRotationServerUpdateField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastClientCameraRotationServerUpdate", newValue); }
	//TWeakObjectPtr<UPrimalAIState> GetActiveStateField() const { return GetNativeField<TWeakObjectPtr<UPrimalAIState>>(this, "APrimalDinoCharacter", "ActiveState"); }
	//TWeakObjectPtr<UPrimalAIState> GetActiveWonderStateField() const { return GetNativeField<TWeakObjectPtr<UPrimalAIState>>(this, "APrimalDinoCharacter", "ActiveWonderState"); }
	int GetLastPlayedAttackAnimationField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "LastPlayedAttackAnimation"); }
	void SetLastPlayedAttackAnimationField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastPlayedAttackAnimation", newValue); }
	char GetAttackIndexOfPlayedAnimationField() const { return GetNativeField<char>(this, "APrimalDinoCharacter", "AttackIndexOfPlayedAnimation"); }
	void SetAttackIndexOfPlayedAnimationField(char newValue) { SetNativeField(this, "APrimalDinoCharacter", "AttackIndexOfPlayedAnimation", newValue); }
	float GetOriginalCapsuleHalfHeightField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "OriginalCapsuleHalfHeight"); }
	void SetOriginalCapsuleHalfHeightField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "OriginalCapsuleHalfHeight", newValue); }
	TArray<FVector> GetLastSocketPositionsField() const { return GetNativeField<TArray<FVector>>(this, "APrimalDinoCharacter", "LastSocketPositions"); }
	void SetLastSocketPositionsField(TArray<FVector> newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastSocketPositions", newValue); }
	TArray<TWeakObjectPtr<AActor>> GetMeleeSwingHurtListField() const { return GetNativeField<TArray<TWeakObjectPtr<AActor>>>(this, "APrimalDinoCharacter", "MeleeSwingHurtList"); }
	void SetMeleeSwingHurtListField(TArray<TWeakObjectPtr<AActor>> newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeSwingHurtList", newValue); }
	long double GetEndAttackTargetTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "EndAttackTargetTime"); }
	void SetEndAttackTargetTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "EndAttackTargetTime", newValue); }
	FVector GetRidingFirstPersonViewLocationOffsetField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "RidingFirstPersonViewLocationOffset"); }
	void SetRidingFirstPersonViewLocationOffsetField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "RidingFirstPersonViewLocationOffset", newValue); }
	float GetBabyChanceOfTwinsField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyChanceOfTwins"); }
	void SetBabyChanceOfTwinsField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyChanceOfTwins", newValue); }
	float GetBabyGestationSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyGestationSpeed"); }
	void SetBabyGestationSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyGestationSpeed", newValue); }
	float GetExtraBabyGestationSpeedMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ExtraBabyGestationSpeedMultiplier"); }
	void SetExtraBabyGestationSpeedMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ExtraBabyGestationSpeedMultiplier", newValue); }
	long double GetLastEggBoostedTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastEggBoostedTime"); }
	void SetLastEggBoostedTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastEggBoostedTime", newValue); }
	float GetWildPercentageChanceOfBabyField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WildPercentageChanceOfBaby"); }
	void SetWildPercentageChanceOfBabyField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WildPercentageChanceOfBaby", newValue); }
	float GetWildBabyAgeWeightField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WildBabyAgeWeight"); }
	void SetWildBabyAgeWeightField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WildBabyAgeWeight", newValue); }
	float GetBabyGestationProgressField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyGestationProgress"); }
	void SetBabyGestationProgressField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyGestationProgress", newValue); }
	float GetLastBabyAgeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LastBabyAge"); }
	void SetLastBabyAgeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastBabyAge", newValue); }
	float GetLastBabyGestationProgressField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LastBabyGestationProgress"); }
	void SetLastBabyGestationProgressField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastBabyGestationProgress", newValue); }
	float GetBabyChanceOfTripletsField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyChanceOfTriplets"); }
	void SetBabyChanceOfTripletsField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyChanceOfTriplets", newValue); }
	float GetBabyAgeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyAge"); }
	void SetBabyAgeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyAge", newValue); }
	float GetMaxPercentOfCapsulHeightAllowedForIKField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MaxPercentOfCapsulHeightAllowedForIK"); }
	void SetMaxPercentOfCapsulHeightAllowedForIKField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MaxPercentOfCapsulHeightAllowedForIK", newValue); }
	float GetSlopeBiasForMaxCapsulePercentField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "SlopeBiasForMaxCapsulePercent"); }
	void SetSlopeBiasForMaxCapsulePercentField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "SlopeBiasForMaxCapsulePercent", newValue); }
	float GetAutoFadeOutAfterTameTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AutoFadeOutAfterTameTime"); }
	void SetAutoFadeOutAfterTameTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AutoFadeOutAfterTameTime", newValue); }
	float GetFlyingForceRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FlyingForceRotationRateModifier"); }
	void SetFlyingForceRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyingForceRotationRateModifier", newValue); }
	TArray<FName> GetHideBoneNamesField() const { return GetNativeField<TArray<FName>>(this, "APrimalDinoCharacter", "HideBoneNames"); }
	void SetHideBoneNamesField(TArray<FName> newValue) { SetNativeField(this, "APrimalDinoCharacter", "HideBoneNames", newValue); }
	FString GetHideBonesStringField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "HideBonesString"); }
	void SetHideBonesStringField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "HideBonesString", newValue); }
	FVector GetWaterSurfaceExtraJumpVectorField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "WaterSurfaceExtraJumpVector"); }
	void SetWaterSurfaceExtraJumpVectorField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "WaterSurfaceExtraJumpVector", newValue); }
	FVector GetFlyerTakeOffAdditionalVelocityField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "FlyerTakeOffAdditionalVelocity"); }
	void SetFlyerTakeOffAdditionalVelocityField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyerTakeOffAdditionalVelocity", newValue); }
	float GetOpenDoorDelayField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "OpenDoorDelay"); }
	void SetOpenDoorDelayField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "OpenDoorDelay", newValue); }
	float GetTamedWanderHarvestIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedWanderHarvestInterval"); }
	void SetTamedWanderHarvestIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedWanderHarvestInterval", newValue); }
	float GetTamedWanderHarvestSearchRangeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedWanderHarvestSearchRange"); }
	void SetTamedWanderHarvestSearchRangeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedWanderHarvestSearchRange", newValue); }
	float GetTamedWanderHarvestCollectRadiusField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectRadius"); }
	void SetTamedWanderHarvestCollectRadiusField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectRadius", newValue); }
	FVector GetTamedWanderHarvestCollectOffsetField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectOffset"); }
	void SetTamedWanderHarvestCollectOffsetField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectOffset", newValue); }
	float GetRootLocSwimOffsetField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RootLocSwimOffset"); }
	void SetRootLocSwimOffsetField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RootLocSwimOffset", newValue); }
	float GetPlayAnimBelowHealthPercentField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "PlayAnimBelowHealthPercent"); }
	void SetPlayAnimBelowHealthPercentField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "PlayAnimBelowHealthPercent", newValue); }
	float GetLeavePlayAnimBelowHealthPercentField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LeavePlayAnimBelowHealthPercent"); }
	void SetLeavePlayAnimBelowHealthPercentField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LeavePlayAnimBelowHealthPercent", newValue); }
	float GetPlatformSaddleMaxStructureBuildDistance2DField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "PlatformSaddleMaxStructureBuildDistance2D"); }
	void SetPlatformSaddleMaxStructureBuildDistance2DField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "PlatformSaddleMaxStructureBuildDistance2D", newValue); }
	//TSubclassOf<UPrimalDinoSettings> GetLowHealthDinoSettingsField() const { return GetNativeField<TSubclassOf<UPrimalDinoSettings>>(this, "APrimalDinoCharacter", "LowHealthDinoSettings"); }
	float GetSwimOffsetInterpSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "SwimOffsetInterpSpeed"); }
	void SetSwimOffsetInterpSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "SwimOffsetInterpSpeed", newValue); }
	float GetCurrentRootLocSwimOffsetField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CurrentRootLocSwimOffset"); }
	void SetCurrentRootLocSwimOffsetField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CurrentRootLocSwimOffset", newValue); }
	float GetAIRangeMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AIRangeMultiplier"); }
	void SetAIRangeMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AIRangeMultiplier", newValue); }
	char* GetPreventColorizationRegionsField() const { return GetNativePointerField<char*>(this, "APrimalDinoCharacter", "PreventColorizationRegions"); }
	float* GetColorSetIntensityMultipliersField() const { return GetNativePointerField<float*>(this, "APrimalDinoCharacter", "ColorSetIntensityMultipliers"); }
	float GetMeleeAttackStaminaCostField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MeleeAttackStaminaCost"); }
	void SetMeleeAttackStaminaCostField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeAttackStaminaCost", newValue); }
	TWeakObjectPtr<AActor> GetTargetField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "APrimalDinoCharacter", "Target"); }
	void SetTargetField(TWeakObjectPtr<AActor> newValue) { SetNativeField(this, "APrimalDinoCharacter", "Target", newValue); }
	TWeakObjectPtr<AActor> GetTamedFollowTargetField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "APrimalDinoCharacter", "TamedFollowTarget"); }
	void SetTamedFollowTargetField(TWeakObjectPtr<AActor> newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedFollowTarget", newValue); }
	float GetPercentChanceFemaleField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "PercentChanceFemale"); }
	void SetPercentChanceFemaleField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "PercentChanceFemale", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetDeathGiveItemClassesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "APrimalDinoCharacter", "DeathGiveItemClasses"); }
	void SetDeathGiveItemClassesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathGiveItemClasses", newValue); }
	TArray<float> GetDeathGiveItemChanceToBeBlueprintField() const { return GetNativeField<TArray<float>>(this, "APrimalDinoCharacter", "DeathGiveItemChanceToBeBlueprint"); }
	void SetDeathGiveItemChanceToBeBlueprintField(TArray<float> newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathGiveItemChanceToBeBlueprint", newValue); }
	float GetDeathGiveItemQualityMinField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DeathGiveItemQualityMin"); }
	void SetDeathGiveItemQualityMinField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathGiveItemQualityMin", newValue); }
	float GetDeathGiveItemQualityMaxField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DeathGiveItemQualityMax"); }
	void SetDeathGiveItemQualityMaxField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathGiveItemQualityMax", newValue); }
	float GetDeathGiveItemRangeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DeathGiveItemRange"); }
	void SetDeathGiveItemRangeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathGiveItemRange", newValue); }
	FString GetDeathGiveAchievementField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "DeathGiveAchievement"); }
	void SetDeathGiveAchievementField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathGiveAchievement", newValue); }
	FVector GetUnboardLocationOffsetField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "UnboardLocationOffset"); }
	void SetUnboardLocationOffsetField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "UnboardLocationOffset", newValue); }
	float GetLastTimeWhileHeadingToGoalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LastTimeWhileHeadingToGoal"); }
	void SetLastTimeWhileHeadingToGoalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastTimeWhileHeadingToGoal", newValue); }
	float GetRidingNetUpdateFequencyField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RidingNetUpdateFequency"); }
	void SetRidingNetUpdateFequencyField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RidingNetUpdateFequency", newValue); }
	float GetRiderMaxSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RiderMaxSpeedModifier"); }
	void SetRiderMaxSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderMaxSpeedModifier", newValue); }
	float GetRiderMaxRunSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RiderMaxRunSpeedModifier"); }
	void SetRiderMaxRunSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderMaxRunSpeedModifier", newValue); }
	float GetRiderRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RiderRotationRateModifier"); }
	void SetRiderRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderRotationRateModifier", newValue); }
	float GetSwimmingRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "SwimmingRotationRateModifier"); }
	void SetSwimmingRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "SwimmingRotationRateModifier", newValue); }
	float GetControlFacePitchInterpSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ControlFacePitchInterpSpeed"); }
	void SetControlFacePitchInterpSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ControlFacePitchInterpSpeed", newValue); }
	float GetTamedWalkableFloorZField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedWalkableFloorZ"); }
	void SetTamedWalkableFloorZField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedWalkableFloorZ", newValue); }
	float GetCurrentMovementAnimRateField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CurrentMovementAnimRate"); }
	void SetCurrentMovementAnimRateField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CurrentMovementAnimRate", newValue); }
	int GetMinPlayerLevelForWakingTameField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "MinPlayerLevelForWakingTame"); }
	void SetMinPlayerLevelForWakingTameField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "MinPlayerLevelForWakingTame", newValue); }
	float GetForceNextAttackIndexField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ForceNextAttackIndex"); }
	void SetForceNextAttackIndexField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ForceNextAttackIndex", newValue); }
	TSubclassOf<UPrimalInventoryComponent> GetTamedInventoryComponentTemplateField() const { return GetNativeField<TSubclassOf<UPrimalInventoryComponent>>(this, "APrimalDinoCharacter", "TamedInventoryComponentTemplate"); }
	void SetTamedInventoryComponentTemplateField(TSubclassOf<UPrimalInventoryComponent> newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedInventoryComponentTemplate", newValue); }
	float GetDeathInventoryChanceToUseField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DeathInventoryChanceToUse"); }
	void SetDeathInventoryChanceToUseField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathInventoryChanceToUse", newValue); }
	float GetWakingTameFeedIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WakingTameFeedInterval"); }
	void SetWakingTameFeedIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameFeedInterval", newValue); }
	long double GetLastWakingTameFedTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastWakingTameFedTime"); }
	void SetLastWakingTameFedTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastWakingTameFedTime", newValue); }
	float GetDeathInventoryQualityPerLevelMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DeathInventoryQualityPerLevelMultiplier"); }
	void SetDeathInventoryQualityPerLevelMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathInventoryQualityPerLevelMultiplier", newValue); }
	float GetRequiredTameAffinityField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RequiredTameAffinity"); }
	void SetRequiredTameAffinityField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RequiredTameAffinity", newValue); }
	float GetRequiredTameAffinityPerBaseLevelField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RequiredTameAffinityPerBaseLevel"); }
	void SetRequiredTameAffinityPerBaseLevelField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RequiredTameAffinityPerBaseLevel", newValue); }
	char GetTamedAITargetingRangeField() const { return GetNativeField<char>(this, "APrimalDinoCharacter", "TamedAITargetingRange"); }
	void SetTamedAITargetingRangeField(char newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedAITargetingRange", newValue); }
	float GetCurrentTameAffinityField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CurrentTameAffinity"); }
	void SetCurrentTameAffinityField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CurrentTameAffinity", newValue); }
	float GetTameIneffectivenessModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TameIneffectivenessModifier"); }
	void SetTameIneffectivenessModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TameIneffectivenessModifier", newValue); }
	float GetTameIneffectivenessByAffinityField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TameIneffectivenessByAffinity"); }
	void SetTameIneffectivenessByAffinityField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TameIneffectivenessByAffinity", newValue); }
	int GetLastFrameUseLowQualityAnimationTickField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "LastFrameUseLowQualityAnimationTick"); }
	void SetLastFrameUseLowQualityAnimationTickField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastFrameUseLowQualityAnimationTick", newValue); }
	//TArray<FPrimalSaddleStructure> GetSaddleStructuresField() const { return GetNativeField<TArray<FPrimalSaddleStructure>>(this, "APrimalDinoCharacter", "SaddleStructures"); }
	int GetMaxSaddleStructuresHeightField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "MaxSaddleStructuresHeight"); }
	void SetMaxSaddleStructuresHeightField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "MaxSaddleStructuresHeight", newValue); }
	int GetSaddlePivotOffsetField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "SaddlePivotOffset"); }
	void SetSaddlePivotOffsetField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "SaddlePivotOffset", newValue); }
	int GetMaxSaddleStructuresNumField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "MaxSaddleStructuresNum"); }
	void SetMaxSaddleStructuresNumField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "MaxSaddleStructuresNum", newValue); }
	//TSubclassOf<UPrimalDinoSettings> GetDinoSettingsClassField() const { return GetNativeField<TSubclassOf<UPrimalDinoSettings>>(this, "APrimalDinoCharacter", "DinoSettingsClass"); }
	float GetTamingFoodConsumeIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamingFoodConsumeInterval"); }
	void SetTamingFoodConsumeIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamingFoodConsumeInterval", newValue); }
	float GetDediForceAttackAnimTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DediForceAttackAnimTime"); }
	void SetDediForceAttackAnimTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DediForceAttackAnimTime", newValue); }
	float GetDediForceStartAttackAfterAnimTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DediForceStartAttackAfterAnimTime"); }
	void SetDediForceStartAttackAfterAnimTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DediForceStartAttackAfterAnimTime", newValue); }
	float GetWakingTameFoodIncreaseMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WakingTameFoodIncreaseMultiplier"); }
	void SetWakingTameFoodIncreaseMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameFoodIncreaseMultiplier", newValue); }
	int GetTamingTeamIDField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "TamingTeamID"); }
	void SetTamingTeamIDField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamingTeamID", newValue); }
	int GetOwningPlayerIDField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "OwningPlayerID"); }
	void SetOwningPlayerIDField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "OwningPlayerID", newValue); }
	FString GetOwningPlayerNameField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "OwningPlayerName"); }
	void SetOwningPlayerNameField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "OwningPlayerName", newValue); }
	long double GetTamingLastFoodConsumptionTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "TamingLastFoodConsumptionTime"); }
	void SetTamingLastFoodConsumptionTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamingLastFoodConsumptionTime", newValue); }
	unsigned int GetDinoID1Field() const { return GetNativeField<unsigned int>(this, "APrimalDinoCharacter", "DinoID1"); }
	void SetDinoID1Field(unsigned int newValue) { SetNativeField(this, "APrimalDinoCharacter", "DinoID1", newValue); }
	unsigned int GetDinoID2Field() const { return GetNativeField<unsigned int>(this, "APrimalDinoCharacter", "DinoID2"); }
	void SetDinoID2Field(unsigned int newValue) { SetNativeField(this, "APrimalDinoCharacter", "DinoID2", newValue); }
	FRotator GetPreviousAimRotField() const { return GetNativeField<FRotator>(this, "APrimalDinoCharacter", "PreviousAimRot"); }
	void SetPreviousAimRotField(FRotator newValue) { SetNativeField(this, "APrimalDinoCharacter", "PreviousAimRot", newValue); }
	int GetTamedAggressionLevelField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "TamedAggressionLevel"); }
	void SetTamedAggressionLevelField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedAggressionLevel", newValue); }
	float GetTamingIneffectivenessModifierIncreaseByDamagePercentField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamingIneffectivenessModifierIncreaseByDamagePercent"); }
	void SetTamingIneffectivenessModifierIncreaseByDamagePercentField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamingIneffectivenessModifierIncreaseByDamagePercent", newValue); }
	int GetNPCSpawnerExtraLevelOffsetField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "NPCSpawnerExtraLevelOffset"); }
	void SetNPCSpawnerExtraLevelOffsetField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "NPCSpawnerExtraLevelOffset", newValue); }
	float GetNPCSpawnerLevelMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "NPCSpawnerLevelMultiplier"); }
	void SetNPCSpawnerLevelMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "NPCSpawnerLevelMultiplier", newValue); }
	float GetUntamedPoopTimeMinIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "UntamedPoopTimeMinInterval"); }
	void SetUntamedPoopTimeMinIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "UntamedPoopTimeMinInterval", newValue); }
	float GetUntamedPoopTimeMaxIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "UntamedPoopTimeMaxInterval"); }
	void SetUntamedPoopTimeMaxIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "UntamedPoopTimeMaxInterval", newValue); }
	float GetMeleeHarvestDamageMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MeleeHarvestDamageMultiplier"); }
	void SetMeleeHarvestDamageMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MeleeHarvestDamageMultiplier", newValue); }
	float GetAllowRidingMaxDistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AllowRidingMaxDistance"); }
	void SetAllowRidingMaxDistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AllowRidingMaxDistance", newValue); }
	float GetUntamedPoopTimeCacheField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "UntamedPoopTimeCache"); }
	void SetUntamedPoopTimeCacheField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "UntamedPoopTimeCache", newValue); }
	TSubclassOf<UPrimalItem> GetBaseEggClassField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalDinoCharacter", "BaseEggClass"); }
	void SetBaseEggClassField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalDinoCharacter", "BaseEggClass", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetEggItemsToSpawnField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "APrimalDinoCharacter", "EggItemsToSpawn"); }
	void SetEggItemsToSpawnField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggItemsToSpawn", newValue); }
	TArray<float> GetEggWeightsToSpawnField() const { return GetNativeField<TArray<float>>(this, "APrimalDinoCharacter", "EggWeightsToSpawn"); }
	void SetEggWeightsToSpawnField(TArray<float> newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggWeightsToSpawn", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetFertilizedEggItemsToSpawnField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "APrimalDinoCharacter", "FertilizedEggItemsToSpawn"); }
	void SetFertilizedEggItemsToSpawnField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "APrimalDinoCharacter", "FertilizedEggItemsToSpawn", newValue); }
	TArray<float> GetFertilizedEggWeightsToSpawnField() const { return GetNativeField<TArray<float>>(this, "APrimalDinoCharacter", "FertilizedEggWeightsToSpawn"); }
	void SetFertilizedEggWeightsToSpawnField(TArray<float> newValue) { SetNativeField(this, "APrimalDinoCharacter", "FertilizedEggWeightsToSpawn", newValue); }
	float GetEggChanceToSpawnUnstasisField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "EggChanceToSpawnUnstasis"); }
	void SetEggChanceToSpawnUnstasisField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggChanceToSpawnUnstasis", newValue); }
	float GetEggIntervalBetweenUnstasisChancesField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "EggIntervalBetweenUnstasisChances"); }
	void SetEggIntervalBetweenUnstasisChancesField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggIntervalBetweenUnstasisChances", newValue); }
	float GetEggRangeMaximumNumberFromSameDinoTypeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "EggRangeMaximumNumberFromSameDinoType"); }
	void SetEggRangeMaximumNumberFromSameDinoTypeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggRangeMaximumNumberFromSameDinoType", newValue); }
	int GetEggMaximumNumberFromSameDinoTypeField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "EggMaximumNumberFromSameDinoType"); }
	void SetEggMaximumNumberFromSameDinoTypeField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggMaximumNumberFromSameDinoType", newValue); }
	float GetEggRangeMaximumNumberField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "EggRangeMaximumNumber"); }
	void SetEggRangeMaximumNumberField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggRangeMaximumNumber", newValue); }
	int GetEggMaximumNumberField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "EggMaximumNumber"); }
	void SetEggMaximumNumberField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "EggMaximumNumber", newValue); }
	float GetUntamedWalkingSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "UntamedWalkingSpeedModifier"); }
	void SetUntamedWalkingSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "UntamedWalkingSpeedModifier", newValue); }
	float GetTamedWalkingSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedWalkingSpeedModifier"); }
	void SetTamedWalkingSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedWalkingSpeedModifier", newValue); }
	float GetUntamedRunningSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "UntamedRunningSpeedModifier"); }
	void SetUntamedRunningSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "UntamedRunningSpeedModifier", newValue); }
	float GetTamedRunningSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedRunningSpeedModifier"); }
	void SetTamedRunningSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedRunningSpeedModifier", newValue); }
	//TSubclassOf<UPrimalColorSet> GetRandomColorSetsMaleField() const { return GetNativeField<TSubclassOf<UPrimalColorSet>>(this, "APrimalDinoCharacter", "RandomColorSetsMale"); }
	//TSubclassOf<UPrimalColorSet> GetRandomColorSetsFemaleField() const { return GetNativeField<TSubclassOf<UPrimalColorSet>>(this, "APrimalDinoCharacter", "RandomColorSetsFemale"); }
	FName GetTargetingTeamNameOverrideField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "TargetingTeamNameOverride"); }
	void SetTargetingTeamNameOverrideField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "TargetingTeamNameOverride", newValue); }
	float GetExtraTamedSpeedMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ExtraTamedSpeedMultiplier"); }
	void SetExtraTamedSpeedMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ExtraTamedSpeedMultiplier", newValue); }
	float GetExtraUnTamedSpeedMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ExtraUnTamedSpeedMultiplier"); }
	void SetExtraUnTamedSpeedMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ExtraUnTamedSpeedMultiplier", newValue); }
	long double GetLastEggSpawnChanceTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastEggSpawnChanceTime"); }
	void SetLastEggSpawnChanceTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastEggSpawnChanceTime", newValue); }
	FName GetOriginalNPCVolumeNameField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "OriginalNPCVolumeName"); }
	void SetOriginalNPCVolumeNameField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "OriginalNPCVolumeName", newValue); }
	float GetOutsideOriginalNPCVolumeStasisDestroyIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "OutsideOriginalNPCVolumeStasisDestroyInterval"); }
	void SetOutsideOriginalNPCVolumeStasisDestroyIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "OutsideOriginalNPCVolumeStasisDestroyInterval", newValue); }
	float GetStasisedDestroyIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StasisedDestroyInterval"); }
	void SetStasisedDestroyIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StasisedDestroyInterval", newValue); }
	float GetTamedAllowNamingTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedAllowNamingTime"); }
	void SetTamedAllowNamingTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedAllowNamingTime", newValue); }
	float GetMovementSpeedScalingRotationRatePowerField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MovementSpeedScalingRotationRatePower"); }
	void SetMovementSpeedScalingRotationRatePowerField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MovementSpeedScalingRotationRatePower", newValue); }
	float GetAttackNoStaminaTorpidityMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AttackNoStaminaTorpidityMultiplier"); }
	void SetAttackNoStaminaTorpidityMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AttackNoStaminaTorpidityMultiplier", newValue); }
	float GetDecayDestructionPeriodField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DecayDestructionPeriod"); }
	void SetDecayDestructionPeriodField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DecayDestructionPeriod", newValue); }
	long double GetTamedAtTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "TamedAtTime"); }
	void SetTamedAtTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedAtTime", newValue); }
	long double GetLastInAllyRangeTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastInAllyRangeTime"); }
	void SetLastInAllyRangeTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastInAllyRangeTime", newValue); }
	TArray<APrimalStructure *> GetLatchedOnStructuresField() const { return GetNativeField<TArray<APrimalStructure *>>(this, "APrimalDinoCharacter", "LatchedOnStructures"); }
	void SetLatchedOnStructuresField(TArray<APrimalStructure *> newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatchedOnStructures", newValue); }
	int GetOriginalTargetingTeamField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "OriginalTargetingTeam"); }
	void SetOriginalTargetingTeamField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "OriginalTargetingTeam", newValue); }
	float GetPreviousRootYawSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "PreviousRootYawSpeed"); }
	void SetPreviousRootYawSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "PreviousRootYawSpeed", newValue); }
	long double GetLastTimeFallingField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastTimeFalling"); }
	void SetLastTimeFallingField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastTimeFalling", newValue); }
	float GetTamedCorpseLifespanField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedCorpseLifespan"); }
	void SetTamedCorpseLifespanField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedCorpseLifespan", newValue); }
	float GetMateBoostDamageReceiveMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MateBoostDamageReceiveMultiplier"); }
	void SetMateBoostDamageReceiveMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MateBoostDamageReceiveMultiplier", newValue); }
	float GetMateBoostDamageGiveMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MateBoostDamageGiveMultiplier"); }
	void SetMateBoostDamageGiveMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MateBoostDamageGiveMultiplier", newValue); }
	float GetMateBoostRangeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MateBoostRange"); }
	void SetMateBoostRangeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MateBoostRange", newValue); }
	FName GetDinoNameTagField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "DinoNameTag"); }
	void SetDinoNameTagField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "DinoNameTag", newValue); }
	AShooterPlayerController* GetAttackMyTargetForPlayerControllerField() const { return GetNativeField<AShooterPlayerController *>(this, "APrimalDinoCharacter", "AttackMyTargetForPlayerController"); }
	void SetAttackMyTargetForPlayerControllerField(AShooterPlayerController* newValue) { SetNativeField(this, "APrimalDinoCharacter", "AttackMyTargetForPlayerController", newValue); }
	float GetRidingAttackExtraVelocityDelayField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RidingAttackExtraVelocityDelay"); }
	void SetRidingAttackExtraVelocityDelayField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RidingAttackExtraVelocityDelay", newValue); }
	float GetStepDamageRadialDamageIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageRadialDamageInterval"); }
	void SetStepDamageRadialDamageIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageRadialDamageInterval", newValue); }
	float GetStepDamageRadialDamageExtraRadiusField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageRadialDamageExtraRadius"); }
	void SetStepDamageRadialDamageExtraRadiusField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageRadialDamageExtraRadius", newValue); }
	float GetStepDamageRadialDamageAmountGeneralField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountGeneral"); }
	void SetStepDamageRadialDamageAmountGeneralField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountGeneral", newValue); }
	float GetStepDamageRadialDamageAmountHarvestableField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountHarvestable"); }
	void SetStepDamageRadialDamageAmountHarvestableField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountHarvestable", newValue); }
	long double GetLastRadialStepDamageTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastRadialStepDamageTime"); }
	void SetLastRadialStepDamageTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastRadialStepDamageTime", newValue); }
	TSubclassOf<UDamageType> GetStepHarvestableDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalDinoCharacter", "StepHarvestableDamageType"); }
	void SetStepHarvestableDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepHarvestableDamageType", newValue); }
	float GetStepDamageFootDamageIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageFootDamageInterval"); }
	void SetStepDamageFootDamageIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageFootDamageInterval", newValue); }
	float GetStepDamageFootDamageRadiusField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageFootDamageRadius"); }
	void SetStepDamageFootDamageRadiusField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageFootDamageRadius", newValue); }
	float GetStepDamageFootDamageAmountField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageFootDamageAmount"); }
	void SetStepDamageFootDamageAmountField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageFootDamageAmount", newValue); }
	TArray<FName> GetStepDamageFootDamageSocketsField() const { return GetNativeField<TArray<FName>>(this, "APrimalDinoCharacter", "StepDamageFootDamageSockets"); }
	void SetStepDamageFootDamageSocketsField(TArray<FName> newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageFootDamageSockets", newValue); }
	float GetDurationBeforeMovingStuckPawnField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DurationBeforeMovingStuckPawn"); }
	void SetDurationBeforeMovingStuckPawnField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DurationBeforeMovingStuckPawn", newValue); }
	FVector GetLastCheckedLocationField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "LastCheckedLocation"); }
	void SetLastCheckedLocationField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastCheckedLocation", newValue); }
	long double GetLastValidNotStuckTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastValidNotStuckTime"); }
	void SetLastValidNotStuckTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastValidNotStuckTime", newValue); }
	float GetDefaultActivateAttackRangeOffsetField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "DefaultActivateAttackRangeOffset"); }
	void SetDefaultActivateAttackRangeOffsetField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "DefaultActivateAttackRangeOffset", newValue); }
	float GetCorpseTargetingMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CorpseTargetingMultiplier"); }
	void SetCorpseTargetingMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CorpseTargetingMultiplier", newValue); }
	long double GetLastFootStepDamageTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastFootStepDamageTime"); }
	void SetLastFootStepDamageTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastFootStepDamageTime", newValue); }
	long double GetLastStartledTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastStartledTime"); }
	void SetLastStartledTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastStartledTime", newValue); }
	float GetCorpseLifespanNonRelevantField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CorpseLifespanNonRelevant"); }
	void SetCorpseLifespanNonRelevantField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CorpseLifespanNonRelevant", newValue); }
	float GetMinStaminaForRiderField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MinStaminaForRider"); }
	void SetMinStaminaForRiderField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MinStaminaForRider", newValue); }
	float GetLoseStaminaWithRiderRateField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LoseStaminaWithRiderRate"); }
	void SetLoseStaminaWithRiderRateField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LoseStaminaWithRiderRate", newValue); }
	float GetFollowingRunDistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FollowingRunDistance"); }
	void SetFollowingRunDistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FollowingRunDistance", newValue); }
	float GetMaxDinoKillerTransferWeightPercentField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MaxDinoKillerTransferWeightPercent"); }
	void SetMaxDinoKillerTransferWeightPercentField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MaxDinoKillerTransferWeightPercent", newValue); }
	float GetNPCZoneVolumeCountWeightField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "NPCZoneVolumeCountWeight"); }
	void SetNPCZoneVolumeCountWeightField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "NPCZoneVolumeCountWeight", newValue); }
	FVector GetFloatingHUDTextWorldOffsetField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "FloatingHUDTextWorldOffset"); }
	void SetFloatingHUDTextWorldOffsetField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "FloatingHUDTextWorldOffset", newValue); }
	long double GetLastAttackedTargetTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastAttackedTargetTime"); }
	void SetLastAttackedTargetTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastAttackedTargetTime", newValue); }
	long double GetLastForcedLandingCheckTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastForcedLandingCheckTime"); }
	void SetLastForcedLandingCheckTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastForcedLandingCheckTime", newValue); }
	long double GetLastAllyTargetLookTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastAllyTargetLookTime"); }
	void SetLastAllyTargetLookTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastAllyTargetLookTime", newValue); }
	long double GetLastAttackedTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastAttackedTime"); }
	void SetLastAttackedTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastAttackedTime", newValue); }
	long double GetLastPlayerDinoOverlapRelevantTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastPlayerDinoOverlapRelevantTime"); }
	void SetLastPlayerDinoOverlapRelevantTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastPlayerDinoOverlapRelevantTime", newValue); }
	FRotator GetDinoAimRotationOffsetField() const { return GetNativeField<FRotator>(this, "APrimalDinoCharacter", "DinoAimRotationOffset"); }
	void SetDinoAimRotationOffsetField(FRotator newValue) { SetNativeField(this, "APrimalDinoCharacter", "DinoAimRotationOffset", newValue); }
	long double GetLastDinoAllyLookInterpTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastDinoAllyLookInterpTime"); }
	void SetLastDinoAllyLookInterpTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastDinoAllyLookInterpTime", newValue); }
	FVector GetLastRiderOverlappedPositionField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "LastRiderOverlappedPosition"); }
	void SetLastRiderOverlappedPositionField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastRiderOverlappedPosition", newValue); }
	TWeakObjectPtr<APrimalCharacter> GetAutoDragByPawnField() const { return GetNativeField<TWeakObjectPtr<APrimalCharacter>>(this, "APrimalDinoCharacter", "AutoDragByPawn"); }
	long double GetNextRidingFlyerUndergroundCheckField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "NextRidingFlyerUndergroundCheck"); }
	void SetNextRidingFlyerUndergroundCheckField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "NextRidingFlyerUndergroundCheck", newValue); }
	long double GetLastSetRiderTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastSetRiderTime"); }
	void SetLastSetRiderTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastSetRiderTime", newValue); }
	TSubclassOf<UPrimalItem> GetRepairRequirementsItemField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalDinoCharacter", "RepairRequirementsItem"); }
	void SetRepairRequirementsItemField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalDinoCharacter", "RepairRequirementsItem", newValue); }
	float GetRepairAmountRemainingField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RepairAmountRemaining"); }
	void SetRepairAmountRemainingField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RepairAmountRemaining", newValue); }
	float GetRepairCheckIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RepairCheckInterval"); }
	void SetRepairCheckIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RepairCheckInterval", newValue); }
	float GetRepairPercentPerIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RepairPercentPerInterval"); }
	void SetRepairPercentPerIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RepairPercentPerInterval", newValue); }
	FVector GetRiderCheckTraceOffsetField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "RiderCheckTraceOffset"); }
	void SetRiderCheckTraceOffsetField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderCheckTraceOffset", newValue); }
	FVector GetRiderEjectionImpulseField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "RiderEjectionImpulse"); }
	void SetRiderEjectionImpulseField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderEjectionImpulse", newValue); }
	float GetWakingTameAffinityDecreaseFoodPercentageField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WakingTameAffinityDecreaseFoodPercentage"); }
	void SetWakingTameAffinityDecreaseFoodPercentageField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameAffinityDecreaseFoodPercentage", newValue); }
	float GetWakingTameAllowFeedingFoodPercentageField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WakingTameAllowFeedingFoodPercentage"); }
	void SetWakingTameAllowFeedingFoodPercentageField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameAllowFeedingFoodPercentage", newValue); }
	float GetWakingTameFoodAffinityMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WakingTameFoodAffinityMultiplier"); }
	void SetWakingTameFoodAffinityMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameFoodAffinityMultiplier", newValue); }
	float GetCheckForWildAmbientHarvestingIntervalMinField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMin"); }
	void SetCheckForWildAmbientHarvestingIntervalMinField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMin", newValue); }
	float GetCheckForWildAmbientHarvestingIntervalMaxField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMax"); }
	void SetCheckForWildAmbientHarvestingIntervalMaxField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMax", newValue); }
	float GetWildAmbientHarvestingTimerField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WildAmbientHarvestingTimer"); }
	void SetWildAmbientHarvestingTimerField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WildAmbientHarvestingTimer", newValue); }
	float GetWildAmbientHarvestingRadiusField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WildAmbientHarvestingRadius"); }
	void SetWildAmbientHarvestingRadiusField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WildAmbientHarvestingRadius", newValue); }
	int GetFlyerNumUnderGroundFailField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "FlyerNumUnderGroundFail"); }
	void SetFlyerNumUnderGroundFailField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyerNumUnderGroundFail", newValue); }
	int GetAbsoluteBaseLevelField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "AbsoluteBaseLevel"); }
	void SetAbsoluteBaseLevelField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "AbsoluteBaseLevel", newValue); }
	TSubclassOf<UDamageType> GetTamedHarvestDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalDinoCharacter", "TamedHarvestDamageType"); }
	void SetTamedHarvestDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedHarvestDamageType", newValue); }
	//FDinoSaddleStruct GetSaddleStructField() const { return GetNativeField<FDinoSaddleStruct>(this, "APrimalDinoCharacter", "SaddleStruct"); }
	TArray<APrimalCharacter *> GetDraggedRagdollsField() const { return GetNativeField<TArray<APrimalCharacter *>>(this, "APrimalDinoCharacter", "DraggedRagdolls"); }
	void SetDraggedRagdollsField(TArray<APrimalCharacter *> newValue) { SetNativeField(this, "APrimalDinoCharacter", "DraggedRagdolls", newValue); }
	FVector GetLastOverrodeRandomWanderLocationField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "LastOverrodeRandomWanderLocation"); }
	void SetLastOverrodeRandomWanderLocationField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastOverrodeRandomWanderLocation", newValue); }
	float GetChargeBumpDamageField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargeBumpDamage"); }
	void SetChargeBumpDamageField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargeBumpDamage", newValue); }
	TSubclassOf<UDamageType> GetChargeBumpDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "APrimalDinoCharacter", "ChargeBumpDamageType"); }
	void SetChargeBumpDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargeBumpDamageType", newValue); }
	float GetChargeBumpImpulseField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargeBumpImpulse"); }
	void SetChargeBumpImpulseField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargeBumpImpulse", newValue); }
	float GetMinChargeIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MinChargeInterval"); }
	void SetMinChargeIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MinChargeInterval", newValue); }
	float GetPlayerMountedLaunchFowardSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "PlayerMountedLaunchFowardSpeed"); }
	void SetPlayerMountedLaunchFowardSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "PlayerMountedLaunchFowardSpeed", newValue); }
	float GetPlayerMountedLaunchUpSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "PlayerMountedLaunchUpSpeed"); }
	void SetPlayerMountedLaunchUpSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "PlayerMountedLaunchUpSpeed", newValue); }
	float GetAttackOnLaunchMaximumTargetDistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AttackOnLaunchMaximumTargetDistance"); }
	void SetAttackOnLaunchMaximumTargetDistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AttackOnLaunchMaximumTargetDistance", newValue); }
	float GetKeepFlightRemainingTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "KeepFlightRemainingTime"); }
	void SetKeepFlightRemainingTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "KeepFlightRemainingTime", newValue); }
	float GetFlyingRunSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FlyingRunSpeedModifier"); }
	void SetFlyingRunSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyingRunSpeedModifier", newValue); }
	float GetChargingAnimDelayField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargingAnimDelay"); }
	void SetChargingAnimDelayField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargingAnimDelay", newValue); }
	FName GetRiderSocketNameField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "RiderSocketName"); }
	void SetRiderSocketNameField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderSocketName", newValue); }
	float GetChargingActivationRequiresStaminaField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargingActivationRequiresStamina"); }
	void SetChargingActivationRequiresStaminaField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargingActivationRequiresStamina", newValue); }
	float GetChargingActivationConsumesStaminaField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ChargingActivationConsumesStamina"); }
	void SetChargingActivationConsumesStaminaField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargingActivationConsumesStamina", newValue); }
	float GetFlyerHardBreakingOverrideField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FlyerHardBreakingOverride"); }
	void SetFlyerHardBreakingOverrideField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyerHardBreakingOverride", newValue); }
	float GetBabyScaleField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyScale"); }
	void SetBabyScaleField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyScale", newValue); }
	float GetBabySpeedMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabySpeedMultiplier"); }
	void SetBabySpeedMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabySpeedMultiplier", newValue); }
	float GetBabyPitchMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyPitchMultiplier"); }
	void SetBabyPitchMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyPitchMultiplier", newValue); }
	float GetBabyVolumeMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyVolumeMultiplier"); }
	void SetBabyVolumeMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyVolumeMultiplier", newValue); }
	long double GetChargingStartBlockedTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "ChargingStartBlockedTime"); }
	void SetChargingStartBlockedTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "ChargingStartBlockedTime", newValue); }
	long double GetLastChargeEndTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastChargeEndTime"); }
	void SetLastChargeEndTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastChargeEndTime", newValue); }
	TArray<APrimalStructure *> GetSaddledStructuresField() const { return GetNativeField<TArray<APrimalStructure *>>(this, "APrimalDinoCharacter", "SaddledStructures"); }
	void SetSaddledStructuresField(TArray<APrimalStructure *> newValue) { SetNativeField(this, "APrimalDinoCharacter", "SaddledStructures", newValue); }
	long double GetLastTamedFlyerNearbyAllyCheckTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastTamedFlyerNearbyAllyCheckTime"); }
	void SetLastTamedFlyerNearbyAllyCheckTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastTamedFlyerNearbyAllyCheckTime", newValue); }
	long double GetLastUpdatedBabyAgeAtTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastUpdatedBabyAgeAtTime"); }
	void SetLastUpdatedBabyAgeAtTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastUpdatedBabyAgeAtTime", newValue); }
	long double GetLastUpdatedGestationAtTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastUpdatedGestationAtTime"); }
	void SetLastUpdatedGestationAtTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastUpdatedGestationAtTime", newValue); }
	long double GetLastUpdatedMatingAtTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastUpdatedMatingAtTime"); }
	void SetLastUpdatedMatingAtTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastUpdatedMatingAtTime", newValue); }
	float GetBabyAgeSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyAgeSpeed"); }
	void SetBabyAgeSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyAgeSpeed", newValue); }
	float GetExtraBabyAgeSpeedMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ExtraBabyAgeSpeedMultiplier"); }
	void SetExtraBabyAgeSpeedMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ExtraBabyAgeSpeedMultiplier", newValue); }
	float GetFemaleMinTimeBetweenMatingField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FemaleMinTimeBetweenMating"); }
	void SetFemaleMinTimeBetweenMatingField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FemaleMinTimeBetweenMating", newValue); }
	float GetFemaleMaxTimeBetweenMatingField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FemaleMaxTimeBetweenMating"); }
	void SetFemaleMaxTimeBetweenMatingField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FemaleMaxTimeBetweenMating", newValue); }
	float GetFemaleMatingRangeAdditionField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FemaleMatingRangeAddition"); }
	void SetFemaleMatingRangeAdditionField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FemaleMatingRangeAddition", newValue); }
	float GetFemaleMatingTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FemaleMatingTime"); }
	void SetFemaleMatingTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FemaleMatingTime", newValue); }
	long double GetNextAllowedMatingTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "NextAllowedMatingTime"); }
	void SetNextAllowedMatingTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "NextAllowedMatingTime", newValue); }
	float GetMatingProgressField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "MatingProgress"); }
	void SetMatingProgressField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "MatingProgress", newValue); }
	long double GetLastMatingNotificationTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastMatingNotificationTime"); }
	void SetLastMatingNotificationTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastMatingNotificationTime", newValue); }
	APrimalDinoCharacter* GetMatingWithDinoField() const { return GetNativeField<APrimalDinoCharacter *>(this, "APrimalDinoCharacter", "MatingWithDino"); }
	void SetMatingWithDinoField(APrimalDinoCharacter* newValue) { SetNativeField(this, "APrimalDinoCharacter", "MatingWithDino", newValue); }
	float GetGestationEggTamedIneffectivenessModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "GestationEggTamedIneffectivenessModifier"); }
	void SetGestationEggTamedIneffectivenessModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "GestationEggTamedIneffectivenessModifier", newValue); }
	float GetNewFemaleMinTimeBetweenMatingField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "NewFemaleMinTimeBetweenMating"); }
	void SetNewFemaleMinTimeBetweenMatingField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "NewFemaleMinTimeBetweenMating", newValue); }
	float GetNewFemaleMaxTimeBetweenMatingField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "NewFemaleMaxTimeBetweenMating"); }
	void SetNewFemaleMaxTimeBetweenMatingField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "NewFemaleMaxTimeBetweenMating", newValue); }
	//TArray<TSubclassOf<APrimalBuff>> GetDefaultTamedBuffsField() const { return GetNativeField<TArray<TSubclassOf<APrimalBuff>>>(this, "APrimalDinoCharacter", "DefaultTamedBuffs"); }
	FVector GetInterpolatedVelocityField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "InterpolatedVelocity"); }
	void SetInterpolatedVelocityField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "InterpolatedVelocity", newValue); }
	FVector GetOldInterpolatedLocationField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "OldInterpolatedLocation"); }
	void SetOldInterpolatedLocationField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "OldInterpolatedLocation", newValue); }
	float GetHyperThermiaInsulationField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "HyperThermiaInsulation"); }
	void SetHyperThermiaInsulationField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "HyperThermiaInsulation", newValue); }
	float GetHypoThermiaInsulationField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "HypoThermiaInsulation"); }
	void SetHypoThermiaInsulationField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "HypoThermiaInsulation", newValue); }
	float GetInsulationRangeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "InsulationRange"); }
	void SetInsulationRangeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "InsulationRange", newValue); }
	float GetGangOverlapRangeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "GangOverlapRange"); }
	void SetGangOverlapRangeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "GangOverlapRange", newValue); }
	float GetGangDamageResistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "GangDamageResistance"); }
	void SetGangDamageResistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "GangDamageResistance", newValue); }
	float GetGangDamageField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "GangDamage"); }
	void SetGangDamageField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "GangDamage", newValue); }
	int GetMaxGangCountField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "MaxGangCount"); }
	void SetMaxGangCountField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "MaxGangCount", newValue); }
	int GetGangCountField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "GangCount"); }
	void SetGangCountField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "GangCount", newValue); }
	long double GetLastGangCheckTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastGangCheckTime"); }
	void SetLastGangCheckTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastGangCheckTime", newValue); }
	FVector GetLastGangCheckPositionField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "LastGangCheckPosition"); }
	void SetLastGangCheckPositionField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastGangCheckPosition", newValue); }
	int GetLastRiderExitFrameCounterField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "LastRiderExitFrameCounter"); }
	void SetLastRiderExitFrameCounterField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastRiderExitFrameCounter", newValue); }
	float GetWildRandomScaleField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WildRandomScale"); }
	void SetWildRandomScaleField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WildRandomScale", newValue); }
	float GetHeldJumpSlowFallingGravityZScaleField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "HeldJumpSlowFallingGravityZScale"); }
	void SetHeldJumpSlowFallingGravityZScaleField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "HeldJumpSlowFallingGravityZScale", newValue); }
	float GetSlowFallingStaminaCostPerSecondField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "SlowFallingStaminaCostPerSecond"); }
	void SetSlowFallingStaminaCostPerSecondField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "SlowFallingStaminaCostPerSecond", newValue); }
	float GetNoRiderRotationModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "NoRiderRotationModifier"); }
	void SetNoRiderRotationModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "NoRiderRotationModifier", newValue); }
	FName GetRiderFPVCameraUseSocketNameField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "RiderFPVCameraUseSocketName"); }
	void SetRiderFPVCameraUseSocketNameField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderFPVCameraUseSocketName", newValue); }
	FName GetRiderLatchedFPVCameraUseSocketNameField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "RiderLatchedFPVCameraUseSocketName"); }
	void SetRiderLatchedFPVCameraUseSocketNameField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderLatchedFPVCameraUseSocketName", newValue); }
	FName GetPassengerFPVCameraRootSocketField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "PassengerFPVCameraRootSocket"); }
	void SetPassengerFPVCameraRootSocketField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "PassengerFPVCameraRootSocket", newValue); }
	TArray<FName> GetFPVRiderBoneNamesToHideField() const { return GetNativeField<TArray<FName>>(this, "APrimalDinoCharacter", "FPVRiderBoneNamesToHide"); }
	void SetFPVRiderBoneNamesToHideField(TArray<FName> newValue) { SetNativeField(this, "APrimalDinoCharacter", "FPVRiderBoneNamesToHide", newValue); }
	float GetExtraRunningSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ExtraRunningSpeedModifier"); }
	void SetExtraRunningSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ExtraRunningSpeedModifier", newValue); }
	float GetScaleExtraRunningSpeedModifierMinField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMin"); }
	void SetScaleExtraRunningSpeedModifierMinField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMin", newValue); }
	float GetScaleExtraRunningSpeedModifierMaxField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMax"); }
	void SetScaleExtraRunningSpeedModifierMaxField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMax", newValue); }
	float GetScaleExtraRunningSpeedModifierSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierSpeed"); }
	void SetScaleExtraRunningSpeedModifierSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierSpeed", newValue); }
	float GetLastHigherScaleExtraRunningSpeedValueField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedValue"); }
	void SetLastHigherScaleExtraRunningSpeedValueField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedValue", newValue); }
	long double GetLastHigherScaleExtraRunningSpeedTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedTime"); }
	void SetLastHigherScaleExtraRunningSpeedTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedTime", newValue); }
	float GetRiderMovementSpeedScalingRotationRatePowerMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RiderMovementSpeedScalingRotationRatePowerMultiplier"); }
	void SetRiderMovementSpeedScalingRotationRatePowerMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderMovementSpeedScalingRotationRatePowerMultiplier", newValue); }
	int GetLoadDestroyWildDinosUnderVersionField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "LoadDestroyWildDinosUnderVersion"); }
	void SetLoadDestroyWildDinosUnderVersionField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "LoadDestroyWildDinosUnderVersion", newValue); }
	int GetSaveDestroyWildDinosUnderVersionField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "SaveDestroyWildDinosUnderVersion"); }
	void SetSaveDestroyWildDinosUnderVersionField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "SaveDestroyWildDinosUnderVersion", newValue); }
	float GetAllowWaterSurfaceExtraJumpStaminaCostField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AllowWaterSurfaceExtraJumpStaminaCost"); }
	void SetAllowWaterSurfaceExtraJumpStaminaCostField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AllowWaterSurfaceExtraJumpStaminaCost", newValue); }
	TWeakObjectPtr<AActor> GetRiderAttackTargetField() const { return GetNativeField<TWeakObjectPtr<AActor>>(this, "APrimalDinoCharacter", "RiderAttackTarget"); }
	void SetRiderAttackTargetField(TWeakObjectPtr<AActor> newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderAttackTarget", newValue); }
	FVector GetRiderAttackLocationField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "RiderAttackLocation"); }
	void SetRiderAttackLocationField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderAttackLocation", newValue); }
	char GetTribeGroupPetOrderingRankField() const { return GetNativeField<char>(this, "APrimalDinoCharacter", "TribeGroupPetOrderingRank"); }
	void SetTribeGroupPetOrderingRankField(char newValue) { SetNativeField(this, "APrimalDinoCharacter", "TribeGroupPetOrderingRank", newValue); }
	char GetTribeGroupPetRidingRankField() const { return GetNativeField<char>(this, "APrimalDinoCharacter", "TribeGroupPetRidingRank"); }
	void SetTribeGroupPetRidingRankField(char newValue) { SetNativeField(this, "APrimalDinoCharacter", "TribeGroupPetRidingRank", newValue); }
	char GetFollowStoppingDistanceField() const { return GetNativeField<char>(this, "APrimalDinoCharacter", "FollowStoppingDistance"); }
	void SetFollowStoppingDistanceField(char newValue) { SetNativeField(this, "APrimalDinoCharacter", "FollowStoppingDistance", newValue); }
	FString GetImprinterNameField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "ImprinterName"); }
	void SetImprinterNameField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "ImprinterName", newValue); }
	unsigned __int64 GetImprinterPlayerDataIDField() const { return GetNativeField<unsigned __int64>(this, "APrimalDinoCharacter", "ImprinterPlayerDataID"); }
	void SetImprinterPlayerDataIDField(unsigned __int64 newValue) { SetNativeField(this, "APrimalDinoCharacter", "ImprinterPlayerDataID", newValue); }
	float GetBabyMinCuddleIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyMinCuddleInterval"); }
	void SetBabyMinCuddleIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyMinCuddleInterval", newValue); }
	float GetBabyMaxCuddleIntervalField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyMaxCuddleInterval"); }
	void SetBabyMaxCuddleIntervalField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyMaxCuddleInterval", newValue); }
	float GetBabyCuddleGracePeriodField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyCuddleGracePeriod"); }
	void SetBabyCuddleGracePeriodField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyCuddleGracePeriod", newValue); }
	float GetBabyCuddleLoseImpringQualityPerSecondField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyCuddleLoseImpringQualityPerSecond"); }
	void SetBabyCuddleLoseImpringQualityPerSecondField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyCuddleLoseImpringQualityPerSecond", newValue); }
	float GetBabyCuddleWalkDistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyCuddleWalkDistance"); }
	void SetBabyCuddleWalkDistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyCuddleWalkDistance", newValue); }
	FVector GetBabyCuddleWalkStartingLocationField() const { return GetNativeField<FVector>(this, "APrimalDinoCharacter", "BabyCuddleWalkStartingLocation"); }
	void SetBabyCuddleWalkStartingLocationField(FVector newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyCuddleWalkStartingLocation", newValue); }
	long double GetBabyNextCuddleTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "BabyNextCuddleTime"); }
	void SetBabyNextCuddleTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyNextCuddleTime", newValue); }
	//TEnumAsByte<enum EBabyCuddleType::Type> GetBabyCuddleTypeField() const { return GetNativeField<TEnumAsByte<enum EBabyCuddleType::Type>>(this, "APrimalDinoCharacter", "BabyCuddleType"); }
	//void SetBabyCuddleTypeField(TEnumAsByte<enum EBabyCuddleType::Type> newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyCuddleType", newValue); }
	TSubclassOf<UPrimalItem> GetBabyCuddleFoodField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "APrimalDinoCharacter", "BabyCuddleFood"); }
	void SetBabyCuddleFoodField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyCuddleFood", newValue); }
	TArray<TSubclassOf<UPrimalItem>> GetMyBabyCuddleFoodTypesField() const { return GetNativeField<TArray<TSubclassOf<UPrimalItem>>>(this, "APrimalDinoCharacter", "MyBabyCuddleFoodTypes"); }
	void SetMyBabyCuddleFoodTypesField(TArray<TSubclassOf<UPrimalItem>> newValue) { SetNativeField(this, "APrimalDinoCharacter", "MyBabyCuddleFoodTypes", newValue); }
	float GetRiderMaxImprintingQualityDamageReductionField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageReduction"); }
	void SetRiderMaxImprintingQualityDamageReductionField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageReduction", newValue); }
	float GetRiderMaxImprintingQualityDamageMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageMultiplier"); }
	void SetRiderMaxImprintingQualityDamageMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageMultiplier", newValue); }
	float GetBabyImprintingQualityTotalMaturationTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "BabyImprintingQualityTotalMaturationTime"); }
	void SetBabyImprintingQualityTotalMaturationTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "BabyImprintingQualityTotalMaturationTime", newValue); }
	float GetWakingTameMaxDistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WakingTameMaxDistance"); }
	void SetWakingTameMaxDistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameMaxDistance", newValue); }
	float GetTimeBetweenTamedWakingEatAnimationsField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TimeBetweenTamedWakingEatAnimations"); }
	void SetTimeBetweenTamedWakingEatAnimationsField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TimeBetweenTamedWakingEatAnimations", newValue); }
	long double GetLastEatAnimationTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastEatAnimationTime"); }
	void SetLastEatAnimationTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastEatAnimationTime", newValue); }
	float GetStepDamageFootDamageRunningMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepDamageFootDamageRunningMultiplier"); }
	void SetStepDamageFootDamageRunningMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepDamageFootDamageRunningMultiplier", newValue); }
	float GetStepRadialDamageOffsetField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "StepRadialDamageOffset"); }
	void SetStepRadialDamageOffsetField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "StepRadialDamageOffset", newValue); }
	float GetForcePawnBigPushingForTimeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "ForcePawnBigPushingForTime"); }
	void SetForcePawnBigPushingForTimeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "ForcePawnBigPushingForTime", newValue); }
	float GetAIDinoForceActiveUntasisingRangeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AIDinoForceActiveUntasisingRange"); }
	void SetAIDinoForceActiveUntasisingRangeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AIDinoForceActiveUntasisingRange", newValue); }
	float GetWildRunningRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WildRunningRotationRateModifier"); }
	void SetWildRunningRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WildRunningRotationRateModifier", newValue); }
	float GetTamedRunningRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedRunningRotationRateModifier"); }
	void SetTamedRunningRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedRunningRotationRateModifier", newValue); }
	float GetTamedSwimmingRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TamedSwimmingRotationRateModifier"); }
	void SetTamedSwimmingRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedSwimmingRotationRateModifier", newValue); }
	float GetWildSwimmingRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WildSwimmingRotationRateModifier"); }
	void SetWildSwimmingRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WildSwimmingRotationRateModifier", newValue); }
	float GetNoRiderFlyingRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "NoRiderFlyingRotationRateModifier"); }
	void SetNoRiderFlyingRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "NoRiderFlyingRotationRateModifier", newValue); }
	float GetAICombatRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AICombatRotationRateModifier"); }
	void SetAICombatRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AICombatRotationRateModifier", newValue); }
	float GetWalkingRotationRateModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WalkingRotationRateModifier"); }
	void SetWalkingRotationRateModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WalkingRotationRateModifier", newValue); }
	float GetSetAttackTargetTraceDistanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "SetAttackTargetTraceDistance"); }
	void SetSetAttackTargetTraceDistanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "SetAttackTargetTraceDistance", newValue); }
	float GetSetAttackTargetTraceWidthField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "SetAttackTargetTraceWidth"); }
	void SetSetAttackTargetTraceWidthField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "SetAttackTargetTraceWidth", newValue); }
	float GetWanderRadiusMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "WanderRadiusMultiplier"); }
	void SetWanderRadiusMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "WanderRadiusMultiplier", newValue); }
	long double GetRepeatPrimaryAttackLastSendTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "RepeatPrimaryAttackLastSendTime"); }
	void SetRepeatPrimaryAttackLastSendTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "RepeatPrimaryAttackLastSendTime", newValue); }
	long double GetNextTamedDinoCharacterStatusTickTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "NextTamedDinoCharacterStatusTickTime"); }
	void SetNextTamedDinoCharacterStatusTickTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "NextTamedDinoCharacterStatusTickTime", newValue); }
	long double GetLastTamedDinoCharacterStatusTickTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastTamedDinoCharacterStatusTickTime"); }
	void SetLastTamedDinoCharacterStatusTickTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastTamedDinoCharacterStatusTickTime", newValue); }
	float GetLimitRiderYawOnLatchedRangeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LimitRiderYawOnLatchedRange"); }
	void SetLimitRiderYawOnLatchedRangeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LimitRiderYawOnLatchedRange", newValue); }
	float GetLatchingDistanceLimitField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LatchingDistanceLimit"); }
	void SetLatchingDistanceLimitField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatchingDistanceLimit", newValue); }
	float GetLatchingInitialYawField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LatchingInitialYaw"); }
	void SetLatchingInitialYawField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatchingInitialYaw", newValue); }
	float GetLatchingInitialPitchField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LatchingInitialPitch"); }
	void SetLatchingInitialPitchField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatchingInitialPitch", newValue); }
	float GetLatchingInterpolatedPitchField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LatchingInterpolatedPitch"); }
	void SetLatchingInterpolatedPitchField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatchingInterpolatedPitch", newValue); }
	float GetLatchedFirstPersonViewAngleField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LatchedFirstPersonViewAngle"); }
	void SetLatchedFirstPersonViewAngleField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatchedFirstPersonViewAngle", newValue); }
	float GetLatchingCameraInterpolationSpeedField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "LatchingCameraInterpolationSpeed"); }
	void SetLatchingCameraInterpolationSpeedField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatchingCameraInterpolationSpeed", newValue); }
	float GetTargetLatchingInitialYawField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "TargetLatchingInitialYaw"); }
	void SetTargetLatchingInitialYawField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "TargetLatchingInitialYaw", newValue); }
	float GetCurrentStrafeMagnitudeField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "CurrentStrafeMagnitude"); }
	void SetCurrentStrafeMagnitudeField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "CurrentStrafeMagnitude", newValue); }
	float GetGainStaminaWhenLatchedRateField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "GainStaminaWhenLatchedRate"); }
	void SetGainStaminaWhenLatchedRateField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "GainStaminaWhenLatchedRate", newValue); }
	int GetLastFrameMoveRightField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "LastFrameMoveRight"); }
	void SetLastFrameMoveRightField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastFrameMoveRight", newValue); }
	int GetLastFrameMoveLeftField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "LastFrameMoveLeft"); }
	void SetLastFrameMoveLeftField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastFrameMoveLeft", newValue); }
	FRotator GetLastRiderMountedWeaponRotationField() const { return GetNativeField<FRotator>(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotation"); }
	void SetLastRiderMountedWeaponRotationField(FRotator newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotation", newValue); }
	long double GetLastRiderMountedWeaponRotationSentTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotationSentTime"); }
	void SetLastRiderMountedWeaponRotationSentTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotationSentTime", newValue); }
	int GetDeathGivesDossierIndexField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "DeathGivesDossierIndex"); }
	void SetDeathGivesDossierIndexField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "DeathGivesDossierIndex", newValue); }
	FName GetSaddleRiderMovementTraceThruSocketNameField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "SaddleRiderMovementTraceThruSocketName"); }
	void SetSaddleRiderMovementTraceThruSocketNameField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "SaddleRiderMovementTraceThruSocketName", newValue); }
	float GetSwimmingRunSpeedModifierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "SwimmingRunSpeedModifier"); }
	void SetSwimmingRunSpeedModifierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "SwimmingRunSpeedModifier", newValue); }
	long double GetDinoDownloadedAtTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "DinoDownloadedAtTime"); }
	void SetDinoDownloadedAtTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "DinoDownloadedAtTime", newValue); }
	FString GetUploadedFromServerNameField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "UploadedFromServerName"); }
	void SetUploadedFromServerNameField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "UploadedFromServerName", newValue); }
	FString GetLatestUploadedFromServerNameField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "LatestUploadedFromServerName"); }
	void SetLatestUploadedFromServerNameField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "LatestUploadedFromServerName", newValue); }
	FString GetPreviousUploadedFromServerNameField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "PreviousUploadedFromServerName"); }
	void SetPreviousUploadedFromServerNameField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "PreviousUploadedFromServerName", newValue); }
	FString GetTamedOnServerNameField() const { return GetNativeField<FString>(this, "APrimalDinoCharacter", "TamedOnServerName"); }
	void SetTamedOnServerNameField(FString newValue) { SetNativeField(this, "APrimalDinoCharacter", "TamedOnServerName", newValue); }
	//TArray<FDinoAncestorsEntry> GetDinoAncestorsField() const { return GetNativeField<TArray<FDinoAncestorsEntry>>(this, "APrimalDinoCharacter", "DinoAncestors"); }
	//TArray<FDinoAncestorsEntry> GetDinoAncestorsMaleField() const { return GetNativeField<TArray<FDinoAncestorsEntry>>(this, "APrimalDinoCharacter", "DinoAncestorsMale"); }
	//TArray<FDinoAncestorsEntry> GetNextBabyDinoAncestorsField() const { return GetNativeField<TArray<FDinoAncestorsEntry>>(this, "APrimalDinoCharacter", "NextBabyDinoAncestors"); }
	//TArray<FDinoAncestorsEntry> GetNextBabyDinoAncestorsMaleField() const { return GetNativeField<TArray<FDinoAncestorsEntry>>(this, "APrimalDinoCharacter", "NextBabyDinoAncestorsMale"); }
	int GetMaxAllowedRandomMutationsField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "MaxAllowedRandomMutations"); }
	void SetMaxAllowedRandomMutationsField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "MaxAllowedRandomMutations", newValue); }
	int GetRandomMutationRollsField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "RandomMutationRolls"); }
	void SetRandomMutationRollsField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "RandomMutationRolls", newValue); }
	float GetRandomMutationChanceField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RandomMutationChance"); }
	void SetRandomMutationChanceField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RandomMutationChance", newValue); }
	float GetRandomMutationGivePointsField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "RandomMutationGivePoints"); }
	void SetRandomMutationGivePointsField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "RandomMutationGivePoints", newValue); }
	int GetRandomMutationsMaleField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "RandomMutationsMale"); }
	void SetRandomMutationsMaleField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "RandomMutationsMale", newValue); }
	int GetRandomMutationsFemaleField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "RandomMutationsFemale"); }
	void SetRandomMutationsFemaleField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "RandomMutationsFemale", newValue); }
	int GetGestationEggRandomMutationsFemaleField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "GestationEggRandomMutationsFemale"); }
	void SetGestationEggRandomMutationsFemaleField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "GestationEggRandomMutationsFemale", newValue); }
	int GetGestationEggRandomMutationsMaleField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "GestationEggRandomMutationsMale"); }
	void SetGestationEggRandomMutationsMaleField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "GestationEggRandomMutationsMale", newValue); }
	FName GetWakingTameDistanceSocketNameField() const { return GetNativeField<FName>(this, "APrimalDinoCharacter", "WakingTameDistanceSocketName"); }
	void SetWakingTameDistanceSocketNameField(FName newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameDistanceSocketName", newValue); }
	int GetWakingTameConsumeEntireStackMaxQuantityField() const { return GetNativeField<int>(this, "APrimalDinoCharacter", "WakingTameConsumeEntireStackMaxQuantity"); }
	void SetWakingTameConsumeEntireStackMaxQuantityField(int newValue) { SetNativeField(this, "APrimalDinoCharacter", "WakingTameConsumeEntireStackMaxQuantity", newValue); }
	float GetAttackPlayerDesirabilityMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "AttackPlayerDesirabilityMultiplier"); }
	void SetAttackPlayerDesirabilityMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "AttackPlayerDesirabilityMultiplier", newValue); }
	long double GetLastAutoHealingItemUseField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastAutoHealingItemUse"); }
	void SetLastAutoHealingItemUseField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastAutoHealingItemUse", newValue); }
	long double GetLastStartedCarryingCharacterTimeField() const { return GetNativeField<long double>(this, "APrimalDinoCharacter", "LastStartedCarryingCharacterTime"); }
	void SetLastStartedCarryingCharacterTimeField(long double newValue) { SetNativeField(this, "APrimalDinoCharacter", "LastStartedCarryingCharacterTime", newValue); }
	float GetFlyerAttachedExplosiveSpeedMultiplierField() const { return GetNativeField<float>(this, "APrimalDinoCharacter", "FlyerAttachedExplosiveSpeedMultiplier"); }
	void SetFlyerAttachedExplosiveSpeedMultiplierField(float newValue) { SetNativeField(this, "APrimalDinoCharacter", "FlyerAttachedExplosiveSpeedMultiplier", newValue); }

	// Functions

	static UClass* GetPrivateStaticClass() { return NativeCall<UClass *>(nullptr, "APrimalDinoCharacter", "GetPrivateStaticClass"); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "CheckAndHandleBasedPlayersBeingPushedThroughWalls"); }
	void PlayHardEndChargingShake_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "PlayHardEndChargingShake_Implementation"); }
	//void SetForcedAggro(ITargetableInterface * Targetable, float AggroAmount, float ForcedAggroTime) { NativeCall<void, ITargetableInterface *, float, float>((DWORD64)this, "APrimalDinoCharacter", "SetForcedAggro", Targetable, AggroAmount, ForcedAggroTime); }
	float GetAttackRangeOffset() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetAttackRangeOffset"); }
	void PlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "APrimalDinoCharacter", "PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void AutoDrag() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "AutoDrag"); }
	bool CanRide(AShooterCharacter* byPawn, char* bOutHasSaddle, char* bOutCanRideOtherThanSaddle, bool bDontCheckDistance) { return NativeCall<bool, AShooterCharacter *, char *, char *, bool>((DWORD64)this, "APrimalDinoCharacter", "CanRide", byPawn, bOutHasSaddle, bOutCanRideOtherThanSaddle, bDontCheckDistance); }
	void Stasis() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "Stasis"); }
	void Unstasis() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "Unstasis"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "PostInitializeComponents"); }
	void RegisterAllComponents() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "RegisterAllComponents"); }
	int GetRandomBaseLevel() { return NativeCall<int>((DWORD64)this, "APrimalDinoCharacter", "GetRandomBaseLevel"); }
	bool AllowZoneAutoKill() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "AllowZoneAutoKill"); }
	//void SetState(UPrimalAIState * State) { NativeCall<void, UPrimalAIState *>((DWORD64)this, "APrimalDinoCharacter", "SetState", State); }
	void StopActiveState(bool bShouldResetAttackIndex) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "StopActiveState", bShouldResetAttackIndex); }
	bool DoAttack(int AttackIndex, bool bSetCurrentAttack) { return NativeCall<bool, int, bool>((DWORD64)this, "APrimalDinoCharacter", "DoAttack", AttackIndex, bSetCurrentAttack); }
	void ApplyRidingAttackExtraVelocity() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ApplyRidingAttackExtraVelocity"); }
	bool HasReachedDestination(FVector* Goal) { return NativeCall<bool, FVector *>((DWORD64)this, "APrimalDinoCharacter", "HasReachedDestination", Goal); }
	float TakeDamage(float Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalDinoCharacter", "TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool CanAttack(int AttackIndex) { return NativeCall<bool, int>((DWORD64)this, "APrimalDinoCharacter", "CanAttack", AttackIndex); }
	bool IsAttacking() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "IsAttacking"); }
	void PlayAttackAnimationOfAnimationArray() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "PlayAttackAnimationOfAnimationArray"); }
	void PlayWeightedAttackAnimation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "PlayWeightedAttackAnimation"); }
	bool IsCurrentlyPlayingAttackAnimation() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "IsCurrentlyPlayingAttackAnimation"); }
	//UPrimalAIState * GetActiveState() { return NativeCall<UPrimalAIState *>((DWORD64)this, "APrimalDinoCharacter", "GetActiveState"); }
	bool AddToMeleeSwingHurtList(AActor* AnActor) { return NativeCall<bool, AActor *>((DWORD64)this, "APrimalDinoCharacter", "AddToMeleeSwingHurtList", AnActor); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor *>((DWORD64)this, "APrimalDinoCharacter", "ShouldDealDamage", TestActor); }
	void DealDamage(FHitResult* Impact, FVector* ShootDir, int DamageAmount, UClass* DamageType, float Impulse) { NativeCall<void, FHitResult *, FVector *, int, UClass*, float>((DWORD64)this, "APrimalDinoCharacter", "DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	bool CanCarryCharacter(APrimalCharacter* CanCarryPawn) { return NativeCall<bool, APrimalCharacter *>((DWORD64)this, "APrimalDinoCharacter", "CanCarryCharacter", CanCarryPawn); }
	bool CarryCharacter(APrimalCharacter* character, bool byPassCanCarryCheck) { return NativeCall<bool, APrimalCharacter *, bool>((DWORD64)this, "APrimalDinoCharacter", "CarryCharacter", character, byPassCanCarryCheck); }
	void ClearCarriedCharacter(bool fromCarriedCharacter) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "ClearCarriedCharacter", fromCarriedCharacter); }
	void ClearPassengers() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ClearPassengers"); }
	bool AddPassenger(AShooterCharacter* Character, char PassengerSeatIndex) { return NativeCall<bool, AShooterCharacter *, char>((DWORD64)this, "APrimalDinoCharacter", "AddPassenger", Character, PassengerSeatIndex); }
	void RemovePassenger(AShooterCharacter* Character, bool bFromCharacter) { NativeCall<void, AShooterCharacter *, bool>((DWORD64)this, "APrimalDinoCharacter", "RemovePassenger", Character, bFromCharacter); }
	bool CheckLocalPassengers() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "CheckLocalPassengers"); }
	bool CanTakePassenger(AShooterCharacter* Character, char PassengerSeatIndex) { return NativeCall<bool, AShooterCharacter *, char>((DWORD64)this, "APrimalDinoCharacter", "CanTakePassenger", Character, PassengerSeatIndex); }
	char GetNumPassengerSeats() { return NativeCall<char>((DWORD64)this, "APrimalDinoCharacter", "GetNumPassengerSeats"); }
	//FSaddlePassengerSeatDefinition * GetPassengerSeatDefinition(FSaddlePassengerSeatDefinition * result, char SeatIndex) { return NativeCall<FSaddlePassengerSeatDefinition *, FSaddlePassengerSeatDefinition *, char>((DWORD64)this, "APrimalDinoCharacter", "GetPassengerSeatDefinition", result, SeatIndex); }
	void OnRep_PassengerPerSeat() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnRep_PassengerPerSeat"); }
	void ServerToggleCharging_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerToggleCharging_Implementation"); }
	void StartCharging(bool bForce) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "StartCharging", bForce); }
	void PlayChargingAnim() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "PlayChargingAnim"); }
	void EndCharging(bool bForce) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "EndCharging", bForce); }
	bool AllowHurtAnimation() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "AllowHurtAnimation"); }
	void SetRider(AShooterCharacter* aRider) { NativeCall<void, AShooterCharacter *>((DWORD64)this, "APrimalDinoCharacter", "SetRider", aRider); }
	void OnRep_Rider() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnRep_Rider"); }
	void OnRep_CarriedCharacter() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnRep_CarriedCharacter"); }
	void ForceUpdateColorSets_Implementation(int ColorRegion, int ColorSet) { NativeCall<void, int, int>((DWORD64)this, "APrimalDinoCharacter", "ForceUpdateColorSets_Implementation", ColorRegion, ColorSet); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalDinoCharacter", "GetDescriptiveName", result); }
	void ForceClearRider() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ForceClearRider"); }
	void ClearRider(bool FromRider, bool bCancelForceLand, bool SpawnDinoDefaultController) { NativeCall<void, bool, bool, bool>((DWORD64)this, "APrimalDinoCharacter", "ClearRider", FromRider, bCancelForceLand, SpawnDinoDefaultController); }
	void ControllerLeavingGame(AShooterPlayerController* theController) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "APrimalDinoCharacter", "ControllerLeavingGame", theController); }
	FString* GetEntryString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalDinoCharacter", "GetEntryString", result); }
	UObject* GetUObjectInterfaceDataListEntryInterface() { return NativeCall<UObject *>((DWORD64)this, "APrimalDinoCharacter", "GetUObjectInterfaceDataListEntryInterface"); }
	FString* GetEntryDescription(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalDinoCharacter", "GetEntryDescription", result); }
	bool CanOrder(APrimalCharacter* FromCharacter, bool bBuildingStructures) { return NativeCall<bool, APrimalCharacter *, bool>((DWORD64)this, "APrimalDinoCharacter", "CanOrder", FromCharacter, bBuildingStructures); }
	//bool TamedProcessOrder(APrimalCharacter * FromCharacter, EDinoTamedOrder::Type OrderType, bool bForce) { return NativeCall<bool, APrimalCharacter *, EDinoTamedOrder::Type, bool>((DWORD64)this, "APrimalDinoCharacter", "TamedProcessOrder", FromCharacter, OrderType, bForce); }
	void ServerSleepingTick() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerSleepingTick"); }
	float GetAffinityIncreaseForFoodItem(UPrimalItem* foodItem) { return NativeCall<float, UPrimalItem *>((DWORD64)this, "APrimalDinoCharacter", "GetAffinityIncreaseForFoodItem", foodItem); }
	void ServerTamedTick() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerTamedTick"); }
	UPrimalItem* GetBestInventoryFoodItem(float* FoodIncrease, bool bLookForAffinity, bool bFoodItemRequiresLivePlayerCharacter, UPrimalItem** foundFoodItem, bool bLookForWorstFood) { return NativeCall<UPrimalItem *, float *, bool, bool, UPrimalItem **, bool>((DWORD64)this, "APrimalDinoCharacter", "GetBestInventoryFoodItem", FoodIncrease, bLookForAffinity, bFoodItemRequiresLivePlayerCharacter, foundFoodItem, bLookForWorstFood); }
	AShooterCharacter* ConsumeInventoryFoodItem(UPrimalItem* foodItem, float* AffinityIncrease, bool bDontDecrementItem, float* FoodIncrease, float FoodAmountMultiplier, bool bConsumeEntireStack) { return NativeCall<AShooterCharacter *, UPrimalItem *, float *, bool, float *, float, bool>((DWORD64)this, "APrimalDinoCharacter", "ConsumeInventoryFoodItem", foodItem, AffinityIncrease, bDontDecrementItem, FoodIncrease, FoodAmountMultiplier, bConsumeEntireStack); }
	AShooterCharacter* FindFirstFoodItemPlayerCharacter() { return NativeCall<AShooterCharacter *>((DWORD64)this, "APrimalDinoCharacter", "FindFirstFoodItemPlayerCharacter"); }
	int GetFoodItemEffectivenessMultipliersIndex(UPrimalItem* foodItem) { return NativeCall<int, UPrimalItem *>((DWORD64)this, "APrimalDinoCharacter", "GetFoodItemEffectivenessMultipliersIndex", foodItem); }
	UClass* * GetFirstAffinityFoodItemClass(UClass* * result) { return NativeCall<UClass* *, UClass* *>((DWORD64)this, "APrimalDinoCharacter", "GetFirstAffinityFoodItemClass", result); }
	int GetExtraFoodItemEffectivenessMultipliersIndex(UPrimalItem* foodItem) { return NativeCall<int, UPrimalItem *>((DWORD64)this, "APrimalDinoCharacter", "GetExtraFoodItemEffectivenessMultipliersIndex", foodItem); }
	void OnElevateDino(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "OnElevateDino", Val); }
	void OnLowerDino(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "OnLowerDino", Val); }
	void OnBrake(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "OnBrake", Val); }
	void ServerRequestBraking_Implementation(bool bWantsToBrake) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "ServerRequestBraking_Implementation", bWantsToBrake); }
	void OnStartFire(bool bFromGamepadRight) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "OnStartFire", bFromGamepadRight); }
	void OnStopFire(bool bFromGamepadRight) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "OnStopFire", bFromGamepadRight); }
	void OnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "OnStartTargeting", bFromGamepadLeft); }
	void OnControllerInitiatedAttack(int AttackIndex) { NativeCall<void, int>((DWORD64)this, "APrimalDinoCharacter", "OnControllerInitiatedAttack", AttackIndex); }
	void UpdateAttackTargets() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "UpdateAttackTargets"); }
	void ServerUpdateAttackTargets_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerUpdateAttackTargets_Implementation"); }
	void GetAttackTargets(AActor** attackActor, FVector* attackLoc) { NativeCall<void, AActor **, FVector *>((DWORD64)this, "APrimalDinoCharacter", "GetAttackTargets", attackActor, attackLoc); }
	void ServerRequestAttack_Implementation(int attackIndex) { NativeCall<void, int>((DWORD64)this, "APrimalDinoCharacter", "ServerRequestAttack_Implementation", attackIndex); }
	void OnPrimalCharacterSleeped() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnPrimalCharacterSleeped"); }
	void UnPossessed() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "UnPossessed"); }
	FRotator* ProcessRootRotAndLoc(FRotator* result, float DeltaTime, FVector* RootLocOffset, FRotator* RootRotOffset, float* RootYawSpeed, float MaxYawAimClamp, float CurrentAimBlending, FRotator* TargetAimRot, float* RootRot) { return NativeCall<FRotator *, FRotator *, float, FVector *, FRotator *, float *, float, float, FRotator *, float *>((DWORD64)this, "APrimalDinoCharacter", "ProcessRootRotAndLoc", result, DeltaTime, RootLocOffset, RootRotOffset, RootYawSpeed, MaxYawAimClamp, CurrentAimBlending, TargetAimRot, RootRot); }
	FRotator* GetAimOffsets(FRotator* result, float DeltaTime, FRotator* RootRotOffset, float* RootYawSpeed, float MaxYawAimClamp, FVector* RootLocOffset) { return NativeCall<FRotator *, FRotator *, float, FRotator *, float *, float, FVector *>((DWORD64)this, "APrimalDinoCharacter", "GetAimOffsets", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset); }
	FRotator* GetAimOffsetsTransform(FRotator* result, float DeltaTime, FTransform* RootRotOffsetTransform, float* RootYawSpeed, float MaxYawAimClamp, FVector* RootLocOffset) { return NativeCall<FRotator *, FRotator *, float, FTransform *, float *, float, FVector *>((DWORD64)this, "APrimalDinoCharacter", "GetAimOffsetsTransform", result, DeltaTime, RootRotOffsetTransform, RootYawSpeed, MaxYawAimClamp, RootLocOffset); }
	bool ModifyInputAcceleration(FVector* InputAcceleration) { return NativeCall<bool, FVector *>((DWORD64)this, "APrimalDinoCharacter", "ModifyInputAcceleration", InputAcceleration); }
	float GetMaxSpeedModifier() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetMaxSpeedModifier"); }
	float GetSpeedModifier() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetSpeedModifier"); }
	float GetRotationRateModifier() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetRotationRateModifier"); }
	bool IsFleeing() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "IsFleeing"); }
	void FaceRotation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "FaceRotation"); }
	void MoveForward(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "MoveForward", Val); }
	void MoveRight(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "MoveRight", Val); }
	void MoveUp(float Val) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "MoveUp", Val); }
	void SetCurrentAttackIndex(char index) { NativeCall<void, char>((DWORD64)this, "APrimalDinoCharacter", "SetCurrentAttackIndex", index); }
	char GetWiegthedAttack(float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<char, float, float, AActor *>((DWORD64)this, "APrimalDinoCharacter", "GetWiegthedAttack", distance, attackRangeOffset, OtherTarget); }
	void FireProjectileLocal() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "FireProjectileLocal"); }
	void FireProjectile_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "FireProjectile_Implementation"); }
	void ServerToClientsPlayAttackAnimation_Implementation(char AttackinfoIndex, char AnimationIndex, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, AActor* MyTarget) { NativeCall<void, char, char, float, FName, bool, bool, AActor *>((DWORD64)this, "APrimalDinoCharacter", "ServerToClientsPlayAttackAnimation_Implementation", AttackinfoIndex, AnimationIndex, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, MyTarget); }
	void ServerRequestToggleFlight_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerRequestToggleFlight_Implementation"); }
	void CalcCapsuleHalfHeight() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "CalcCapsuleHalfHeight"); }
	void ClientStartLanding_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ClientStartLanding_Implementation"); }
	void StartLanding() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "StartLanding"); }
	void ServerInterruptLanding_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerInterruptLanding_Implementation"); }
	void InterruptLanding() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "InterruptLanding"); }
	void ClientInterruptLanding_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ClientInterruptLanding_Implementation"); }
	void ServerFinishedLanding_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerFinishedLanding_Implementation"); }
	void FinishedLanding() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "FinishedLanding"); }
	void ClientShouldNotifyLanded_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ClientShouldNotifyLanded_Implementation"); }
	FVector* GetLandingLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalDinoCharacter", "GetLandingLocation", result); }
	void SetFlight(bool bFly, bool bCancelForceLand) { NativeCall<void, bool, bool>((DWORD64)this, "APrimalDinoCharacter", "SetFlight", bFly, bCancelForceLand); }
	void KeepFlightTimer() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "KeepFlightTimer"); }
	void DidLand() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "DidLand"); }
	void AddFlyerTakeOffImpulse() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "AddFlyerTakeOffImpulse"); }
	void OnStartJump() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnStartJump"); }
	void ServerRequestWaterSurfaceJump_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerRequestWaterSurfaceJump_Implementation"); }
	bool IsUpdatingComponentTransforms(USceneComponent* InSceneComponent) { return NativeCall<bool, USceneComponent *>((DWORD64)this, "APrimalDinoCharacter", "IsUpdatingComponentTransforms", InSceneComponent); }
	bool UseLowQualityMovementTick() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "UseLowQualityMovementTick"); }
	bool UseLowQualityAnimationTick() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "UseLowQualityAnimationTick"); }
	bool UseLowQualityBehaviorTreeTick() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "UseLowQualityBehaviorTreeTick"); }
	bool CanTame(AShooterPlayerController* ForPC, bool bIgnoreMaxTamedDinos) { return NativeCall<bool, AShooterPlayerController *, bool>((DWORD64)this, "APrimalDinoCharacter", "CanTame", ForPC, bIgnoreMaxTamedDinos); }
	void SetupTamed(bool bWasJustTamed) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "SetupTamed", bWasJustTamed); }
	void TameDino(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "APrimalDinoCharacter", "TameDino", ForPC); }
	void SetCharacterStatusTameable(bool bSetTameable, bool bCreateInventory, bool keepInventoryForWakingTame) { NativeCall<void, bool, bool, bool>((DWORD64)this, "APrimalDinoCharacter", "SetCharacterStatusTameable", bSetTameable, bCreateInventory, keepInventoryForWakingTame); }
	void OnPrimalCharacterUnsleeped() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnPrimalCharacterUnsleeped"); }
	bool IsValidForStatusUpdate() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "IsValidForStatusUpdate"); }
	AActor* GetOtherActorToIgnore() { return NativeCall<AActor *>((DWORD64)this, "APrimalDinoCharacter", "GetOtherActorToIgnore"); }
	long double GetForceClaimTime() { return NativeCall<long double>((DWORD64)this, "APrimalDinoCharacter", "GetForceClaimTime"); }
	void UnclaimDino(bool bDestroyAI) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "UnclaimDino", bDestroyAI); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>((DWORD64)this, "APrimalDinoCharacter", "TryMultiUse", ForPC, UseIndex); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>((DWORD64)this, "APrimalDinoCharacter", "ClientMultiUse", ForPC, UseIndex); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>((DWORD64)this, "APrimalDinoCharacter", "ChangeActorTeam", NewTeam); }
	bool AllowNewEggAtLocation(FVector* AtLocation) { return NativeCall<bool, FVector *>((DWORD64)this, "APrimalDinoCharacter", "AllowNewEggAtLocation", AtLocation); }
	void SpawnEgg() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "SpawnEgg"); }
	float GetRunningSpeedModifier(bool bIsForDefaultSpeed) { return NativeCall<float, bool>((DWORD64)this, "APrimalDinoCharacter", "GetRunningSpeedModifier", bIsForDefaultSpeed); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "BeginPlay"); }
	void ForceRefreshTransform() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ForceRefreshTransform"); }
	void AutoTame() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "AutoTame"); }
	void SetupColorization() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "SetupColorization"); }
	void RefreshColorization() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "RefreshColorization"); }
	//bool CanTarget(ITargetableInterface * Victim) { return NativeCall<bool, ITargetableInterface *>((DWORD64)this, "APrimalDinoCharacter", "CanTarget", Victim); }
	int GetOriginalTargetingTeam() { return NativeCall<int>((DWORD64)this, "APrimalDinoCharacter", "GetOriginalTargetingTeam"); }
	//float GetTargetingDesirability(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>((DWORD64)this, "APrimalDinoCharacter", "GetTargetingDesirability", Attacker); }
	bool ShouldReplicateRotPitch() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "ShouldReplicateRotPitch"); }
	void NetUpdateDinoNameStrings_Implementation(FString* NewTamerString, FString* NewTamedName) { NativeCall<void, FString *, FString *>((DWORD64)this, "APrimalDinoCharacter", "NetUpdateDinoNameStrings_Implementation", NewTamerString, NewTamedName); }
	void ProcessEditText(AShooterPlayerController* ForPC, FString* TextToUse, bool checkedBox) { NativeCall<void, AShooterPlayerController *, FString *, bool>((DWORD64)this, "APrimalDinoCharacter", "ProcessEditText", ForPC, TextToUse, checkedBox); }
	static APrimalDinoCharacter* FindDinoWithID(UWorld* aWorld, unsigned int DinoID1, unsigned int DinoID2) { return NativeCall<APrimalDinoCharacter *, UWorld *, unsigned int, unsigned int>(nullptr, "APrimalDinoCharacter", "FindDinoWithID", aWorld, DinoID1, DinoID2); }
	void TargetingTeamChanged() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "TargetingTeamChanged"); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "Destroyed"); }
	bool IsNearFeed(AShooterPlayerState* ForPlayer) { return NativeCall<bool, AShooterPlayerState *>((DWORD64)this, "APrimalDinoCharacter", "IsNearFeed", ForPlayer); }
	void DeathHarvestingFadeOut_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "DeathHarvestingFadeOut_Implementation"); }
	void NotifyItemAdded(UPrimalItem* anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>((DWORD64)this, "APrimalDinoCharacter", "NotifyItemAdded", anItem, bEquipItem); }
	FString* GetDinoDescriptiveName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "APrimalDinoCharacter", "GetDinoDescriptiveName", result); }
	void ServerGiveDefaultWeapon_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerGiveDefaultWeapon_Implementation"); }
	void ServerCallFollow_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerCallFollow_Implementation"); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "ServerCallFollowOne_Implementation", ForDinoChar); }
	void ServerCallStay_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerCallStay_Implementation"); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "ServerCallStayOne_Implementation", ForDinoChar); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter* ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "ServerCallFollowDistanceCycleOne_Implementation", ForDinoChar); }
	void ServerCallAggressive_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerCallAggressive_Implementation"); }
	void ServerCallSetAggressive_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerCallSetAggressive_Implementation"); }
	void ServerCallNeutral_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerCallNeutral_Implementation"); }
	void ServerCallPassive_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerCallPassive_Implementation"); }
	void ServerCallAttackTarget_Implementation(AActor* TheTarget) { NativeCall<void, AActor *>((DWORD64)this, "APrimalDinoCharacter", "ServerCallAttackTarget_Implementation", TheTarget); }
	void ServerCallMoveTo_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerCallMoveTo_Implementation"); }
	void NotifyItemRemoved(UPrimalItem* anItem) { NativeCall<void, UPrimalItem *>((DWORD64)this, "APrimalDinoCharacter", "NotifyItemRemoved", anItem); }
	float GetCorpseLifespan() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetCorpseLifespan"); }
	void UpdateMateBoost() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "UpdateMateBoost"); }
	void AdjustDamage(float* Damage, FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float *, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalDinoCharacter", "AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void SpawnDefaultController() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "SpawnDefaultController"); }
	bool AllowFallDamage() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "AllowFallDamage"); }
	void ApplyDamageMomentum(float DamageTaken, FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "APrimalDinoCharacter", "ApplyDamageMomentum", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void UpdateIK() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "UpdateIK"); }
	bool IKFootTrace() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "IKFootTrace"); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset) { NativeCall<void, bool, bool>((DWORD64)this, "APrimalDinoCharacter", "SetSleeping", bSleeping, bUseRagdollLocationOffset); }
	bool Die(float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, FDamageEvent *, AController *, AActor *>((DWORD64)this, "APrimalDinoCharacter", "Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool AllowPenetrationCheck(AActor* OtherActor) { return NativeCall<bool, AActor *>((DWORD64)this, "APrimalDinoCharacter", "AllowPenetrationCheck", OtherActor); }
	void LoadedFromSaveGame() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "LoadedFromSaveGame"); }
	float GetCorpseTargetingMultiplier() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetCorpseTargetingMultiplier"); }
	void UpdateStatusComponent(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "UpdateStatusComponent", DeltaSeconds); }
	void TamedDinoUnstasisConsumeFood() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "TamedDinoUnstasisConsumeFood"); }
	AActor* GetTamedFollowTarget() { return NativeCall<AActor *>((DWORD64)this, "APrimalDinoCharacter", "GetTamedFollowTarget"); }
	void DinoKillerTransferItemsToInventory(UPrimalInventoryComponent* FromInventory) { NativeCall<void, UPrimalInventoryComponent *>((DWORD64)this, "APrimalDinoCharacter", "DinoKillerTransferItemsToInventory", FromInventory); }
	bool UsePlayerControlCollisionIK() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "UsePlayerControlCollisionIK"); }
	bool AllowWalkableSlopeOverride() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "AllowWalkableSlopeOverride"); }
	float GetCarryingSocketYaw(bool RefreshBones) { return NativeCall<float, bool>((DWORD64)this, "APrimalDinoCharacter", "GetCarryingSocketYaw", RefreshBones); }
	void GetRidingCarryingIgnoreList(TArray<AActor *>* IgnoreList) { NativeCall<void, TArray<AActor *> *>((DWORD64)this, "APrimalDinoCharacter", "GetRidingCarryingIgnoreList", IgnoreList); }
	void SetCarryingDino(APrimalDinoCharacter* aDino) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "SetCarryingDino", aDino); }
	void ClearCarryingDino(bool bFromDino) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "ClearCarryingDino", bFromDino); }
	void UpdateCarriedLocationAndRotation(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "UpdateCarriedLocationAndRotation", DeltaSeconds); }
	bool CanBeCarried() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "CanBeCarried"); }
	void SetMountCharacter(APrimalCharacter* aCharacter) { NativeCall<void, APrimalCharacter *>((DWORD64)this, "APrimalDinoCharacter", "SetMountCharacter", aCharacter); }
	void StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly) { NativeCall<void, float, bool, bool>((DWORD64)this, "APrimalDinoCharacter", "StartForceSkelUpdate", ForTime, bForceUpdateMesh, bServerOnly); }
	void ClearMountCharacter(bool bFromMountCharacter) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "ClearMountCharacter", bFromMountCharacter); }
	bool CanMount(APrimalCharacter* aCharacter) { return NativeCall<bool, APrimalCharacter *>((DWORD64)this, "APrimalDinoCharacter", "CanMount", aCharacter); }
	APrimalDinoCharacter* SpawnDino() { return NativeCall<APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "SpawnDino"); }
	void InitDownloadedTamedDino(AShooterPlayerController* TamerController) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "APrimalDinoCharacter", "InitDownloadedTamedDino", TamerController); }
	void NetUpdateDinoOwnerData_Implementation(FString* NewOwningPlayerName, int NewOwningPlayerID) { NativeCall<void, FString *, int>((DWORD64)this, "APrimalDinoCharacter", "NetUpdateDinoOwnerData_Implementation", NewOwningPlayerName, NewOwningPlayerID); }
	bool RemoveInventoryAllowViewing(APlayerController* ForPC) { return NativeCall<bool, APlayerController *>((DWORD64)this, "APrimalDinoCharacter", "RemoveInventoryAllowViewing", ForPC); }
	bool ForceAllowBackwardsMovement() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "ForceAllowBackwardsMovement"); }
	bool CanDragCharacter(APrimalCharacter* Character) { return NativeCall<bool, APrimalCharacter *>((DWORD64)this, "APrimalDinoCharacter", "CanDragCharacter", Character); }
	bool IsTaming() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "IsTaming"); }
	void UpdateWakingTame(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "UpdateWakingTame", DeltaTime); }
	void FedWakingTameDino_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "FedWakingTameDino_Implementation"); }
	void AddStructure() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "AddStructure"); }
	void RemoveStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure *>((DWORD64)this, "APrimalDinoCharacter", "RemoveStructure", Structure); }
	void OnRep_Saddle() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnRep_Saddle"); }
	void ServerUploadCharacter(AShooterPlayerController* UploadedBy) { NativeCall<void, AShooterPlayerController *>((DWORD64)this, "APrimalDinoCharacter", "ServerUploadCharacter", UploadedBy); }
	void EmitPoop() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "EmitPoop"); }
	void CheckForWildAmbientHarvesting() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "CheckForWildAmbientHarvesting"); }
	void OverrideRandomWanderLocation_Implementation(FVector* originalDestination, FVector* inVec) { NativeCall<void, FVector *, FVector *>((DWORD64)this, "APrimalDinoCharacter", "OverrideRandomWanderLocation_Implementation", originalDestination, inVec); }
	//bool AllowEquippingItemType(EPrimalEquipmentType::Type equipmentType) { return NativeCall<bool, EPrimalEquipmentType::Type>((DWORD64)this, "APrimalDinoCharacter", "AllowEquippingItemType", equipmentType); }
	void OnPressReload() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnPressReload"); }
	void OnPressCrouch() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnPressCrouch"); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn *>((DWORD64)this, "APrimalDinoCharacter", "NotifyBumpedPawn", BumpedPawn); }
	void NotifyBumpedStructure(AActor* BumpedStructure) { NativeCall<void, AActor *>((DWORD64)this, "APrimalDinoCharacter", "NotifyBumpedStructure", BumpedStructure); }
	void StartRepair() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "StartRepair"); }
	void RepairCheckTimer() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "RepairCheckTimer"); }
	bool InitializeForReplicatedBasing() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "InitializeForReplicatedBasing"); }
	void RemoveBasedPawn(AActor* anPawn) { NativeCall<void, AActor *>((DWORD64)this, "APrimalDinoCharacter", "RemoveBasedPawn", anPawn); }
	bool AllowMovementMode(EMovementMode NewMovementMode, char NewCustomMode) { return NativeCall<bool, EMovementMode, char>((DWORD64)this, "APrimalDinoCharacter", "AllowMovementMode", NewMovementMode, NewCustomMode); }
	void OnRep_bBonesHidden() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "OnRep_bBonesHidden"); }
	void SetBabyAge(float TheAge) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "SetBabyAge", TheAge); }
	void ApplyBoneModifiers(bool bForce) { NativeCall<void, bool>((DWORD64)this, "APrimalDinoCharacter", "ApplyBoneModifiers", bForce); }
	void ApplyGestationBoneModifiers() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ApplyGestationBoneModifiers"); }
	float GetAttachedSoundPitchMultiplier() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetAttachedSoundPitchMultiplier"); }
	float GetAttachedSoundVolumeMultiplier() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetAttachedSoundVolumeMultiplier"); }
	void Poop() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "Poop"); }
	float GetBaseDragWeight() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetBaseDragWeight"); }
	void ServerUpdateBabyAge() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerUpdateBabyAge"); }
	void ServerUpdateGestation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerUpdateGestation"); }
	float GetHealthPercentage() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetHealthPercentage"); }
	void UpdateMating() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "UpdateMating"); }
	void DoMate(APrimalDinoCharacter* WithMate) { NativeCall<void, APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "DoMate", WithMate); }
	//ADroppedItem * CreateCloneFertilizedEgg() { return NativeCall<ADroppedItem *>((DWORD64)this, "APrimalDinoCharacter", "CreateCloneFertilizedEgg"); }
	FVector* GetInterpolatedLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalDinoCharacter", "GetInterpolatedLocation", result); }
	APrimalDinoCharacter* BPStaticCreateBabyDinoNoAncestors() { return NativeCall<APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "BPStaticCreateBabyDinoNoAncestors"); }
	APrimalDinoCharacter* BPStaticCreateBabyDino() { return NativeCall<APrimalDinoCharacter *>((DWORD64)this, "APrimalDinoCharacter", "BPStaticCreateBabyDino"); }
	//APrimalDinoCharacter * StaticCreateBabyDino(UWorld * theWorld TSubclassOf<APrimalDinoCharacter> EggDinoClassToSpawn, FVector * theGroundLoc, float actorRotationYaw, char * EggColorSetIndices, char * EggNumberOfLevelUpPointsApplied, float EggTamedIneffectivenessModifier, int NotifyTeamOverride, TArray<FDinoAncestorsEntry> * EggDinoAncestors, TArray<FDinoAncestorsEntry> * EggDinoAncestorsMale, int EggRandomMutationsFemale, int EggRandomMutationsMale) { return NativeCall<APrimalDinoCharacter *, UWorld *, TSubclassOf<APrimalDinoCharacter>, FVector *, float, char *, char *, float, int, TArray<FDinoAncestorsEntry> *, TArray<FDinoAncestorsEntry> *, int, int>((DWORD64)this, "APrimalDinoCharacter", "StaticCreateBabyDino", theWorld, EggDinoClassToSpawn, theGroundLoc, actorRotationYaw, EggColorSetIndices, EggNumberOfLevelUpPointsApplied, EggTamedIneffectivenessModifier, NotifyTeamOverride, EggDinoAncestors, EggDinoAncestorsMale, EggRandomMutationsFemale, EggRandomMutationsMale); }
	void UpdateGang() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "UpdateGang"); }
	float GetGravityZScale() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetGravityZScale"); }
	bool ForceAllowAccelerationRotationWhenFalling() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "ForceAllowAccelerationRotationWhenFalling"); }
	bool ShouldDisableControllerDesiredRotation() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "ShouldDisableControllerDesiredRotation"); }
	bool AllowExtendedCraftingFunctionality() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "AllowExtendedCraftingFunctionality"); }
	void UpdateTribeGroupRanks_Implementation(char NewTribeGroupPetOrderingRank, char NewTribeGroupPetRidingRank) { NativeCall<void, char, char>((DWORD64)this, "APrimalDinoCharacter", "UpdateTribeGroupRanks_Implementation", NewTribeGroupPetOrderingRank, NewTribeGroupPetRidingRank); }
	FVector* GetFloatingHUDLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "APrimalDinoCharacter", "GetFloatingHUDLocation", result); }
	void WasPushed(ACharacter* ByOtherCharacter) { NativeCall<void, ACharacter *>((DWORD64)this, "APrimalDinoCharacter", "WasPushed", ByOtherCharacter); }
	void UpdateImprintingDetails_Implementation(FString* NewImprinterName, unsigned __int64 NewImprinterPlayerDataID) { NativeCall<void, FString *, unsigned __int64>((DWORD64)this, "APrimalDinoCharacter", "UpdateImprintingDetails_Implementation", NewImprinterName, NewImprinterPlayerDataID); }
	void UpdateImprintingQuality_Implementation(float NewImprintingQuality) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "UpdateImprintingQuality_Implementation", NewImprintingQuality); }
	void IncrementImprintingQuality() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "IncrementImprintingQuality"); }
	void AddedImprintingQuality_Implementation(float Amount) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "AddedImprintingQuality_Implementation", Amount); }
	bool AllowWakingTame_Implementation(APlayerController* ForPC) { return NativeCall<bool, APlayerController *>((DWORD64)this, "APrimalDinoCharacter", "AllowWakingTame_Implementation", ForPC); }
	//float GetBaseTargetingDesire(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>((DWORD64)this, "APrimalDinoCharacter", "GetBaseTargetingDesire", Attacker); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "PostNetReceiveLocationAndRotation"); }
	void ResetTakingOff() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ResetTakingOff"); }
	void RemoveFromMeleeSwingHurtList(AActor* AnActor) { NativeCall<void, AActor *>((DWORD64)this, "APrimalDinoCharacter", "RemoveFromMeleeSwingHurtList", AnActor); }
	void FireMultipleProjectiles_Implementation(TArray<FVector>* Locations, TArray<FVector>* Directions, bool bScaleProjectileDamageByDinoDamage) { NativeCall<void, TArray<FVector> *, TArray<FVector> *, bool>((DWORD64)this, "APrimalDinoCharacter", "FireMultipleProjectiles_Implementation", Locations, Directions, bScaleProjectileDamageByDinoDamage); }
	void CycleAttackWeightsForAttackAtIndex(int attackIndex) { NativeCall<void, int>((DWORD64)this, "APrimalDinoCharacter", "CycleAttackWeightsForAttackAtIndex", attackIndex); }
	void AddDinoReferenceInLatchingStructure(APrimalStructure* Structure) { NativeCall<void, APrimalStructure *>((DWORD64)this, "APrimalDinoCharacter", "AddDinoReferenceInLatchingStructure", Structure); }
	void RemoveDinoReferenceFromLatchingStructure() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "RemoveDinoReferenceFromLatchingStructure"); }
	void StartSurfaceCameraForPassengers(float yaw, float pitch, float roll) { NativeCall<void, float, float, float>((DWORD64)this, "APrimalDinoCharacter", "StartSurfaceCameraForPassengers", yaw, pitch, roll); }
	TArray<AShooterCharacter *>* GetPassengers(TArray<AShooterCharacter *>* result) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *>((DWORD64)this, "APrimalDinoCharacter", "GetPassengers", result); }
	bool ShouldIgnoreMoveCombiningOverlap() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "ShouldIgnoreMoveCombiningOverlap"); }
	bool AllowMountedWeaponry(bool bIgnoreCurrentWeapon, bool bWeaponForcesMountedWeaponry) { return NativeCall<bool, bool, bool>((DWORD64)this, "APrimalDinoCharacter", "AllowMountedWeaponry", bIgnoreCurrentWeapon, bWeaponForcesMountedWeaponry); }
	void ModifyDesiredRotation(FRotator* InDesiredRotation) { NativeCall<void, FRotator *>((DWORD64)this, "APrimalDinoCharacter", "ModifyDesiredRotation", InDesiredRotation); }
	void GiveDeathDossier() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "GiveDeathDossier"); }
	void ServerSetRiderMountedWeaponRotation_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerSetRiderMountedWeaponRotation_Implementation"); }
	void DoNeuter_Implementation() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "DoNeuter_Implementation"); }
	bool OverrideForcePreventExitingWater() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "OverrideForcePreventExitingWater"); }
	//APrimalStructureExplosive * GetAttachedExplosive() { return NativeCall<APrimalStructureExplosive *>((DWORD64)this, "APrimalDinoCharacter", "GetAttachedExplosive"); }
	float GetXPMultiplier() { return NativeCall<float>((DWORD64)this, "APrimalDinoCharacter", "GetXPMultiplier"); }
	bool UseHighQualityMovement() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "UseHighQualityMovement"); }
	bool AllowPushOthers() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "AllowPushOthers"); }
	bool IsVehicle() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "IsVehicle"); }
	bool AllowWakingTame(APlayerController* ForPC) { return NativeCall<bool, APlayerController *>((DWORD64)this, "APrimalDinoCharacter", "AllowWakingTame", ForPC); }
	float BlueprintGetAttackWeight(int AttackIndex, float inputWeight, float distance, float attackRangeOffset, AActor* OtherTarget) { return NativeCall<float, int, float, float, float, AActor *>((DWORD64)this, "APrimalDinoCharacter", "BlueprintGetAttackWeight", AttackIndex, inputWeight, distance, attackRangeOffset, OtherTarget); }
	bool BlueprintOverrideWantsToRun(bool bInputWantsToRun) { return NativeCall<bool, bool>((DWORD64)this, "APrimalDinoCharacter", "BlueprintOverrideWantsToRun", bInputWantsToRun); }
	void BlueprintPlayDying(float KillingDamage, FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FDamageEvent *, APawn *, AActor *>((DWORD64)this, "APrimalDinoCharacter", "BlueprintPlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	bool BPCanTargetCorpse() { return NativeCall<bool>((DWORD64)this, "APrimalDinoCharacter", "BPCanTargetCorpse"); }
	void BPDoHarvestAttack(int harvestIndex) { NativeCall<void, int>((DWORD64)this, "APrimalDinoCharacter", "BPDoHarvestAttack", harvestIndex); }
	bool BPHandleUseButtonPress(AShooterPlayerController* RiderController) { return NativeCall<bool, AShooterPlayerController *>((DWORD64)this, "APrimalDinoCharacter", "BPHandleUseButtonPress", RiderController); }
	void BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<UPrimalItem *>* resourceItems, TArray<float>* resourceWeightsOut) { NativeCall<void, TArray<float> *, TArray<UPrimalItem *> *, TArray<float> *>((DWORD64)this, "APrimalDinoCharacter", "BPModifyHarvestingWeightsArray", resourceWeightsIn, resourceItems, resourceWeightsOut); }
	void FireProjectile() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "FireProjectile"); }
	void InterruptLatching() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "InterruptLatching"); }
	void NetUpdateDinoNameStrings(FString* NewTamerString, FString* NewTamedName) { NativeCall<void, FString *, FString *>((DWORD64)this, "APrimalDinoCharacter", "NetUpdateDinoNameStrings", NewTamerString, NewTamedName); }
	void NetUpdateDinoOwnerData(FString* NewOwningPlayerName, int NewOwningPlayerID) { NativeCall<void, FString *, int>((DWORD64)this, "APrimalDinoCharacter", "NetUpdateDinoOwnerData", NewOwningPlayerName, NewOwningPlayerID); }
	void OverrideRandomWanderLocation(FVector* originalDestination, FVector* inVec) { NativeCall<void, FVector *, FVector *>((DWORD64)this, "APrimalDinoCharacter", "OverrideRandomWanderLocation", originalDestination, inVec); }
	void RidingTick() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "RidingTick"); }
	void ServerClearRider() { NativeCall<void>((DWORD64)this, "APrimalDinoCharacter", "ServerClearRider"); }
	void ServerRequestAttack(int attackIndex) { NativeCall<void, int>((DWORD64)this, "APrimalDinoCharacter", "ServerRequestAttack", attackIndex); }
	void UpdateBabyCuddling(long double NewBabyNextCuddleTime, char NewBabyCuddleType, UClass* NewBabyCuddleFood) { NativeCall<void, long double, char, UClass*>((DWORD64)this, "APrimalDinoCharacter", "UpdateBabyCuddling", NewBabyNextCuddleTime, NewBabyCuddleType, NewBabyCuddleFood); }
	void UpdateImprintingDetails(FString* NewImprinterName, unsigned __int64 NewImprinterPlayerDataID) { NativeCall<void, FString *, unsigned __int64>((DWORD64)this, "APrimalDinoCharacter", "UpdateImprintingDetails", NewImprinterName, NewImprinterPlayerDataID); }
	void UpdateImprintingQuality(float NewImprintingQuality) { NativeCall<void, float>((DWORD64)this, "APrimalDinoCharacter", "UpdateImprintingQuality", NewImprintingQuality); }
	void UpdateTribeGroupRanks(char NewTribeGroupPetOrderingRank, char NewTribeGroupPetRidingRank) { NativeCall<void, char, char>((DWORD64)this, "APrimalDinoCharacter", "UpdateTribeGroupRanks", NewTribeGroupPetOrderingRank, NewTribeGroupPetRidingRank); }
};

// Weapon

struct AShooterWeapon : AActor
{
	float GetEquipTimeField() const { return GetNativeField<float>(this, "AShooterWeapon", "EquipTime"); }
	void SetEquipTimeField(float newValue) { SetNativeField(this, "AShooterWeapon", "EquipTime", newValue); }
	float GetItemDurabilityToConsumePerMeleeHitField() const { return GetNativeField<float>(this, "AShooterWeapon", "ItemDurabilityToConsumePerMeleeHit"); }
	void SetItemDurabilityToConsumePerMeleeHitField(float newValue) { SetNativeField(this, "AShooterWeapon", "ItemDurabilityToConsumePerMeleeHit", newValue); }
	float GetAmmoIconsCountField() const { return GetNativeField<float>(this, "AShooterWeapon", "AmmoIconsCount"); }
	void SetAmmoIconsCountField(float newValue) { SetNativeField(this, "AShooterWeapon", "AmmoIconsCount", newValue); }
	int GetPrimaryClipIconOffsetField() const { return GetNativeField<int>(this, "AShooterWeapon", "PrimaryClipIconOffset"); }
	void SetPrimaryClipIconOffsetField(int newValue) { SetNativeField(this, "AShooterWeapon", "PrimaryClipIconOffset", newValue); }
	int GetSecondaryClipIconOffsetField() const { return GetNativeField<int>(this, "AShooterWeapon", "SecondaryClipIconOffset"); }
	void SetSecondaryClipIconOffsetField(int newValue) { SetNativeField(this, "AShooterWeapon", "SecondaryClipIconOffset", newValue); }
	FVector2D GetTargetingInfoTooltipPaddingField() const { return GetNativeField<FVector2D>(this, "AShooterWeapon", "TargetingInfoTooltipPadding"); }
	void SetTargetingInfoTooltipPaddingField(FVector2D newValue) { SetNativeField(this, "AShooterWeapon", "TargetingInfoTooltipPadding", newValue); }
	FVector2D GetTargetingInfoTooltipScaleField() const { return GetNativeField<FVector2D>(this, "AShooterWeapon", "TargetingInfoTooltipScale"); }
	void SetTargetingInfoTooltipScaleField(FVector2D newValue) { SetNativeField(this, "AShooterWeapon", "TargetingInfoTooltipScale", newValue); }
	bool GetbDisableShooterOnElectricStormField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bDisableShooterOnElectricStorm"); }
	void SetbDisableShooterOnElectricStormField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bDisableShooterOnElectricStorm", newValue); }
	FName GetOverrideAttachPointField() const { return GetNativeField<FName>(this, "AShooterWeapon", "OverrideAttachPoint"); }
	void SetOverrideAttachPointField(FName newValue) { SetNativeField(this, "AShooterWeapon", "OverrideAttachPoint", newValue); }
	FVector GetFPVRelativeLocationField() const { return GetNativeField<FVector>(this, "AShooterWeapon", "FPVRelativeLocation"); }
	void SetFPVRelativeLocationField(FVector newValue) { SetNativeField(this, "AShooterWeapon", "FPVRelativeLocation", newValue); }
	FRotator GetFPVRelativeRotationField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVRelativeRotation"); }
	void SetFPVRelativeRotationField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVRelativeRotation", newValue); }
	FVector GetFPVRelativeLocation_TargetingField() const { return GetNativeField<FVector>(this, "AShooterWeapon", "FPVRelativeLocation_Targeting"); }
	void SetFPVRelativeLocation_TargetingField(FVector newValue) { SetNativeField(this, "AShooterWeapon", "FPVRelativeLocation_Targeting", newValue); }
	FRotator GetFPVRelativeRotation_TargetingField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVRelativeRotation_Targeting"); }
	void SetFPVRelativeRotation_TargetingField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVRelativeRotation_Targeting", newValue); }
	float GetFPVEnterTargetingInterpSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVEnterTargetingInterpSpeed"); }
	void SetFPVEnterTargetingInterpSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVEnterTargetingInterpSpeed", newValue); }
	float GetFPVExitTargetingInterpSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVExitTargetingInterpSpeed"); }
	void SetFPVExitTargetingInterpSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVExitTargetingInterpSpeed", newValue); }
	FRotator GetFPVLookAtMaximumOffsetField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVLookAtMaximumOffset"); }
	void SetFPVLookAtMaximumOffsetField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVLookAtMaximumOffset", newValue); }
	FRotator GetFPVLookAtSpeedBaseField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVLookAtSpeedBase"); }
	void SetFPVLookAtSpeedBaseField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVLookAtSpeedBase", newValue); }
	FRotator GetFPVLookAtInterpSpeedField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVLookAtInterpSpeed"); }
	void SetFPVLookAtInterpSpeedField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVLookAtInterpSpeed", newValue); }
	FRotator GetFPVLookAtMaximumOffset_TargetingField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVLookAtMaximumOffset_Targeting"); }
	void SetFPVLookAtMaximumOffset_TargetingField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVLookAtMaximumOffset_Targeting", newValue); }
	FRotator GetFPVLookAtSpeedBase_TargetingField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVLookAtSpeedBase_Targeting"); }
	void SetFPVLookAtSpeedBase_TargetingField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVLookAtSpeedBase_Targeting", newValue); }
	FRotator GetFPVLookAtInterpSpeed_TargetingField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVLookAtInterpSpeed_Targeting"); }
	void SetFPVLookAtInterpSpeed_TargetingField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVLookAtInterpSpeed_Targeting", newValue); }
	bool GetbUseBlueprintAnimNotificationsField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bUseBlueprintAnimNotifications"); }
	void SetbUseBlueprintAnimNotificationsField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bUseBlueprintAnimNotifications", newValue); }
	TArray<FName> GetMeleeSwingSocketsField() const { return GetNativeField<TArray<FName>>(this, "AShooterWeapon", "MeleeSwingSockets"); }
	void SetMeleeSwingSocketsField(TArray<FName> newValue) { SetNativeField(this, "AShooterWeapon", "MeleeSwingSockets", newValue); }
	float GetAllowMeleeTimeBeforeAnimationEndField() const { return GetNativeField<float>(this, "AShooterWeapon", "AllowMeleeTimeBeforeAnimationEnd"); }
	void SetAllowMeleeTimeBeforeAnimationEndField(float newValue) { SetNativeField(this, "AShooterWeapon", "AllowMeleeTimeBeforeAnimationEnd", newValue); }
	UPrimalItem* GetAssociatedPrimalItemField() const { return GetNativeField<UPrimalItem *>(this, "AShooterWeapon", "AssociatedPrimalItem"); }
	void SetAssociatedPrimalItemField(UPrimalItem* newValue) { SetNativeField(this, "AShooterWeapon", "AssociatedPrimalItem", newValue); }
	bool GetbCanBeUsedAsEquipmentField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bCanBeUsedAsEquipment"); }
	void SetbCanBeUsedAsEquipmentField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bCanBeUsedAsEquipment", newValue); }
	FItemNetInfo GetAssociatedItemNetInfoField() const { return GetNativeField<FItemNetInfo>(this, "AShooterWeapon", "AssociatedItemNetInfo"); }
	void SetAssociatedItemNetInfoField(FItemNetInfo newValue) { SetNativeField(this, "AShooterWeapon", "AssociatedItemNetInfo", newValue); }
	//FWeaponData GetWeaponConfigField() const { return GetNativeField<FWeaponData>(this, "AShooterWeapon", "WeaponConfig"); }
	TSubclassOf<UPrimalItem> GetWeaponAmmoItemTemplateField() const { return GetNativeField<TSubclassOf<UPrimalItem>>(this, "AShooterWeapon", "WeaponAmmoItemTemplate"); }
	void SetWeaponAmmoItemTemplateField(TSubclassOf<UPrimalItem> newValue) { SetNativeField(this, "AShooterWeapon", "WeaponAmmoItemTemplate", newValue); }
	long double GetNextAllowedMeleeTimeField() const { return GetNativeField<long double>(this, "AShooterWeapon", "NextAllowedMeleeTime"); }
	void SetNextAllowedMeleeTimeField(long double newValue) { SetNativeField(this, "AShooterWeapon", "NextAllowedMeleeTime", newValue); }
	TArray<FVector> GetLastSocketPositionsField() const { return GetNativeField<TArray<FVector>>(this, "AShooterWeapon", "LastSocketPositions"); }
	void SetLastSocketPositionsField(TArray<FVector> newValue) { SetNativeField(this, "AShooterWeapon", "LastSocketPositions", newValue); }
	TArray<TWeakObjectPtr<AActor>> GetMeleeSwingHurtListField() const { return GetNativeField<TArray<TWeakObjectPtr<AActor>>>(this, "AShooterWeapon", "MeleeSwingHurtList"); }
	long double GetLastFPVRenderTimeField() const { return GetNativeField<long double>(this, "AShooterWeapon", "LastFPVRenderTime"); }
	void SetLastFPVRenderTimeField(long double newValue) { SetNativeField(this, "AShooterWeapon", "LastFPVRenderTime", newValue); }
	FRotator GetLastCameraRotationField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "LastCameraRotation"); }
	void SetLastCameraRotationField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "LastCameraRotation", newValue); }
	FRotator GetFPVAdditionalLookRotOffsetField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVAdditionalLookRotOffset"); }
	void SetFPVAdditionalLookRotOffsetField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVAdditionalLookRotOffset", newValue); }
	FVector GetFPVLastLocOffsetField() const { return GetNativeField<FVector>(this, "AShooterWeapon", "FPVLastLocOffset"); }
	void SetFPVLastLocOffsetField(FVector newValue) { SetNativeField(this, "AShooterWeapon", "FPVLastLocOffset", newValue); }
	FVector GetFPVLastVROffsetField() const { return GetNativeField<FVector>(this, "AShooterWeapon", "FPVLastVROffset"); }
	void SetFPVLastVROffsetField(FVector newValue) { SetNativeField(this, "AShooterWeapon", "FPVLastVROffset", newValue); }
	FVector GetFPVRelativeLocationOffscreenOffsetField() const { return GetNativeField<FVector>(this, "AShooterWeapon", "FPVRelativeLocationOffscreenOffset"); }
	void SetFPVRelativeLocationOffscreenOffsetField(FVector newValue) { SetNativeField(this, "AShooterWeapon", "FPVRelativeLocationOffscreenOffset", newValue); }
	FRotator GetFPVLastRotOffsetField() const { return GetNativeField<FRotator>(this, "AShooterWeapon", "FPVLastRotOffset"); }
	void SetFPVLastRotOffsetField(FRotator newValue) { SetNativeField(this, "AShooterWeapon", "FPVLastRotOffset", newValue); }
	AShooterCharacter* GetMyPawnField() const { return GetNativeField<AShooterCharacter *>(this, "AShooterWeapon", "MyPawn"); }
	void SetMyPawnField(AShooterCharacter* newValue) { SetNativeField(this, "AShooterWeapon", "MyPawn", newValue); }
	FName GetMuzzleAttachPointField() const { return GetNativeField<FName>(this, "AShooterWeapon", "MuzzleAttachPoint"); }
	void SetMuzzleAttachPointField(FName newValue) { SetNativeField(this, "AShooterWeapon", "MuzzleAttachPoint", newValue); }
	int GetMeleeDamageAmountField() const { return GetNativeField<int>(this, "AShooterWeapon", "MeleeDamageAmount"); }
	void SetMeleeDamageAmountField(int newValue) { SetNativeField(this, "AShooterWeapon", "MeleeDamageAmount", newValue); }
	float GetTheMeleeSwingRadiusField() const { return GetNativeField<float>(this, "AShooterWeapon", "TheMeleeSwingRadius"); }
	void SetTheMeleeSwingRadiusField(float newValue) { SetNativeField(this, "AShooterWeapon", "TheMeleeSwingRadius", newValue); }
	float GetMeleeDamageImpulseField() const { return GetNativeField<float>(this, "AShooterWeapon", "MeleeDamageImpulse"); }
	void SetMeleeDamageImpulseField(float newValue) { SetNativeField(this, "AShooterWeapon", "MeleeDamageImpulse", newValue); }
	float GetFPVMoveOffscreenWhenTurningMaxMoveWeaponSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed"); }
	void SetFPVMoveOffscreenWhenTurningMaxMoveWeaponSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed", newValue); }
	float GetFPVMoveOffscreenWhenTurningMinMoveWeaponSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed"); }
	void SetFPVMoveOffscreenWhenTurningMinMoveWeaponSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed", newValue); }
	float GetFPVMoveOffscreenWhenTurningMinViewRotSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinViewRotSpeed"); }
	void SetFPVMoveOffscreenWhenTurningMinViewRotSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinViewRotSpeed", newValue); }
	float GetFPVMoveOffscreenWhenTurningMaxViewRotSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxViewRotSpeed"); }
	void SetFPVMoveOffscreenWhenTurningMaxViewRotSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxViewRotSpeed", newValue); }
	float GetFPVMoveOffscreenIdleRestoreIntervalField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreInterval"); }
	void SetFPVMoveOffscreenIdleRestoreIntervalField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreInterval", newValue); }
	float GetFPVMoveOffscreenIdleRestoreSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreSpeed"); }
	void SetFPVMoveOffscreenIdleRestoreSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreSpeed", newValue); }
	float GetFPVMoveOffscreenWhenTurningMaxOffsetField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxOffset"); }
	void SetFPVMoveOffscreenWhenTurningMaxOffsetField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxOffset", newValue); }
	long double GetFPVStoppedTurningTimeField() const { return GetNativeField<long double>(this, "AShooterWeapon", "FPVStoppedTurningTime"); }
	void SetFPVStoppedTurningTimeField(long double newValue) { SetNativeField(this, "AShooterWeapon", "FPVStoppedTurningTime", newValue); }
	//EWeaponState::Type GetCurrentStateField() const { return GetNativeField<EWeaponState::Type>(this, "AShooterWeapon", "CurrentState"); }
	long double GetLastFireTimeField() const { return GetNativeField<long double>(this, "AShooterWeapon", "LastFireTime"); }
	void SetLastFireTimeField(long double newValue) { SetNativeField(this, "AShooterWeapon", "LastFireTime", newValue); }
	int GetCurrentAmmoField() const { return GetNativeField<int>(this, "AShooterWeapon", "CurrentAmmo"); }
	void SetCurrentAmmoField(int newValue) { SetNativeField(this, "AShooterWeapon", "CurrentAmmo", newValue); }
	int GetCurrentAmmoInClipField() const { return GetNativeField<int>(this, "AShooterWeapon", "CurrentAmmoInClip"); }
	void SetCurrentAmmoInClipField(int newValue) { SetNativeField(this, "AShooterWeapon", "CurrentAmmoInClip", newValue); }
	bool GetbReplicateCurrentAmmoInClipToNonOwnersField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bReplicateCurrentAmmoInClipToNonOwners"); }
	void SetbReplicateCurrentAmmoInClipToNonOwnersField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bReplicateCurrentAmmoInClipToNonOwners", newValue); }
	FName GetFPVAccessoryToggleComponentField() const { return GetNativeField<FName>(this, "AShooterWeapon", "FPVAccessoryToggleComponent"); }
	void SetFPVAccessoryToggleComponentField(FName newValue) { SetNativeField(this, "AShooterWeapon", "FPVAccessoryToggleComponent", newValue); }
	FName GetTPVAccessoryToggleComponentField() const { return GetNativeField<FName>(this, "AShooterWeapon", "TPVAccessoryToggleComponent"); }
	void SetTPVAccessoryToggleComponentField(FName newValue) { SetNativeField(this, "AShooterWeapon", "TPVAccessoryToggleComponent", newValue); }
	float GetTimeToAutoReloadField() const { return GetNativeField<float>(this, "AShooterWeapon", "TimeToAutoReload"); }
	void SetTimeToAutoReloadField(float newValue) { SetNativeField(this, "AShooterWeapon", "TimeToAutoReload", newValue); }
	int GetFiredLastNoAmmoShotField() const { return GetNativeField<int>(this, "AShooterWeapon", "FiredLastNoAmmoShot"); }
	void SetFiredLastNoAmmoShotField(int newValue) { SetNativeField(this, "AShooterWeapon", "FiredLastNoAmmoShot", newValue); }
	long double GetLastNotifyShotTimeField() const { return GetNativeField<long double>(this, "AShooterWeapon", "LastNotifyShotTime"); }
	void SetLastNotifyShotTimeField(long double newValue) { SetNativeField(this, "AShooterWeapon", "LastNotifyShotTime", newValue); }
	TSubclassOf<UDamageType> GetMeleeDamageTypeField() const { return GetNativeField<TSubclassOf<UDamageType>>(this, "AShooterWeapon", "MeleeDamageType"); }
	void SetMeleeDamageTypeField(TSubclassOf<UDamageType> newValue) { SetNativeField(this, "AShooterWeapon", "MeleeDamageType", newValue); }
	FVector GetVRTargetingModelOffsetField() const { return GetNativeField<FVector>(this, "AShooterWeapon", "VRTargetingModelOffset"); }
	void SetVRTargetingModelOffsetField(FVector newValue) { SetNativeField(this, "AShooterWeapon", "VRTargetingModelOffset", newValue); }
	FVector GetVRTargetingAimOriginOffsetField() const { return GetNativeField<FVector>(this, "AShooterWeapon", "VRTargetingAimOriginOffset"); }
	void SetVRTargetingAimOriginOffsetField(FVector newValue) { SetNativeField(this, "AShooterWeapon", "VRTargetingAimOriginOffset", newValue); }
	float GetScopeCrosshairSizeField() const { return GetNativeField<float>(this, "AShooterWeapon", "ScopeCrosshairSize"); }
	void SetScopeCrosshairSizeField(float newValue) { SetNativeField(this, "AShooterWeapon", "ScopeCrosshairSize", newValue); }
	FName GetScopeCrosshairColorParameterField() const { return GetNativeField<FName>(this, "AShooterWeapon", "ScopeCrosshairColorParameter"); }
	void SetScopeCrosshairColorParameterField(FName newValue) { SetNativeField(this, "AShooterWeapon", "ScopeCrosshairColorParameter", newValue); }
	float GetMinItemDurabilityPercentageForShotField() const { return GetNativeField<float>(this, "AShooterWeapon", "MinItemDurabilityPercentageForShot"); }
	void SetMinItemDurabilityPercentageForShotField(float newValue) { SetNativeField(this, "AShooterWeapon", "MinItemDurabilityPercentageForShot", newValue); }
	float GetOverrideTargetingFOVField() const { return GetNativeField<float>(this, "AShooterWeapon", "OverrideTargetingFOV"); }
	void SetOverrideTargetingFOVField(float newValue) { SetNativeField(this, "AShooterWeapon", "OverrideTargetingFOV", newValue); }
	float GetTargetingDelayTimeField() const { return GetNativeField<float>(this, "AShooterWeapon", "TargetingDelayTime"); }
	void SetTargetingDelayTimeField(float newValue) { SetNativeField(this, "AShooterWeapon", "TargetingDelayTime", newValue); }
	float GetTargetingFOVInterpSpeedField() const { return GetNativeField<float>(this, "AShooterWeapon", "TargetingFOVInterpSpeed"); }
	void SetTargetingFOVInterpSpeedField(float newValue) { SetNativeField(this, "AShooterWeapon", "TargetingFOVInterpSpeed", newValue); }
	float GetAimDriftYawAngleField() const { return GetNativeField<float>(this, "AShooterWeapon", "AimDriftYawAngle"); }
	void SetAimDriftYawAngleField(float newValue) { SetNativeField(this, "AShooterWeapon", "AimDriftYawAngle", newValue); }
	float GetAimDriftPitchAngleField() const { return GetNativeField<float>(this, "AShooterWeapon", "AimDriftPitchAngle"); }
	void SetAimDriftPitchAngleField(float newValue) { SetNativeField(this, "AShooterWeapon", "AimDriftPitchAngle", newValue); }
	float GetAimDriftYawFrequencyField() const { return GetNativeField<float>(this, "AShooterWeapon", "AimDriftYawFrequency"); }
	void SetAimDriftYawFrequencyField(float newValue) { SetNativeField(this, "AShooterWeapon", "AimDriftYawFrequency", newValue); }
	float GetAimDriftPitchFrequencyField() const { return GetNativeField<float>(this, "AShooterWeapon", "AimDriftPitchFrequency"); }
	void SetAimDriftPitchFrequencyField(float newValue) { SetNativeField(this, "AShooterWeapon", "AimDriftPitchFrequency", newValue); }
	float GetMeleeHitRandomChanceToDestroyItemField() const { return GetNativeField<float>(this, "AShooterWeapon", "MeleeHitRandomChanceToDestroyItem"); }
	void SetMeleeHitRandomChanceToDestroyItemField(float newValue) { SetNativeField(this, "AShooterWeapon", "MeleeHitRandomChanceToDestroyItem", newValue); }
	float GetGlobalFireCameraShakeScaleField() const { return GetNativeField<float>(this, "AShooterWeapon", "GlobalFireCameraShakeScale"); }
	void SetGlobalFireCameraShakeScaleField(float newValue) { SetNativeField(this, "AShooterWeapon", "GlobalFireCameraShakeScale", newValue); }
	float GetDurabilityCostToEquipField() const { return GetNativeField<float>(this, "AShooterWeapon", "DurabilityCostToEquip"); }
	void SetDurabilityCostToEquipField(float newValue) { SetNativeField(this, "AShooterWeapon", "DurabilityCostToEquip", newValue); }
	float GetPassiveDurabilityCostPerIntervalField() const { return GetNativeField<float>(this, "AShooterWeapon", "PassiveDurabilityCostPerInterval"); }
	void SetPassiveDurabilityCostPerIntervalField(float newValue) { SetNativeField(this, "AShooterWeapon", "PassiveDurabilityCostPerInterval", newValue); }
	float GetPassiveDurabilityCostIntervalField() const { return GetNativeField<float>(this, "AShooterWeapon", "PassiveDurabilityCostInterval"); }
	void SetPassiveDurabilityCostIntervalField(float newValue) { SetNativeField(this, "AShooterWeapon", "PassiveDurabilityCostInterval", newValue); }
	float GetGlobalFireCameraShakeScaleTargetingField() const { return GetNativeField<float>(this, "AShooterWeapon", "GlobalFireCameraShakeScaleTargeting"); }
	void SetGlobalFireCameraShakeScaleTargetingField(float newValue) { SetNativeField(this, "AShooterWeapon", "GlobalFireCameraShakeScaleTargeting", newValue); }
	float GetMeleeCameraShakeSpeedScaleField() const { return GetNativeField<float>(this, "AShooterWeapon", "MeleeCameraShakeSpeedScale"); }
	void SetMeleeCameraShakeSpeedScaleField(float newValue) { SetNativeField(this, "AShooterWeapon", "MeleeCameraShakeSpeedScale", newValue); }
	float GetReloadCameraShakeSpeedScaleField() const { return GetNativeField<float>(this, "AShooterWeapon", "ReloadCameraShakeSpeedScale"); }
	void SetReloadCameraShakeSpeedScaleField(float newValue) { SetNativeField(this, "AShooterWeapon", "ReloadCameraShakeSpeedScale", newValue); }
	float GetMeleeConsumesStaminaField() const { return GetNativeField<float>(this, "AShooterWeapon", "MeleeConsumesStamina"); }
	void SetMeleeConsumesStaminaField(float newValue) { SetNativeField(this, "AShooterWeapon", "MeleeConsumesStamina", newValue); }
	float GetHypoThermiaInsulationField() const { return GetNativeField<float>(this, "AShooterWeapon", "HypoThermiaInsulation"); }
	void SetHypoThermiaInsulationField(float newValue) { SetNativeField(this, "AShooterWeapon", "HypoThermiaInsulation", newValue); }
	float GetHyperThermiaInsulationField() const { return GetNativeField<float>(this, "AShooterWeapon", "HyperThermiaInsulation"); }
	void SetHyperThermiaInsulationField(float newValue) { SetNativeField(this, "AShooterWeapon", "HyperThermiaInsulation", newValue); }
	float GetInsulationRangeField() const { return GetNativeField<float>(this, "AShooterWeapon", "InsulationRange"); }
	void SetInsulationRangeField(float newValue) { SetNativeField(this, "AShooterWeapon", "InsulationRange", newValue); }
	long double GetLastDurabilityConsumptionTimeField() const { return GetNativeField<long double>(this, "AShooterWeapon", "LastDurabilityConsumptionTime"); }
	void SetLastDurabilityConsumptionTimeField(long double newValue) { SetNativeField(this, "AShooterWeapon", "LastDurabilityConsumptionTime", newValue); }
	bool GetbLastMeleeHitField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bLastMeleeHit"); }
	void SetbLastMeleeHitField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bLastMeleeHit", newValue); }
	bool GetbLastMeleeHitStationaryField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bLastMeleeHitStationary"); }
	void SetbLastMeleeHitStationaryField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bLastMeleeHitStationary", newValue); }
	bool GetbClientAlreadyReloadedField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bClientAlreadyReloaded"); }
	void SetbClientAlreadyReloadedField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bClientAlreadyReloaded", newValue); }
	float GetAutoReloadTimerField() const { return GetNativeField<float>(this, "AShooterWeapon", "AutoReloadTimer"); }
	void SetAutoReloadTimerField(float newValue) { SetNativeField(this, "AShooterWeapon", "AutoReloadTimer", newValue); }
	bool GetbConsumedDurabilityForThisMeleeHitField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bConsumedDurabilityForThisMeleeHit"); }
	void SetbConsumedDurabilityForThisMeleeHitField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bConsumedDurabilityForThisMeleeHit", newValue); }
	float GetFPVMeleeTraceFXRangeField() const { return GetNativeField<float>(this, "AShooterWeapon", "FPVMeleeTraceFXRange"); }
	void SetFPVMeleeTraceFXRangeField(float newValue) { SetNativeField(this, "AShooterWeapon", "FPVMeleeTraceFXRange", newValue); }
	float GetMeleeAttackHarvetUsableComponentsRadiusField() const { return GetNativeField<float>(this, "AShooterWeapon", "MeleeAttackHarvetUsableComponentsRadius"); }
	void SetMeleeAttackHarvetUsableComponentsRadiusField(float newValue) { SetNativeField(this, "AShooterWeapon", "MeleeAttackHarvetUsableComponentsRadius", newValue); }
	float GetMeleeAttackUsableHarvestDamageMultiplierField() const { return GetNativeField<float>(this, "AShooterWeapon", "MeleeAttackUsableHarvestDamageMultiplier"); }
	void SetMeleeAttackUsableHarvestDamageMultiplierField(float newValue) { SetNativeField(this, "AShooterWeapon", "MeleeAttackUsableHarvestDamageMultiplier", newValue); }
	bool GetbPreventOpeningInventoryField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bPreventOpeningInventory"); }
	void SetbPreventOpeningInventoryField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bPreventOpeningInventory", newValue); }
	bool GetbAllowUseOnSeatingStructureField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bAllowUseOnSeatingStructure"); }
	void SetbAllowUseOnSeatingStructureField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bAllowUseOnSeatingStructure", newValue); }
	bool GetbOnlyUseOnSeatingStructureField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bOnlyUseOnSeatingStructure"); }
	void SetbOnlyUseOnSeatingStructureField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bOnlyUseOnSeatingStructure", newValue); }
	bool GetbBPDoClientCheckCanFireField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bBPDoClientCheckCanFire"); }
	void SetbBPDoClientCheckCanFireField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bBPDoClientCheckCanFire", newValue); }
	bool GetbRestrictTPVCameraYawField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bRestrictTPVCameraYaw"); }
	void SetbRestrictTPVCameraYawField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bRestrictTPVCameraYaw", newValue); }
	float GetTPVCameraYawRangeField() const { return GetNativeField<float>(this, "AShooterWeapon", "TPVCameraYawRange"); }
	void SetTPVCameraYawRangeField(float newValue) { SetNativeField(this, "AShooterWeapon", "TPVCameraYawRange", newValue); }
	bool GetbFoceSimulatedTickField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bFoceSimulatedTick"); }
	void SetbFoceSimulatedTickField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bFoceSimulatedTick", newValue); }
	bool GetbWasLastFireFromGamePadField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bWasLastFireFromGamePad"); }
	void SetbWasLastFireFromGamePadField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bWasLastFireFromGamePad", newValue); }
	bool GetbDisableWeaponCrosshairField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bDisableWeaponCrosshair"); }
	void SetbDisableWeaponCrosshairField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bDisableWeaponCrosshair", newValue); }
	bool GetbBPOverrideAspectRatioField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bBPOverrideAspectRatio"); }
	void SetbBPOverrideAspectRatioField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bBPOverrideAspectRatio", newValue); }
	bool GetbForceAllowMountedWeaponryField() const { return GetNativeField<bool>(this, "AShooterWeapon", "bForceAllowMountedWeaponry"); }
	void SetbForceAllowMountedWeaponryField(bool newValue) { SetNativeField(this, "AShooterWeapon", "bForceAllowMountedWeaponry", newValue); }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "AShooterWeapon", "StaticClass"); }
	USceneComponent* FindComponentByName(FName ComponentName) { return NativeCall<USceneComponent *, FName>((DWORD64)this, "AShooterWeapon", "FindComponentByName", ComponentName); }
	void ZoomOut() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ZoomOut"); }
	void ZoomIn() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ZoomIn"); }
	void PostInitializeComponents() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "PostInitializeComponents"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>((DWORD64)this, "AShooterWeapon", "UpdateFirstPersonMeshes", bIsFirstPerson); }
	void Destroyed() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "Destroyed"); }
	void OnEquip() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "OnEquip"); }
	void OnEquipFinished() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "OnEquipFinished"); }
	void StartUnequip_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StartUnequip_Implementation"); }
	void PlayUnequipAnimation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "PlayUnequipAnimation"); }
	void AttachMeshToPawn() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "AttachMeshToPawn"); }
	void ApplyPrimalItemSettingsToWeapon(bool bShallowUpdate) { NativeCall<void, bool>((DWORD64)this, "AShooterWeapon", "ApplyPrimalItemSettingsToWeapon", bShallowUpdate); }
	void DetachMeshFromPawn() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "DetachMeshFromPawn"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>((DWORD64)this, "AShooterWeapon", "StartFire", bFromGamepad); }
	void StopFire() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StopFire"); }
	void StartAltFire() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StartAltFire"); }
	void StartSecondaryAction() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StartSecondaryAction"); }
	void ToggleAccessory() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ToggleAccessory"); }
	void RefreshToggleAccessory() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "RefreshToggleAccessory"); }
	bool CanMeleeAttack() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "CanMeleeAttack"); }
	void DoMeleeAttack() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "DoMeleeAttack"); }
	void StopAltFire() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StopAltFire"); }
	void CheckForMeleeAttack() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "CheckForMeleeAttack"); }
	void StopCheckForMeleeAttack() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StopCheckForMeleeAttack"); }
	bool CanRun() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "CanRun"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>((DWORD64)this, "AShooterWeapon", "StartReload", bFromReplication); }
	void ClearClientReload() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ClearClientReload"); }
	float PlayReloadAnimation() { return NativeCall<float>((DWORD64)this, "AShooterWeapon", "PlayReloadAnimation"); }
	void StopReloadAnimation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StopReloadAnimation"); }
	void ServerStartFire_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStartFire_Implementation"); }
	void ServerStopFire_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStopFire_Implementation"); }
	void ServerStartAltFire_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStartAltFire_Implementation"); }
	void ServerStopAltFire_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStopAltFire_Implementation"); }
	void ServerStartSecondaryAction_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStartSecondaryAction_Implementation"); }
	void ServerStopSecondaryAction_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStopSecondaryAction_Implementation"); }
	void ServerToggleAccessory_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerToggleAccessory_Implementation"); }
	void ServerStartReload_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStartReload_Implementation"); }
	void ClientStartReload_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ClientStartReload_Implementation"); }
	bool CanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>((DWORD64)this, "AShooterWeapon", "CanFire", bForceAllowSubmergedFiring); }
	bool AllowFiring() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "AllowFiring"); }
	bool CanReload() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "CanReload"); }
	void UseAmmo() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "UseAmmo"); }
	void HandleFiring(bool bSentFromClient) { NativeCall<void, bool>((DWORD64)this, "AShooterWeapon", "HandleFiring", bSentFromClient); }
	bool CanTarget() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "CanTarget"); }
	float GetConsumeDurabilityPerShot() { return NativeCall<float>((DWORD64)this, "AShooterWeapon", "GetConsumeDurabilityPerShot"); }
	void ReloadWeapon() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ReloadWeapon"); }
	void RefreshAmmoItemQuantity() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "RefreshAmmoItemQuantity"); }
	void ConsumeAmmoItem(int Quantity) { NativeCall<void, int>((DWORD64)this, "AShooterWeapon", "ConsumeAmmoItem", Quantity); }
	//void SetWeaponState(EWeaponState::Type NewState) { NativeCall<void, EWeaponState::Type>((DWORD64)this, "AShooterWeapon", "SetWeaponState", NewState); }
	void DetermineWeaponState() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "DetermineWeaponState"); }
	void SetAutoReload() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "SetAutoReload"); }
	void OnBurstStarted() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "OnBurstStarted"); }
	void OnBurstFinished() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "OnBurstFinished"); }
	void ClientStopSimulatingWeaponFire_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ClientStopSimulatingWeaponFire_Implementation"); }
	void ClientSimulateWeaponFire_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ClientSimulateWeaponFire_Implementation"); }
	//UAudioComponent * PlayWeaponSound(USoundCue * Sound) { return NativeCall<UAudioComponent *, USoundCue *>((DWORD64)this, "AShooterWeapon", "PlayWeaponSound", Sound); }
	void ClientPlayShieldHitAnim_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ClientPlayShieldHitAnim_Implementation"); }
	FVector* GetAdjustedAim(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AShooterWeapon", "GetAdjustedAim", result); }
	FVector* GetCameraDamageStartLocation(FVector* result, FVector* AimDir) { return NativeCall<FVector *, FVector *, FVector *>((DWORD64)this, "AShooterWeapon", "GetCameraDamageStartLocation", result, AimDir); }
	FVector* GetShootingCameraLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AShooterWeapon", "GetShootingCameraLocation", result); }
	FVector* GetMuzzleLocation(FVector* result) { return NativeCall<FVector *, FVector *>((DWORD64)this, "AShooterWeapon", "GetMuzzleLocation", result); }
	FHitResult* WeaponTrace(FHitResult* result, FVector* StartTrace, FVector* EndTrace) { return NativeCall<FHitResult *, FHitResult *, FVector *, FVector *>((DWORD64)this, "AShooterWeapon", "WeaponTrace", result, StartTrace, EndTrace); }
	void WeaponTraceHits(TArray<FHitResult>* HitResults, FVector* StartTrace, FVector* EndTrace) { NativeCall<void, TArray<FHitResult> *, FVector *, FVector *>((DWORD64)this, "AShooterWeapon", "WeaponTraceHits", HitResults, StartTrace, EndTrace); }
	void SetOwningPawn(AShooterCharacter* NewOwner) { NativeCall<void, AShooterCharacter *>((DWORD64)this, "AShooterWeapon", "SetOwningPawn", NewOwner); }
	void OnCameraUpdate(FVector* CameraLocation, FRotator* CameraRotation, FVector* WeaponBob) { NativeCall<void, FVector *, FRotator *, FVector *>((DWORD64)this, "AShooterWeapon", "OnCameraUpdate", CameraLocation, CameraRotation, WeaponBob); }
	void SimulateWeaponFire() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "SimulateWeaponFire"); }
	void StartMuzzleFX() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StartMuzzleFX"); }
	void StopMuzzleFX() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StopMuzzleFX"); }
	void PlayFireAnimation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "PlayFireAnimation"); }
	void StopSimulatingWeaponFire() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StopSimulatingWeaponFire"); }
	bool HasInfiniteAmmo() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "HasInfiniteAmmo"); }
	void StartMeleeSwing() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StartMeleeSwing"); }
	void EndMeleeSwing() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "EndMeleeSwing"); }
	bool AddToMeleeSwingHurtList(AActor* AnActor) { return NativeCall<bool, AActor *>((DWORD64)this, "AShooterWeapon", "AddToMeleeSwingHurtList", AnActor); }
	bool ShouldDealDamage(AActor* TestActor) { return NativeCall<bool, AActor *>((DWORD64)this, "AShooterWeapon", "ShouldDealDamage", TestActor); }
	void DealDamage(FHitResult* Impact, FVector* ShootDir, int DamageAmount, UClass* DamageType, float Impulse) { NativeCall<void, FHitResult *, FVector *, int, UClass*, float>((DWORD64)this, "AShooterWeapon", "DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void TickMeleeSwing(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "AShooterWeapon", "TickMeleeSwing", DeltaTime); }
	void ClientStartMuzzleFX_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ClientStartMuzzleFX_Implementation"); }
	void CosumeMeleeHitDurability(float DurabilityConsumptionMultiplier) { NativeCall<void, float>((DWORD64)this, "AShooterWeapon", "CosumeMeleeHitDurability", DurabilityConsumptionMultiplier); }
	void PlayWeaponBreakAnimation_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "PlayWeaponBreakAnimation_Implementation"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>((DWORD64)this, "AShooterWeapon", "Tick", DeltaSeconds); }
	void BeginPlay() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "BeginPlay"); }
	void LocalPossessed() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "LocalPossessed"); }
	bool IsLocallyOwned() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "IsLocallyOwned"); }
	void CheckItemAssocation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "CheckItemAssocation"); }
	void OnRep_CurrentAmmoInClip() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "OnRep_CurrentAmmoInClip"); }
	void LoadedFromSaveGame() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "LoadedFromSaveGame"); }
	void PlayUseHarvestAnimation_Implementation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "PlayUseHarvestAnimation_Implementation"); }
	void OwnerDied() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "OwnerDied"); }
	void OnRep_NetLoopedWeaponFire() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "OnRep_NetLoopedWeaponFire"); }
	void ClientSetClipAmmo_Implementation(int newClipAmmo, bool bOnlyUpdateItem) { NativeCall<void, int, bool>((DWORD64)this, "AShooterWeapon", "ClientSetClipAmmo_Implementation", newClipAmmo, bOnlyUpdateItem); }
	void DoHandleFiring() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "DoHandleFiring"); }
	bool IsFirstPersonMeshVisible() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "IsFirstPersonMeshVisible"); }
	void ServerSetColorizeRegion_Implementation(int theRegion, bool bValToUse) { NativeCall<void, int, bool>((DWORD64)this, "AShooterWeapon", "ServerSetColorizeRegion_Implementation", theRegion, bValToUse); }
	void DoReregisterAllComponents() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "DoReregisterAllComponents"); }
	void StaticRegisterNativesAShooterWeapon() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StaticRegisterNativesAShooterWeapon"); }
	bool BPConstrainAspectRatio(float* OutAspectRatio) { return NativeCall<bool, float *>((DWORD64)this, "AShooterWeapon", "BPConstrainAspectRatio", OutAspectRatio); }
	bool BPWeaponCanFire() { return NativeCall<bool>((DWORD64)this, "AShooterWeapon", "BPWeaponCanFire"); }
	void ClientStartMuzzleFX() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ClientStartMuzzleFX"); }
	void PlayWeaponBreakAnimation() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "PlayWeaponBreakAnimation"); }
	void ServerSetColorizeRegion(int theRegion, bool bValToUse) { NativeCall<void, int, bool>((DWORD64)this, "AShooterWeapon", "ServerSetColorizeRegion", theRegion, bValToUse); }
	void ServerStartFire() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "ServerStartFire"); }
	void StartUnequip() { NativeCall<void>((DWORD64)this, "AShooterWeapon", "StartUnequip"); }
};
