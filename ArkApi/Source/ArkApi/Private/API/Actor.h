#pragma once

#include "Base.h"
#include <Runtime/Online/OnlineSubsystem/Public/UniqueNetIdWrapper.h>

struct USceneComponent
{
	FTransform GetComponentToWorld() const { return *(FTransform*)GetAddress(this, "USceneComponent", "ComponentToWorld"); };
	USceneComponent* GetAttachParent() const { return *(USceneComponent**)GetAddress(this, "USceneComponent", "AttachParent"); };
	TArray<USceneComponent *, FDefaultAllocator> GetAttachChildren() const { return *(TArray<USceneComponent *, FDefaultAllocator>*)GetAddress(this, "USceneComponent", "AttachChildren"); };
	void SetRelativeLocation(FVector a0) { *(FVector*)GetAddress(this, "USceneComponent", "RelativeLocation") = a0; };
	FVector GetRelativeLocation() const { return *(FVector*)GetAddress(this, "USceneComponent", "RelativeLocation"); };
	void SetRelativeRotation(FRotator a0) { *(FRotator*)GetAddress(this, "USceneComponent", "RelativeRotation") = a0; };
	FRotator GetRelativeRotation() const { return *(FRotator*)GetAddress(this, "USceneComponent", "RelativeRotation"); };

	// Functions

	void SetRelativeTransform(const FTransform& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FTransform&, bool)>(GetAddress("USceneComponent", "SetRelativeTransform"))((DWORD64)this, a1, a2); }
	void ResetRelativeTransform() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "ResetRelativeTransform"))((DWORD64)this); }
	void SetRelativeScale3D(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("USceneComponent", "SetRelativeScale3D"))((DWORD64)this, a1); }
	void AddLocalOffset(FVector a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, FVector, bool)>(GetAddress("USceneComponent", "AddLocalOffset"))((DWORD64)this, a1, a2); }
	void AddLocalRotation(FRotator a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, FRotator, bool)>(GetAddress("USceneComponent", "AddLocalRotation"))((DWORD64)this, a1, a2); }
	void AddLocalTransform(const FTransform& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FTransform&, bool)>(GetAddress("USceneComponent", "AddLocalTransform"))((DWORD64)this, a1, a2); }
	void SetWorldLocation(FVector a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, FVector, bool)>(GetAddress("USceneComponent", "SetWorldLocation"))((DWORD64)this, a1, a2); }
	void SetWorldRotation(const FQuat& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FQuat&, bool)>(GetAddress("USceneComponent", "SetWorldRotation"))((DWORD64)this, a1, a2); }
	void SetWorldScale3D(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("USceneComponent", "SetWorldScale3D"))((DWORD64)this, a1); }
	void SetWorldTransform(const FTransform& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FTransform&, bool)>(GetAddress("USceneComponent", "SetWorldTransform"))((DWORD64)this, a1, a2); }
	void AddWorldTransform(const FTransform& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FTransform&, bool)>(GetAddress("USceneComponent", "AddWorldTransform"))((DWORD64)this, a1, a2); }
	bool IsSimulatingPhysics(FName a1) { return static_cast<bool(_cdecl*)(DWORD64, FName)>(GetAddress("USceneComponent", "IsSimulatingPhysics"))((DWORD64)this, a1); }
	bool IsAnySimulatingPhysics() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "IsAnySimulatingPhysics"))((DWORD64)this); }
	void GetParentComponents(TArray<USceneComponent *, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, TArray<USceneComponent *, FDefaultAllocator>&)>(GetAddress("USceneComponent", "GetParentComponents"))((DWORD64)this, a1); }
	void GetChildrenComponents(bool a1, TArray<USceneComponent *, FDefaultAllocator>& a2) { static_cast<void(_cdecl*)(DWORD64, bool, TArray<USceneComponent *, FDefaultAllocator>&)>(GetAddress("USceneComponent", "GetChildrenComponents"))((DWORD64)this, a1, a2); }
	void DetachFromParent(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("USceneComponent", "DetachFromParent"))((DWORD64)this, a1); }
	bool IsVisible() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "IsVisible"))((DWORD64)this); }
	void SetVisibility(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("USceneComponent", "SetVisibility"))((DWORD64)this, a1, a2); }
	void SetHiddenInGame(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("USceneComponent", "SetHiddenInGame"))((DWORD64)this, a1, a2); }
	void OnRegister() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "OnRegister"))((DWORD64)this); }
	void UpdateComponentToWorld(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("USceneComponent", "UpdateComponentToWorld"))((DWORD64)this, a1); }
	void DestroyComponent() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "DestroyComponent"))((DWORD64)this); }
	void ApplyWorldOffset(const FVector& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, bool)>(GetAddress("USceneComponent", "ApplyWorldOffset"))((DWORD64)this, a1, a2); }
	bool InternalSetWorldLocationAndRotation(FVector a1, const FQuat& a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, FVector, const FQuat&, bool)>(GetAddress("USceneComponent", "InternalSetWorldLocationAndRotation"))((DWORD64)this, a1, a2, a3); }
	void PropagateTransformUpdate(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("USceneComponent", "PropagateTransformUpdate"))((DWORD64)this, a1, a2); }
	void UpdateComponentToWorldWithParent(USceneComponent* a1, bool a2, const FQuat& a3) { static_cast<void(_cdecl*)(DWORD64, USceneComponent*, bool, const FQuat&)>(GetAddress("USceneComponent", "UpdateComponentToWorldWithParent"))((DWORD64)this, a1, a2, a3); }
	void OnAttachmentChanged() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "OnAttachmentChanged"))((DWORD64)this); }
	FVector* GetCustomLocation(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("USceneComponent", "GetCustomLocation"))((DWORD64)this, res); }
	void UpdateChildTransforms() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "UpdateChildTransforms"))((DWORD64)this); }
	void CalcBoundingCylinder(float& a1, float& a2) { static_cast<void(_cdecl*)(DWORD64, float&, float&)>(GetAddress("USceneComponent", "CalcBoundingCylinder"))((DWORD64)this, a1, a2); }
	void UpdateBounds() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "UpdateBounds"))((DWORD64)this); }
	bool ShouldCollideWhenPlacing() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "ShouldCollideWhenPlacing"))((DWORD64)this); }
	void UpdatePhysicsVolume(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("USceneComponent", "UpdatePhysicsVolume"))((DWORD64)this, a1); }
	bool IsVisibleInEditor() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "IsVisibleInEditor"))((DWORD64)this); }
	bool ShouldRender() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "ShouldRender"))((DWORD64)this); }
	bool CanEverRender() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "CanEverRender"))((DWORD64)this); }
	bool ShouldComponentAddToScene() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("USceneComponent", "ShouldComponentAddToScene"))((DWORD64)this); }
	void SetRelativeLocationAndRotation(FVector a1, const FQuat& a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, FVector, const FQuat&, bool)>(GetAddress("USceneComponent", "SetRelativeLocationAndRotation"))((DWORD64)this, a1, a2, a3); }
	void SetWorldLocationAndRotation(FVector a1, const FQuat& a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, FVector, const FQuat&, bool)>(GetAddress("USceneComponent", "SetWorldLocationAndRotation"))((DWORD64)this, a1, a2, a3); }
	void SetWorldLocationAndRotationNoPhysics(const FVector& a1, const FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, const FRotator&)>(GetAddress("USceneComponent", "SetWorldLocationAndRotationNoPhysics"))((DWORD64)this, a1, a2); }
};

// Actor

class AActor
{
public:
	void SetCustomTag(FName a0) { *(FName*)GetAddress(this, "AActor", "CustomTag") = a0; };
	FName GetCustomTag() const { return *(FName*)GetAddress(this, "AActor", "CustomTag"); };
	void SetCustomData(int a0) { *(int*)GetAddress(this, "AActor", "CustomData") = a0; };
	int GetCustomData() const { return *(int*)GetAddress(this, "AActor", "CustomData"); };
	int GetNetTag() const { return *(int*)GetAddress(this, "AActor", "NetTag"); };
	void SetTargetingTeam(int a0) { *(int*)GetAddress(this, "AActor", "TargetingTeam") = a0; };
	int GetTargetingTeam() const { return *(int*)GetAddress(this, "AActor", "TargetingTeam"); };
	USceneComponent* GetRootComponent() const { return *(USceneComponent**)GetAddress(this, "AActor", "RootComponent"); };

	// Functions

	bool HasNetOwner() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "HasNetOwner"))((DWORD64)this); }
	void SetNetworkSpatializationParent(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("AActor", "SetNetworkSpatializationParent"))((DWORD64)this, a1); }
	void ClearNetworkSpatializationParent() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "ClearNetworkSpatializationParent"))((DWORD64)this); }
	APlayerController* GetOwnerController() { return static_cast<APlayerController*(_cdecl*)(DWORD64)>(GetAddress("AActor", "GetOwnerController"))((DWORD64)this); }
	bool AllowPenetrationCheck(AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, AActor*)>(GetAddress("AActor", "AllowPenetrationCheck"))((DWORD64)this, a1); }
	bool IsInstancedFoliage() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsInstancedFoliage"))((DWORD64)this); }
	void CopyRemoteRoleFrom(const AActor* a1) { static_cast<void(_cdecl*)(DWORD64, const AActor*)>(GetAddress("AActor", "CopyRemoteRoleFrom"))((DWORD64)this, a1); }
	void OnRep_AttachmentReplication() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "OnRep_AttachmentReplication"))((DWORD64)this); }
	bool AllowSaving() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "AllowSaving"))((DWORD64)this); }
	void Stasis() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "Stasis"))((DWORD64)this); }
	void Unstasis() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "Unstasis"))((DWORD64)this); }
	void FinalLoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "FinalLoadedFromSaveGame"))((DWORD64)this); }
	FString* GetDescriptiveName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("AActor", "GetDescriptiveName"))((DWORD64)this, res); }
	void OnSubobjectCreatedFromReplication(UObject* a1) { static_cast<void(_cdecl*)(DWORD64, UObject*)>(GetAddress("AActor", "OnSubobjectCreatedFromReplication"))((DWORD64)this, a1); }
	void OnSubobjectDestroyFromReplication(UObject* a1) { static_cast<void(_cdecl*)(DWORD64, UObject*)>(GetAddress("AActor", "OnSubobjectDestroyFromReplication"))((DWORD64)this, a1); }
	bool UseLowQualityAnimationTick() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "UseLowQualityAnimationTick"))((DWORD64)this); }
	bool UseLowQualityBehaviorTreeTick() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "UseLowQualityBehaviorTreeTick"))((DWORD64)this); }
	bool IsBuff() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsBuff"))((DWORD64)this); }
	void OnRep_Instigator() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "OnRep_Instigator"))((DWORD64)this); }
	void TargetingTeamChanged() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "TargetingTeamChanged"))((DWORD64)this); }
	void Serialize(FArchive& a1) { static_cast<void(_cdecl*)(DWORD64, FArchive&)>(GetAddress("AActor", "Serialize"))((DWORD64)this, a1); }
	bool IsActor() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsActor"))((DWORD64)this); }
	void EnableInput(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AActor", "EnableInput"))((DWORD64)this, a1); }
	bool IsFirstPersonMeshVisible() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsFirstPersonMeshVisible"))((DWORD64)this); }
	void DisableInput(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AActor", "DisableInput"))((DWORD64)this, a1); }
	float GetInputAxisValue(const FName a1) { return static_cast<float(_cdecl*)(DWORD64, const FName)>(GetAddress("AActor", "GetInputAxisValue"))((DWORD64)this, a1); }
	bool IsDead() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsDead"))((DWORD64)this); }
	FVector* GetVelocity(FVector* res, bool a1) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*, bool)>(GetAddress("AActor", "GetVelocity"))((DWORD64)this, res, a1); }
	bool SetActorLocation(const FVector& a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, bool)>(GetAddress("AActor", "SetActorLocation"))((DWORD64)this, a1, a2); }
	bool SetActorRotation(FRotator a1) { return static_cast<bool(_cdecl*)(DWORD64, FRotator)>(GetAddress("AActor", "SetActorRotation"))((DWORD64)this, a1); }
	bool SetActorLocationAndRotation(const FVector& a1, FRotator a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, FRotator, bool)>(GetAddress("AActor", "SetActorLocationAndRotation"))((DWORD64)this, a1, a2, a3); }
	FTransform* GetTransform(FTransform* res) { return static_cast<FTransform*(_cdecl*)(DWORD64, FTransform*)>(GetAddress("AActor", "GetTransform"))((DWORD64)this, res); }
	FVector* GetActorForwardVector(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("AActor", "GetActorForwardVector"))((DWORD64)this, res); }
	FVector* GetActorUpVector(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("AActor", "GetActorUpVector"))((DWORD64)this, res); }
	FVector* GetActorRightVector(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("AActor", "GetActorRightVector"))((DWORD64)this, res); }
	void GetActorBounds(bool a1, FVector& a2, FVector& a3) { static_cast<void(_cdecl*)(DWORD64, bool, FVector&, FVector&)>(GetAddress("AActor", "GetActorBounds"))((DWORD64)this, a1, a2, a3); }
	void SetActorScale3D(const FVector& a1) { static_cast<void(_cdecl*)(DWORD64, const FVector&)>(GetAddress("AActor", "SetActorScale3D"))((DWORD64)this, a1); }
	float GetDistanceTo(AActor* a1) { return static_cast<float(_cdecl*)(DWORD64, AActor*)>(GetAddress("AActor", "GetDistanceTo"))((DWORD64)this, a1); }
	float GetHorizontalDistanceTo(AActor* a1) { return static_cast<float(_cdecl*)(DWORD64, AActor*)>(GetAddress("AActor", "GetHorizontalDistanceTo"))((DWORD64)this, a1); }
	float GetVerticalDistanceTo(AActor* a1) { return static_cast<float(_cdecl*)(DWORD64, AActor*)>(GetAddress("AActor", "GetVerticalDistanceTo"))((DWORD64)this, a1); }
	float GetDotProductTo(AActor* a1) { return static_cast<float(_cdecl*)(DWORD64, AActor*)>(GetAddress("AActor", "GetDotProductTo"))((DWORD64)this, a1); }
	float GetHorizontalDotProductTo(AActor* a1) { return static_cast<float(_cdecl*)(DWORD64, AActor*)>(GetAddress("AActor", "GetHorizontalDotProductTo"))((DWORD64)this, a1); }
	void SetActorRelativeScale3D(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("AActor", "SetActorRelativeScale3D"))((DWORD64)this, a1); }
	void SetActorHiddenInGame(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AActor", "SetActorHiddenInGame"))((DWORD64)this, a1); }
	void SetActorEnableCollision(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AActor", "SetActorEnableCollision"))((DWORD64)this, a1); }
	void K2_DestroyActor() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "K2_DestroyActor"))((DWORD64)this); }
	bool CheckStillInWorld() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "CheckStillInWorld"))((DWORD64)this); }
	bool IsMatineeControlled() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsMatineeControlled"))((DWORD64)this); }
	UPlayer* GetNetOwningPlayer() { return static_cast<UPlayer*(_cdecl*)(DWORD64)>(GetAddress("AActor", "GetNetOwningPlayer"))((DWORD64)this); }
	bool TeleportTo(const FVector& a1, const FRotator& a2, bool a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, const FRotator&, bool, bool)>(GetAddress("AActor", "TeleportTo"))((DWORD64)this, a1, a2, a3, a4); }
	void TeleportSucceeded(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AActor", "TeleportSucceeded"))((DWORD64)this, a1); }
	bool IsBasedOnActor(const AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, const AActor*)>(GetAddress("AActor", "IsBasedOnActor"))((DWORD64)this, a1); }
	bool IsAttachedTo(const AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, const AActor*)>(GetAddress("AActor", "IsAttachedTo"))((DWORD64)this, a1); }
	void ResetPropertiesForConstruction() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "ResetPropertiesForConstruction"))((DWORD64)this); }
	void RerunConstructionScripts() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AActor", "RerunConstructionScripts"))((DWORD64)this); }
	void FellOutOfWorld(const UDamageType& a1) { static_cast<void(_cdecl*)(DWORD64, const UDamageType&)>(GetAddress("AActor", "FellOutOfWorld"))((DWORD64)this, a1); }
	float TakeDamage(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<float(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("AActor", "TakeDamage"))((DWORD64)this, a1, a2, a3, a4); }
	FString* GetHumanReadableName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("AActor", "GetHumanReadableName"))((DWORD64)this, res); }
	FVector* GetTargetLocation(FVector* res, AActor* a1) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*, AActor*)>(GetAddress("AActor", "GetTargetLocation"))((DWORD64)this, res, a1); }
	UWorld* GetWorld() { return static_cast<UWorld*(_cdecl*)(DWORD64)>(GetAddress("AActor", "GetWorld"))((DWORD64)this); }
	bool IsInGameplayWorld() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsInGameplayWorld"))((DWORD64)this); }
	bool TryMultiUse(APlayerController* a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, int)>(GetAddress("AActor", "TryMultiUse"))((DWORD64)this, a1, a2); }
	void ClientMultiUse(APlayerController* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, int)>(GetAddress("AActor", "ClientMultiUse"))((DWORD64)this, a1, a2); }
	void ChangeActorTeam(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AActor", "ChangeActorTeam"))((DWORD64)this, a1); }
	bool GetIsMapActor() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "GetIsMapActor"))((DWORD64)this); }
	bool IsPrimalDino() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsPrimalDino"))((DWORD64)this); }
	bool IsShooterCharacter() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsShooterCharacter"))((DWORD64)this); }
	bool IsPrimalCharacter() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsPrimalCharacter"))((DWORD64)this); }
	bool IsPrimalStructure() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsPrimalStructure"))((DWORD64)this); }
	bool IsTargetable() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "IsTargetable"))((DWORD64)this); }
	bool InitializeForReplicatedBasing() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AActor", "InitializeForReplicatedBasing"))((DWORD64)this); }
	AController* GetCharacterController() { return static_cast<AController*(_cdecl*)(DWORD64)>(GetAddress("AActor", "GetCharacterController"))((DWORD64)this); }
	bool IsOwnedOrControlledBy(const AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, const AActor*)>(GetAddress("AActor", "IsOwnedOrControlledBy"))((DWORD64)this, a1); }
};

struct APawn : AActor
{
	// Functions

	// These functions should be here for some reason..
	bool SetActorLocation(const FVector& a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, bool)>(GetAddress("AActor", "SetActorLocation"))((DWORD64)this, a1, a2); }
	bool SetActorRotation(FRotator a1) { return static_cast<bool(_cdecl*)(DWORD64, FRotator)>(GetAddress("AActor", "SetActorRotation"))((DWORD64)this, a1); }
	bool SetActorLocationAndRotation(const FVector& a1, FRotator a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, FRotator, bool)>(GetAddress("AActor", "SetActorLocationAndRotation"))((DWORD64)this, a1, a2, a3); }
};

// Cheat Managers

struct UCheatManager
{
	void Teleport() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "Teleport"))((DWORD64)this); }
	void ChangeSize(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UCheatManager", "ChangeSize"))((DWORD64)this, a1); }
	void Fly() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "Fly"))((DWORD64)this); }
	void Walk() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "Walk"))((DWORD64)this); }
	void Ghost() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "Ghost"))((DWORD64)this); }
	void God() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "God"))((DWORD64)this); }
	void Slomo(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UCheatManager", "Slomo"))((DWORD64)this, a1); }
	void DamageTarget(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UCheatManager", "DamageTarget"))((DWORD64)this, a1); }
	void DestroyTarget() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "DestroyTarget"))((DWORD64)this); }
	void Summon(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UCheatManager", "Summon"))((DWORD64)this, a1); }
	void PlayersOnly() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "PlayersOnly"))((DWORD64)this); }
	void ViewSelf() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "ViewSelf"))((DWORD64)this); }
	void ViewPlayer(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UCheatManager", "ViewPlayer"))((DWORD64)this, a1); }
	void ViewActor(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("UCheatManager", "ViewActor"))((DWORD64)this, a1); }
	void StreamLevelIn(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("UCheatManager", "StreamLevelIn"))((DWORD64)this, a1); }
	void OnlyLoadLevel(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("UCheatManager", "OnlyLoadLevel"))((DWORD64)this, a1); }
	void StreamLevelOut(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("UCheatManager", "StreamLevelOut"))((DWORD64)this, a1); }
	void ToggleDebugCamera() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "ToggleDebugCamera"))((DWORD64)this); }
	void ToggleAILogging() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "ToggleAILogging"))((DWORD64)this); }
	void ServerToggleAILogging() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "ServerToggleAILogging"))((DWORD64)this); }
	UWorld* GetWorld() { return static_cast<UWorld*(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "GetWorld"))((DWORD64)this); }
	void EnableDebugCamera() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "EnableDebugCamera"))((DWORD64)this); }
	void DisableDebugCamera() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UCheatManager", "DisableDebugCamera"))((DWORD64)this); }
};

struct UShooterCheatManager : UCheatManager
{
	void SetbIsRCONCheatManager(bool a0) { *(bool*)GetAddress(this, "UShooterCheatManager", "bIsRCONCheatManager") = a0; };
	bool GetbIsRCONCheatManager() const { return *(bool*)GetAddress(this, "UShooterCheatManager", "bIsRCONCheatManager"); };
	AShooterPlayerController* GetMyPC() const { return *(AShooterPlayerController**)GetAddress(this, "UShooterCheatManager", "MyPC"); };

	// Functions

	void ServerChat(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "ServerChat"))((DWORD64)this, a1); }
	void GameCommand(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "GameCommand"))((DWORD64)this, a1); }
	void OpenMap(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "OpenMap"))((DWORD64)this, a1); }
	void DoRestartLevel() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DoRestartLevel"))((DWORD64)this); }
	void SetGlobalPause(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UShooterCheatManager", "SetGlobalPause"))((DWORD64)this, a1); }
	void VisualizeWorld() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "VisualizeWorld"))((DWORD64)this); }
	void VisualizeWorldGeo() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "VisualizeWorldGeo"))((DWORD64)this); }
	void StartSaveBackup() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "StartSaveBackup"))((DWORD64)this); }
	void DoExit() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DoExit"))((DWORD64)this); }
	void AllowPlayerToJoinNoCheck(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "AllowPlayerToJoinNoCheck"))((DWORD64)this, a1); }
	void DisallowPlayerToJoinNoCheck(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "DisallowPlayerToJoinNoCheck"))((DWORD64)this, a1); }
	void GiveExpToPlayer(__int64 a1, float a2, bool a3, bool a4) { static_cast<void(_cdecl*)(DWORD64, __int64, float, bool, bool)>(GetAddress("UShooterCheatManager", "GiveExpToPlayer"))((DWORD64)this, a1, a2, a3, a4); }
	void Kill() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "Kill"))((DWORD64)this); }
	void DestroyMyTarget() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DestroyMyTarget"))((DWORD64)this); }
	void SetTargetDinoColor(int a1, int a2) { static_cast<void(_cdecl*)(DWORD64, int, int)>(GetAddress("UShooterCheatManager", "SetTargetDinoColor"))((DWORD64)this, a1, a2); }
	void KillPlayer(__int64 a1) { static_cast<void(_cdecl*)(DWORD64, __int64)>(GetAddress("UShooterCheatManager", "KillPlayer"))((DWORD64)this, a1); }
	void TeleportToPlayer(__int64 a1) { static_cast<void(_cdecl*)(DWORD64, __int64)>(GetAddress("UShooterCheatManager", "TeleportToPlayer"))((DWORD64)this, a1); }
	void TeleportPlayerIDToMe(__int64 a1) { static_cast<void(_cdecl*)(DWORD64, __int64)>(GetAddress("UShooterCheatManager", "TeleportPlayerIDToMe"))((DWORD64)this, a1); }
	void TeleportPlayerNameToMe(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "TeleportPlayerNameToMe"))((DWORD64)this, a1); }
	void ForcePlayerToJoinTargetTribe(__int64 a1) { static_cast<void(_cdecl*)(DWORD64, __int64)>(GetAddress("UShooterCheatManager", "ForcePlayerToJoinTargetTribe"))((DWORD64)this, a1); }
	void DestroyTribePlayers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DestroyTribePlayers"))((DWORD64)this); }
	void DestroyTribeDinos() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DestroyTribeDinos"))((DWORD64)this); }
	void DestroyTribeStructures() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DestroyTribeStructures"))((DWORD64)this); }
	void ForcePlayerToJoinTribe(__int64 a1, FString a2) { static_cast<void(_cdecl*)(DWORD64, __int64, FString)>(GetAddress("UShooterCheatManager", "ForcePlayerToJoinTribe"))((DWORD64)this, a1, a2); }
	void SpawnActorTamed(const FString& a1, float a2, float a3, float a4) { static_cast<void(_cdecl*)(DWORD64, const FString&, float, float, float)>(GetAddress("UShooterCheatManager", "SpawnActorTamed"))((DWORD64)this, a1, a2, a3, a4); }
	AActor* DoSummon(const FString& a1) { return static_cast<AActor*(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "DoSummon"))((DWORD64)this, a1); }
	void Summon(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "Summon"))((DWORD64)this, a1); }
	void SummonTamed(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "SummonTamed"))((DWORD64)this, a1); }
	void EnableCheats(const FString a1) { static_cast<void(_cdecl*)(DWORD64, const FString)>(GetAddress("UShooterCheatManager", "EnableCheats"))((DWORD64)this, a1); }
	void BanPlayer(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("UShooterCheatManager", "BanPlayer"))((DWORD64)this, a1); }
	void UnbanPlayer(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("UShooterCheatManager", "UnbanPlayer"))((DWORD64)this, a1); }
	void KickPlayer(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("UShooterCheatManager", "KickPlayer"))((DWORD64)this, a1); }
	void Suicide() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "Suicide"))((DWORD64)this); }
	void ForceTame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "ForceTame"))((DWORD64)this); }
	void SetImprintQuality(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UShooterCheatManager", "SetImprintQuality"))((DWORD64)this, a1); }
	void DoTame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DoTame"))((DWORD64)this); }
	void GiveToMe() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "GiveToMe"))((DWORD64)this); }
	void SetBabyAge(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UShooterCheatManager", "SetBabyAge"))((DWORD64)this, a1); }
	void GiveAllStructure() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "GiveAllStructure"))((DWORD64)this); }
	void SetTargetPlayerBodyVal(int a1, float a2) { static_cast<void(_cdecl*)(DWORD64, int, float)>(GetAddress("UShooterCheatManager", "SetTargetPlayerBodyVal"))((DWORD64)this, a1, a2); }
	void SetTargetPlayerColorVal(int a1, float a2) { static_cast<void(_cdecl*)(DWORD64, int, float)>(GetAddress("UShooterCheatManager", "SetTargetPlayerColorVal"))((DWORD64)this, a1, a2); }
	void EnemyInVisible(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UShooterCheatManager", "EnemyInVisible"))((DWORD64)this, a1); }
	void AddItemToAllClustersInventory(FString a1, int a2) { static_cast<void(_cdecl*)(DWORD64, FString, int)>(GetAddress("UShooterCheatManager", "AddItemToAllClustersInventory"))((DWORD64)this, a1, a2); }
	void GiveItemToPlayer(int a1, const FString& a2, int a3, float a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, int, const FString&, int, float, bool)>(GetAddress("UShooterCheatManager", "GiveItemToPlayer"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void GiveItemNumToPlayer(int a1, int a2, int a3, float a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, int, int, int, float, bool)>(GetAddress("UShooterCheatManager", "GiveItemNumToPlayer"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void ClearPlayerInventory(int a1, bool a2, bool a3, bool a4) { static_cast<void(_cdecl*)(DWORD64, int, bool, bool, bool)>(GetAddress("UShooterCheatManager", "ClearPlayerInventory"))((DWORD64)this, a1, a2, a3, a4); }
	void DestroyAllEnemies() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DestroyAllEnemies"))((DWORD64)this); }
	void DestroyWildDinos() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DestroyWildDinos"))((DWORD64)this); }
	void DestroyStructures() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "DestroyStructures"))((DWORD64)this); }
	void PrintActorLocation(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "PrintActorLocation"))((DWORD64)this, a1); }
	void TeleportToActorLocation(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "TeleportToActorLocation"))((DWORD64)this, a1); }
	void ScriptCommand(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "ScriptCommand"))((DWORD64)this, a1); }
	void MakeTribeFounder() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "MakeTribeFounder"))((DWORD64)this); }
	void RemoveTribeAdmin() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "RemoveTribeAdmin"))((DWORD64)this); }
	AShooterPlayerController* FindPlayerControllerFromPlayerID(__int64 a1) { return static_cast<AShooterPlayerController*(_cdecl*)(DWORD64, __int64)>(GetAddress("UShooterCheatManager", "FindPlayerControllerFromPlayerID"))((DWORD64)this, a1); }
	void RenameTribe(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("UShooterCheatManager", "RenameTribe"))((DWORD64)this, a1, a2); }
	void RenamePlayer(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("UShooterCheatManager", "RenamePlayer"))((DWORD64)this, a1, a2); }
	void DestroyActors(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("UShooterCheatManager", "DestroyActors"))((DWORD64)this, a1); }
	void TakeAllStructure() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "TakeAllStructure"))((DWORD64)this); }
	void TakeAllDino() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "TakeAllDino"))((DWORD64)this); }
	void GMBuff() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UShooterCheatManager", "GMBuff"))((DWORD64)this); }
	void GMSummon(const FString& a1, int a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, int)>(GetAddress("UShooterCheatManager", "GMSummon"))((DWORD64)this, a1, a2); }
};

// Player

struct UPlayer
{
	APlayerController* PlayerController() { return (APlayerController*)GetAddress(this, "UPlayer", "PlayerController"); }
	int CurrentNetSpeed() { return *(int*)GetAddress(this, "UPlayer", "CurrentNetSpeed"); }
	int ConfiguredInternetSpeed() { return *(int*)GetAddress(this, "UPlayer", "ConfiguredInternetSpeed"); }
	int ConfiguredLanSpeed() { return *(int*)GetAddress(this, "UPlayer", "ConfiguredLanSpeed"); }
};

struct APlayerState : AActor
{
	void SetScore(float a0) { *(float*)GetAddress(this, "APlayerState", "Score") = a0; };
	float GetScore() const { return *(float*)GetAddress(this, "APlayerState", "Score"); };
	unsigned char GetPing() const { return *(unsigned char*)GetAddress(this, "APlayerState", "Ping"); };
	void SetPlayerName(FString a0) { *(FString*)GetAddress(this, "APlayerState", "PlayerName") = a0; };
	FString GetPlayerName() const { return *(FString*)GetAddress(this, "APlayerState", "PlayerName"); };
	void SetOldName(FString a0) { *(FString*)GetAddress(this, "APlayerState", "OldName") = a0; };
	FString GetOldName() const { return *(FString*)GetAddress(this, "APlayerState", "OldName"); };
	void SetPlayerId(int a0) { *(int*)GetAddress(this, "APlayerState", "PlayerId") = a0; };
	int GetPlayerId() const { return *(int*)GetAddress(this, "APlayerState", "PlayerId"); };
	void SetStartTime(int a0) { *(int*)GetAddress(this, "APlayerState", "StartTime") = a0; };
	int GetStartTime() const { return *(int*)GetAddress(this, "APlayerState", "StartTime"); };
	void SetExactPing(float a0) { *(float*)GetAddress(this, "APlayerState", "ExactPing") = a0; };
	float GetExactPing() const { return *(float*)GetAddress(this, "APlayerState", "ExactPing"); };
	void SetSavedNetworkAddress(FString a0) { *(FString*)GetAddress(this, "APlayerState", "SavedNetworkAddress") = a0; };
	FString GetSavedNetworkAddress() const { return *(FString*)GetAddress(this, "APlayerState", "SavedNetworkAddress"); };
	void SetSessionName(FName a0) { *(FName*)GetAddress(this, "APlayerState", "SessionName") = a0; };
	FName GetSessionName() const { return *(FName*)GetAddress(this, "APlayerState", "SessionName"); };
	void SetCurPingBucket(unsigned char a0) { *(unsigned char*)GetAddress(this, "APlayerState", "CurPingBucket") = a0; };
	unsigned char GetCurPingBucket() const { return *(unsigned char*)GetAddress(this, "APlayerState", "CurPingBucket"); };
	void SetCurPingBucketTimestamp(float a0) { *(float*)GetAddress(this, "APlayerState", "CurPingBucketTimestamp") = a0; };
	float GetCurPingBucketTimestamp() const { return *(float*)GetAddress(this, "APlayerState", "CurPingBucketTimestamp"); };

	// Functions

	FString* GetHumanReadableName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APlayerState", "GetHumanReadableName"))((DWORD64)this, res); }
	void UpdatePing(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerState", "UpdatePing"))((DWORD64)this, a1); }
	void RecalculateAvgPing() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerState", "RecalculateAvgPing"))((DWORD64)this); }
	bool ShouldBroadCastWelcomeMessage(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("APlayerState", "ShouldBroadCastWelcomeMessage"))((DWORD64)this, a1); }
	void SetPlayerName(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APlayerState", "SetPlayerName"))((DWORD64)this, a1); }
	bool IsPrimaryPlayer() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerState", "IsPrimaryPlayer"))((DWORD64)this); }
	bool TeleportTo(const FVector& a1, const FRotator& a2, bool a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, const FRotator&, bool, bool)>(GetAddress("APlayerState", "TeleportTo"))((DWORD64)this, a1, a2, a3, a4); }
};

struct AShooterPlayerState : APlayerState
{
	UPrimalPlayerData* GetMyPlayerData() const { return *(UPrimalPlayerData**)GetAddress(this, "AShooterPlayerState", "MyPlayerData"); };
	FPrimalPlayerDataStruct* GetMyPlayerDataStruct() const { return (FPrimalPlayerDataStruct*)GetAddress(this, "AShooterPlayerState", "MyPlayerDataStruct"); };
	FTribeData* GetMyTribeData() const { return (FTribeData*)GetAddress(this, "AShooterPlayerState", "MyTribeData"); };
	void SetTotalEngramPoints(int a0) { *(int*)GetAddress(this, "AShooterPlayerState", "TotalEngramPoints") = a0; };
	int GetTotalEngramPoints() const { return *(int*)GetAddress(this, "AShooterPlayerState", "TotalEngramPoints"); };
	void SetFreeEngramPoints(int a0) { *(int*)GetAddress(this, "AShooterPlayerState", "FreeEngramPoints") = a0; };
	int GetFreeEngramPoints() const { return *(int*)GetAddress(this, "AShooterPlayerState", "FreeEngramPoints"); };
	//void SetEngramItemBlueprints(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> a0) { *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerState", "EngramItemBlueprints") = a0; };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetEngramItemBlueprints() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerState", "EngramItemBlueprints"); };
	void SetNextAllowedRespawnTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerState", "NextAllowedRespawnTime") = a0; };
	double GetNextAllowedRespawnTime() const { return *(double*)GetAddress(this, "AShooterPlayerState", "NextAllowedRespawnTime"); };
	void SetAllowedRespawnInterval(float a0) { *(float*)GetAddress(this, "AShooterPlayerState", "AllowedRespawnInterval") = a0; };
	float GetAllowedRespawnInterval() const { return *(float*)GetAddress(this, "AShooterPlayerState", "AllowedRespawnInterval"); };
	void SetLastTimeDiedToEnemyTeam(double a0) { *(double*)GetAddress(this, "AShooterPlayerState", "LastTimeDiedToEnemyTeam") = a0; };
	double GetLastTimeDiedToEnemyTeam() const { return *(double*)GetAddress(this, "AShooterPlayerState", "LastTimeDiedToEnemyTeam"); };
	void SetCurrentlySelectedDinoOrderGroup(int a0) { *(int*)GetAddress(this, "AShooterPlayerState", "CurrentlySelectedDinoOrderGroup") = a0; };
	int GetCurrentlySelectedDinoOrderGroup() const { return *(int*)GetAddress(this, "AShooterPlayerState", "CurrentlySelectedDinoOrderGroup"); };
	void SetLastTribeRequestTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerState", "LastTribeRequestTime") = a0; };
	double GetLastTribeRequestTime() const { return *(double*)GetAddress(this, "AShooterPlayerState", "LastTribeRequestTime"); };

	// Functions

	FString* GetUniqueIdString(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("AShooterPlayerState", "GetUniqueIdString"))((DWORD64)this, res); }
	bool AddToTribe(const FTribeData& a1, bool a2, bool a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, const FTribeData&, bool, bool, bool)>(GetAddress("AShooterPlayerState", "AddToTribe"))((DWORD64)this, a1, a2, a3, a4); }
	void PromoteToTribeAdmin() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerState", "PromoteToTribeAdmin"))((DWORD64)this); }
	void ClearTribe(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("AShooterPlayerState", "ClearTribe"))((DWORD64)this, a1, a2); }
	void TransferTribalObjects(const FTribeData& a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, const FTribeData&, bool, bool)>(GetAddress("AShooterPlayerState", "TransferTribalObjects"))((DWORD64)this, a1, a2, a3); }
	bool IsTribeOwner(unsigned int a1) { return static_cast<bool(_cdecl*)(DWORD64, unsigned int)>(GetAddress("AShooterPlayerState", "IsTribeOwner"))((DWORD64)this, a1); }
	void InvitedRankGroupPlayerIntoTribe(AShooterPlayerState* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerState*)>(GetAddress("AShooterPlayerState", "InvitedRankGroupPlayerIntoTribe"))((DWORD64)this, a1); }
	void ServerRequestRenameTribe(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerState", "ServerRequestRenameTribe"))((DWORD64)this, a1); }
	void ServerRequestSetTribeMemberGroupRank(int a1, int a2) { static_cast<void(_cdecl*)(DWORD64, int, int)>(GetAddress("AShooterPlayerState", "ServerRequestSetTribeMemberGroupRank"))((DWORD64)this, a1, a2); }
	void ServerGetAllPlayerNamesAndLocations() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerState", "ServerGetAllPlayerNamesAndLocations"))((DWORD64)this); }
	void RequestCreateNewPlayerWithArkData(UPrimalPlayerData* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalPlayerData*)>(GetAddress("AShooterPlayerState", "RequestCreateNewPlayerWithArkData"))((DWORD64)this, a1); }
	void NotifyPlayerJoinedTribe(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("AShooterPlayerState", "NotifyPlayerJoinedTribe"))((DWORD64)this, a1, a2); }
	void NotifyPlayerLeftTribe(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("AShooterPlayerState", "NotifyPlayerLeftTribe"))((DWORD64)this, a1, a2); }
	void NotifyPlayerJoined(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerState", "NotifyPlayerJoined"))((DWORD64)this, a1); }
	void NotifyPlayerLeft(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerState", "NotifyPlayerLeft"))((DWORD64)this, a1); }
	void NotifyTribememberJoined(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerState", "NotifyTribememberJoined"))((DWORD64)this, a1); }
	void NotifyTribememberLeft(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerState", "NotifyTribememberLeft"))((DWORD64)this, a1); }
	FString* GetPlayerName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("AShooterPlayerState", "GetPlayerName"))((DWORD64)this, res); }
	//bool HasEngram(TSubclassOf<UPrimalItem> a1) { return static_cast<bool(_cdecl*)(DWORD64, TSubclassOf<UPrimalItem>)>(GetAddress("AShooterPlayerState", "HasEngram"))((DWORD64)this, a1); }
	void SetTribeTamingDinoSettings(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterPlayerState", "SetTribeTamingDinoSettings"))((DWORD64)this, a1); }
	void DoRespec() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerState", "DoRespec"))((DWORD64)this); }
	bool IsInTribeWar(int a1) { return static_cast<bool(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerState", "IsInTribeWar"))((DWORD64)this, a1); }
	FTribeWar* GetTribeWar(FTribeWar* res, int a1) { return static_cast<FTribeWar*(_cdecl*)(DWORD64, FTribeWar*, int)>(GetAddress("AShooterPlayerState", "GetTribeWar"))((DWORD64)this, res, a1); }
	void ServerAcceptTribeWar(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerState", "ServerAcceptTribeWar"))((DWORD64)this, a1); }
	void ServerTribeRequestNewAlliance(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerState", "ServerTribeRequestNewAlliance"))((DWORD64)this, a1); }
	void AcceptJoinAlliance(unsigned int a1, unsigned int a2, FString a3) { static_cast<void(_cdecl*)(DWORD64, unsigned int, unsigned int, FString)>(GetAddress("AShooterPlayerState", "AcceptJoinAlliance"))((DWORD64)this, a1, a2, a3); }
	bool IsTribeAdmin() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerState", "IsTribeAdmin"))((DWORD64)this); }
	void ServerRequestSpawnPointsForDownloadedCharacters(unsigned __int64 a1, int a2) { static_cast<void(_cdecl*)(DWORD64, unsigned __int64, int)>(GetAddress("AShooterPlayerState", "ServerRequestSpawnPointsForDownloadedCharacters"))((DWORD64)this, a1, a2); }
	bool AllowDinoOrderByGroup(APrimalDinoCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterPlayerState", "AllowDinoOrderByGroup"))((DWORD64)this, a1); }
	void ServerDinoOrderGroup_AddOrRemoveDinoCharacter(int a1, APrimalDinoCharacter* a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, int, APrimalDinoCharacter*, bool)>(GetAddress("AShooterPlayerState", "ServerDinoOrderGroup_AddOrRemoveDinoCharacter"))((DWORD64)this, a1, a2, a3); }
	void ServerDinoOrderGroup_RemoveEntryByIndex(int a1, bool a2, int a3) { static_cast<void(_cdecl*)(DWORD64, int, bool, int)>(GetAddress("AShooterPlayerState", "ServerDinoOrderGroup_RemoveEntryByIndex"))((DWORD64)this, a1, a2, a3); }
	void ServerSetDinoGroupName(int a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, int, const FString&)>(GetAddress("AShooterPlayerState", "ServerSetDinoGroupName"))((DWORD64)this, a1, a2); }
	FString* GetDinoOrderGroupName(FString* res, int a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, int)>(GetAddress("AShooterPlayerState", "GetDinoOrderGroupName"))((DWORD64)this, res, a1); }
	bool IsDinoInOrderGroup(int a1, APrimalDinoCharacter* a2) { return static_cast<bool(_cdecl*)(DWORD64, int, APrimalDinoCharacter*)>(GetAddress("AShooterPlayerState", "IsDinoInOrderGroup"))((DWORD64)this, a1, a2); }
};

// Controller

struct AController : AActor
{
	ACharacter* GetCharacter() const { return *(ACharacter**)GetAddress(this, "AController", "Character"); };
	void SetPlayerState(APlayerState* a0) { *(APlayerState**)GetAddress(this, "AController", "PlayerState") = a0; };
	APlayerState* GetPlayerState() const { return *(APlayerState**)GetAddress(this, "AController", "PlayerState"); };
	APawn* GetPawn() const { return *(APawn**)GetAddress(this, "AController", "Pawn"); };
	void SetControlRotation(FRotator a0) { *(FRotator*)GetAddress(this, "AController", "ControlRotation") = a0; };
	FRotator GetControlRotation() const { return *(FRotator*)GetAddress(this, "AController", "ControlRotation"); };
	void SetStateName(FName a0) { *(FName*)GetAddress(this, "AController", "StateName") = a0; };
	FName GetStateName() const { return *(FName*)GetAddress(this, "AController", "StateName"); };

	// Functions

	FRotator* GetControlRotation(FRotator* res) { return static_cast<FRotator*(_cdecl*)(DWORD64, FRotator*)>(GetAddress("AController", "GetControlRotation"))((DWORD64)this, res); }
	void SetControlRotation(const FRotator& a1) { static_cast<void(_cdecl*)(DWORD64, const FRotator&)>(GetAddress("AController", "SetControlRotation"))((DWORD64)this, a1); }
	void SetInitialLocationAndRotation(const FVector& a1, const FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, const FRotator&)>(GetAddress("AController", "SetInitialLocationAndRotation"))((DWORD64)this, a1, a2); }
	bool IsPlayerController() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AController", "IsPlayerController"))((DWORD64)this); }
	bool IsDinoController() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AController", "IsDinoController"))((DWORD64)this); }
	void AttachToPawn(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AController", "AttachToPawn"))((DWORD64)this, a1); }
	void DetachFromPawn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AController", "DetachFromPawn"))((DWORD64)this); }
	void AddPawnTickDependency(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AController", "AddPawnTickDependency"))((DWORD64)this, a1); }
	void RemovePawnTickDependency(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AController", "RemovePawnTickDependency"))((DWORD64)this, a1); }
	void ChangeState(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("AController", "ChangeState"))((DWORD64)this, a1); }
	bool LineOfSightTo(const AActor* a1, FVector a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, const AActor*, FVector, bool)>(GetAddress("AController", "LineOfSightTo"))((DWORD64)this, a1, a2, a3); }
	void GetActorEyesViewPoint(FVector& a1, FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, FVector&, FRotator&)>(GetAddress("AController", "GetActorEyesViewPoint"))((DWORD64)this, a1, a2); }
	AActor* GetViewTarget() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("AController", "GetViewTarget"))((DWORD64)this); }
	bool IsLocalPlayerController() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AController", "IsLocalPlayerController"))((DWORD64)this); }
	bool IsLocalController() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AController", "IsLocalController"))((DWORD64)this); }
	void CleanupPlayerState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AController", "CleanupPlayerState"))((DWORD64)this); }
	void PawnPendingDestroy(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AController", "PawnPendingDestroy"))((DWORD64)this, a1); }
	void NotifyKilled(AController* a1, AController* a2, APawn* a3, const UDamageType* a4) { static_cast<void(_cdecl*)(DWORD64, AController*, AController*, APawn*, const UDamageType*)>(GetAddress("AController", "NotifyKilled"))((DWORD64)this, a1, a2, a3, a4); }
	void InstigatedAnyDamage(float a1, const UDamageType* a2, AActor* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const UDamageType*, AActor*, AActor*)>(GetAddress("AController", "InstigatedAnyDamage"))((DWORD64)this, a1, a2, a3, a4); }
	void GameHasEnded(AActor* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, AActor*, bool)>(GetAddress("AController", "GameHasEnded"))((DWORD64)this, a1, a2); }
	void GetPlayerViewPoint(FVector& a1, FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, FVector&, FRotator&)>(GetAddress("AController", "GetPlayerViewPoint"))((DWORD64)this, a1, a2); }
	void GetMoveGoalReachTest(AActor* a1, const FVector& a2, FVector& a3, float& a4, float& a5) { static_cast<void(_cdecl*)(DWORD64, AActor*, const FVector&, FVector&, float&, float&)>(GetAddress("AController", "GetMoveGoalReachTest"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void UpdateNavigationComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AController", "UpdateNavigationComponents"))((DWORD64)this); }
	void ReceiveInstigatedAnyDamage(float a1, const UDamageType* a2, AActor* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const UDamageType*, AActor*, AActor*)>(GetAddress("AController", "ReceiveInstigatedAnyDamage"))((DWORD64)this, a1, a2, a3, a4); }
	void CurrentLevelUnloaded() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AController", "CurrentLevelUnloaded"))((DWORD64)this); }
	APawn* GetResponsibleDamager(AActor* a1) { return static_cast<APawn*(_cdecl*)(DWORD64, AActor*)>(GetAddress("AController", "GetResponsibleDamager"))((DWORD64)this, a1); }
	bool TeleportTo(const FVector& a1, const FRotator& a2, bool a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, const FRotator&, bool, bool)>(GetAddress("AController", "TeleportTo"))((DWORD64)this, a1, a2, a3, a4); }
};

struct APlayerController : AController
{
	UPlayer* GetPlayer() const { return *(UPlayer**)GetAddress(this, "APlayerController", "Player"); };
	APawn* GetAcknowledgedPawn() const { return *(APawn**)GetAddress(this, "APlayerController", "AcknowledgedPawn"); };
	void SetbAutoManageActiveCameraTarget(bool a0) { *(bool*)GetAddress(this, "APlayerController", "bAutoManageActiveCameraTarget") = a0; };
	bool GetbAutoManageActiveCameraTarget() const { return *(bool*)GetAddress(this, "APlayerController", "bAutoManageActiveCameraTarget"); };
	void SetTargetViewRotation(FRotator a0) { *(FRotator*)GetAddress(this, "APlayerController", "TargetViewRotation") = a0; };
	FRotator GetTargetViewRotation() const { return *(FRotator*)GetAddress(this, "APlayerController", "TargetViewRotation"); };
	void SetBlendedTargetViewRotation(FRotator a0) { *(FRotator*)GetAddress(this, "APlayerController", "BlendedTargetViewRotation") = a0; };
	FRotator GetBlendedTargetViewRotation() const { return *(FRotator*)GetAddress(this, "APlayerController", "BlendedTargetViewRotation"); };
	UCheatManager* GetCheatManager() const { return *(UCheatManager**)GetAddress(this, "APlayerController", "CheatManager"); };
	void SetNetPlayerIndex(unsigned char a0) { *(unsigned char*)GetAddress(this, "APlayerController", "NetPlayerIndex") = a0; };
	unsigned char GetNetPlayerIndex() const { return *(unsigned char*)GetAddress(this, "APlayerController", "NetPlayerIndex"); };
	void SetRotationInput(FRotator a0) { *(FRotator*)GetAddress(this, "APlayerController", "RotationInput") = a0; };
	FRotator GetRotationInput() const { return *(FRotator*)GetAddress(this, "APlayerController", "RotationInput"); };
	void SetIgnoreMoveInput(unsigned char a0) { *(unsigned char*)GetAddress(this, "APlayerController", "IgnoreMoveInput") = a0; };
	unsigned char GetIgnoreMoveInput() const { return *(unsigned char*)GetAddress(this, "APlayerController", "IgnoreMoveInput"); };
	void SetIgnoreLookInput(unsigned char a0) { *(unsigned char*)GetAddress(this, "APlayerController", "IgnoreLookInput") = a0; };
	unsigned char GetIgnoreLookInput() const { return *(unsigned char*)GetAddress(this, "APlayerController", "IgnoreLookInput"); };
	void SetSpawnLocation(FVector a0) { *(FVector*)GetAddress(this, "APlayerController", "SpawnLocation") = a0; };
	FVector GetSpawnLocation() const { return *(FVector*)GetAddress(this, "APlayerController", "SpawnLocation"); };
	void SetLastRetryPlayerTime(float a0) { *(float*)GetAddress(this, "APlayerController", "LastRetryPlayerTime") = a0; };
	float GetLastRetryPlayerTime() const { return *(float*)GetAddress(this, "APlayerController", "LastRetryPlayerTime"); };
	void SetSeamlessTravelCount(unsigned short a0) { *(unsigned short*)GetAddress(this, "APlayerController", "SeamlessTravelCount") = a0; };
	unsigned short GetSeamlessTravelCount() const { return *(unsigned short*)GetAddress(this, "APlayerController", "SeamlessTravelCount"); };
	void SetLastCompletedSeamlessTravelCount(unsigned short a0) { *(unsigned short*)GetAddress(this, "APlayerController", "LastCompletedSeamlessTravelCount") = a0; };
	unsigned short GetLastCompletedSeamlessTravelCount() const { return *(unsigned short*)GetAddress(this, "APlayerController", "LastCompletedSeamlessTravelCount"); };
	void SetLastReplicatedFocalLoc(FVector a0) { *(FVector*)GetAddress(this, "APlayerController", "LastReplicatedFocalLoc") = a0; };
	FVector GetLastReplicatedFocalLoc() const { return *(FVector*)GetAddress(this, "APlayerController", "LastReplicatedFocalLoc"); };

	// Functions

	AActor* GetPlayerControllerViewerOverride() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "GetPlayerControllerViewerOverride"))((DWORD64)this); }
	void EnableCheats(const FString a1) { static_cast<void(_cdecl*)(DWORD64, const FString)>(GetAddress("APlayerController", "EnableCheats"))((DWORD64)this, a1); }
	void UnFreeze() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "UnFreeze"))((DWORD64)this); }
	void FOV(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerController", "FOV"))((DWORD64)this, a1); }
	void RestartLevel() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "RestartLevel"))((DWORD64)this); }
	void LocalTravel(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APlayerController", "LocalTravel"))((DWORD64)this, a1); }
	void ClientReturnToMainMenu(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APlayerController", "ClientReturnToMainMenu"))((DWORD64)this, a1); }
	void ClientRepObjRef(UObject* a1) { static_cast<void(_cdecl*)(DWORD64, UObject*)>(GetAddress("APlayerController", "ClientRepObjRef"))((DWORD64)this, a1); }
	void Pause() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "Pause"))((DWORD64)this); }
	void SetName(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APlayerController", "SetName"))((DWORD64)this, a1); }
	void SwitchLevel(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APlayerController", "SwitchLevel"))((DWORD64)this, a1); }
	void NotifyLoadedWorld(FName a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, FName, bool)>(GetAddress("APlayerController", "NotifyLoadedWorld"))((DWORD64)this, a1, a2); }
	void PlayerTick(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerController", "PlayerTick"))((DWORD64)this, a1); }
	void PreProcessInput(const float a1, const bool a2) { static_cast<void(_cdecl*)(DWORD64, const float, const bool)>(GetAddress("APlayerController", "PreProcessInput"))((DWORD64)this, a1, a2); }
	void PostProcessInput(const float a1, const bool a2) { static_cast<void(_cdecl*)(DWORD64, const float, const bool)>(GetAddress("APlayerController", "PostProcessInput"))((DWORD64)this, a1, a2); }
	void SetCinematicMode(bool a1, bool a2, bool a3, bool a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, bool, bool, bool, bool, bool)>(GetAddress("APlayerController", "SetCinematicMode"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void SetCinematicMode(bool a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("APlayerController", "SetCinematicMode"))((DWORD64)this, a1, a2, a3); }
	bool IsPlayerController() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "IsPlayerController"))((DWORD64)this); }
	void SetIgnoreMoveInput(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APlayerController", "SetIgnoreMoveInput"))((DWORD64)this, a1); }
	bool IsMoveInputIgnored() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "IsMoveInputIgnored"))((DWORD64)this); }
	void SetIgnoreLookInput(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APlayerController", "SetIgnoreLookInput"))((DWORD64)this, a1); }
	bool IsLookInputIgnored() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "IsLookInputIgnored"))((DWORD64)this); }
	void ResetIgnoreInputFlags() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ResetIgnoreInputFlags"))((DWORD64)this); }
	bool DeprojectMousePositionToWorld(FVector& a1, FVector& a2) { return static_cast<bool(_cdecl*)(DWORD64, FVector&, FVector&)>(GetAddress("APlayerController", "DeprojectMousePositionToWorld"))((DWORD64)this, a1, a2); }
	bool DeprojectScreenPositionToWorld(float a1, float a2, FVector& a3, FVector& a4) { return static_cast<bool(_cdecl*)(DWORD64, float, float, FVector&, FVector&)>(GetAddress("APlayerController", "DeprojectScreenPositionToWorld"))((DWORD64)this, a1, a2, a3, a4); }
	bool ProjectWorldLocationToScreen(FVector a1, FVector2D& a2) { return static_cast<bool(_cdecl*)(DWORD64, FVector, FVector2D&)>(GetAddress("APlayerController", "ProjectWorldLocationToScreen"))((DWORD64)this, a1, a2); }
	void UpdateRotation(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerController", "UpdateRotation"))((DWORD64)this, a1); }
	void BeginPlayingState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "BeginPlayingState"))((DWORD64)this); }
	void EndPlayingState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "EndPlayingState"))((DWORD64)this); }
	bool HasNetOwner() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "HasNetOwner"))((DWORD64)this); }
	void StartFire(unsigned char a1) { static_cast<void(_cdecl*)(DWORD64, unsigned char)>(GetAddress("APlayerController", "StartFire"))((DWORD64)this, a1); }
	void DelayedPrepareMapChange() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "DelayedPrepareMapChange"))((DWORD64)this); }
	void GetSeamlessTravelActorList(bool a1, TArray<AActor *, FDefaultAllocator>& a2) { static_cast<void(_cdecl*)(DWORD64, bool, TArray<AActor *, FDefaultAllocator>&)>(GetAddress("APlayerController", "GetSeamlessTravelActorList"))((DWORD64)this, a1, a2); }
	void SeamlessTravelTo(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APlayerController", "SeamlessTravelTo"))((DWORD64)this, a1); }
	void SeamlessTravelFrom(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APlayerController", "SeamlessTravelFrom"))((DWORD64)this, a1); }
	void ClientEnableNetworkVoice(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APlayerController", "ClientEnableNetworkVoice"))((DWORD64)this, a1); }
	void StartTalking() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "StartTalking"))((DWORD64)this); }
	void ToggleSpeaking(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APlayerController", "ToggleSpeaking"))((DWORD64)this, a1); }
	void ClientVoiceHandshakeComplete() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ClientVoiceHandshakeComplete"))((DWORD64)this); }
	void SendToConsole(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APlayerController", "SendToConsole"))((DWORD64)this, a1); }
	void ClientCommitMapChange() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ClientCommitMapChange"))((DWORD64)this); }
	void ClientMessage(const FString& a1, FName a2, float a3) { static_cast<void(_cdecl*)(DWORD64, const FString&, FName, float)>(GetAddress("APlayerController", "ClientMessage"))((DWORD64)this, a1, a2, a3); }
	void GetViewportSize(int& a1, int& a2) { static_cast<void(_cdecl*)(DWORD64, int&, int&)>(GetAddress("APlayerController", "GetViewportSize"))((DWORD64)this, a1, a2); }
	void ClientClearCameraLensEffects() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ClientClearCameraLensEffects"))((DWORD64)this); }
	void ClientWasKicked(const FText& a1) { static_cast<void(_cdecl*)(DWORD64, const FText&)>(GetAddress("APlayerController", "ClientWasKicked"))((DWORD64)this, a1); }
	void SetKickedNotification(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("APlayerController", "SetKickedNotification"))((DWORD64)this, a1); }
	void SafeRetryClientRestart() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "SafeRetryClientRestart"))((DWORD64)this); }
	void ServerChangeName(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APlayerController", "ServerChangeName"))((DWORD64)this, a1); }
	void ServerRestartPlayer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ServerRestartPlayer"))((DWORD64)this); }
	void SafeServerUpdateSpectatorState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "SafeServerUpdateSpectatorState"))((DWORD64)this); }
	void SafeServerCheckClientPossession() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "SafeServerCheckClientPossession"))((DWORD64)this); }
	void ServerVerifyViewTarget() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ServerVerifyViewTarget"))((DWORD64)this); }
	void ClientTeamMessage(APlayerState* a1, const FString& a2, FName a3, float a4) { static_cast<void(_cdecl*)(DWORD64, APlayerState*, const FString&, FName, float)>(GetAddress("APlayerController", "ClientTeamMessage"))((DWORD64)this, a1, a2, a3, a4); }
	void AddPitchInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerController", "AddPitchInput"))((DWORD64)this, a1); }
	void AddYawInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerController", "AddYawInput"))((DWORD64)this, a1); }
	void AddRollInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerController", "AddRollInput"))((DWORD64)this, a1); }
	bool GetMousePosition(float& a1, float& a2) { return static_cast<bool(_cdecl*)(DWORD64, float&, float&)>(GetAddress("APlayerController", "GetMousePosition"))((DWORD64)this, a1, a2); }
	void GetInputMouseDelta(float& a1, float& a2) { static_cast<void(_cdecl*)(DWORD64, float&, float&)>(GetAddress("APlayerController", "GetInputMouseDelta"))((DWORD64)this, a1, a2); }
	void SetVirtualJoystickVisibility(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APlayerController", "SetVirtualJoystickVisibility"))((DWORD64)this, a1); }
	void UpdateStateInputComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "UpdateStateInputComponents"))((DWORD64)this); }
	void FlushPressedKeys() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "FlushPressedKeys"))((DWORD64)this); }
	void SmoothTargetViewRotation(APawn* a1, float a2) { static_cast<void(_cdecl*)(DWORD64, APawn*, float)>(GetAddress("APlayerController", "SmoothTargetViewRotation"))((DWORD64)this, a1, a2); }
	FString* ConsoleCommand(FString* result, const FString& a1, bool a2) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, const FString&, bool)>(GetAddress("APlayerController", "ConsoleCommand"))((DWORD64)this, result, a1, a2); }
	void PostLoad() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "PostLoad"))((DWORD64)this); }
	void GetActorEyesViewPoint(FVector& a1, FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, FVector&, FRotator&)>(GetAddress("APlayerController", "GetActorEyesViewPoint"))((DWORD64)this, a1, a2); }
	bool IsNetRelevantFor(APlayerController* a1, AActor* a2, const FVector& a3) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, AActor*, const FVector&)>(GetAddress("APlayerController", "IsNetRelevantFor"))((DWORD64)this, a1, a2, a3); }
	void FellOutOfWorld(const UDamageType& a1) { static_cast<void(_cdecl*)(DWORD64, const UDamageType&)>(GetAddress("APlayerController", "FellOutOfWorld"))((DWORD64)this, a1); }
	UPlayer* GetNetOwningPlayer() { return static_cast<UPlayer*(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "GetNetOwningPlayer"))((DWORD64)this); }
	void PostInitializeComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "PostInitializeComponents"))((DWORD64)this); }
	void EnableInput(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APlayerController", "EnableInput"))((DWORD64)this, a1); }
	void DisableInput(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APlayerController", "DisableInput"))((DWORD64)this, a1); }
	void GameHasEnded(AActor* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, AActor*, bool)>(GetAddress("APlayerController", "GameHasEnded"))((DWORD64)this, a1, a2); }
	bool IsLocalPlayerController() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "IsLocalPlayerController"))((DWORD64)this); }
	bool IsLocalController() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "IsLocalController"))((DWORD64)this); }
	void GetPlayerViewPoint(FVector& a1, FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, FVector&, FRotator&)>(GetAddress("APlayerController", "GetPlayerViewPoint"))((DWORD64)this, a1, a2); }
	void SetInitialLocationAndRotation(const FVector& a1, const FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, const FRotator&)>(GetAddress("APlayerController", "SetInitialLocationAndRotation"))((DWORD64)this, a1, a2); }
	void ChangeState(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("APlayerController", "ChangeState"))((DWORD64)this, a1); }
	AActor* GetViewTarget() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "GetViewTarget"))((DWORD64)this); }
	void BeginInactiveState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "BeginInactiveState"))((DWORD64)this); }
	void EndInactiveState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "EndInactiveState"))((DWORD64)this); }
	void FailedToSpawnPawn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "FailedToSpawnPawn"))((DWORD64)this); }
	void SetPawn(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("APlayerController", "SetPawn"))((DWORD64)this, a1); }
	void UpdateHiddenActors(const FVector& a1) { static_cast<void(_cdecl*)(DWORD64, const FVector&)>(GetAddress("APlayerController", "UpdateHiddenActors"))((DWORD64)this, a1); }
	void SpawnPlayerCameraManager() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "SpawnPlayerCameraManager"))((DWORD64)this); }
	void SetupInputComponent() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "SetupInputComponent"))((DWORD64)this); }
	void AddCheats(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APlayerController", "AddCheats"))((DWORD64)this, a1); }
	void SpawnDefaultHUD() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "SpawnDefaultHUD"))((DWORD64)this); }
	void CreateTouchInterface() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "CreateTouchInterface"))((DWORD64)this); }
	void CleanupGameViewport() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "CleanupGameViewport"))((DWORD64)this); }
	void AcknowledgePossession(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("APlayerController", "AcknowledgePossession"))((DWORD64)this, a1); }
	void PawnLeavingGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "PawnLeavingGame"))((DWORD64)this); }
	APlayerState* GetNextViewablePlayer(int a1) { return static_cast<APlayerState*(_cdecl*)(DWORD64, int)>(GetAddress("APlayerController", "GetNextViewablePlayer"))((DWORD64)this, a1); }
	void ViewAPlayer(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APlayerController", "ViewAPlayer"))((DWORD64)this, a1); }
	bool CanRestartPlayer() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "CanRestartPlayer"))((DWORD64)this); }
	bool IsSplitscreenPlayer(int* a1) { return static_cast<bool(_cdecl*)(DWORD64, int*)>(GetAddress("APlayerController", "IsSplitscreenPlayer"))((DWORD64)this, a1); }
	void UpdateCameraManager(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APlayerController", "UpdateCameraManager"))((DWORD64)this, a1); }
	bool NotifyServerReceivedClientData(APawn* a1, float a2) { return static_cast<bool(_cdecl*)(DWORD64, APawn*, float)>(GetAddress("APlayerController", "NotifyServerReceivedClientData"))((DWORD64)this, a1, a2); }
	void StartSpectatingOnly() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "StartSpectatingOnly"))((DWORD64)this); }
	bool DefaultCanUnpause() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "DefaultCanUnpause"))((DWORD64)this); }
	bool HasClientLoadedCurrentWorld() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "HasClientLoadedCurrentWorld"))((DWORD64)this); }
	void ForceSingleNetUpdateFor(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("APlayerController", "ForceSingleNetUpdateFor"))((DWORD64)this, a1); }
	void AutoManageActiveCameraTarget(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("APlayerController", "AutoManageActiveCameraTarget"))((DWORD64)this, a1); }
	FVector* GetFocalLocation(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("APlayerController", "GetFocalLocation"))((DWORD64)this, res); }
	void BeginSpectatingState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "BeginSpectatingState"))((DWORD64)this); }
	void EndSpectatingState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "EndSpectatingState"))((DWORD64)this); }
	void DestroySpectatorPawn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "DestroySpectatorPawn"))((DWORD64)this); }
	void SetSpawnLocation(const FVector& a1) { static_cast<void(_cdecl*)(DWORD64, const FVector&)>(GetAddress("APlayerController", "SetSpawnLocation"))((DWORD64)this, a1); }
	void ReceivedPlayer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ReceivedPlayer"))((DWORD64)this); }
	void InitInputSystem() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "InitInputSystem"))((DWORD64)this); }
	bool IsFrozen() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "IsFrozen"))((DWORD64)this); }
	void SetCameraMode(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("APlayerController", "SetCameraMode"))((DWORD64)this, a1); }
	void ResetCameraMode() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "ResetCameraMode"))((DWORD64)this); }
	void SendClientAdjustment() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "SendClientAdjustment"))((DWORD64)this); }
	int GetCurrentMultiUseWheelCategory() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("APlayerController", "GetCurrentMultiUseWheelCategory"))((DWORD64)this); }
};

struct AShooterPlayerController : APlayerController
{
	void SetCurrentPlayerCharacterLocation(FVector a0) { *(FVector*)GetAddress(this, "AShooterPlayerController", "CurrentPlayerCharacterLocation") = a0; };
	FVector GetCurrentPlayerCharacterLocation() const { return *(FVector*)GetAddress(this, "AShooterPlayerController", "CurrentPlayerCharacterLocation"); };
	void SetLastDeathLocation(FVector a0) { *(FVector*)GetAddress(this, "AShooterPlayerController", "LastDeathLocation") = a0; };
	FVector GetLastDeathLocation() const { return *(FVector*)GetAddress(this, "AShooterPlayerController", "LastDeathLocation"); };
	void SetLastDeathTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastDeathTime") = a0; };
	double GetLastDeathTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastDeathTime"); };
	void SetbWasDead(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bWasDead") = a0; };
	bool GetbWasDead() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bWasDead"); };
	void SetLastDeadCharacterDestructionTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastDeadCharacterDestructionTime") = a0; };
	double GetLastDeadCharacterDestructionTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastDeadCharacterDestructionTime"); };
	void SetbShowGameModeHUD(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bShowGameModeHUD") = a0; };
	bool GetbShowGameModeHUD() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bShowGameModeHUD"); };
	void SetCurrentRadialDirection1(FVector2D a0) { *(FVector2D*)GetAddress(this, "AShooterPlayerController", "CurrentRadialDirection1") = a0; };
	FVector2D GetCurrentRadialDirection1() const { return *(FVector2D*)GetAddress(this, "AShooterPlayerController", "CurrentRadialDirection1"); };
	void SetCurrentRadialDirection2(FVector2D a0) { *(FVector2D*)GetAddress(this, "AShooterPlayerController", "CurrentRadialDirection2") = a0; };
	FVector2D GetCurrentRadialDirection2() const { return *(FVector2D*)GetAddress(this, "AShooterPlayerController", "CurrentRadialDirection2"); };
	AWeakObjectPtr<UPrimalItem> GetSelectedSlotItem() const { return *(AWeakObjectPtr<UPrimalItem>*)GetAddress(this, "AShooterPlayerController", "SelectedSlotItem"); };
	void SetbPlayerSpeaking(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bPlayerSpeaking") = a0; };
	bool GetbPlayerSpeaking() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bPlayerSpeaking"); };
	void SetCurrentGameModeMaxNumOfRespawns(int a0) { *(int*)GetAddress(this, "AShooterPlayerController", "CurrentGameModeMaxNumOfRespawns") = a0; };
	int GetCurrentGameModeMaxNumOfRespawns() const { return *(int*)GetAddress(this, "AShooterPlayerController", "CurrentGameModeMaxNumOfRespawns"); };
	void SetTargetOrbitedPlayerId(unsigned __int64 a0) { *(unsigned __int64*)GetAddress(this, "AShooterPlayerController", "TargetOrbitedPlayerId") = a0; };
	unsigned __int64 GetTargetOrbitedPlayerId() const { return *(unsigned __int64*)GetAddress(this, "AShooterPlayerController", "TargetOrbitedPlayerId"); };
	void SetTargetOrbitedTrialCount(unsigned char a0) { *(unsigned char*)GetAddress(this, "AShooterPlayerController", "TargetOrbitedTrialCount") = a0; };
	unsigned char GetTargetOrbitedTrialCount() const { return *(unsigned char*)GetAddress(this, "AShooterPlayerController", "TargetOrbitedTrialCount"); };
	AWeakObjectPtr<AShooterCharacter> GetLastControlledPlayerCharacter() const { return *(AWeakObjectPtr<AShooterCharacter>*)GetAddress(this, "AShooterPlayerController", "LastControlledPlayerCharacter"); };
	void SetMaxUseDistance(float a0) { *(float*)GetAddress(this, "AShooterPlayerController", "MaxUseDistance") = a0; };
	float GetMaxUseDistance() const { return *(float*)GetAddress(this, "AShooterPlayerController", "MaxUseDistance"); };
	void SetMaxUseCheckRadius(float a0) { *(float*)GetAddress(this, "AShooterPlayerController", "MaxUseCheckRadius") = a0; };
	float GetMaxUseCheckRadius() const { return *(float*)GetAddress(this, "AShooterPlayerController", "MaxUseCheckRadius"); };
	TArray<AWeakObjectPtr<UPrimalInventoryComponent>, FDefaultAllocator> GetRemoteViewingInventories() const { return *(TArray<AWeakObjectPtr<UPrimalInventoryComponent>, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "RemoteViewingInventories"); };
	void SetTempLastLostPawn(APawn* a0) { *(APawn**)GetAddress(this, "AShooterPlayerController", "TempLastLostPawn") = a0; };
	APawn* GetTempLastLostPawn() const { return *(APawn**)GetAddress(this, "AShooterPlayerController", "TempLastLostPawn"); };
	void SetbLockedInputDontRecenterMouse(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bLockedInputDontRecenterMouse") = a0; };
	bool GetbLockedInputDontRecenterMouse() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bLockedInputDontRecenterMouse"); };
	void SetLastRespawnTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastRespawnTime") = a0; };
	double GetLastRespawnTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastRespawnTime"); };
	void SetbIsFirstSpawn(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bIsFirstSpawn") = a0; };
	bool GetbIsFirstSpawn() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bIsFirstSpawn"); };
	void SetbIsRespawning(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bIsRespawning") = a0; };
	bool GetbIsRespawning() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bIsRespawning"); };
	void SetbIsVRPlayer(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bIsVRPlayer") = a0; };
	bool GetbIsVRPlayer() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bIsVRPlayer"); };
	void SetLastEquipedItemNetID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastEquipedItemNetID") = a0; };
	FItemNetID GetLastEquipedItemNetID() const { return *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastEquipedItemNetID"); };
	void SetLastUnequippedItemNetID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastUnequippedItemNetID") = a0; };
	FItemNetID GetLastUnequippedItemNetID() const { return *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastUnequippedItemNetID"); };
	void SetLinkedPlayerID(__int64 a0) { *(__int64*)GetAddress(this, "AShooterPlayerController", "LinkedPlayerID") = a0; };
	__int64 GetLinkedPlayerID() const { return *(__int64*)GetAddress(this, "AShooterPlayerController", "LinkedPlayerID"); };
	void SetbDrawLocation(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bDrawLocation") = a0; };
	bool GetbDrawLocation() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bDrawLocation"); };
	void SetPlayerControllerNum(int a0) { *(int*)GetAddress(this, "AShooterPlayerController", "PlayerControllerNum") = a0; };
	int GetPlayerControllerNum() const { return *(int*)GetAddress(this, "AShooterPlayerController", "PlayerControllerNum"); };
	void SetLastTurnSpeed(FVector a0) { *(FVector*)GetAddress(this, "AShooterPlayerController", "LastTurnSpeed") = a0; };
	FVector GetLastTurnSpeed() const { return *(FVector*)GetAddress(this, "AShooterPlayerController", "LastTurnSpeed"); };
	void SetLastMultiUseInteractionTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastMultiUseInteractionTime") = a0; };
	double GetLastMultiUseInteractionTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastMultiUseInteractionTime"); };
	void SetLastTimeSentCarriedRotation(float a0) { *(float*)GetAddress(this, "AShooterPlayerController", "LastTimeSentCarriedRotation") = a0; };
	float GetLastTimeSentCarriedRotation() const { return *(float*)GetAddress(this, "AShooterPlayerController", "LastTimeSentCarriedRotation"); };
	void SetLastSteamItemIDToRemove(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastSteamItemIDToRemove") = a0; };
	FItemNetID GetLastSteamItemIDToRemove() const { return *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastSteamItemIDToRemove"); };
	void SetLastSteamItemIDToAdd(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastSteamItemIDToAdd") = a0; };
	FItemNetID GetLastSteamItemIDToAdd() const { return *(FItemNetID*)GetAddress(this, "AShooterPlayerController", "LastSteamItemIDToAdd"); };
	void SetbConsumeItemSucceeded(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bConsumeItemSucceeded") = a0; };
	bool GetbConsumeItemSucceeded() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bConsumeItemSucceeded"); };
	void SetbRefreshedInvetoryForRemove(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bRefreshedInvetoryForRemove") = a0; };
	bool GetbRefreshedInvetoryForRemove() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bRefreshedInvetoryForRemove"); };
	void SetbServerRefreshedSteamInventory(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bServerRefreshedSteamInventory") = a0; };
	bool GetbServerRefreshedSteamInventory() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bServerRefreshedSteamInventory"); };
	void SetbServerRefreshStatus(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bServerRefreshStatus") = a0; };
	bool GetbServerRefreshStatus() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bServerRefreshStatus"); };
	void SetbCloseSteamStatusScene(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bCloseSteamStatusScene") = a0; };
	bool GetbCloseSteamStatusScene() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bCloseSteamStatusScene"); };
	void SetLastSteamInventoryRefreshTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastSteamInventoryRefreshTime") = a0; };
	double GetLastSteamInventoryRefreshTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastSteamInventoryRefreshTime"); };
	void SetLastRequesteDinoAncestorsTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastRequesteDinoAncestorsTime") = a0; };
	double GetLastRequesteDinoAncestorsTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastRequesteDinoAncestorsTime"); };
	void SetLastDiedMessageTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastDiedMessageTime") = a0; };
	double GetLastDiedMessageTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastDiedMessageTime"); };
	void SetLastNotifiedTorpidityIncreaseTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastNotifiedTorpidityIncreaseTime") = a0; };
	double GetLastNotifiedTorpidityIncreaseTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastNotifiedTorpidityIncreaseTime"); };
	void SetLastInvDropRequestTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastInvDropRequestTime") = a0; };
	double GetLastInvDropRequestTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastInvDropRequestTime"); };
	void SetLastHadPawnTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastHadPawnTime") = a0; };
	double GetLastHadPawnTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastHadPawnTime"); };
	void SetLastChatMessageTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastChatMessageTime") = a0; };
	double GetLastChatMessageTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastChatMessageTime"); };
	void SetARKTributeItemNetInfo(FItemNetInfo a0) { *(FItemNetInfo*)GetAddress(this, "AShooterPlayerController", "ARKTributeItemNetInfo") = a0; };
	FItemNetInfo GetARKTributeItemNetInfo() const { return *(FItemNetInfo*)GetAddress(this, "AShooterPlayerController", "ARKTributeItemNetInfo"); };
	void SetbServerIsPainting(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bServerIsPainting") = a0; };
	bool GetbServerIsPainting() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bServerIsPainting"); };
	void SetbServerPaintingSuccess(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bServerPaintingSuccess") = a0; };
	bool GetbServerPaintingSuccess() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bServerPaintingSuccess"); };
	void SetLastListenServerNotifyOutOfRangeTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastListenServerNotifyOutOfRangeTime") = a0; };
	double GetLastListenServerNotifyOutOfRangeTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastListenServerNotifyOutOfRangeTime"); };
	void SetSpectatorCycleIndex(int a0) { *(int*)GetAddress(this, "AShooterPlayerController", "SpectatorCycleIndex") = a0; };
	int GetSpectatorCycleIndex() const { return *(int*)GetAddress(this, "AShooterPlayerController", "SpectatorCycleIndex"); };
	void SetbPossessedAnyPawn(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bPossessedAnyPawn") = a0; };
	bool GetbPossessedAnyPawn() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bPossessedAnyPawn"); };
	void SetbIsFastTravelling(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bIsFastTravelling") = a0; };
	bool GetbIsFastTravelling() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bIsFastTravelling"); };
	void SetbSuppressAdminIcon(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bSuppressAdminIcon") = a0; };
	bool GetbSuppressAdminIcon() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bSuppressAdminIcon"); };
	void SetWaitingForSpawnUITime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "WaitingForSpawnUITime") = a0; };
	double GetWaitingForSpawnUITime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "WaitingForSpawnUITime"); };
	void SetChatSpamWeight(float a0) { *(float*)GetAddress(this, "AShooterPlayerController", "ChatSpamWeight") = a0; };
	float GetChatSpamWeight() const { return *(float*)GetAddress(this, "AShooterPlayerController", "ChatSpamWeight"); };
	void SetbChatSpammed(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bChatSpammed") = a0; };
	bool GetbChatSpammed() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bChatSpammed"); };
	void SetEnteredSpectatingStateTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "EnteredSpectatingStateTime") = a0; };
	double GetEnteredSpectatingStateTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "EnteredSpectatingStateTime"); };
	void SetbPreventPaintingStreaming(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bPreventPaintingStreaming") = a0; };
	bool GetbPreventPaintingStreaming() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bPreventPaintingStreaming"); };
	void SetLastUsePressTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastUsePressTime") = a0; };
	double GetLastUsePressTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastUsePressTime"); };
	void SetPlayerAppIDs(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "PlayerAppIDs") = a0; };
	TArray<int, FDefaultAllocator> GetPlayerAppIDs() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "PlayerAppIDs"); };
	void SetNotifiedTribeWarIDs(TArray<int, FDefaultAllocator> a0) { *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "NotifiedTribeWarIDs") = a0; };
	TArray<int, FDefaultAllocator> GetNotifiedTribeWarIDs() const { return *(TArray<int, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "NotifiedTribeWarIDs"); };
	void SetNotifiedTribeWarNames(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "NotifiedTribeWarNames") = a0; };
	TArray<FString, FDefaultAllocator> GetNotifiedTribeWarNames() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "NotifiedTribeWarNames"); };
	void SetServerTribeLogLastLogIndex(int a0) { *(int*)GetAddress(this, "AShooterPlayerController", "ServerTribeLogLastLogIndex") = a0; };
	int GetServerTribeLogLastLogIndex() const { return *(int*)GetAddress(this, "AShooterPlayerController", "ServerTribeLogLastLogIndex"); };
	void SetServerTribeLogLastTribeID(int a0) { *(int*)GetAddress(this, "AShooterPlayerController", "ServerTribeLogLastTribeID") = a0; };
	int GetServerTribeLogLastTribeID() const { return *(int*)GetAddress(this, "AShooterPlayerController", "ServerTribeLogLastTribeID"); };
	void SetLastViewLocation(FVector a0) { *(FVector*)GetAddress(this, "AShooterPlayerController", "LastViewLocation") = a0; };
	FVector GetLastViewLocation() const { return *(FVector*)GetAddress(this, "AShooterPlayerController", "LastViewLocation"); };
	void SetbHasGottenInitialSpawnLocation(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bHasGottenInitialSpawnLocation") = a0; };
	bool GetbHasGottenInitialSpawnLocation() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bHasGottenInitialSpawnLocation"); };
	void SetbClientReceivedTribeLog(bool a0) { *(bool*)GetAddress(this, "AShooterPlayerController", "bClientReceivedTribeLog") = a0; };
	bool GetbClientReceivedTribeLog() const { return *(bool*)GetAddress(this, "AShooterPlayerController", "bClientReceivedTribeLog"); };
	void SetCurrentTribeLog(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "CurrentTribeLog") = a0; };
	TArray<FString, FDefaultAllocator> GetCurrentTribeLog() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "AShooterPlayerController", "CurrentTribeLog"); };
	void SetLastTribeLogRequestTime(double a0) { *(double*)GetAddress(this, "AShooterPlayerController", "LastTribeLogRequestTime") = a0; };
	double GetLastTribeLogRequestTime() const { return *(double*)GetAddress(this, "AShooterPlayerController", "LastTribeLogRequestTime"); };

	// Functions

	void SetControlRotation(const FRotator& a1) { static_cast<void(_cdecl*)(DWORD64, const FRotator&)>(GetAddress("AShooterPlayerController", "SetControlRotation"))((DWORD64)this, a1); }
	void ClientTeamMessage_Implementation(APlayerState* a1, const FString& a2, FName a3, float a4) { static_cast<void(_cdecl*)(DWORD64, APlayerState*, const FString&, FName, float)>(GetAddress("AShooterPlayerController", "ClientTeamMessage_Implementation"))((DWORD64)this, a1, a2, a3, a4); }
	void TestNotification() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "TestNotification"))((DWORD64)this); }
	void TestPhysxPerf() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "TestPhysxPerf"))((DWORD64)this); }
	void EnableSpectator() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "EnableSpectator"))((DWORD64)this); }
	void DisableSpectator() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "DisableSpectator"))((DWORD64)this); }
	void ServerSetSpectatorLocation_Implementation(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("AShooterPlayerController", "ServerSetSpectatorLocation_Implementation"))((DWORD64)this, a1); }
	void SetGraphicsQuality(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "SetGraphicsQuality"))((DWORD64)this, a1); }
	void CheckforOrbiting() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "CheckforOrbiting"))((DWORD64)this); }
	bool CheckforOrbitingInstantaneously() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "CheckforOrbitingInstantaneously"))((DWORD64)this); }
	void OnToggleInGameMenu() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnToggleInGameMenu"))((DWORD64)this); }
	void OnToggleDoFMenu() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnToggleDoFMenu"))((DWORD64)this); }
	void GiveResources() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GiveResources"))((DWORD64)this); }
	void GiveEngrams() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GiveEngrams"))((DWORD64)this); }
	void ForceTribes(const FString& a1, const FString& a2, const FString& a3) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&, const FString&)>(GetAddress("AShooterPlayerController", "ForceTribes"))((DWORD64)this, a1, a2, a3); }
	void AddExperience(float a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, float, bool, bool)>(GetAddress("AShooterPlayerController", "AddExperience"))((DWORD64)this, a1, a2, a3); }
	void ServerSendChatMessage(const FString& a1, int a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, int)>(GetAddress("AShooterPlayerController", "ServerSendChatMessage"))((DWORD64)this, a1, a2); }
	void OnArkTributeAllClustersInventoryItemsLoaded(const TArray<FItemNetInfo, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, const TArray<FItemNetInfo, FDefaultAllocator>&)>(GetAddress("AShooterPlayerController", "OnArkTributeAllClustersInventoryItemsLoaded"))((DWORD64)this, a1); }
	void OnArkTributeSaved(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "OnArkTributeSaved"))((DWORD64)this, a1); }
	//void ClientChatMessage(FChatMessage a1) { static_cast<void(_cdecl*)(DWORD64, FChatMessage)>(GetAddress("AShooterPlayerController", "ClientChatMessage"))((DWORD64)this, a1); }
	AActor* SpawnActor(const FString& a1, float a2, float a3, float a4, bool a5) { return static_cast<AActor*(_cdecl*)(DWORD64, const FString&, float, float, float, bool)>(GetAddress("AShooterPlayerController", "SpawnActor"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void SpawnActorSpread(const FString& a1, float a2, float a3, float a4, int a5, float a6) { static_cast<void(_cdecl*)(DWORD64, const FString&, float, float, float, int, float)>(GetAddress("AShooterPlayerController", "SpawnActorSpread"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	void SpawnActorSpreadTamed(const FString& a1, float a2, float a3, float a4, int a5, float a6) { static_cast<void(_cdecl*)(DWORD64, const FString&, float, float, float, int, float)>(GetAddress("AShooterPlayerController", "SpawnActorSpreadTamed"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	void ReceivedPlayerState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ReceivedPlayerState"))((DWORD64)this); }
	void MoveForward(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "MoveForward"))((DWORD64)this, a1); }
	void MoveRight(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "MoveRight"))((DWORD64)this, a1); }
	void TurnAtRate(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "TurnAtRate"))((DWORD64)this, a1); }
	void LookUpAtRate(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "LookUpAtRate"))((DWORD64)this, a1); }
	void TurnInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "TurnInput"))((DWORD64)this, a1); }
	void SpectatorTurn(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "SpectatorTurn"))((DWORD64)this, a1); }
	void LookInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "LookInput"))((DWORD64)this, a1); }
	void OnStartFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStartFire"))((DWORD64)this); }
	void OnStopFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStopFire"))((DWORD64)this); }
	void OnStartTargeting() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStartTargeting"))((DWORD64)this); }
	void OnStopTargeting() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStopTargeting"))((DWORD64)this); }
	void OnStartGamepadRightFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStartGamepadRightFire"))((DWORD64)this); }
	void OnStopGamepadRightFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStopGamepadRightFire"))((DWORD64)this); }
	void OnStartGamepadLeftFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStartGamepadLeftFire"))((DWORD64)this); }
	void OnStopGamepadLeftFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnStopGamepadLeftFire"))((DWORD64)this); }
	void SaveSpectatorPos(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "SaveSpectatorPos"))((DWORD64)this, a1); }
	void LoadSpectatorPos(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "LoadSpectatorPos"))((DWORD64)this, a1); }
	void SpectatorDetachOrbitCamera() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "SpectatorDetachOrbitCamera"))((DWORD64)this); }
	void StopTalkingWrapper() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "StopTalkingWrapper"))((DWORD64)this); }
	void LeaveMeAlone() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "LeaveMeAlone"))((DWORD64)this); }
	void InfiniteStats() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "InfiniteStats"))((DWORD64)this); }
	void SetCinematicMode(bool a1, bool a2, bool a3, bool a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, bool, bool, bool, bool, bool)>(GetAddress("AShooterPlayerController", "SetCinematicMode"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void InitInputSystem() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "InitInputSystem"))((DWORD64)this); }
	void SetPlayer(UPlayer* a1) { static_cast<void(_cdecl*)(DWORD64, UPlayer*)>(GetAddress("AShooterPlayerController", "SetPlayer"))((DWORD64)this, a1); }
	void SPI(float a1, float a2, float a3, float a4, float a5) { static_cast<void(_cdecl*)(DWORD64, float, float, float, float, float)>(GetAddress("AShooterPlayerController", "SPI"))((DWORD64)this, a1, a2, a3, a4, a5); }
	AShooterCharacter* GetPlayerCharacter() { return static_cast<AShooterCharacter*(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GetPlayerCharacter"))((DWORD64)this); }
	void SetPawn(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AShooterPlayerController", "SetPawn"))((DWORD64)this, a1); }
	AActor* GetPlayerControllerViewerOverride() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GetPlayerControllerViewerOverride"))((DWORD64)this); }
	void SaveProfile() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "SaveProfile"))((DWORD64)this); }
	void EnemyInVisible(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "EnemyInVisible"))((DWORD64)this, a1); }
	void KickPlayer(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("AShooterPlayerController", "KickPlayer"))((DWORD64)this, a1); }
	void BanPlayer(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("AShooterPlayerController", "BanPlayer"))((DWORD64)this, a1); }
	void UnbanPlayer(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("AShooterPlayerController", "UnbanPlayer"))((DWORD64)this, a1); }
	void BeginPlay() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "BeginPlay"))((DWORD64)this); }
	void FailedToSpawnPawn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "FailedToSpawnPawn"))((DWORD64)this); }
	void UnFreeze() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "UnFreeze"))((DWORD64)this); }
	void SetupInputComponent() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "SetupInputComponent"))((DWORD64)this); }
	void ServerKickPlayer(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("AShooterPlayerController", "ServerKickPlayer"))((DWORD64)this, a1, a2); }
	void ServerBanPlayer(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("AShooterPlayerController", "ServerBanPlayer"))((DWORD64)this, a1, a2); }
	void ServerUnbanPlayer(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("AShooterPlayerController", "ServerUnbanPlayer"))((DWORD64)this, a1, a2); }
	void ServerAllowPlayerToJoinNoCheck(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "ServerAllowPlayerToJoinNoCheck"))((DWORD64)this, a1); }
	void ServerDisallowPlayerToJoinNoCheck(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "ServerDisallowPlayerToJoinNoCheck"))((DWORD64)this, a1); }
	void TestAlarmNotification(FString a1, FString a2) { static_cast<void(_cdecl*)(DWORD64, FString, FString)>(GetAddress("AShooterPlayerController", "TestAlarmNotification"))((DWORD64)this, a1, a2); }
	void SendAlarmNotification(FString a1, FString a2, FString a3) { static_cast<void(_cdecl*)(DWORD64, FString, FString, FString)>(GetAddress("AShooterPlayerController", "SendAlarmNotification"))((DWORD64)this, a1, a2, a3); }
	void PawnLeavingGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "PawnLeavingGame"))((DWORD64)this); }
	TArray<FString, FDefaultAllocator> GetCheatsCommands() { return static_cast<TArray<FString, FDefaultAllocator>(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GetCheatsCommands"))((DWORD64)this); }
	void ShowMyInventory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowMyInventory"))((DWORD64)this); }
	void ShowMyCraftables() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowMyCraftables"))((DWORD64)this); }
	void StartInventoryRadialSelector() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "StartInventoryRadialSelector"))((DWORD64)this); }
	void EndInventoryRadialSelector() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "EndInventoryRadialSelector"))((DWORD64)this); }
	void StartPlayerActionRadialSelector() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "StartPlayerActionRadialSelector"))((DWORD64)this); }
	void EndPlayerActionRadialSelector() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "EndPlayerActionRadialSelector"))((DWORD64)this); }
	void ActivateMultiUseSelection() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ActivateMultiUseSelection"))((DWORD64)this); }
	void CancelMultiUseSelection() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "CancelMultiUseSelection"))((DWORD64)this); }
	void OnPressGroupAddOrRemoveTame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnPressGroupAddOrRemoveTame"))((DWORD64)this); }
	void OnWhistlePress() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnWhistlePress"))((DWORD64)this); }
	void StartWhistleSelection() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "StartWhistleSelection"))((DWORD64)this); }
	void EndWhistleSelection() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "EndWhistleSelection"))((DWORD64)this); }
	void StartEmoteSelection() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "StartEmoteSelection"))((DWORD64)this); }
	void EndEmoteSelection() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "EndEmoteSelection"))((DWORD64)this); }
	void OnEmoteKey1Press() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnEmoteKey1Press"))((DWORD64)this); }
	void OnEmoteKey2Press() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnEmoteKey2Press"))((DWORD64)this); }
	void OnEmoteKey1Release() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnEmoteKey1Release"))((DWORD64)this); }
	void OnEmoteKey2Release() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnEmoteKey2Release"))((DWORD64)this); }
	void OnLevelView() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnLevelView"))((DWORD64)this); }
	void LevelView() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "LevelView"))((DWORD64)this); }
	void TriggerPlayerAction(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "TriggerPlayerAction"))((DWORD64)this, a1); }
	void ShowTutorial(int a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, int, bool)>(GetAddress("AShooterPlayerController", "ShowTutorial"))((DWORD64)this, a1, a2); }
	void ClearTutorials() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ClearTutorials"))((DWORD64)this); }
	void Suicide() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "Suicide"))((DWORD64)this); }
	void ForceTame(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "ForceTame"))((DWORD64)this, a1); }
	void SetImprintQuality(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "SetImprintQuality"))((DWORD64)this, a1); }
	void GiveToMe() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GiveToMe"))((DWORD64)this); }
	void ShowTribeManager() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowTribeManager"))((DWORD64)this); }
	void ShowGlobalChat() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowGlobalChat"))((DWORD64)this); }
	void ShowTribeChat() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowTribeChat"))((DWORD64)this); }
	void ShowLocalChat() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowLocalChat"))((DWORD64)this); }
	void ToggleAutoChat() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ToggleAutoChat"))((DWORD64)this); }
	void ScrollChatUp() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ScrollChatUp"))((DWORD64)this); }
	void ScrollChatDown() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ScrollChatDown"))((DWORD64)this); }
	void ToggleMap() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ToggleMap"))((DWORD64)this); }
	void ToggleWeaponAccessory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ToggleWeaponAccessory"))((DWORD64)this); }
	void ShowAllPlayersListToFollow() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowAllPlayersListToFollow"))((DWORD64)this); }
	void ToggleShowAllPlayersWhenSpectating() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ToggleShowAllPlayersWhenSpectating"))((DWORD64)this); }
	void ToggleShowAllPlayersWhenSpectatingLocal() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ToggleShowAllPlayersWhenSpectatingLocal"))((DWORD64)this); }
	void ShowBattleGameModeHUD() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowBattleGameModeHUD"))((DWORD64)this); }
	void OpenMapMarkers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OpenMapMarkers"))((DWORD64)this); }
	void OnExtendedInfoPress() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnExtendedInfoPress"))((DWORD64)this); }
	void OnExtendedInfoRelease() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnExtendedInfoRelease"))((DWORD64)this); }
	void GetTamedDinosNearBy(TArray<AWeakObjectPtr<APrimalDinoCharacter>, FDefaultAllocator>& a1, float a2) { static_cast<void(_cdecl*)(DWORD64, TArray<AWeakObjectPtr<APrimalDinoCharacter>, FDefaultAllocator>&, float)>(GetAddress("AShooterPlayerController", "GetTamedDinosNearBy"))((DWORD64)this, a1, a2); }
	bool IsTamedDinoNearBy(APrimalDinoCharacter* a1, float a2) { return static_cast<bool(_cdecl*)(DWORD64, APrimalDinoCharacter*, float)>(GetAddress("AShooterPlayerController", "IsTamedDinoNearBy"))((DWORD64)this, a1, a2); }
	void ClientUnlockAchievement(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "ClientUnlockAchievement"))((DWORD64)this, a1); }
	void ClientAddItemToArk(UPrimalInventoryComponent* a1, FItemNetInfo a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetInfo, bool)>(GetAddress("AShooterPlayerController", "ClientAddItemToArk"))((DWORD64)this, a1, a2, a3); }
	void ClientAddActorItem(UPrimalInventoryComponent* a1, FItemNetInfo a2, bool a3, bool a4) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetInfo, bool, bool)>(GetAddress("AShooterPlayerController", "ClientAddActorItem"))((DWORD64)this, a1, a2, a3, a4); }
	void ClientInsertActorItem(UPrimalInventoryComponent* a1, FItemNetInfo a2, FItemNetID a3) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetInfo, FItemNetID)>(GetAddress("AShooterPlayerController", "ClientInsertActorItem"))((DWORD64)this, a1, a2, a3); }
	void ServerRemovePawnItem(FItemNetID a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, FItemNetID, bool)>(GetAddress("AShooterPlayerController", "ServerRemovePawnItem"))((DWORD64)this, a1, a2); }
	void ServerDeleteCustomFolder(UPrimalInventoryComponent* a1, const FString& a2, int a3) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, const FString&, int)>(GetAddress("AShooterPlayerController", "ServerDeleteCustomFolder"))((DWORD64)this, a1, a2, a3); }
	void ServerAddItemToCustomFolder(UPrimalInventoryComponent* a1, const FString& a2, int a3, FItemNetID a4) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, const FString&, int, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerAddItemToCustomFolder"))((DWORD64)this, a1, a2, a3, a4); }
	void ServerDeleteItemFromCustomFolder(UPrimalInventoryComponent* a1, const FString& a2, int a3, FItemNetID a4) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, const FString&, int, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerDeleteItemFromCustomFolder"))((DWORD64)this, a1, a2, a3, a4); }
	void ServerActorViewRemoteInventory(UPrimalInventoryComponent* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("AShooterPlayerController", "ServerActorViewRemoteInventory"))((DWORD64)this, a1); }
	void ServerDropFromRemoteInventory(UPrimalInventoryComponent* a1, FItemNetID a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerDropFromRemoteInventory"))((DWORD64)this, a1, a2); }
	void ServerInventoryClearCraftQueue(UPrimalInventoryComponent* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("AShooterPlayerController", "ServerInventoryClearCraftQueue"))((DWORD64)this, a1); }
	void ServerEquipToRemoteInventory(UPrimalInventoryComponent* a1, FItemNetID a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerEquipToRemoteInventory"))((DWORD64)this, a1, a2); }
	void ServerTransferFromRemoteInventory(UPrimalInventoryComponent* a1, FItemNetID a2, int a3, int a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID, int, int, bool)>(GetAddress("AShooterPlayerController", "ServerTransferFromRemoteInventory"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void ServerTransferToRemoteInventory(UPrimalInventoryComponent* a1, FItemNetID a2, bool a3, int a4) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID, bool, int)>(GetAddress("AShooterPlayerController", "ServerTransferToRemoteInventory"))((DWORD64)this, a1, a2, a3, a4); }
	void ServerCraftItem(UPrimalInventoryComponent* a1, FItemNetID a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerCraftItem"))((DWORD64)this, a1, a2); }
	void ServerRepairItem(UPrimalInventoryComponent* a1, FItemNetID a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerRepairItem"))((DWORD64)this, a1, a2); }
	void ServerRequestInventoryUseItem(UPrimalInventoryComponent* a1, FItemNetID a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerRequestInventoryUseItem"))((DWORD64)this, a1, a2); }
	void ServerRequestInventorySwapItems(UPrimalInventoryComponent* a1, FItemNetID a2, FItemNetID a3) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID, FItemNetID)>(GetAddress("AShooterPlayerController", "ServerRequestInventorySwapItems"))((DWORD64)this, a1, a2, a3); }
	void ServerRequestInventoryUseItemWithItem(UPrimalInventoryComponent* a1, FItemNetID a2, FItemNetID a3, int a4) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*, FItemNetID, FItemNetID, int)>(GetAddress("AShooterPlayerController", "ServerRequestInventoryUseItemWithItem"))((DWORD64)this, a1, a2, a3, a4); }
	void ServerRequestInventoryUseItemWithActor(AActor* a1, UPrimalInventoryComponent* a2, FItemNetID a3, int a4) { static_cast<void(_cdecl*)(DWORD64, AActor*, UPrimalInventoryComponent*, FItemNetID, int)>(GetAddress("AShooterPlayerController", "ServerRequestInventoryUseItemWithActor"))((DWORD64)this, a1, a2, a3, a4); }
	void ServerUploadCurrentCharacterAndItems(UPrimalInventoryComponent* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("AShooterPlayerController", "ServerUploadCurrentCharacterAndItems"))((DWORD64)this, a1); }
	void UploadCharacterPlayerDataToArk(const TArray<unsigned char, FDefaultAllocator>& a1, FString a2, TArray<FString, FDefaultAllocator> a3, unsigned __int64 a4, bool a5, unsigned int a6) { static_cast<void(_cdecl*)(DWORD64, const TArray<unsigned char, FDefaultAllocator>&, FString, TArray<FString, FDefaultAllocator>, unsigned __int64, bool, unsigned int)>(GetAddress("AShooterPlayerController", "UploadCharacterPlayerDataToArk"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	void ServerRequestCreateNewPlayerWithArkData(const TArray<unsigned char, FDefaultAllocator>& a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, const TArray<unsigned char, FDefaultAllocator>&, unsigned __int64)>(GetAddress("AShooterPlayerController", "ServerRequestCreateNewPlayerWithArkData"))((DWORD64)this, a1, a2); }
	void RequestCreateNewPlayerWithArkData(TArray<unsigned char, FDefaultAllocator> a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, TArray<unsigned char, FDefaultAllocator>, unsigned __int64)>(GetAddress("AShooterPlayerController", "RequestCreateNewPlayerWithArkData"))((DWORD64)this, a1, a2); }
	void RemoveInvetoryItem(unsigned int a1) { static_cast<void(_cdecl*)(DWORD64, unsigned int)>(GetAddress("AShooterPlayerController", "RemoveInvetoryItem"))((DWORD64)this, a1); }
	bool SendUseItemSlotToStructure() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "SendUseItemSlotToStructure"))((DWORD64)this); }
	void SpectatorUseItem(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "SpectatorUseItem"))((DWORD64)this, a1); }
	void ApplyDepthOfFieldSetting(int a1, float a2) { static_cast<void(_cdecl*)(DWORD64, int, float)>(GetAddress("AShooterPlayerController", "ApplyDepthOfFieldSetting"))((DWORD64)this, a1, a2); }
	void ServerMultiUse(UObject* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, UObject*, int)>(GetAddress("AShooterPlayerController", "ServerMultiUse"))((DWORD64)this, a1, a2); }
	void ClientDoMultiUse(UObject* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, UObject*, int)>(GetAddress("AShooterPlayerController", "ClientDoMultiUse"))((DWORD64)this, a1, a2); }
	void UpdateRotation(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterPlayerController", "UpdateRotation"))((DWORD64)this, a1); }
	bool CanDoPlayerCharacterInput(bool a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, bool, bool)>(GetAddress("AShooterPlayerController", "CanDoPlayerCharacterInput"))((DWORD64)this, a1, a2); }
	void SpectatorNextPlayer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "SpectatorNextPlayer"))((DWORD64)this); }
	void SpectatorPreviousPlayer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "SpectatorPreviousPlayer"))((DWORD64)this); }
	void DelayedTeamSpectatorSetup() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "DelayedTeamSpectatorSetup"))((DWORD64)this); }
	void ClientReset_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ClientReset_Implementation"))((DWORD64)this); }
	void StartSpectatingOnly() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "StartSpectatingOnly"))((DWORD64)this); }
	void OnUseItemSlotForStructure(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "OnUseItemSlotForStructure"))((DWORD64)this, a1); }
	void OnUsePress(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "OnUsePress"))((DWORD64)this, a1); }
	void OnUseRelease(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "OnUseRelease"))((DWORD64)this, a1); }
	void OnUseHeldTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnUseHeldTimer"))((DWORD64)this); }
	void SetMultiUseWheelCategory(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "SetMultiUseWheelCategory"))((DWORD64)this, a1); }
	void OnKeyboardUsePress() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnKeyboardUsePress"))((DWORD64)this); }
	void OnKeyboardUseRelease() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnKeyboardUseRelease"))((DWORD64)this); }
	void OnGamepadUsePress() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnGamepadUsePress"))((DWORD64)this); }
	void OnGamepadUseRelease() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnGamepadUseRelease"))((DWORD64)this); }
	void ServerSendDirectMessage(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("AShooterPlayerController", "ServerSendDirectMessage"))((DWORD64)this, a1, a2); }
	void ClientShowCharacterCreationUI() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ClientShowCharacterCreationUI"))((DWORD64)this); }
	void ClientServerChatDirectMessage(const FString& a1, FLinearColor a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, const FString&, FLinearColor, bool)>(GetAddress("AShooterPlayerController", "ClientServerChatDirectMessage"))((DWORD64)this, a1, a2, a3); }
	void PawnPendingDestroy(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AShooterPlayerController", "PawnPendingDestroy"))((DWORD64)this, a1); }
	void BeginSpectatingState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "BeginSpectatingState"))((DWORD64)this); }
	void GetPlayerViewPoint(FVector& a1, FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, FVector&, FRotator&)>(GetAddress("AShooterPlayerController", "GetPlayerViewPoint"))((DWORD64)this, a1, a2); }
	void GetPlayerViewPoint(FVector& a1, FRotator& a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, FVector&, FRotator&, bool)>(GetAddress("AShooterPlayerController", "GetPlayerViewPoint"))((DWORD64)this, a1, a2, a3); }
	void GetPlayerViewPointNoModifiers(FVector& a1, FRotator& a2, bool a3, bool a4) { static_cast<void(_cdecl*)(DWORD64, FVector&, FRotator&, bool, bool)>(GetAddress("AShooterPlayerController", "GetPlayerViewPointNoModifiers"))((DWORD64)this, a1, a2, a3, a4); }
	bool HasRadio(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "HasRadio"))((DWORD64)this, a1); }
	bool HasSameRadioFrequency(AShooterPlayerController* a1, unsigned int& a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, unsigned int&)>(GetAddress("AShooterPlayerController", "HasSameRadioFrequency"))((DWORD64)this, a1, a2); }
	TArray<unsigned int, FDefaultAllocator> GetRadioFrequencies() { return static_cast<TArray<unsigned int, FDefaultAllocator>(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GetRadioFrequencies"))((DWORD64)this); }
	bool CanCommunicateVoiceWithRadio(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterPlayerController", "CanCommunicateVoiceWithRadio"))((DWORD64)this, a1); }
	bool GiveItem(const FString& a1, int a2, float a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, const FString&, int, float, bool)>(GetAddress("AShooterPlayerController", "GiveItem"))((DWORD64)this, a1, a2, a3, a4); }
	bool GiveItemNum(int a1, int a2, float a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, int, int, float, bool)>(GetAddress("AShooterPlayerController", "GiveItemNum"))((DWORD64)this, a1, a2, a3, a4); }
	void ClientOnAddedItemsToAllClustersInventory(bool a1, const FString& a2, const TArray<int, FDefaultAllocator>& a3) { static_cast<void(_cdecl*)(DWORD64, bool, const FString&, const TArray<int, FDefaultAllocator>&)>(GetAddress("AShooterPlayerController", "ClientOnAddedItemsToAllClustersInventory"))((DWORD64)this, a1, a2, a3); }
	void OnAddedItemsToAllClustersInventory(bool a1, const FString& a2, const TArray<int, FDefaultAllocator>& a3) { static_cast<void(_cdecl*)(DWORD64, bool, const FString&, const TArray<int, FDefaultAllocator>&)>(GetAddress("AShooterPlayerController", "OnAddedItemsToAllClustersInventory"))((DWORD64)this, a1, a2, a3); }
	bool AddItemToAllClustersInventory(FString a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, FString, int)>(GetAddress("AShooterPlayerController", "AddItemToAllClustersInventory"))((DWORD64)this, a1, a2); }
	void OnCurrentCharacterAndItemsUploaded(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "OnCurrentCharacterAndItemsUploaded"))((DWORD64)this, a1); }
	void OnRepeatUseHeldTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "OnRepeatUseHeldTimer"))((DWORD64)this); }
	void AdminCheat(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "AdminCheat"))((DWORD64)this, a1); }
	void Cheat(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "Cheat"))((DWORD64)this, a1); }
	void CheckRequestSpectator(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "CheckRequestSpectator"))((DWORD64)this, a1); }
	void EnableCheats(const FString a1) { static_cast<void(_cdecl*)(DWORD64, const FString)>(GetAddress("AShooterPlayerController", "EnableCheats"))((DWORD64)this, a1); }
	void CheckCheatsPassword(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "CheckCheatsPassword"))((DWORD64)this, a1); }
	void ClientNotifyPlayerDeathReason(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "ClientNotifyPlayerDeathReason"))((DWORD64)this, a1); }
	void ClientNotifyMessageOfTheDay(const FString& a1, float a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, float)>(GetAddress("AShooterPlayerController", "ClientNotifyMessageOfTheDay"))((DWORD64)this, a1, a2); }
	void ClientNotifyPlayerKill(AActor* a1, APawn* a2) { static_cast<void(_cdecl*)(DWORD64, AActor*, APawn*)>(GetAddress("AShooterPlayerController", "ClientNotifyPlayerKill"))((DWORD64)this, a1, a2); }
	void ClientNotifyDinoKill(APrimalDinoCharacter* a1, APawn* a2) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*, APawn*)>(GetAddress("AShooterPlayerController", "ClientNotifyDinoKill"))((DWORD64)this, a1, a2); }
	void ClientNotifyDinoDeath(const FString& a1, const FString& a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&, bool)>(GetAddress("AShooterPlayerController", "ClientNotifyDinoDeath"))((DWORD64)this, a1, a2, a3); }
	void ClientNotifyRespawned_Implementation(APawn* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, APawn*, bool)>(GetAddress("AShooterPlayerController", "ClientNotifyRespawned_Implementation"))((DWORD64)this, a1, a2); }
	void ReportSpawnManagers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ReportSpawnManagers"))((DWORD64)this); }
	void ReportLeastSpawnManagers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ReportLeastSpawnManagers"))((DWORD64)this); }
	void FlushLevelStreaming() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "FlushLevelStreaming"))((DWORD64)this); }
	void ToggleHUDHidden() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ToggleHUDHidden"))((DWORD64)this); }
	void ForceCraftPressed() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ForceCraftPressed"))((DWORD64)this); }
	void ForceCraftReleased() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ForceCraftReleased"))((DWORD64)this); }
	void SetPlayerPos(float a1, float a2, float a3) { static_cast<void(_cdecl*)(DWORD64, float, float, float)>(GetAddress("AShooterPlayerController", "SetPlayerPos"))((DWORD64)this, a1, a2, a3); }
	void ServerAddItemToSteamInventory(int a1, int a2) { static_cast<void(_cdecl*)(DWORD64, int, int)>(GetAddress("AShooterPlayerController", "ServerAddItemToSteamInventory"))((DWORD64)this, a1, a2); }
	void ClientRemoveItemFromSteamInventory(const TArray<unsigned __int64, FDefaultAllocator>& a1, int a2) { static_cast<void(_cdecl*)(DWORD64, const TArray<unsigned __int64, FDefaultAllocator>&, int)>(GetAddress("AShooterPlayerController", "ClientRemoveItemFromSteamInventory"))((DWORD64)this, a1, a2); }
	void ClientShowPaintingUI(UObject* a1) { static_cast<void(_cdecl*)(DWORD64, UObject*)>(GetAddress("AShooterPlayerController", "ClientShowPaintingUI"))((DWORD64)this, a1); }
	void RefreshSteamInventory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "RefreshSteamInventory"))((DWORD64)this); }
	void OnConsumeItemFinished(bool a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, bool, unsigned __int64)>(GetAddress("AShooterPlayerController", "OnConsumeItemFinished"))((DWORD64)this, a1, a2); }
	void OnAddItemFinished(bool a1, TArray<unsigned __int64, FDefaultAllocator> a2, unsigned __int64 a3) { static_cast<void(_cdecl*)(DWORD64, bool, TArray<unsigned __int64, FDefaultAllocator>, unsigned __int64)>(GetAddress("AShooterPlayerController", "OnAddItemFinished"))((DWORD64)this, a1, a2, a3); }
	void ClientFailedToAddItemFromArkInventory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ClientFailedToAddItemFromArkInventory"))((DWORD64)this); }
	void OnRefreshSteamInventoryFinished(bool a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, bool, unsigned __int64)>(GetAddress("AShooterPlayerController", "OnRefreshSteamInventoryFinished"))((DWORD64)this, a1, a2); }
	void OnServerRefreshSteamInventoryFinished(bool a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, bool, unsigned __int64)>(GetAddress("AShooterPlayerController", "OnServerRefreshSteamInventoryFinished"))((DWORD64)this, a1, a2); }
	void OnRefreshSteamInventoryToCheckConsumeFinished(bool a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, bool, unsigned __int64)>(GetAddress("AShooterPlayerController", "OnRefreshSteamInventoryToCheckConsumeFinished"))((DWORD64)this, a1, a2); }
	void ServerRefreshSteamInventoryForRemove() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ServerRefreshSteamInventoryForRemove"))((DWORD64)this); }
	void ServerRefreshSteamInventoryToCheckConsume() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ServerRefreshSteamInventoryToCheckConsume"))((DWORD64)this); }
	void CloseSteamStatusScene() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "CloseSteamStatusScene"))((DWORD64)this); }
	void ServerTakeItemFromArkInventoryAfterRefresh() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ServerTakeItemFromArkInventoryAfterRefresh"))((DWORD64)this); }
	void LoadLocalPlayerArkData() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "LoadLocalPlayerArkData"))((DWORD64)this); }
	void DownloadTransferredPlayerCharacter() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "DownloadTransferredPlayerCharacter"))((DWORD64)this); }
	void ClientOnEndDownloadTransferredPlayerCharacter(bool a1, int a2, const FString& a3) { static_cast<void(_cdecl*)(DWORD64, bool, int, const FString&)>(GetAddress("AShooterPlayerController", "ClientOnEndDownloadTransferredPlayerCharacter"))((DWORD64)this, a1, a2, a3); }
	void ToggleSpeaking(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "ToggleSpeaking"))((DWORD64)this, a1); }
	void ForceUnstasisAtLocation(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("AShooterPlayerController", "ForceUnstasisAtLocation"))((DWORD64)this, a1); }
	void SetKickedNotification(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("AShooterPlayerController", "SetKickedNotification"))((DWORD64)this, a1); }
	void FinalFlushLevelStreaming() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "FinalFlushLevelStreaming"))((DWORD64)this); }
	void ClientNotifyAdmin() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ClientNotifyAdmin"))((DWORD64)this); }
	void ClientNotifyListenServerOutOfRange() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ClientNotifyListenServerOutOfRange"))((DWORD64)this); }
	void CheckForPlayerInventory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "CheckForPlayerInventory"))((DWORD64)this); }
	void ChangeState(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("AShooterPlayerController", "ChangeState"))((DWORD64)this, a1); }
	void GiveActorToMe(AActor* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, AActor*, bool)>(GetAddress("AShooterPlayerController", "GiveActorToMe"))((DWORD64)this, a1, a2); }
	bool IsSpectator() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "IsSpectator"))((DWORD64)this); }
	void PrintColors() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "PrintColors"))((DWORD64)this); }
	void HideRiders(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "HideRiders"))((DWORD64)this, a1); }
	FString* ConsoleCommand(FString* result, const FString& a1, bool a2) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, const FString&, bool)>(GetAddress("AShooterPlayerController", "ConsoleCommand"))((DWORD64)this, result, a1, a2); }
	void ClientFailedRemoveSaddle() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ClientFailedRemoveSaddle"))((DWORD64)this); }
	void ServerRemovePassenger() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ServerRemovePassenger"))((DWORD64)this); }
	bool GiveSlotItemNum(int a1, int a2, int a3) { return static_cast<bool(_cdecl*)(DWORD64, int, int, int)>(GetAddress("AShooterPlayerController", "GiveSlotItemNum"))((DWORD64)this, a1, a2, a3); }
	bool GiveSlotItem(const FString& a1, int a2, int a3) { return static_cast<bool(_cdecl*)(DWORD64, const FString&, int, int)>(GetAddress("AShooterPlayerController", "GiveSlotItem"))((DWORD64)this, a1, a2, a3); }
	void GiveColors(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "GiveColors"))((DWORD64)this, a1); }
	void SetAdminIcon(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "SetAdminIcon"))((DWORD64)this, a1); }
	void SpawnPlayerCameraManager() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "SpawnPlayerCameraManager"))((DWORD64)this); }
	void NotifyTribeWarStatus(const FString& a1, int a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, int)>(GetAddress("AShooterPlayerController", "NotifyTribeWarStatus"))((DWORD64)this, a1, a2); }
	void ClientReceiveTribeLog(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterPlayerController", "ClientReceiveTribeLog"))((DWORD64)this, a1); }
	FString* GetPlayerCharacterName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("AShooterPlayerController", "GetPlayerCharacterName"))((DWORD64)this, res); }
	bool UseTribeGroupRanks() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "UseTribeGroupRanks"))((DWORD64)this); }
	bool IsTribeAdmin() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "IsTribeAdmin"))((DWORD64)this); }
	void OnTransferCharacterConfirmationDialogClosed(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterPlayerController", "OnTransferCharacterConfirmationDialogClosed"))((DWORD64)this, a1); }
	void ShowTransferCharacterConfirmationDialog() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "ShowTransferCharacterConfirmationDialog"))((DWORD64)this); }
	void GetAudioListenerPosition(FVector& a1, FVector& a2, FVector& a3) { static_cast<void(_cdecl*)(DWORD64, FVector&, FVector&, FVector&)>(GetAddress("AShooterPlayerController", "GetAudioListenerPosition"))((DWORD64)this, a1, a2, a3); }
	void UnlockExplorerNote(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterPlayerController", "UnlockExplorerNote"))((DWORD64)this, a1); }
	APawn* GetResponsibleDamager(AActor* a1) { return static_cast<APawn*(_cdecl*)(DWORD64, AActor*)>(GetAddress("AShooterPlayerController", "GetResponsibleDamager"))((DWORD64)this, a1); }
	void UnlockEmote(FName a1) { static_cast<void(_cdecl*)(DWORD64, FName)>(GetAddress("AShooterPlayerController", "UnlockEmote"))((DWORD64)this, a1); }
	bool IsEmoteUnlocked(FName a1) { return static_cast<bool(_cdecl*)(DWORD64, FName)>(GetAddress("AShooterPlayerController", "IsEmoteUnlocked"))((DWORD64)this, a1); }
	int GetCurrentMultiUseWheelCategory() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("AShooterPlayerController", "GetCurrentMultiUseWheelCategory"))((DWORD64)this); }
};

// Character

struct ACharacter : APawn
{
	void SetReplicatedMovementMode(unsigned char a0) { *(unsigned char*)GetAddress(this, "ACharacter", "ReplicatedMovementMode") = a0; };
	unsigned char GetReplicatedMovementMode() const { return *(unsigned char*)GetAddress(this, "ACharacter", "ReplicatedMovementMode"); };
	void SetbInBaseReplication(bool a0) { *(bool*)GetAddress(this, "ACharacter", "bInBaseReplication") = a0; };
	bool GetbInBaseReplication() const { return *(bool*)GetAddress(this, "ACharacter", "bInBaseReplication"); };
	void SetLeftDynamicActorBaseTime(float a0) { *(float*)GetAddress(this, "ACharacter", "LeftDynamicActorBaseTime") = a0; };
	float GetLeftDynamicActorBaseTime() const { return *(float*)GetAddress(this, "ACharacter", "LeftDynamicActorBaseTime"); };
	void SetCrouchedEyeHeight(float a0) { *(float*)GetAddress(this, "ACharacter", "CrouchedEyeHeight") = a0; };
	float GetCrouchedEyeHeight() const { return *(float*)GetAddress(this, "ACharacter", "CrouchedEyeHeight"); };
	void SetProneEyeHeight(float a0) { *(float*)GetAddress(this, "ACharacter", "ProneEyeHeight") = a0; };
	float GetProneEyeHeight() const { return *(float*)GetAddress(this, "ACharacter", "ProneEyeHeight"); };
	void SetJumpKeyHoldTime(float a0) { *(float*)GetAddress(this, "ACharacter", "JumpKeyHoldTime") = a0; };
	float GetJumpKeyHoldTime() const { return *(float*)GetAddress(this, "ACharacter", "JumpKeyHoldTime"); };
	void SetJumpMaxHoldTime(float a0) { *(float*)GetAddress(this, "ACharacter", "JumpMaxHoldTime") = a0; };
	float GetJumpMaxHoldTime() const { return *(float*)GetAddress(this, "ACharacter", "JumpMaxHoldTime"); };

	// Functions

	bool IsSubmerged(bool a1, bool a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("ACharacter", "IsSubmerged"))((DWORD64)this, a1, a2, a3); }
	float GetWaterSubmergedDepthThreshold() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "GetWaterSubmergedDepthThreshold"))((DWORD64)this); }
	bool UseLowQualityMovementTick() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "UseLowQualityMovementTick"))((DWORD64)this); }
	bool HasReachedDestination(const FVector& a1) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&)>(GetAddress("ACharacter", "HasReachedDestination"))((DWORD64)this, a1); }
	bool IsRagdolled() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "IsRagdolled"))((DWORD64)this); }
	bool UseHighQualityMovement() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "UseHighQualityMovement"))((DWORD64)this); }
	bool ForceAllowBackwardsMovement() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "ForceAllowBackwardsMovement"))((DWORD64)this); }
	bool ForceAllowAccelerationRotationWhenFalling() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "ForceAllowAccelerationRotationWhenFalling"))((DWORD64)this); }
	bool AnimationPreventsInput() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "AnimationPreventsInput"))((DWORD64)this); }
	bool ShouldDisableControllerDesiredRotation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "ShouldDisableControllerDesiredRotation"))((DWORD64)this); }
	bool IsBasedOnDynamicActor() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "IsBasedOnDynamicActor"))((DWORD64)this); }
	float ModifyAirControl(float a1) { return static_cast<float(_cdecl*)(DWORD64, float)>(GetAddress("ACharacter", "ModifyAirControl"))((DWORD64)this, a1); }
	void BaseChange() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "BaseChange"))((DWORD64)this); }
	void OnRep_ReplicatedBasedMovement() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "OnRep_ReplicatedBasedMovement"))((DWORD64)this); }
	void NotifyBumpedPawn(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("ACharacter", "NotifyBumpedPawn"))((DWORD64)this, a1); }
	void NotifyBumpedStructure(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("ACharacter", "NotifyBumpedStructure"))((DWORD64)this, a1); }
	bool ShouldReplicateRotPitch() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "ShouldReplicateRotPitch"))((DWORD64)this); }
	void OnRep_IsCrouched() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "OnRep_IsCrouched"))((DWORD64)this); }
	void OnRep_IsProne() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "OnRep_IsProne"))((DWORD64)this); }
	void TeleportSucceeded(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("ACharacter", "TeleportSucceeded"))((DWORD64)this, a1); }
	void ClearCrossLevelReferences() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "ClearCrossLevelReferences"))((DWORD64)this); }
	void PreNetReceive() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "PreNetReceive"))((DWORD64)this); }
	void PostNetReceive() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "PostNetReceive"))((DWORD64)this); }
	void OnRep_ReplicatedMovement() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "OnRep_ReplicatedMovement"))((DWORD64)this); }
	void PostNetReceiveLocationAndRotation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "PostNetReceiveLocationAndRotation"))((DWORD64)this); }
	void GetSimpleCollisionCylinder(float& a1, float& a2) { static_cast<void(_cdecl*)(DWORD64, float&, float&)>(GetAddress("ACharacter", "GetSimpleCollisionCylinder"))((DWORD64)this, a1, a2); }
	void ApplyWorldOffset(const FVector& a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, bool)>(GetAddress("ACharacter", "ApplyWorldOffset"))((DWORD64)this, a1, a2); }
	void TornOff() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "TornOff"))((DWORD64)this); }
	void PostInitializeComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "PostInitializeComponents"))((DWORD64)this); }
	float GetDefaultHalfHeight() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "GetDefaultHalfHeight"))((DWORD64)this); }
	void RecalculateBaseEyeHeight() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "RecalculateBaseEyeHeight"))((DWORD64)this); }
	void UpdateNavigationRelevance() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "UpdateNavigationRelevance"))((DWORD64)this); }
	void ApplyDamageMomentum(float a1, const FDamageEvent& a2, APawn* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const FDamageEvent&, APawn*, AActor*)>(GetAddress("ACharacter", "ApplyDamageMomentum"))((DWORD64)this, a1, a2, a3, a4); }
	void Jump() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "Jump"))((DWORD64)this); }
	void StopJumping() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "StopJumping"))((DWORD64)this); }
	bool CanJump() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "CanJump"))((DWORD64)this); }
	bool IsJumpProvidingForce() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "IsJumpProvidingForce"))((DWORD64)this); }
	bool IsJumping() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "IsJumping"))((DWORD64)this); }
	bool DoJump(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("ACharacter", "DoJump"))((DWORD64)this, a1); }
	void LaunchCharacter(FVector a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, FVector, bool, bool)>(GetAddress("ACharacter", "LaunchCharacter"))((DWORD64)this, a1, a2, a3); }
	void OnLaunched(FVector a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, FVector, bool, bool)>(GetAddress("ACharacter", "OnLaunched"))((DWORD64)this, a1, a2, a3); }
	void OnJumped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "OnJumped"))((DWORD64)this); }
	void Falling() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "Falling"))((DWORD64)this); }
	void Crouch(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("ACharacter", "Crouch"))((DWORD64)this, a1); }
	void UnCrouch(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("ACharacter", "UnCrouch"))((DWORD64)this, a1); }
	void Prone(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("ACharacter", "Prone"))((DWORD64)this, a1); }
	void UnProne(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("ACharacter", "UnProne"))((DWORD64)this, a1); }
	bool CanProne() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "CanProne"))((DWORD64)this); }
	bool CanCrouch() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "CanCrouch"))((DWORD64)this); }
	void OnEndCrouch(float a1, float a2) { static_cast<void(_cdecl*)(DWORD64, float, float)>(GetAddress("ACharacter", "OnEndCrouch"))((DWORD64)this, a1, a2); }
	void K2_OnEndCrouch(float a1, float a2) { static_cast<void(_cdecl*)(DWORD64, float, float)>(GetAddress("ACharacter", "K2_OnEndCrouch"))((DWORD64)this, a1, a2); }
	void OnStartCrouch(float a1, float a2) { static_cast<void(_cdecl*)(DWORD64, float, float)>(GetAddress("ACharacter", "OnStartCrouch"))((DWORD64)this, a1, a2); }
	void K2_OnStartCrouch(float a1, float a2) { static_cast<void(_cdecl*)(DWORD64, float, float)>(GetAddress("ACharacter", "K2_OnStartCrouch"))((DWORD64)this, a1, a2); }
	void CheckJumpInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("ACharacter", "CheckJumpInput"))((DWORD64)this, a1); }
	void ClearJumpInput() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "ClearJumpInput"))((DWORD64)this); }
	float GetJumpMaxHoldTime() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "GetJumpMaxHoldTime"))((DWORD64)this); }
	void UpdateFromCompressedFlags(unsigned char a1) { static_cast<void(_cdecl*)(DWORD64, unsigned char)>(GetAddress("ACharacter", "UpdateFromCompressedFlags"))((DWORD64)this, a1); }
	void UpdateSimulatedPosition(const FVector& a1, const FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, const FRotator&)>(GetAddress("ACharacter", "UpdateSimulatedPosition"))((DWORD64)this, a1, a2); }
	bool ModifyInputAcceleration(FVector& a1) { return static_cast<bool(_cdecl*)(DWORD64, FVector&)>(GetAddress("ACharacter", "ModifyInputAcceleration"))((DWORD64)this, a1); }
	float GetRotationRateModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "GetRotationRateModifier"))((DWORD64)this); }
	unsigned int GetUniqueNetIdTypeHash() { return static_cast<unsigned int(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "GetUniqueNetIdTypeHash"))((DWORD64)this); }
	void OnVoiceTalkingStateChanged(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("ACharacter", "OnVoiceTalkingStateChanged"))((DWORD64)this, a1); }
	void WasPushed(ACharacter* a1) { static_cast<void(_cdecl*)(DWORD64, ACharacter*)>(GetAddress("ACharacter", "WasPushed"))((DWORD64)this, a1); }
	bool SimulatedPreventBasedPhysics() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "SimulatedPreventBasedPhysics"))((DWORD64)this); }
	bool ShouldAttackStopMoveCollapsing() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "ShouldAttackStopMoveCollapsing"))((DWORD64)this); }
	float GetSpeedModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("ACharacter", "GetSpeedModifier"))((DWORD64)this); }
	bool TeleportTo(const FVector& a1, const FRotator& a2, bool a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, const FRotator&, bool, bool)>(GetAddress("ACharacter", "TeleportTo"))((DWORD64)this, a1, a2, a3, a4); }
	void ModifyDesiredRotation(FRotator& a1) { static_cast<void(_cdecl*)(DWORD64, FRotator&)>(GetAddress("ACharacter", "ModifyDesiredRotation"))((DWORD64)this, a1); }
};

struct APrimalCharacter : ACharacter
{
	void SetOldLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "OldLocation") = a0; };
	FVector GetOldLocation() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "OldLocation"); };
	void SetOldRotation(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalCharacter", "OldRotation") = a0; };
	FRotator GetOldRotation() const { return *(FRotator*)GetAddress(this, "APrimalCharacter", "OldRotation"); };
	void SetEffectorInterpSpeed(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "EffectorInterpSpeed") = a0; };
	float GetEffectorInterpSpeed() const { return *(float*)GetAddress(this, "APrimalCharacter", "EffectorInterpSpeed"); };
	void SetHalfLegLength(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "HalfLegLength") = a0; };
	float GetHalfLegLength() const { return *(float*)GetAddress(this, "APrimalCharacter", "HalfLegLength"); };
	UPrimalCharacterStatusComponent* GetMyCharacterStatusComponent() const { return *(UPrimalCharacterStatusComponent**)GetAddress(this, "APrimalCharacter", "MyCharacterStatusComponent"); };
	void SetTwoLeggedVirtualPointDistFactor(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "TwoLeggedVirtualPointDistFactor") = a0; };
	float GetTwoLeggedVirtualPointDistFactor() const { return *(float*)GetAddress(this, "APrimalCharacter", "TwoLeggedVirtualPointDistFactor"); };
	void SetFullIKDistance(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "FullIKDistance") = a0; };
	float GetFullIKDistance() const { return *(float*)GetAddress(this, "APrimalCharacter", "FullIKDistance"); };
	void SetSimpleIkRate(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "SimpleIkRate") = a0; };
	float GetSimpleIkRate() const { return *(float*)GetAddress(this, "APrimalCharacter", "SimpleIkRate"); };
	void SetGroundCheckExtent(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "GroundCheckExtent") = a0; };
	FVector GetGroundCheckExtent() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "GroundCheckExtent"); };
	void SetLastForceAimedCharactersTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastForceAimedCharactersTime") = a0; };
	double GetLastForceAimedCharactersTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastForceAimedCharactersTime"); };
	//void SetBuffs(TArray<APrimalBuff *, FDefaultAllocator> a0) { *(TArray<APrimalBuff *, FDefaultAllocator>*)GetAddress(this, "APrimalCharacter", "Buffs") = a0; };
	//TArray<APrimalBuff *, FDefaultAllocator> GetBuffs() const { return *(TArray<APrimalBuff *, FDefaultAllocator>*)GetAddress(this, "APrimalCharacter", "Buffs"); };
	void SetTribeName(FString a0) { *(FString*)GetAddress(this, "APrimalCharacter", "TribeName") = a0; };
	FString GetTribeName() const { return *(FString*)GetAddress(this, "APrimalCharacter", "TribeName"); };
	void SetWaterSubmergedDepthThreshold(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "WaterSubmergedDepthThreshold") = a0; };
	float GetWaterSubmergedDepthThreshold() const { return *(float*)GetAddress(this, "APrimalCharacter", "WaterSubmergedDepthThreshold"); };
	void SetProneWaterSubmergedDepthThreshold(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ProneWaterSubmergedDepthThreshold") = a0; };
	float GetProneWaterSubmergedDepthThreshold() const { return *(float*)GetAddress(this, "APrimalCharacter", "ProneWaterSubmergedDepthThreshold"); };
	void SetSubmergedWaterMovementMode(TEnumAsByte<enum EMovementMode> a0) { *(TEnumAsByte<enum EMovementMode>*)GetAddress(this, "APrimalCharacter", "SubmergedWaterMovementMode") = a0; };
	TEnumAsByte<enum EMovementMode> GetSubmergedWaterMovementMode() const { return *(TEnumAsByte<enum EMovementMode>*)GetAddress(this, "APrimalCharacter", "SubmergedWaterMovementMode"); };
	void SetUnSubmergedWaterMovementMode(TEnumAsByte<enum EMovementMode> a0) { *(TEnumAsByte<enum EMovementMode>*)GetAddress(this, "APrimalCharacter", "UnSubmergedWaterMovementMode") = a0; };
	TEnumAsByte<enum EMovementMode> GetUnSubmergedWaterMovementMode() const { return *(TEnumAsByte<enum EMovementMode>*)GetAddress(this, "APrimalCharacter", "UnSubmergedWaterMovementMode"); };
	void SetDragBoneName(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "DragBoneName") = a0; };
	FName GetDragBoneName() const { return *(FName*)GetAddress(this, "APrimalCharacter", "DragBoneName"); };
	void SetDragSocketName(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "DragSocketName") = a0; };
	FName GetDragSocketName() const { return *(FName*)GetAddress(this, "APrimalCharacter", "DragSocketName"); };
	void SetMaxDragDistance(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MaxDragDistance") = a0; };
	float GetMaxDragDistance() const { return *(float*)GetAddress(this, "APrimalCharacter", "MaxDragDistance"); };
	void SetMaxDragDistanceTimeout(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MaxDragDistanceTimeout") = a0; };
	float GetMaxDragDistanceTimeout() const { return *(float*)GetAddress(this, "APrimalCharacter", "MaxDragDistanceTimeout"); };
	void SetBonesToIngoreWhileDragged(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalCharacter", "BonesToIngoreWhileDragged") = a0; };
	TArray<FName, FDefaultAllocator> GetBonesToIngoreWhileDragged() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalCharacter", "BonesToIngoreWhileDragged"); };
	void SetPreviewCameraMaxZoomMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "PreviewCameraMaxZoomMultiplier") = a0; };
	float GetPreviewCameraMaxZoomMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "PreviewCameraMaxZoomMultiplier"); };
	void SetPreviewCameraDefaultZoomMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "PreviewCameraDefaultZoomMultiplier") = a0; };
	float GetPreviewCameraDefaultZoomMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "PreviewCameraDefaultZoomMultiplier"); };
	void SetPreviewCameraDistanceScaleFactor(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "PreviewCameraDistanceScaleFactor") = a0; };
	float GetPreviewCameraDistanceScaleFactor() const { return *(float*)GetAddress(this, "APrimalCharacter", "PreviewCameraDistanceScaleFactor"); };
	APrimalCharacter* GetDraggedCharacter() const { return *(APrimalCharacter**)GetAddress(this, "APrimalCharacter", "DraggedCharacter"); };
	APrimalCharacter* GetDraggingCharacter() const { return *(APrimalCharacter**)GetAddress(this, "APrimalCharacter", "DraggingCharacter"); };
	FTransform GetLocalDraggedCharacterTransform() const { return *(FTransform*)GetAddress(this, "APrimalCharacter", "LocalDraggedCharacterTransform"); };
	void SetStartDraggingTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "StartDraggingTime") = a0; };
	double GetStartDraggingTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "StartDraggingTime"); };
	void SetLastDragUpdateTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastDragUpdateTime") = a0; };
	double GetLastDragUpdateTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastDragUpdateTime"); };
	void SetImmobilizationActor(AActor* a0) { *(AActor**)GetAddress(this, "APrimalCharacter", "ImmobilizationActor") = a0; };
	AActor* GetImmobilizationActor() const { return *(AActor**)GetAddress(this, "APrimalCharacter", "ImmobilizationActor"); };
	void SetBPTimerServerMin(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BPTimerServerMin") = a0; };
	float GetBPTimerServerMin() const { return *(float*)GetAddress(this, "APrimalCharacter", "BPTimerServerMin"); };
	void SetBPTimerServerMax(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BPTimerServerMax") = a0; };
	float GetBPTimerServerMax() const { return *(float*)GetAddress(this, "APrimalCharacter", "BPTimerServerMax"); };
	void SetBPTimerNonDedicatedMin(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BPTimerNonDedicatedMin") = a0; };
	float GetBPTimerNonDedicatedMin() const { return *(float*)GetAddress(this, "APrimalCharacter", "BPTimerNonDedicatedMin"); };
	void SetBPTimerNonDedicatedMax(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BPTimerNonDedicatedMax") = a0; };
	float GetBPTimerNonDedicatedMax() const { return *(float*)GetAddress(this, "APrimalCharacter", "BPTimerNonDedicatedMax"); };
	void SetNextBPTimerServer(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "NextBPTimerServer") = a0; };
	double GetNextBPTimerServer() const { return *(double*)GetAddress(this, "APrimalCharacter", "NextBPTimerServer"); };
	void SetNextBPTimerNonDedicated(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "NextBPTimerNonDedicated") = a0; };
	double GetNextBPTimerNonDedicated() const { return *(double*)GetAddress(this, "APrimalCharacter", "NextBPTimerNonDedicated"); };
	AWeakObjectPtr<APrimalDinoCharacter> GetCarryingDino() const { return *(AWeakObjectPtr<APrimalDinoCharacter>*)GetAddress(this, "APrimalCharacter", "CarryingDino"); };
	void SetDediOverrideCapsuleCollisionProfileName(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "DediOverrideCapsuleCollisionProfileName") = a0; };
	FName GetDediOverrideCapsuleCollisionProfileName() const { return *(FName*)GetAddress(this, "APrimalCharacter", "DediOverrideCapsuleCollisionProfileName"); };
	void SetDediOverrideMeshCollisionProfileName(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "DediOverrideMeshCollisionProfileName") = a0; };
	FName GetDediOverrideMeshCollisionProfileName() const { return *(FName*)GetAddress(this, "APrimalCharacter", "DediOverrideMeshCollisionProfileName"); };
	void SetSnaredFromSocket(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "SnaredFromSocket") = a0; };
	FName GetSnaredFromSocket() const { return *(FName*)GetAddress(this, "APrimalCharacter", "SnaredFromSocket"); };
	void SetDamageNotifyTeamAggroMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "DamageNotifyTeamAggroMultiplier") = a0; };
	float GetDamageNotifyTeamAggroMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "DamageNotifyTeamAggroMultiplier"); };
	void SetDamageNotifyTeamAggroRange(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "DamageNotifyTeamAggroRange") = a0; };
	float GetDamageNotifyTeamAggroRange() const { return *(float*)GetAddress(this, "APrimalCharacter", "DamageNotifyTeamAggroRange"); };
	void SetDamageNotifyTeamAggroRangeFalloff(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "DamageNotifyTeamAggroRangeFalloff") = a0; };
	float GetDamageNotifyTeamAggroRangeFalloff() const { return *(float*)GetAddress(this, "APrimalCharacter", "DamageNotifyTeamAggroRangeFalloff"); };
	void SetReplicatedCurrentHealth(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedCurrentHealth") = a0; };
	float GetReplicatedCurrentHealth() const { return *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedCurrentHealth"); };
	void SetReplicatedMaxHealth(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedMaxHealth") = a0; };
	float GetReplicatedMaxHealth() const { return *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedMaxHealth"); };
	void SetReplicatedCurrentTorpor(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedCurrentTorpor") = a0; };
	float GetReplicatedCurrentTorpor() const { return *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedCurrentTorpor"); };
	void SetReplicatedMaxTorpor(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedMaxTorpor") = a0; };
	float GetReplicatedMaxTorpor() const { return *(float*)GetAddress(this, "APrimalCharacter", "ReplicatedMaxTorpor"); };
	void SetDragOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "DragOffset") = a0; };
	FVector GetDragOffset() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "DragOffset"); };
	void SetLastGrapHookPullingOwner(AShooterCharacter* a0) { *(AShooterCharacter**)GetAddress(this, "APrimalCharacter", "LastGrapHookPullingOwner") = a0; };
	AShooterCharacter* GetLastGrapHookPullingOwner() const { return *(AShooterCharacter**)GetAddress(this, "APrimalCharacter", "LastGrapHookPullingOwner"); };
	void SetLastIkUpdateTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastIkUpdateTime") = a0; };
	double GetLastIkUpdateTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastIkUpdateTime"); };
	void SetLastUpdatedAimOffsetsTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastUpdatedAimOffsetsTime") = a0; };
	double GetLastUpdatedAimOffsetsTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastUpdatedAimOffsetsTime"); };
	void SetMeshPreRagdollRelativeLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "MeshPreRagdollRelativeLocation") = a0; };
	FVector GetMeshPreRagdollRelativeLocation() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "MeshPreRagdollRelativeLocation"); };
	void SetMeshPreRagdollRelativeRotation(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalCharacter", "MeshPreRagdollRelativeRotation") = a0; };
	FRotator GetMeshPreRagdollRelativeRotation() const { return *(FRotator*)GetAddress(this, "APrimalCharacter", "MeshPreRagdollRelativeRotation"); };
	void SetDraggingBodyIndex(int a0) { *(int*)GetAddress(this, "APrimalCharacter", "DraggingBodyIndex") = a0; };
	int GetDraggingBodyIndex() const { return *(int*)GetAddress(this, "APrimalCharacter", "DraggingBodyIndex"); };
	void SetDraggedBoneIndex(int a0) { *(int*)GetAddress(this, "APrimalCharacter", "DraggedBoneIndex") = a0; };
	int GetDraggedBoneIndex() const { return *(int*)GetAddress(this, "APrimalCharacter", "DraggedBoneIndex"); };
	void SetRunningSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "RunningSpeedModifier") = a0; };
	float GetRunningSpeedModifier() const { return *(float*)GetAddress(this, "APrimalCharacter", "RunningSpeedModifier"); };
	void SetLowHealthPercentage(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "LowHealthPercentage") = a0; };
	float GetLowHealthPercentage() const { return *(float*)GetAddress(this, "APrimalCharacter", "LowHealthPercentage"); };
	void SetBaseTurnRate(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BaseTurnRate") = a0; };
	float GetBaseTurnRate() const { return *(float*)GetAddress(this, "APrimalCharacter", "BaseTurnRate"); };
	void SetBaseLookUpRate(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BaseLookUpRate") = a0; };
	float GetBaseLookUpRate() const { return *(float*)GetAddress(this, "APrimalCharacter", "BaseLookUpRate"); };
	void SetMaxFallSpeed(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MaxFallSpeed") = a0; };
	float GetMaxFallSpeed() const { return *(float*)GetAddress(this, "APrimalCharacter", "MaxFallSpeed"); };
	void SetFallDamageMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "FallDamageMultiplier") = a0; };
	float GetFallDamageMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "FallDamageMultiplier"); };
	void SetCurrentCarriedYaw(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "CurrentCarriedYaw") = a0; };
	float GetCurrentCarriedYaw() const { return *(float*)GetAddress(this, "APrimalCharacter", "CurrentCarriedYaw"); };
	//APrimalStructureExplosiveTransGPS* GetCurrentTransponder() const { return *(APrimalStructureExplosiveTransGPS**)GetAddress(this, "APrimalCharacter", "CurrentTransponder"); };
	void SetTargetCarriedYaw(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "TargetCarriedYaw") = a0; };
	float GetTargetCarriedYaw() const { return *(float*)GetAddress(this, "APrimalCharacter", "TargetCarriedYaw"); };
	void SetServerTargetCarriedYaw(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ServerTargetCarriedYaw") = a0; };
	float GetServerTargetCarriedYaw() const { return *(float*)GetAddress(this, "APrimalCharacter", "ServerTargetCarriedYaw"); };
	AWeakObjectPtr<APrimalDinoCharacter> GetMountedDino() const { return *(AWeakObjectPtr<APrimalDinoCharacter>*)GetAddress(this, "APrimalCharacter", "MountedDino"); };
	void SetMountedDinoTime(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MountedDinoTime") = a0; };
	float GetMountedDinoTime() const { return *(float*)GetAddress(this, "APrimalCharacter", "MountedDinoTime"); };
	AWeakObjectPtr<APrimalDinoCharacter> GetPreviousMountedDino() const { return *(AWeakObjectPtr<APrimalDinoCharacter>*)GetAddress(this, "APrimalCharacter", "PreviousMountedDino"); };
	void SetLastForceFallCheckBaseLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "LastForceFallCheckBaseLocation") = a0; };
	FVector GetLastForceFallCheckBaseLocation() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "LastForceFallCheckBaseLocation"); };
	void SetLastHitWallSweepCheckLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "LastHitWallSweepCheckLocation") = a0; };
	FVector GetLastHitWallSweepCheckLocation() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "LastHitWallSweepCheckLocation"); };
	void SetLastTimeBasedMovementHadCurrentActor(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastTimeBasedMovementHadCurrentActor") = a0; };
	double GetLastTimeBasedMovementHadCurrentActor() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastTimeBasedMovementHadCurrentActor"); };
	void SetGrabWeightThreshold(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "GrabWeightThreshold") = a0; };
	float GetGrabWeightThreshold() const { return *(float*)GetAddress(this, "APrimalCharacter", "GrabWeightThreshold"); };
	void SetDragWeight(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "DragWeight") = a0; };
	float GetDragWeight() const { return *(float*)GetAddress(this, "APrimalCharacter", "DragWeight"); };
	void SetDescriptiveName(FString a0) { *(FString*)GetAddress(this, "APrimalCharacter", "DescriptiveName") = a0; };
	FString GetDescriptiveName() const { return *(FString*)GetAddress(this, "APrimalCharacter", "DescriptiveName"); };
	void SetKillXPBase(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "KillXPBase") = a0; };
	float GetKillXPBase() const { return *(float*)GetAddress(this, "APrimalCharacter", "KillXPBase"); };
	TArray<FName, FDefaultAllocator> GetReplicatedBones() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalCharacter", "ReplicatedBones"); };
	void SetRagdollReplicationInterval(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "RagdollReplicationInterval") = a0; };
	float GetRagdollReplicationInterval() const { return *(float*)GetAddress(this, "APrimalCharacter", "RagdollReplicationInterval"); };
	void SetClientRotationInterpSpeed(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ClientRotationInterpSpeed") = a0; };
	float GetClientRotationInterpSpeed() const { return *(float*)GetAddress(this, "APrimalCharacter", "ClientRotationInterpSpeed"); };
	void SetClientLocationInterpSpeed(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ClientLocationInterpSpeed") = a0; };
	float GetClientLocationInterpSpeed() const { return *(float*)GetAddress(this, "APrimalCharacter", "ClientLocationInterpSpeed"); };
	void SetMaxDragMovementSpeed(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MaxDragMovementSpeed") = a0; };
	float GetMaxDragMovementSpeed() const { return *(float*)GetAddress(this, "APrimalCharacter", "MaxDragMovementSpeed"); };
	void SetCurrentAimRot(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalCharacter", "CurrentAimRot") = a0; };
	FRotator GetCurrentAimRot() const { return *(FRotator*)GetAddress(this, "APrimalCharacter", "CurrentAimRot"); };
	void SetCurrentRootLoc(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "CurrentRootLoc") = a0; };
	FVector GetCurrentRootLoc() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "CurrentRootLoc"); };
	void SetLastYawSpeedWorldFrameCounter(int a0) { *(int*)GetAddress(this, "APrimalCharacter", "LastYawSpeedWorldFrameCounter") = a0; };
	int GetLastYawSpeedWorldFrameCounter() const { return *(int*)GetAddress(this, "APrimalCharacter", "LastYawSpeedWorldFrameCounter"); };
	void SetMeshPreRagdollCollisionProfileName(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "MeshPreRagdollCollisionProfileName") = a0; };
	FName GetMeshPreRagdollCollisionProfileName() const { return *(FName*)GetAddress(this, "APrimalCharacter", "MeshPreRagdollCollisionProfileName"); };
	void SetCapsulePreRagdollCollisionProfileName(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "CapsulePreRagdollCollisionProfileName") = a0; };
	FName GetCapsulePreRagdollCollisionProfileName() const { return *(FName*)GetAddress(this, "APrimalCharacter", "CapsulePreRagdollCollisionProfileName"); };
	UPrimalInventoryComponent* GetMyInventoryComponent() const { return *(UPrimalInventoryComponent**)GetAddress(this, "APrimalCharacter", "MyInventoryComponent"); };
	void SetLastRunningTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastRunningTime") = a0; };
	double GetLastRunningTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastRunningTime"); };
	void SetTPVCameraOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "TPVCameraOffset") = a0; };
	FVector GetTPVCameraOffset() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "TPVCameraOffset"); };
	void SetTPVCameraOffsetMultiplier(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "TPVCameraOffsetMultiplier") = a0; };
	FVector GetTPVCameraOffsetMultiplier() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "TPVCameraOffsetMultiplier"); };
	void SetTPVCameraOrgOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "TPVCameraOrgOffset") = a0; };
	FVector GetTPVCameraOrgOffset() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "TPVCameraOrgOffset"); };
	void SetLandedSoundMaxRange(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "LandedSoundMaxRange") = a0; };
	float GetLandedSoundMaxRange() const { return *(float*)GetAddress(this, "APrimalCharacter", "LandedSoundMaxRange"); };
	void SetFallingDamageHealthScaleBase(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "FallingDamageHealthScaleBase") = a0; };
	float GetFallingDamageHealthScaleBase() const { return *(float*)GetAddress(this, "APrimalCharacter", "FallingDamageHealthScaleBase"); };
	void SetFootstepsMaxRange(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "FootstepsMaxRange") = a0; };
	float GetFootstepsMaxRange() const { return *(float*)GetAddress(this, "APrimalCharacter", "FootstepsMaxRange"); };
	void SetMinTimeBetweenFootsteps(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MinTimeBetweenFootsteps") = a0; };
	float GetMinTimeBetweenFootsteps() const { return *(float*)GetAddress(this, "APrimalCharacter", "MinTimeBetweenFootsteps"); };
	void SetLastPlayedFootstepTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastPlayedFootstepTime") = a0; };
	double GetLastPlayedFootstepTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastPlayedFootstepTime"); };
	void SetMinTimeBetweenFootstepsRunning(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MinTimeBetweenFootstepsRunning") = a0; };
	float GetMinTimeBetweenFootstepsRunning() const { return *(float*)GetAddress(this, "APrimalCharacter", "MinTimeBetweenFootstepsRunning"); };
	void SetCorpseDestructionTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "CorpseDestructionTime") = a0; };
	double GetCorpseDestructionTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "CorpseDestructionTime"); };
	void SetCorpseLifespan(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "CorpseLifespan") = a0; };
	float GetCorpseLifespan() const { return *(float*)GetAddress(this, "APrimalCharacter", "CorpseLifespan"); };
	void SetOrbitCamRot(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalCharacter", "OrbitCamRot") = a0; };
	FRotator GetOrbitCamRot() const { return *(FRotator*)GetAddress(this, "APrimalCharacter", "OrbitCamRot"); };
	void SetOrbitCamZoom(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "OrbitCamZoom") = a0; };
	float GetOrbitCamZoom() const { return *(float*)GetAddress(this, "APrimalCharacter", "OrbitCamZoom"); };
	void SetLastTimeNotInFalling(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastTimeNotInFalling") = a0; };
	double GetLastTimeNotInFalling() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastTimeNotInFalling"); };
	void SetMaxCursorHUDDistance(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "MaxCursorHUDDistance") = a0; };
	float GetMaxCursorHUDDistance() const { return *(float*)GetAddress(this, "APrimalCharacter", "MaxCursorHUDDistance"); };
	void SetAddForwardVelocityOnJump(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "AddForwardVelocityOnJump") = a0; };
	float GetAddForwardVelocityOnJump() const { return *(float*)GetAddress(this, "APrimalCharacter", "AddForwardVelocityOnJump"); };
	void SetDeathActorTargetingOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "DeathActorTargetingOffset") = a0; };
	FVector GetDeathActorTargetingOffset() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "DeathActorTargetingOffset"); };
	void SetSocketOverrideTargetingLocation(FName a0) { *(FName*)GetAddress(this, "APrimalCharacter", "SocketOverrideTargetingLocation") = a0; };
	FName GetSocketOverrideTargetingLocation() const { return *(FName*)GetAddress(this, "APrimalCharacter", "SocketOverrideTargetingLocation"); };
	void SetLastFootPhysicalSurfaceCheckTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastFootPhysicalSurfaceCheckTime") = a0; };
	double GetLastFootPhysicalSurfaceCheckTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastFootPhysicalSurfaceCheckTime"); };
	void SetFootPhysicalSurfaceCheckInterval(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "FootPhysicalSurfaceCheckInterval") = a0; };
	float GetFootPhysicalSurfaceCheckInterval() const { return *(float*)GetAddress(this, "APrimalCharacter", "FootPhysicalSurfaceCheckInterval"); };
	void SetLastHurtByNearbyPlayerTime(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "LastHurtByNearbyPlayerTime") = a0; };
	float GetLastHurtByNearbyPlayerTime() const { return *(float*)GetAddress(this, "APrimalCharacter", "LastHurtByNearbyPlayerTime"); };
	void SetLastAttackedNearbyPlayerTime(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "LastAttackedNearbyPlayerTime") = a0; };
	float GetLastAttackedNearbyPlayerTime() const { return *(float*)GetAddress(this, "APrimalCharacter", "LastAttackedNearbyPlayerTime"); };
	void SetLastStartFallingRagdollTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastStartFallingRagdollTime") = a0; };
	double GetLastStartFallingRagdollTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastStartFallingRagdollTime"); };
	void SetLastRelevantToPlayerTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastRelevantToPlayerTime") = a0; };
	double GetLastRelevantToPlayerTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastRelevantToPlayerTime"); };
	void SetMeshStopForceUpdatingAtTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "MeshStopForceUpdatingAtTime") = a0; };
	double GetMeshStopForceUpdatingAtTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "MeshStopForceUpdatingAtTime"); };
	void SetLastWalkingTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastWalkingTime") = a0; };
	double GetLastWalkingTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastWalkingTime"); };
	void SetLastSpecialDamageTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastSpecialDamageTime") = a0; };
	double GetLastSpecialDamageTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastSpecialDamageTime"); };
	void SetCorpseDraggedDecayRate(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "CorpseDraggedDecayRate") = a0; };
	float GetCorpseDraggedDecayRate() const { return *(float*)GetAddress(this, "APrimalCharacter", "CorpseDraggedDecayRate"); };
	void SetPoopAltItemChance(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "PoopAltItemChance") = a0; };
	float GetPoopAltItemChance() const { return *(float*)GetAddress(this, "APrimalCharacter", "PoopAltItemChance"); };
	void SetRunningMaxDesiredRotDelta(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "RunningMaxDesiredRotDelta") = a0; };
	float GetRunningMaxDesiredRotDelta() const { return *(float*)GetAddress(this, "APrimalCharacter", "RunningMaxDesiredRotDelta"); };
	void SetCorpseDestructionTimer(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "CorpseDestructionTimer") = a0; };
	double GetCorpseDestructionTimer() const { return *(double*)GetAddress(this, "APrimalCharacter", "CorpseDestructionTimer"); };
	void SetOriginalCorpseLifespan(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "OriginalCorpseLifespan") = a0; };
	float GetOriginalCorpseLifespan() const { return *(float*)GetAddress(this, "APrimalCharacter", "OriginalCorpseLifespan"); };
	void SetCorpseHarvestFadeTime(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "CorpseHarvestFadeTime") = a0; };
	float GetCorpseHarvestFadeTime() const { return *(float*)GetAddress(this, "APrimalCharacter", "CorpseHarvestFadeTime"); };
	void SetCurrentLocalRootLoc(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "CurrentLocalRootLoc") = a0; };
	FVector GetCurrentLocalRootLoc() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "CurrentLocalRootLoc"); };
	void SetRootYaw(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "RootYaw") = a0; };
	float GetRootYaw() const { return *(float*)GetAddress(this, "APrimalCharacter", "RootYaw"); };
	void SetLastTimeInSwimming(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastTimeInSwimming") = a0; };
	double GetLastTimeInSwimming() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastTimeInSwimming"); };
	void SetLastListenRangePushTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastListenRangePushTime") = a0; };
	double GetLastListenRangePushTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastListenRangePushTime"); };
	void SetLastDamageAmountMaterialValue(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "LastDamageAmountMaterialValue") = a0; };
	float GetLastDamageAmountMaterialValue() const { return *(float*)GetAddress(this, "APrimalCharacter", "LastDamageAmountMaterialValue"); };
	void SetBuffedDamageMult(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BuffedDamageMult") = a0; };
	float GetBuffedDamageMult() const { return *(float*)GetAddress(this, "APrimalCharacter", "BuffedDamageMult"); };
	void SetBuffedResistanceMult(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "BuffedResistanceMult") = a0; };
	float GetBuffedResistanceMult() const { return *(float*)GetAddress(this, "APrimalCharacter", "BuffedResistanceMult"); };
	void SetExtraMaxSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ExtraMaxSpeedModifier") = a0; };
	float GetExtraMaxSpeedModifier() const { return *(float*)GetAddress(this, "APrimalCharacter", "ExtraMaxSpeedModifier"); };
	void SetTamedDinoCallOutRange(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "TamedDinoCallOutRange") = a0; };
	float GetTamedDinoCallOutRange() const { return *(float*)GetAddress(this, "APrimalCharacter", "TamedDinoCallOutRange"); };
	void SetLastBumpedDamageTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastBumpedDamageTime") = a0; };
	double GetLastBumpedDamageTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastBumpedDamageTime"); };
	void SetTargetPathfindingLocationOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalCharacter", "TargetPathfindingLocationOffset") = a0; };
	FVector GetTargetPathfindingLocationOffset() const { return *(FVector*)GetAddress(this, "APrimalCharacter", "TargetPathfindingLocationOffset"); };
	void SetLastTookDamageTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastTookDamageTime") = a0; };
	double GetLastTookDamageTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastTookDamageTime"); };
	void SetExtraReceiveDamageMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ExtraReceiveDamageMultiplier") = a0; };
	float GetExtraReceiveDamageMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "ExtraReceiveDamageMultiplier"); };
	void SetExtraMeleeDamageMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ExtraMeleeDamageMultiplier") = a0; };
	float GetExtraMeleeDamageMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "ExtraMeleeDamageMultiplier"); };
	void SetLastFallingZ(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "LastFallingZ") = a0; };
	float GetLastFallingZ() const { return *(float*)GetAddress(this, "APrimalCharacter", "LastFallingZ"); };
	void SetNumFallZFails(int a0) { *(int*)GetAddress(this, "APrimalCharacter", "NumFallZFails") = a0; };
	int GetNumFallZFails() const { return *(int*)GetAddress(this, "APrimalCharacter", "NumFallZFails"); };
	TArray<AWeakObjectPtr<APrimalCharacter>, FDefaultAllocator> GetCharactersGrappledToMe() const { return *(TArray<AWeakObjectPtr<APrimalCharacter>, FDefaultAllocator>*)GetAddress(this, "APrimalCharacter", "CharactersGrappledToMe"); };
	void SetDamageTheMeleeDamageCauserPercent(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "DamageTheMeleeDamageCauserPercent") = a0; };
	float GetDamageTheMeleeDamageCauserPercent() const { return *(float*)GetAddress(this, "APrimalCharacter", "DamageTheMeleeDamageCauserPercent"); };
	void SetDurabilityDegrateTheMeleeDamageCauserPercent(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "DurabilityDegrateTheMeleeDamageCauserPercent") = a0; };
	float GetDurabilityDegrateTheMeleeDamageCauserPercent() const { return *(float*)GetAddress(this, "APrimalCharacter", "DurabilityDegrateTheMeleeDamageCauserPercent"); };
	void SetTribeGroupInventoryRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalCharacter", "TribeGroupInventoryRank") = a0; };
	unsigned char GetTribeGroupInventoryRank() const { return *(unsigned char*)GetAddress(this, "APrimalCharacter", "TribeGroupInventoryRank"); };
	void SetCharacterDamageImpulseMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "CharacterDamageImpulseMultiplier") = a0; };
	float GetCharacterDamageImpulseMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "CharacterDamageImpulseMultiplier"); };
	void SetForceCheckPushThroughWallsTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "ForceCheckPushThroughWallsTime") = a0; };
	double GetForceCheckPushThroughWallsTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "ForceCheckPushThroughWallsTime"); };
	void SetLastStoppedEatAnimationTime(double a0) { *(double*)GetAddress(this, "APrimalCharacter", "LastStoppedEatAnimationTime") = a0; };
	double GetLastStoppedEatAnimationTime() const { return *(double*)GetAddress(this, "APrimalCharacter", "LastStoppedEatAnimationTime"); };
	void SetClientRotationInterpSpeedMultiplierGround(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "ClientRotationInterpSpeedMultiplierGround") = a0; };
	float GetClientRotationInterpSpeedMultiplierGround() const { return *(float*)GetAddress(this, "APrimalCharacter", "ClientRotationInterpSpeedMultiplierGround"); };
	void SetGlideGravityScaleMultiplier(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "GlideGravityScaleMultiplier") = a0; };
	float GetGlideGravityScaleMultiplier() const { return *(float*)GetAddress(this, "APrimalCharacter", "GlideGravityScaleMultiplier"); };
	void SetGlideMaxCarriedWeight(float a0) { *(float*)GetAddress(this, "APrimalCharacter", "GlideMaxCarriedWeight") = a0; };
	float GetGlideMaxCarriedWeight() const { return *(float*)GetAddress(this, "APrimalCharacter", "GlideMaxCarriedWeight"); };

	// Functions

	bool IsSubmerged(bool a1, bool a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("APrimalCharacter", "IsSubmerged"))((DWORD64)this, a1, a2, a3); }
	float GetWaterSubmergedDepthThreshold() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetWaterSubmergedDepthThreshold"))((DWORD64)this); }
	void SetRunning(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "SetRunning"))((DWORD64)this, a1); }
	void SetEnableIK(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("APrimalCharacter", "SetEnableIK"))((DWORD64)this, a1, a2); }
	float GetRunningSpeedModifier(bool a1) { return static_cast<float(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "GetRunningSpeedModifier"))((DWORD64)this, a1); }
	bool IsRunning() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsRunning"))((DWORD64)this); }
	bool IsMoving() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsMoving"))((DWORD64)this); }
	bool IsFirstPerson() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsFirstPerson"))((DWORD64)this); }
	void PlaySpawnIntro() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "PlaySpawnIntro"))((DWORD64)this); }
	void PlayJumpAnim() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "PlayJumpAnim"))((DWORD64)this); }
	void PlayLandedAnim() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "PlayLandedAnim"))((DWORD64)this); }
	void OnJumped_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnJumped_Implementation"))((DWORD64)this); }
	bool AllowFirstPerson() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "AllowFirstPerson"))((DWORD64)this); }
	//AActor* GetAimedActor(ECollisionChannel a1, DWORD64 a2, float a3, float a4, int* a5, FHitResult* a6, bool a7, bool a8) { return static_cast<AActor*(_cdecl*)(DWORD64, ECollisionChannel, UActorComponent**, float, float, int*, FHitResult*, bool, bool)>(GetAddress("APrimalCharacter", "GetAimedActor"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8); }
	void OnBeginDragged(APrimalCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalCharacter", "OnBeginDragged"))((DWORD64)this, a1); }
	void OnEndDragged(APrimalCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalCharacter", "OnEndDragged"))((DWORD64)this, a1); }
	void OnBeginDrag(APrimalCharacter* a1, int a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*, int, bool)>(GetAddress("APrimalCharacter", "OnBeginDrag"))((DWORD64)this, a1, a2, a3); }
	void OnEndDrag() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnEndDrag"))((DWORD64)this); }
	void UpdateIK() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UpdateIK"))((DWORD64)this); }
	void UpdateRunSounds(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "UpdateRunSounds"))((DWORD64)this, a1); }
	void UpdateCarriedLocationAndRotation(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalCharacter", "UpdateCarriedLocationAndRotation"))((DWORD64)this, a1); }
	void OnMovementModeChanged(EMovementMode a1, unsigned char a2) { static_cast<void(_cdecl*)(DWORD64, EMovementMode, unsigned char)>(GetAddress("APrimalCharacter", "OnMovementModeChanged"))((DWORD64)this, a1, a2); }
	void UpdateNetDynamicMusic() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UpdateNetDynamicMusic"))((DWORD64)this); }
	void ServerRequestDrag() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerRequestDrag"))((DWORD64)this); }
	AActor* GetOtherActorToIgnore() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetOtherActorToIgnore"))((DWORD64)this); }
	float GetCarryingSocketYaw(bool a1) { return static_cast<float(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "GetCarryingSocketYaw"))((DWORD64)this, a1); }
	void SetCarryingDino(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalCharacter", "SetCarryingDino"))((DWORD64)this, a1); }
	void ClearCarryingDino(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "ClearCarryingDino"))((DWORD64)this, a1); }
	void OnAttachedToCharacter() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnAttachedToCharacter"))((DWORD64)this); }
	void OnDetachedFromCharacter(APrimalCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalCharacter", "OnDetachedFromCharacter"))((DWORD64)this, a1); }
	void OnRep_MountedDino() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnRep_MountedDino"))((DWORD64)this); }
	void ClearMountedDino(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "ClearMountedDino"))((DWORD64)this, a1); }
	bool DinoMountOnMe(APrimalDinoCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalCharacter", "DinoMountOnMe"))((DWORD64)this, a1); }
	bool CanMountOnMe(APrimalDinoCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalCharacter", "CanMountOnMe"))((DWORD64)this, a1); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CheckAndHandleBasedPlayersBeingPushedThroughWalls"))((DWORD64)this); }
	int GetNearestBoneIndexForDrag(APrimalCharacter* a1, FVector a2) { return static_cast<int(_cdecl*)(DWORD64, APrimalCharacter*, FVector)>(GetAddress("APrimalCharacter", "GetNearestBoneIndexForDrag"))((DWORD64)this, a1, a2); }
	void TryDragCharacter() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryDragCharacter"))((DWORD64)this); }
	void UpdateDragging() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UpdateDragging"))((DWORD64)this); }
	bool CanDragCharacter(APrimalCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalCharacter", "CanDragCharacter"))((DWORD64)this, a1); }
	void CheckOnDinoPlatformSaddle() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CheckOnDinoPlatformSaddle"))((DWORD64)this); }
	float TakeDamage(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<float(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalCharacter", "TakeDamage"))((DWORD64)this, a1, a2, a3, a4); }
	void AdjustDamage(float& a1, const FDamageEvent& a2, AController* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float&, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalCharacter", "AdjustDamage"))((DWORD64)this, a1, a2, a3, a4); }
	void Immobilize(bool a1, AActor* a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, bool, AActor*, bool)>(GetAddress("APrimalCharacter", "Immobilize"))((DWORD64)this, a1, a2, a3); }
	void Suicide() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "Suicide"))((DWORD64)this); }
	bool CanDie(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<bool(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalCharacter", "CanDie"))((DWORD64)this, a1, a2, a3, a4); }
	bool Die(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<bool(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalCharacter", "Die"))((DWORD64)this, a1, a2, a3, a4); }
	void FellOutOfWorld(const UDamageType& a1) { static_cast<void(_cdecl*)(DWORD64, const UDamageType&)>(GetAddress("APrimalCharacter", "FellOutOfWorld"))((DWORD64)this, a1); }
	void SetDeath(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "SetDeath"))((DWORD64)this, a1); }
	void SetRagdollPhysics(bool a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("APrimalCharacter", "SetRagdollPhysics"))((DWORD64)this, a1, a2, a3); }
	void ClearRagdollPhysics() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ClearRagdollPhysics"))((DWORD64)this); }
	void InitRagdollRepConstraints() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "InitRagdollRepConstraints"))((DWORD64)this); }
	void TermRagdollRepConstraints() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TermRagdollRepConstraints"))((DWORD64)this); }
	void InitRagdollReplication() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "InitRagdollReplication"))((DWORD64)this); }
	void UpdateRagdollReplicationOnClient() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UpdateRagdollReplicationOnClient"))((DWORD64)this); }
	void OnRep_RagdollPositions() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnRep_RagdollPositions"))((DWORD64)this); }
	bool CanBeCarried() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CanBeCarried"))((DWORD64)this); }
	float GetKillXP() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetKillXP"))((DWORD64)this); }
	void SetRagdollReplication(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "SetRagdollReplication"))((DWORD64)this, a1); }
	void ReplicateRagdoll() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ReplicateRagdoll"))((DWORD64)this); }
	void ExecSetSleeping(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "ExecSetSleeping"))((DWORD64)this, a1); }
	void SetSleeping(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("APrimalCharacter", "SetSleeping"))((DWORD64)this, a1, a2); }
	void OnPrimalCharacterSleeped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnPrimalCharacterSleeped"))((DWORD64)this); }
	void OnPrimalCharacterUnsleeped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnPrimalCharacterUnsleeped"))((DWORD64)this); }
	bool IsGameInputAllowed() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsGameInputAllowed"))((DWORD64)this); }
	bool IsInputAllowed() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsInputAllowed"))((DWORD64)this); }
	float GetMaxHealth() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetMaxHealth"))((DWORD64)this); }
	bool IsAlive() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsAlive"))((DWORD64)this); }
	float GetLowHealthPercentage() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetLowHealthPercentage"))((DWORD64)this); }
	bool IsDead() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsDead"))((DWORD64)this); }
	FString* GetDescriptiveName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APrimalCharacter", "GetDescriptiveName"))((DWORD64)this, res); }
	float GetDefaultMovementSpeed() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetDefaultMovementSpeed"))((DWORD64)this); }
	float GetHealth() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetHealth"))((DWORD64)this); }
	float GetHealthPercentage() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetHealthPercentage"))((DWORD64)this); }
	bool IsTargetableDead() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsTargetableDead"))((DWORD64)this); }
	FVector* GetInterpolatedLocation(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("APrimalCharacter", "GetInterpolatedLocation"))((DWORD64)this, res); }
	FRotator* GetAimOffsets(FRotator* res, float a1, FRotator& a2, float& a3, float a4, FVector& a5) { return static_cast<FRotator*(_cdecl*)(DWORD64, FRotator*, float, FRotator&, float&, float, FVector&)>(GetAddress("APrimalCharacter", "GetAimOffsets"))((DWORD64)this, res, a1, a2, a3, a4, a5); }
	void StartForceSkelUpdate(float a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, float, bool, bool)>(GetAddress("APrimalCharacter", "StartForceSkelUpdate"))((DWORD64)this, a1, a2, a3); }
	void EndForceSkelUpdate() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "EndForceSkelUpdate"))((DWORD64)this); }
	bool IsConscious() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsConscious"))((DWORD64)this); }
	void LocalUnpossessed() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "LocalUnpossessed"))((DWORD64)this); }
	void Stasis() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "Stasis"))((DWORD64)this); }
	void Unstasis() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "Unstasis"))((DWORD64)this); }
	bool CanJumpInternal_Implementation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CanJumpInternal_Implementation"))((DWORD64)this); }
	bool IsValidForStatusUpdate() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsValidForStatusUpdate"))((DWORD64)this); }
	float GetMaxSpeedModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetMaxSpeedModifier"))((DWORD64)this); }
	float GetJumpZModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetJumpZModifier"))((DWORD64)this); }
	float GetClientRotationInterpSpeed(const FVector& a1) { return static_cast<float(_cdecl*)(DWORD64, const FVector&)>(GetAddress("APrimalCharacter", "GetClientRotationInterpSpeed"))((DWORD64)this, a1); }
	bool CanBeBaseForCharacter(APawn* a1) { return static_cast<bool(_cdecl*)(DWORD64, APawn*)>(GetAddress("APrimalCharacter", "CanBeBaseForCharacter"))((DWORD64)this, a1); }
	void PlayFootstep() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "PlayFootstep"))((DWORD64)this); }
	void DidLand() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "DidLand"))((DWORD64)this); }
	bool ModifyInputAcceleration(FVector& a1) { return static_cast<bool(_cdecl*)(DWORD64, FVector&)>(GetAddress("APrimalCharacter", "ModifyInputAcceleration"))((DWORD64)this, a1); }
	bool ShouldAttackStopMoveCollapsing() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ShouldAttackStopMoveCollapsing"))((DWORD64)this); }
	bool AnimationPreventsInput() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "AnimationPreventsInput"))((DWORD64)this); }
	bool CanCrouchInternal() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CanCrouchInternal"))((DWORD64)this); }
	bool CanProneInternal() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CanProneInternal"))((DWORD64)this); }
	float SetHealth(float a1) { return static_cast<float(_cdecl*)(DWORD64, float)>(GetAddress("APrimalCharacter", "SetHealth"))((DWORD64)this, a1); }
	void SetMaxHealth(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalCharacter", "SetMaxHealth"))((DWORD64)this, a1); }
	bool IsCrafting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsCrafting"))((DWORD64)this); }
	bool IsOfTribe(int a1) { return static_cast<bool(_cdecl*)(DWORD64, int)>(GetAddress("APrimalCharacter", "IsOfTribe"))((DWORD64)this, a1); }
	void SleepBodies() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "SleepBodies"))((DWORD64)this); }
	void ForceSleepRagdoll() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ForceSleepRagdoll"))((DWORD64)this); }
	void ForceSleepRagdollEx() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ForceSleepRagdollEx"))((DWORD64)this); }
	void NotifyEquippedItems() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "NotifyEquippedItems"))((DWORD64)this); }
	bool CanBeDragged() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CanBeDragged"))((DWORD64)this); }
	bool AllowHurtAnimation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "AllowHurtAnimation"))((DWORD64)this); }
	bool TryMultiUse(APlayerController* a1, int a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, int)>(GetAddress("APrimalCharacter", "TryMultiUse"))((DWORD64)this, a1, a2); }
	void ClientMultiUse(APlayerController* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, int)>(GetAddress("APrimalCharacter", "ClientMultiUse"))((DWORD64)this, a1, a2); }
	void ChangeActorTeam(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalCharacter", "ChangeActorTeam"))((DWORD64)this, a1); }
	float GetCharacterAdditionalHypothermiaInsulationValue() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetCharacterAdditionalHypothermiaInsulationValue"))((DWORD64)this); }
	float GetCharacterAdditionalHyperthermiaInsulationValue() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetCharacterAdditionalHyperthermiaInsulationValue"))((DWORD64)this); }
	void CheckJumpOutOfWater() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CheckJumpOutOfWater"))((DWORD64)this); }
	void UpdateSwimmingState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UpdateSwimmingState"))((DWORD64)this); }
	void ServerTryPoop() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerTryPoop"))((DWORD64)this); }
	void TryAccessInventory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryAccessInventory"))((DWORD64)this); }
	void TryCallFollowOne() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryCallFollowOne"))((DWORD64)this); }
	void TryCallStayOne() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryCallStayOne"))((DWORD64)this); }
	void TryCallFollowDistanceCycleOne() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryCallFollowDistanceCycleOne"))((DWORD64)this); }
	void ServerCallFollow() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerCallFollow"))((DWORD64)this); }
	void ServerCallStay() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerCallStay"))((DWORD64)this); }
	void ServerCallAggressive() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerCallAggressive"))((DWORD64)this); }
	void ServerCallSetAggressive() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerCallSetAggressive"))((DWORD64)this); }
	void ServerCallNeutral() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerCallNeutral"))((DWORD64)this); }
	void ServerCallPassive() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerCallPassive"))((DWORD64)this); }
	void DownCallOne() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "DownCallOne"))((DWORD64)this); }
	void TryCallAttackTarget() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryCallAttackTarget"))((DWORD64)this); }
	void TryCallMoveTo() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryCallMoveTo"))((DWORD64)this); }
	void Poop() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "Poop"))((DWORD64)this); }
	void EmitPoop() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "EmitPoop"))((DWORD64)this); }
	void SetCharacterMeshesMaterialScalarParamValue(FName a1, float a2) { static_cast<void(_cdecl*)(DWORD64, FName, float)>(GetAddress("APrimalCharacter", "SetCharacterMeshesMaterialScalarParamValue"))((DWORD64)this, a1, a2); }
	bool IsValidForStatusRecovery() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsValidForStatusRecovery"))((DWORD64)this); }
	void OrbitCamOn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OrbitCamOn"))((DWORD64)this); }
	void OrbitCamOff() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OrbitCamOff"))((DWORD64)this); }
	void OrbitCamToggle() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OrbitCamToggle"))((DWORD64)this); }
	void TurnInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalCharacter", "TurnInput"))((DWORD64)this, a1); }
	void LookInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalCharacter", "LookInput"))((DWORD64)this, a1); }
	FRotator* GetBaseAimRotation(FRotator* res) { return static_cast<FRotator*(_cdecl*)(DWORD64, FRotator*)>(GetAddress("APrimalCharacter", "GetBaseAimRotation"))((DWORD64)this, res); }
	void ApplyDamageMomentum(float a1, const FDamageEvent& a2, APawn* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const FDamageEvent&, APawn*, AActor*)>(GetAddress("APrimalCharacter", "ApplyDamageMomentum"))((DWORD64)this, a1, a2, a3, a4); }
	bool AllowSaving() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "AllowSaving"))((DWORD64)this); }
	bool IsWatered() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsWatered"))((DWORD64)this); }
	void LoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "LoadedFromSaveGame"))((DWORD64)this); }
	float GetMaxCursorHUDDistance(AShooterPlayerController* a1) { return static_cast<float(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalCharacter", "GetMaxCursorHUDDistance"))((DWORD64)this, a1); }
	bool GetGroundLocation(FVector& a1, const FVector& a2, const FVector& a3) { return static_cast<bool(_cdecl*)(DWORD64, FVector&, const FVector&, const FVector&)>(GetAddress("APrimalCharacter", "GetGroundLocation"))((DWORD64)this, a1, a2, a3); }
	FVector* GetTargetingLocation(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("APrimalCharacter", "GetTargetingLocation"))((DWORD64)this, res); }
	void BPNotifyLevelUp(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalCharacter", "BPNotifyLevelUp"))((DWORD64)this, a1); }
	bool IsRagdolled() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsRagdolled"))((DWORD64)this); }
	void TryGiveDefaultWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryGiveDefaultWeapon"))((DWORD64)this); }
	void TryPoop() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TryPoop"))((DWORD64)this); }
	void ServerGiveDefaultWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ServerGiveDefaultWeapon"))((DWORD64)this); }
	void CheckJumpInput(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalCharacter", "CheckJumpInput"))((DWORD64)this, a1); }
	float GetCorpseLifespan() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetCorpseLifespan"))((DWORD64)this); }
	bool UnstasisCheckRagdollGround() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UnstasisCheckRagdollGround"))((DWORD64)this); }
	void OnFailedJumped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnFailedJumped"))((DWORD64)this); }
	bool AllowFallDamage() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "AllowFallDamage"))((DWORD64)this); }
	void ForceUpdateAimedCharacters(UWorld* a1, const FVector& a2, const FVector& a3, AActor* a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, UWorld*, const FVector&, const FVector&, AActor*, bool)>(GetAddress("APrimalCharacter", "ForceUpdateAimedCharacters"))((DWORD64)this, a1, a2, a3, a4, a5); }
	bool CanEverProne() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CanEverProne"))((DWORD64)this); }
	bool IsPrimalCharacter() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsPrimalCharacter"))((DWORD64)this); }
	void OnStartTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "OnStartTargeting"))((DWORD64)this, a1); }
	void OnStopTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalCharacter", "OnStopTargeting"))((DWORD64)this, a1); }
	void StasisingCharacter() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "StasisingCharacter"))((DWORD64)this); }
	void UpdateStatusComponent(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalCharacter", "UpdateStatusComponent"))((DWORD64)this, a1); }
	void DoSetRagdollPhysics() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "DoSetRagdollPhysics"))((DWORD64)this); }
	void ForceRefreshBones() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "ForceRefreshBones"))((DWORD64)this); }
	void NetUpdateTribeName(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("APrimalCharacter", "NetUpdateTribeName"))((DWORD64)this, a1); }
	void UpdateTribeName(FString a1) { static_cast<void(_cdecl*)(DWORD64, FString)>(GetAddress("APrimalCharacter", "UpdateTribeName"))((DWORD64)this, a1); }
	float GetCorpseDecayRate() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetCorpseDecayRate"))((DWORD64)this); }
	bool UsePlayerControlCollisionIK() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UsePlayerControlCollisionIK"))((DWORD64)this); }
	void TagFriendlyStructures() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "TagFriendlyStructures"))((DWORD64)this); }
	float GetDragWeight(APrimalCharacter* a1) { return static_cast<float(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalCharacter", "GetDragWeight"))((DWORD64)this, a1); }
	void UnPossessed() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UnPossessed"))((DWORD64)this); }
	bool IsTargetable() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsTargetable"))((DWORD64)this); }
	void FadeOutLoadingMusic() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "FadeOutLoadingMusic"))((DWORD64)this); }
	bool CanBePainted() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "CanBePainted"))((DWORD64)this); }
	bool AllowColoringBy(APlayerController* a1, UObject* a2) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*, UObject*)>(GetAddress("APrimalCharacter", "AllowColoringBy"))((DWORD64)this, a1, a2); }
	//bool AllowEquippingItemType(EPrimalEquipmentType a1) { return static_cast<bool(_cdecl*)(DWORD64, EPrimalEquipmentType)>(GetAddress("APrimalCharacter", "AllowEquippingItemType"))((DWORD64)this, a1); }
	void OnRep_AttachmentReplication() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "OnRep_AttachmentReplication"))((DWORD64)this); }
	APrimalDinoCharacter* GetBasedOnDino() { return static_cast<APrimalDinoCharacter*(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetBasedOnDino"))((DWORD64)this); }
	float GetBaseDragWeight() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetBaseDragWeight"))((DWORD64)this); }
	float GetXPMultiplier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetXPMultiplier"))((DWORD64)this); }
	bool IsProneOrSitting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsProneOrSitting"))((DWORD64)this); }
	bool IsSitting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsSitting"))((DWORD64)this); }
	void BPNetAddCharacterMovementImpulse(FVector a1, bool a2, float a3, bool a4, EMovementMode a5) { static_cast<void(_cdecl*)(DWORD64, FVector, bool, float, bool, EMovementMode)>(GetAddress("APrimalCharacter", "BPNetAddCharacterMovementImpulse"))((DWORD64)this, a1, a2, a3, a4, a5); }
	bool UseClearOnConsumeInput() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "UseClearOnConsumeInput"))((DWORD64)this); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetDamageTorpidityIncreaseMultiplierScale"))((DWORD64)this); }
	float GetGravityZScale() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "GetGravityZScale"))((DWORD64)this); }
	bool AllowExtendedCraftingFunctionality() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "AllowExtendedCraftingFunctionality"))((DWORD64)this); }
	bool IsInvincible() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalCharacter", "IsInvincible"))((DWORD64)this); }
};

struct AShooterCharacter : APrimalCharacter
{
	void SetbWasProne(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bWasProne") = a0; };
	bool GetbWasProne() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bWasProne"); };
	void SetbIsPreviewCharacter(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bIsPreviewCharacter") = a0; };
	bool GetbIsPreviewCharacter() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bIsPreviewCharacter"); };
	void SetbIsVoiceTalking(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bIsVoiceTalking") = a0; };
	bool GetbIsVoiceTalking() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bIsVoiceTalking"); };
	void SetLastStartedTalkingTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastStartedTalkingTime") = a0; };
	double GetLastStartedTalkingTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastStartedTalkingTime"); };
	void SetOriginalCollisionHeight(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "OriginalCollisionHeight") = a0; };
	float GetOriginalCollisionHeight() const { return *(float*)GetAddress(this, "AShooterCharacter", "OriginalCollisionHeight"); };
	void SetWalkBobMagnitude(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WalkBobMagnitude") = a0; };
	float GetWalkBobMagnitude() const { return *(float*)GetAddress(this, "AShooterCharacter", "WalkBobMagnitude"); };
	void SetWalkBobInterpSpeed(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WalkBobInterpSpeed") = a0; };
	float GetWalkBobInterpSpeed() const { return *(float*)GetAddress(this, "AShooterCharacter", "WalkBobInterpSpeed"); };
	void SetTargetingTime(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "TargetingTime") = a0; };
	float GetTargetingTime() const { return *(float*)GetAddress(this, "AShooterCharacter", "TargetingTime"); };
	void SetBobMaxMovementSpeed(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "BobMaxMovementSpeed") = a0; };
	float GetBobMaxMovementSpeed() const { return *(float*)GetAddress(this, "AShooterCharacter", "BobMaxMovementSpeed"); };
	void SetWeaponBobMaxMovementSpeed(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobMaxMovementSpeed") = a0; };
	float GetWeaponBobMaxMovementSpeed() const { return *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobMaxMovementSpeed"); };
	void SetPlayerName(FString a0) { *(FString*)GetAddress(this, "AShooterCharacter", "PlayerName") = a0; };
	FString GetPlayerName() const { return *(FString*)GetAddress(this, "AShooterCharacter", "PlayerName"); };
	void SetGrapHookPulledRopeDistance(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "GrapHookPulledRopeDistance") = a0; };
	float GetGrapHookPulledRopeDistance() const { return *(float*)GetAddress(this, "AShooterCharacter", "GrapHookPulledRopeDistance"); };
	void SetGrapHookSyncTime(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "GrapHookSyncTime") = a0; };
	float GetGrapHookSyncTime() const { return *(float*)GetAddress(this, "AShooterCharacter", "GrapHookSyncTime"); };
	void SetbReleasingGrapHook(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bReleasingGrapHook") = a0; };
	bool GetbReleasingGrapHook() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bReleasingGrapHook"); };
	void SetPlatformProfileName(FString a0) { *(FString*)GetAddress(this, "AShooterCharacter", "PlatformProfileName") = a0; };
	FString GetPlatformProfileName() const { return *(FString*)GetAddress(this, "AShooterCharacter", "PlatformProfileName"); };
	void SetLastUncrouchTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastUncrouchTime") = a0; };
	double GetLastUncrouchTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastUncrouchTime"); };
	void SetLastUnproneTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastUnproneTime") = a0; };
	double GetLastUnproneTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastUnproneTime"); };
	void SetCurrentWeaponBobSpeed(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "CurrentWeaponBobSpeed") = a0; };
	float GetCurrentWeaponBobSpeed() const { return *(float*)GetAddress(this, "AShooterCharacter", "CurrentWeaponBobSpeed"); };
	void SetWalkBobOldSpeed(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WalkBobOldSpeed") = a0; };
	float GetWalkBobOldSpeed() const { return *(float*)GetAddress(this, "AShooterCharacter", "WalkBobOldSpeed"); };
	void SetAppliedBob(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "AppliedBob") = a0; };
	float GetAppliedBob() const { return *(float*)GetAddress(this, "AShooterCharacter", "AppliedBob"); };
	void SetBobTime(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "BobTime") = a0; };
	float GetBobTime() const { return *(float*)GetAddress(this, "AShooterCharacter", "BobTime"); };
	void SetLastPressReloadTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastPressReloadTime") = a0; };
	double GetLastPressReloadTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastPressReloadTime"); };
	void SetWeaponAttachPoint(FName a0) { *(FName*)GetAddress(this, "AShooterCharacter", "WeaponAttachPoint") = a0; };
	FName GetWeaponAttachPoint() const { return *(FName*)GetAddress(this, "AShooterCharacter", "WeaponAttachPoint"); };
	void SetTargetingSpeedModifier(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "TargetingSpeedModifier") = a0; };
	float GetTargetingSpeedModifier() const { return *(float*)GetAddress(this, "AShooterCharacter", "TargetingSpeedModifier"); };
	void SetWeaponBobTime(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobTime") = a0; };
	float GetWeaponBobTime() const { return *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobTime"); };
	void SetCurrentAimBlending(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "CurrentAimBlending") = a0; };
	float GetCurrentAimBlending() const { return *(float*)GetAddress(this, "AShooterCharacter", "CurrentAimBlending"); };
	void SetbWasFirstPerson(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bWasFirstPerson") = a0; };
	bool GetbWasFirstPerson() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bWasFirstPerson"); };
	void SetbWasOverrideHiddenShadowValue(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bWasOverrideHiddenShadowValue") = a0; };
	bool GetbWasOverrideHiddenShadowValue() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bWasOverrideHiddenShadowValue"); };
	void SetbLastLocInterpProne(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bLastLocInterpProne") = a0; };
	bool GetbLastLocInterpProne() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bLastLocInterpProne"); };
	void SetbLastLocInterpCrouched(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bLastLocInterpCrouched") = a0; };
	bool GetbLastLocInterpCrouched() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bLastLocInterpCrouched"); };
	void SetInterpLastCrouchProneStateChangeTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "InterpLastCrouchProneStateChangeTime") = a0; };
	double GetInterpLastCrouchProneStateChangeTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "InterpLastCrouchProneStateChangeTime"); };
	void SetPressCrouchProneToggleTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "PressCrouchProneToggleTime") = a0; };
	double GetPressCrouchProneToggleTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "PressCrouchProneToggleTime"); };
	void SetCraftingMovementSpeedModifier(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "CraftingMovementSpeedModifier") = a0; };
	float GetCraftingMovementSpeedModifier() const { return *(float*)GetAddress(this, "AShooterCharacter", "CraftingMovementSpeedModifier"); };
	void SetWeaponBobMagnitudes(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobMagnitudes") = a0; };
	FVector GetWeaponBobMagnitudes() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobMagnitudes"); };
	void SetWeaponBobPeriods(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobPeriods") = a0; };
	FVector GetWeaponBobPeriods() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobPeriods"); };
	void SetWeaponBobOffsets(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobOffsets") = a0; };
	FVector GetWeaponBobOffsets() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobOffsets"); };
	void SetWeaponBobMagnitudes_Targeting(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobMagnitudes_Targeting") = a0; };
	FVector GetWeaponBobMagnitudes_Targeting() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobMagnitudes_Targeting"); };
	void SetWeaponBobPeriods_Targeting(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobPeriods_Targeting") = a0; };
	FVector GetWeaponBobPeriods_Targeting() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobPeriods_Targeting"); };
	void SetWeaponBobOffsets_Targeting(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobOffsets_Targeting") = a0; };
	FVector GetWeaponBobOffsets_Targeting() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "WeaponBobOffsets_Targeting"); };
	void SetWeaponBobMinimumSpeed(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobMinimumSpeed") = a0; };
	float GetWeaponBobMinimumSpeed() const { return *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobMinimumSpeed"); };
	void SetWeaponBobSpeedBase(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobSpeedBase") = a0; };
	float GetWeaponBobSpeedBase() const { return *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobSpeedBase"); };
	void SetWeaponBobSpeedBaseFalling(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobSpeedBaseFalling") = a0; };
	float GetWeaponBobSpeedBaseFalling() const { return *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobSpeedBaseFalling"); };
	void SetWeaponBobTargetingBlend(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobTargetingBlend") = a0; };
	float GetWeaponBobTargetingBlend() const { return *(float*)GetAddress(this, "AShooterCharacter", "WeaponBobTargetingBlend"); };
	void SetNextWeaponItemID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterCharacter", "NextWeaponItemID") = a0; };
	FItemNetID GetNextWeaponItemID() const { return *(FItemNetID*)GetAddress(this, "AShooterCharacter", "NextWeaponItemID"); };
	void SetPreMapWeaponItemNetID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterCharacter", "PreMapWeaponItemNetID") = a0; };
	FItemNetID GetPreMapWeaponItemNetID() const { return *(FItemNetID*)GetAddress(this, "AShooterCharacter", "PreMapWeaponItemNetID"); };
	void SetServerSeatedViewRotationYaw(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "ServerSeatedViewRotationYaw") = a0; };
	float GetServerSeatedViewRotationYaw() const { return *(float*)GetAddress(this, "AShooterCharacter", "ServerSeatedViewRotationYaw"); };
	void SetServerSeatedViewRotationPitch(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "ServerSeatedViewRotationPitch") = a0; };
	float GetServerSeatedViewRotationPitch() const { return *(float*)GetAddress(this, "AShooterCharacter", "ServerSeatedViewRotationPitch"); };
	void SetCurrentWeapon(AShooterWeapon* a0) { *(AShooterWeapon**)GetAddress(this, "AShooterCharacter", "CurrentWeapon") = a0; };
	AShooterWeapon* GetCurrentWeapon() const { return *(AShooterWeapon**)GetAddress(this, "AShooterCharacter", "CurrentWeapon"); };
	void SetLinkedPlayerDataID(unsigned __int64 a0) { *(unsigned __int64*)GetAddress(this, "AShooterCharacter", "LinkedPlayerDataID") = a0; };
	unsigned __int64 GetLinkedPlayerDataID() const { return *(unsigned __int64*)GetAddress(this, "AShooterCharacter", "LinkedPlayerDataID"); };
	void SetLastTimeInFalling(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastTimeInFalling") = a0; };
	double GetLastTimeInFalling() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastTimeInFalling"); };
	void SetStartedRidingTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "StartedRidingTime") = a0; };
	double GetStartedRidingTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "StartedRidingTime"); };
	void SetTimeSinceLastController(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "TimeSinceLastController") = a0; };
	double GetTimeSinceLastController() const { return *(double*)GetAddress(this, "AShooterCharacter", "TimeSinceLastController"); };
	void SetLastRequestedTribeTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastRequestedTribeTime") = a0; };
	double GetLastRequestedTribeTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastRequestedTribeTime"); };
	void SetLastRequestedTribeID(unsigned __int64 a0) { *(unsigned __int64*)GetAddress(this, "AShooterCharacter", "LastRequestedTribeID") = a0; };
	unsigned __int64 GetLastRequestedTribeID() const { return *(unsigned __int64*)GetAddress(this, "AShooterCharacter", "LastRequestedTribeID"); };
	void SetLastRequestedTribeName(FString a0) { *(FString*)GetAddress(this, "AShooterCharacter", "LastRequestedTribeName") = a0; };
	FString GetLastRequestedTribeName() const { return *(FString*)GetAddress(this, "AShooterCharacter", "LastRequestedTribeName"); };
	void SetIndoorsHyperthermiaInsulation(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "IndoorsHyperthermiaInsulation") = a0; };
	float GetIndoorsHyperthermiaInsulation() const { return *(float*)GetAddress(this, "AShooterCharacter", "IndoorsHyperthermiaInsulation"); };
	void SetIndoorsHypothermiaInsulation(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "IndoorsHypothermiaInsulation") = a0; };
	float GetIndoorsHypothermiaInsulation() const { return *(float*)GetAddress(this, "AShooterCharacter", "IndoorsHypothermiaInsulation"); };
	void SetIndoorCheckInterval(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "IndoorCheckInterval") = a0; };
	float GetIndoorCheckInterval() const { return *(float*)GetAddress(this, "AShooterCharacter", "IndoorCheckInterval"); };
	void SetLastIndoorCheckTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastIndoorCheckTime") = a0; };
	double GetLastIndoorCheckTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastIndoorCheckTime"); };
	void SetPreRidingWeaponItemNetID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterCharacter", "PreRidingWeaponItemNetID") = a0; };
	FItemNetID GetPreRidingWeaponItemNetID() const { return *(FItemNetID*)GetAddress(this, "AShooterCharacter", "PreRidingWeaponItemNetID"); };
	void SetPreInventoryWeaponItemNetID(FItemNetID a0) { *(FItemNetID*)GetAddress(this, "AShooterCharacter", "PreInventoryWeaponItemNetID") = a0; };
	FItemNetID GetPreInventoryWeaponItemNetID() const { return *(FItemNetID*)GetAddress(this, "AShooterCharacter", "PreInventoryWeaponItemNetID"); };
	void SetbIsRainWatered(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bIsRainWatered") = a0; };
	bool GetbIsRainWatered() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bIsRainWatered"); };
	void SetLastAttackTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastAttackTime") = a0; };
	double GetLastAttackTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastAttackTime"); };
	void SetbCacheRidingDinoWeapon(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bCacheRidingDinoWeapon") = a0; };
	bool GetbCacheRidingDinoWeapon() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bCacheRidingDinoWeapon"); };
	void SetbWasLocallyControlled(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bWasLocallyControlled") = a0; };
	bool GetbWasLocallyControlled() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bWasLocallyControlled"); };
	void SetUniqueNetIdTypeHash(unsigned int a0) { *(unsigned int*)GetAddress(this, "AShooterCharacter", "UniqueNetIdTypeHash") = a0; };
	unsigned int GetUniqueNetIdTypeHash() const { return *(unsigned int*)GetAddress(this, "AShooterCharacter", "UniqueNetIdTypeHash"); };
	void SetLastUseHarvestTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastUseHarvestTime") = a0; };
	double GetLastUseHarvestTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastUseHarvestTime"); };
	void SetStopRidingTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "StopRidingTime") = a0; };
	double GetStopRidingTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "StopRidingTime"); };
	void SetLocalLastViewingInventoryTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LocalLastViewingInventoryTime") = a0; };
	double GetLocalLastViewingInventoryTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LocalLastViewingInventoryTime"); };
	void SetLastStasisCastPosition(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "LastStasisCastPosition") = a0; };
	FVector GetLastStasisCastPosition() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "LastStasisCastPosition"); };
	void SetbWasHostPlayer(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bWasHostPlayer") = a0; };
	bool GetbWasHostPlayer() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bWasHostPlayer"); };
	void SetLastTimeHadController(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastTimeHadController") = a0; };
	double GetLastTimeHadController() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastTimeHadController"); };
	void SetLastTaggedTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastTaggedTime") = a0; };
	double GetLastTaggedTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastTaggedTime"); };
	void SetLastTaggedTimeExtra(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastTaggedTimeExtra") = a0; };
	double GetLastTaggedTimeExtra() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastTaggedTimeExtra"); };
	void SetLastTaggedTimeThird(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastTaggedTimeThird") = a0; };
	double GetLastTaggedTimeThird() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastTaggedTimeThird"); };
	void SetExtraFloatVar(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "ExtraFloatVar") = a0; };
	float GetExtraFloatVar() const { return *(float*)GetAddress(this, "AShooterCharacter", "ExtraFloatVar"); };
	void SetExtraVectorVar(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "ExtraVectorVar") = a0; };
	FVector GetExtraVectorVar() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "ExtraVectorVar"); };
	void SetExtraExtraVectorVar(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "ExtraExtraVectorVar") = a0; };
	FVector GetExtraExtraVectorVar() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "ExtraExtraVectorVar"); };
	void SetExtraNameVar(FName a0) { *(FName*)GetAddress(this, "AShooterCharacter", "ExtraNameVar") = a0; };
	FName GetExtraNameVar() const { return *(FName*)GetAddress(this, "AShooterCharacter", "ExtraNameVar"); };
	void SetbIsOnSeatingStructure(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bIsOnSeatingStructure") = a0; };
	bool GetbIsOnSeatingStructure() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bIsOnSeatingStructure"); };
	void SetbIsControllingBallista(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bIsControllingBallista") = a0; };
	bool GetbIsControllingBallista() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bIsControllingBallista"); };
	void SetbUseBallistaAimOffset(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bUseBallistaAimOffset") = a0; };
	bool GetbUseBallistaAimOffset() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bUseBallistaAimOffset"); };
	void SetCurrentControlledBallistaYaw(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "CurrentControlledBallistaYaw") = a0; };
	float GetCurrentControlledBallistaYaw() const { return *(float*)GetAddress(this, "AShooterCharacter", "CurrentControlledBallistaYaw"); };
	void SetbIsServerAdmin(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bIsServerAdmin") = a0; };
	bool GetbIsServerAdmin() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bIsServerAdmin"); };
	void SetNextPlayerUndergroundCheck(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "NextPlayerUndergroundCheck") = a0; };
	double GetNextPlayerUndergroundCheck() const { return *(double*)GetAddress(this, "AShooterCharacter", "NextPlayerUndergroundCheck"); };
	void SetPlayerNumUnderGroundFail(int a0) { *(int*)GetAddress(this, "AShooterCharacter", "PlayerNumUnderGroundFail") = a0; };
	int GetPlayerNumUnderGroundFail() const { return *(int*)GetAddress(this, "AShooterCharacter", "PlayerNumUnderGroundFail"); };
	void SetLastSweepCapsuleHeight(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "LastSweepCapsuleHeight") = a0; };
	float GetLastSweepCapsuleHeight() const { return *(float*)GetAddress(this, "AShooterCharacter", "LastSweepCapsuleHeight"); };
	void SetLastSweepCapsuleRadius(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "LastSweepCapsuleRadius") = a0; };
	float GetLastSweepCapsuleRadius() const { return *(float*)GetAddress(this, "AShooterCharacter", "LastSweepCapsuleRadius"); };
	void SetClientSeatedViewRotationPitch(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "ClientSeatedViewRotationPitch") = a0; };
	float GetClientSeatedViewRotationPitch() const { return *(float*)GetAddress(this, "AShooterCharacter", "ClientSeatedViewRotationPitch"); };
	void SetClientSeatedViewRotationYaw(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "ClientSeatedViewRotationYaw") = a0; };
	float GetClientSeatedViewRotationYaw() const { return *(float*)GetAddress(this, "AShooterCharacter", "ClientSeatedViewRotationYaw"); };
	void SetLastReleaseSeatingStructureTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastReleaseSeatingStructureTime") = a0; };
	double GetLastReleaseSeatingStructureTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastReleaseSeatingStructureTime"); };
	void SetPlayerBadgeGroup(unsigned char a0) { *(unsigned char*)GetAddress(this, "AShooterCharacter", "PlayerBadgeGroup") = a0; };
	unsigned char GetPlayerBadgeGroup() const { return *(unsigned char*)GetAddress(this, "AShooterCharacter", "PlayerBadgeGroup"); };
	void SetbShouldInvertTurnInput(bool a0) { *(bool*)GetAddress(this, "AShooterCharacter", "bShouldInvertTurnInput") = a0; };
	bool GetbShouldInvertTurnInput() const { return *(bool*)GetAddress(this, "AShooterCharacter", "bShouldInvertTurnInput"); };
	void SetAllianceInviteRequestingTeam(int a0) { *(int*)GetAddress(this, "AShooterCharacter", "AllianceInviteRequestingTeam") = a0; };
	int GetAllianceInviteRequestingTeam() const { return *(int*)GetAddress(this, "AShooterCharacter", "AllianceInviteRequestingTeam"); };
	void SetAllianceInviteID(unsigned int a0) { *(unsigned int*)GetAddress(this, "AShooterCharacter", "AllianceInviteID") = a0; };
	unsigned int GetAllianceInviteID() const { return *(unsigned int*)GetAddress(this, "AShooterCharacter", "AllianceInviteID"); };
	void SetAllianceInviteName(FString a0) { *(FString*)GetAddress(this, "AShooterCharacter", "AllianceInviteName") = a0; };
	FString GetAllianceInviteName() const { return *(FString*)GetAddress(this, "AShooterCharacter", "AllianceInviteName"); };
	void SetAllianceInviteTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "AllianceInviteTime") = a0; };
	double GetAllianceInviteTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "AllianceInviteTime"); };
	void SetLastUpdatedAimActorsTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastUpdatedAimActorsTime") = a0; };
	double GetLastUpdatedAimActorsTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastUpdatedAimActorsTime"); };
	void SetUpdateHyperThermalInsulationPosition(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "UpdateHyperThermalInsulationPosition") = a0; };
	FVector GetUpdateHyperThermalInsulationPosition() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "UpdateHyperThermalInsulationPosition"); };
	void SetUpdateHypoThermalInsulationPosition(FVector a0) { *(FVector*)GetAddress(this, "AShooterCharacter", "UpdateHypoThermalInsulationPosition") = a0; };
	FVector GetUpdateHypoThermalInsulationPosition() const { return *(FVector*)GetAddress(this, "AShooterCharacter", "UpdateHypoThermalInsulationPosition"); };
	void SetNextUpdateHyperThermalInsulationTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "NextUpdateHyperThermalInsulationTime") = a0; };
	double GetNextUpdateHyperThermalInsulationTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "NextUpdateHyperThermalInsulationTime"); };
	void SetNextUpdateHypoThermalInsulationTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "NextUpdateHypoThermalInsulationTime") = a0; };
	double GetNextUpdateHypoThermalInsulationTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "NextUpdateHypoThermalInsulationTime"); };
	void SetLastAdditionalHypoThermalInsulation(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "LastAdditionalHypoThermalInsulation") = a0; };
	float GetLastAdditionalHypoThermalInsulation() const { return *(float*)GetAddress(this, "AShooterCharacter", "LastAdditionalHypoThermalInsulation"); };
	void SetLastAdditionalHyperThermalInsulation(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "LastAdditionalHyperThermalInsulation") = a0; };
	float GetLastAdditionalHyperThermalInsulation() const { return *(float*)GetAddress(this, "AShooterCharacter", "LastAdditionalHyperThermalInsulation"); };
	void SetWaterLossRateMultiplier(float a0) { *(float*)GetAddress(this, "AShooterCharacter", "WaterLossRateMultiplier") = a0; };
	float GetWaterLossRateMultiplier() const { return *(float*)GetAddress(this, "AShooterCharacter", "WaterLossRateMultiplier"); };
	void SetLastTryAccessInventoryFailTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastTryAccessInventoryFailTime") = a0; };
	double GetLastTryAccessInventoryFailTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastTryAccessInventoryFailTime"); };
	void SetLastEmotePlayTime(double a0) { *(double*)GetAddress(this, "AShooterCharacter", "LastEmotePlayTime") = a0; };
	double GetLastEmotePlayTime() const { return *(double*)GetAddress(this, "AShooterCharacter", "LastEmotePlayTime"); };

	// Functions

	void ForceSleep() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ForceSleep"))((DWORD64)this); }
	void ModifyFirstPersonCameraLocation(FVector& a1, float a2) { static_cast<void(_cdecl*)(DWORD64, FVector&, float)>(GetAddress("AShooterCharacter", "ModifyFirstPersonCameraLocation"))((DWORD64)this, a1, a2); }
	void OnCameraUpdate(const FVector& a1, const FRotator& a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, const FRotator&)>(GetAddress("AShooterCharacter", "OnCameraUpdate"))((DWORD64)this, a1, a2); }
	void Serialize(FArchive& a1) { static_cast<void(_cdecl*)(DWORD64, FArchive&)>(GetAddress("AShooterCharacter", "Serialize"))((DWORD64)this, a1); }
	bool CanFire() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanFire"))((DWORD64)this); }
	void SetTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "SetTargeting"))((DWORD64)this, a1); }
	void OnStartFire(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "OnStartFire"))((DWORD64)this, a1); }
	void OnStopFire(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "OnStopFire"))((DWORD64)this, a1); }
	void OnStartAltFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnStartAltFire"))((DWORD64)this); }
	void OnStopAltFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnStopAltFire"))((DWORD64)this); }
	void OnStartTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "OnStartTargeting"))((DWORD64)this, a1); }
	void OnStopTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "OnStopTargeting"))((DWORD64)this, a1); }
	void ZoomIn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ZoomIn"))((DWORD64)this); }
	void ZoomOut() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ZoomOut"))((DWORD64)this); }
	void OnPressReload() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnPressReload"))((DWORD64)this); }
	void OnReload() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnReload"))((DWORD64)this); }
	void OnPressCrouch() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnPressCrouch"))((DWORD64)this); }
	void OnPressProne() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnPressProne"))((DWORD64)this); }
	void OnPressCrouchProneToggle() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnPressCrouchProneToggle"))((DWORD64)this); }
	void OnReleaseCrouchProneToggle() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnReleaseCrouchProneToggle"))((DWORD64)this); }
	void OnStartRunning() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnStartRunning"))((DWORD64)this); }
	void SetSleeping(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("AShooterCharacter", "SetSleeping"))((DWORD64)this, a1, a2); }
	bool IsTargeting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsTargeting"))((DWORD64)this); }
	bool IsUsingShield() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsUsingShield"))((DWORD64)this); }
	bool IsBlockingWithShield() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsBlockingWithShield"))((DWORD64)this); }
	bool GetBlockingShieldOffsets(FVector& a1, FRotator& a2) { return static_cast<bool(_cdecl*)(DWORD64, FVector&, FRotator&)>(GetAddress("AShooterCharacter", "GetBlockingShieldOffsets"))((DWORD64)this, a1, a2); }
	UPrimalItem* GetShieldItem() { return static_cast<UPrimalItem*(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetShieldItem"))((DWORD64)this); }
	bool IsFirstPerson() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsFirstPerson"))((DWORD64)this); }
	void SetCameraMode(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "SetCameraMode"))((DWORD64)this, a1); }
	void PlaySpawnIntro() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "PlaySpawnIntro"))((DWORD64)this); }
	void FinishSpawnIntro() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "FinishSpawnIntro"))((DWORD64)this); }
	void OnVoiceTalkingStateChanged(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "OnVoiceTalkingStateChanged"))((DWORD64)this, a1); }
	bool AllowFirstPerson() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "AllowFirstPerson"))((DWORD64)this); }
	void ServerDetachGrapHookCable(bool a1, float a2) { static_cast<void(_cdecl*)(DWORD64, bool, float)>(GetAddress("AShooterCharacter", "ServerDetachGrapHookCable"))((DWORD64)this, a1, a2); }
	void DetachGrapHookCable() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "DetachGrapHookCable"))((DWORD64)this); }
	void UpdateGrapHook(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterCharacter", "UpdateGrapHook"))((DWORD64)this, a1); }
	void UpdateCarriedLocationAndRotation(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterCharacter", "UpdateCarriedLocationAndRotation"))((DWORD64)this, a1); }
	void SetCurrentWeapon(AShooterWeapon* a1, AShooterWeapon* a2) { static_cast<void(_cdecl*)(DWORD64, AShooterWeapon*, AShooterWeapon*)>(GetAddress("AShooterCharacter", "SetCurrentWeapon"))((DWORD64)this, a1, a2); }
	void PlayDying(float a1, const FDamageEvent& a2, APawn* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const FDamageEvent&, APawn*, AActor*)>(GetAddress("AShooterCharacter", "PlayDying"))((DWORD64)this, a1, a2, a3, a4); }
	bool CanBeCarried() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanBeCarried"))((DWORD64)this); }
	float GetCarryingSocketYaw(bool a1) { return static_cast<float(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "GetCarryingSocketYaw"))((DWORD64)this, a1); }
	void ServerSetBallistaNewRotation(float a1, float a2) { static_cast<void(_cdecl*)(DWORD64, float, float)>(GetAddress("AShooterCharacter", "ServerSetBallistaNewRotation"))((DWORD64)this, a1, a2); }
	void DelayGiveDefaultWeapon(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterCharacter", "DelayGiveDefaultWeapon"))((DWORD64)this, a1); }
	void GiveDefaultWeapon(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "GiveDefaultWeapon"))((DWORD64)this, a1); }
	void HideWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "HideWeapon"))((DWORD64)this); }
	void ShowWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ShowWeapon"))((DWORD64)this); }
	void GiveDefaultWeaponTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GiveDefaultWeaponTimer"))((DWORD64)this); }
	void GiveMapWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GiveMapWeapon"))((DWORD64)this); }
	void SwitchMap() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "SwitchMap"))((DWORD64)this); }
	void ServerGiveDefaultWeapon_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerGiveDefaultWeapon_Implementation"))((DWORD64)this); }
	void LocalPossessedBy(APlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("AShooterCharacter", "LocalPossessedBy"))((DWORD64)this, a1); }
	void OnEndCrouch(float a1, float a2) { static_cast<void(_cdecl*)(DWORD64, float, float)>(GetAddress("AShooterCharacter", "OnEndCrouch"))((DWORD64)this, a1, a2); }
	void OnStartCrouch(float a1, float a2) { static_cast<void(_cdecl*)(DWORD64, float, float)>(GetAddress("AShooterCharacter", "OnStartCrouch"))((DWORD64)this, a1, a2); }
	bool CanProne() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanProne"))((DWORD64)this); }
	bool CanCrouch() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanCrouch"))((DWORD64)this); }
	void ControllerLeavingGame(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterCharacter", "ControllerLeavingGame"))((DWORD64)this, a1); }
	AShooterCharacter* FindForPlayerController(AShooterPlayerController* a1) { return static_cast<AShooterCharacter*(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterCharacter", "FindForPlayerController"))((DWORD64)this, a1); }
	bool ValidToRestoreForPC(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterCharacter", "ValidToRestoreForPC"))((DWORD64)this, a1); }
	FString* GetDescriptiveName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("AShooterCharacter", "GetDescriptiveName"))((DWORD64)this, res); }
	bool IsRunning() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsRunning"))((DWORD64)this); }
	void ServerForceUpdatedAimedActors(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterCharacter", "ServerForceUpdatedAimedActors"))((DWORD64)this, a1); }
	float GetMaxSpeedModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetMaxSpeedModifier"))((DWORD64)this); }
	void GivePrimalItemWeapon(UPrimalItem* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("AShooterCharacter", "GivePrimalItemWeapon"))((DWORD64)this, a1); }
	void FinishWeaponSwitch() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "FinishWeaponSwitch"))((DWORD64)this); }
	void StartWeaponSwitch(UPrimalItem* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, bool)>(GetAddress("AShooterCharacter", "StartWeaponSwitch"))((DWORD64)this, a1, a2); }
	void SpawnDefaultController() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "SpawnDefaultController"))((DWORD64)this); }
	void SetCarryingDino(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterCharacter", "SetCarryingDino"))((DWORD64)this, a1); }
	void ClearCarryingDino(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "ClearCarryingDino"))((DWORD64)this, a1); }
	void ClearRidingDinoAsPassenger(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "ClearRidingDinoAsPassenger"))((DWORD64)this, a1); }
	bool IsCarriedAsPassenger() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsCarriedAsPassenger"))((DWORD64)this); }
	void SetRidingDino(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterCharacter", "SetRidingDino"))((DWORD64)this, a1); }
	void ClearRidingDino(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "ClearRidingDino"))((DWORD64)this, a1); }
	void ServerLaunchMountedDino() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerLaunchMountedDino"))((DWORD64)this); }
	void LaunchMountedDino() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "LaunchMountedDino"))((DWORD64)this); }
	void OnPrimalCharacterSleeped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnPrimalCharacterSleeped"))((DWORD64)this); }
	bool Die(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<bool(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("AShooterCharacter", "Die"))((DWORD64)this, a1, a2, a3, a4); }
	bool CanJumpInternal_Implementation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanJumpInternal_Implementation"))((DWORD64)this); }
	bool CanCrouchInternal() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanCrouchInternal"))((DWORD64)this); }
	bool CanProneInternal() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanProneInternal"))((DWORD64)this); }
	bool IsCrafting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsCrafting"))((DWORD64)this); }
	void RemoveAttachments() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "RemoveAttachments"))((DWORD64)this); }
	void NotifyEquippedItems() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "NotifyEquippedItems"))((DWORD64)this); }
	bool AllowHurtAnimation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "AllowHurtAnimation"))((DWORD64)this); }
	void ChangeActorTeam(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterCharacter", "ChangeActorTeam"))((DWORD64)this, a1); }
	void ClientNotifyTribeRequest(const FString& a1, AShooterCharacter* a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, AShooterCharacter*)>(GetAddress("AShooterCharacter", "ClientNotifyTribeRequest"))((DWORD64)this, a1, a2); }
	void PlayDrinkingAnimation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "PlayDrinkingAnimation"))((DWORD64)this); }
	float GetCharacterAdditionalHypothermiaInsulationValue() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetCharacterAdditionalHypothermiaInsulationValue"))((DWORD64)this); }
	float GetCharacterAdditionalHyperthermiaInsulationValue() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetCharacterAdditionalHyperthermiaInsulationValue"))((DWORD64)this); }
	bool CalcIsIndoors() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CalcIsIndoors"))((DWORD64)this); }
	void AuthPostSpawnInit() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "AuthPostSpawnInit"))((DWORD64)this); }
	void PreInitializeComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "PreInitializeComponents"))((DWORD64)this); }
	void OnBeginDrag_Implementation(APrimalCharacter* a1, int a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*, int, bool)>(GetAddress("AShooterCharacter", "OnBeginDrag_Implementation"))((DWORD64)this, a1, a2, a3); }
	void OnEndDrag_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnEndDrag_Implementation"))((DWORD64)this); }
	bool IsSubmerged(bool a1, bool a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("AShooterCharacter", "IsSubmerged"))((DWORD64)this, a1, a2, a3); }
	void UpdateSwimmingState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "UpdateSwimmingState"))((DWORD64)this); }
	void SetCharacterMeshesMaterialScalarParamValue(FName a1, float a2) { static_cast<void(_cdecl*)(DWORD64, FName, float)>(GetAddress("AShooterCharacter", "SetCharacterMeshesMaterialScalarParamValue"))((DWORD64)this, a1, a2); }
	void RefreshDefaultAttachments(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("AShooterCharacter", "RefreshDefaultAttachments"))((DWORD64)this, a1); }
	float GetRidingDinoAnimSpeedRatio() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetRidingDinoAnimSpeedRatio"))((DWORD64)this); }
	bool UseAdditiveStandingAnim() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "UseAdditiveStandingAnim"))((DWORD64)this); }
	FString* GetGenderString(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("AShooterCharacter", "GetGenderString"))((DWORD64)this, res); }
	void ApplyBodyColors() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ApplyBodyColors"))((DWORD64)this); }
	void OnRep_RawBoneModifiers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnRep_RawBoneModifiers"))((DWORD64)this); }
	void ApplyBoneModifiers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ApplyBoneModifiers"))((DWORD64)this); }
	bool IsWatered() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsWatered"))((DWORD64)this); }
	void AdjustDamage(float& a1, const FDamageEvent& a2, AController* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float&, const FDamageEvent&, AController*, AActor*)>(GetAddress("AShooterCharacter", "AdjustDamage"))((DWORD64)this, a1, a2, a3, a4); }
	float GetMaxCursorHUDDistance(AShooterPlayerController* a1) { return static_cast<float(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("AShooterCharacter", "GetMaxCursorHUDDistance"))((DWORD64)this, a1); }
	void ClientNotifyLevelUp_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ClientNotifyLevelUp_Implementation"))((DWORD64)this); }
	void OrbitCamOn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OrbitCamOn"))((DWORD64)this); }
	void OrbitCamToggle() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OrbitCamToggle"))((DWORD64)this); }
	void SetRagdollPhysics(bool a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("AShooterCharacter", "SetRagdollPhysics"))((DWORD64)this, a1, a2, a3); }
	void ServerCallFollow_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerCallFollow_Implementation"))((DWORD64)this); }
	void ServerCallStay_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerCallStay_Implementation"))((DWORD64)this); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterCharacter", "ServerCallFollowOne_Implementation"))((DWORD64)this, a1); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterCharacter", "ServerCallStayOne_Implementation"))((DWORD64)this, a1); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("AShooterCharacter", "ServerCallFollowDistanceCycleOne_Implementation"))((DWORD64)this, a1); }
	void ServerCallAggressive_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerCallAggressive_Implementation"))((DWORD64)this); }
	void ServerCallSetAggressive_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerCallSetAggressive_Implementation"))((DWORD64)this); }
	void ServerCallNeutral_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerCallNeutral_Implementation"))((DWORD64)this); }
	void ServerCallPassive_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerCallPassive_Implementation"))((DWORD64)this); }
	void ServerCallAttackTarget_Implementation(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("AShooterCharacter", "ServerCallAttackTarget_Implementation"))((DWORD64)this, a1); }
	void ServerCallMoveTo_Implementation(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("AShooterCharacter", "ServerCallMoveTo_Implementation"))((DWORD64)this, a1); }
	void UpdatePawnMeshes(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("AShooterCharacter", "UpdatePawnMeshes"))((DWORD64)this, a1, a2); }
	void TryAccessInventory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "TryAccessInventory"))((DWORD64)this); }
	unsigned int GetUniqueNetIdTypeHash() { return static_cast<unsigned int(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetUniqueNetIdTypeHash"))((DWORD64)this); }
	bool UnstasisCheckRagdollGround() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "UnstasisCheckRagdollGround"))((DWORD64)this); }
	void OnFailedJumped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnFailedJumped"))((DWORD64)this); }
	bool CanEverProne() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CanEverProne"))((DWORD64)this); }
	bool IsShooterCharacter() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsShooterCharacter"))((DWORD64)this); }
	bool UseHighQualityMovement() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "UseHighQualityMovement"))((DWORD64)this); }
	float GetRecoilMultiplier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetRecoilMultiplier"))((DWORD64)this); }
	void StasisingCharacter() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "StasisingCharacter"))((DWORD64)this); }
	void DedicatedServerBoneFixup() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "DedicatedServerBoneFixup"))((DWORD64)this); }
	void PlaySpawnAnim() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "PlaySpawnAnim"))((DWORD64)this); }
	void ClearSpawnAnim() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ClearSpawnAnim"))((DWORD64)this); }
	void PlayJumpAnim() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "PlayJumpAnim"))((DWORD64)this); }
	void PlayLandedAnim() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "PlayLandedAnim"))((DWORD64)this); }
	void ClosedInventoryUI() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ClosedInventoryUI"))((DWORD64)this); }
	void UpdateTransponders() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "UpdateTransponders"))((DWORD64)this); }
	void ClientMultiUse(APlayerController* a1, int a2) { static_cast<void(_cdecl*)(DWORD64, APlayerController*, int)>(GetAddress("AShooterCharacter", "ClientMultiUse"))((DWORD64)this, a1, a2); }
	bool IsValidUnStasisCaster() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsValidUnStasisCaster"))((DWORD64)this); }
	void GameStateHandleEvent(FName a1, FVector a2) { static_cast<void(_cdecl*)(DWORD64, FName, FVector)>(GetAddress("AShooterCharacter", "GameStateHandleEvent"))((DWORD64)this, a1, a2); }
	bool IsOnSeatingStructure() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsOnSeatingStructure"))((DWORD64)this); }
	bool IsControllingBallistaTurret() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsControllingBallistaTurret"))((DWORD64)this); }
	//APrimalStructureTurretBallista* GetControlledTurretBallista() { return static_cast<APrimalStructureTurretBallista*(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetControlledTurretBallista"))((DWORD64)this); }
	void OnAttachedToSeatingStructure() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "OnAttachedToSeatingStructure"))((DWORD64)this); }
	void ServerSeatingStructureAction(unsigned char a1) { static_cast<void(_cdecl*)(DWORD64, unsigned char)>(GetAddress("AShooterCharacter", "ServerSeatingStructureAction"))((DWORD64)this, a1); }
	void ServerPlayFireBallistaAnimation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerPlayFireBallistaAnimation"))((DWORD64)this); }
	void ServerStopFireBallista() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ServerStopFireBallista"))((DWORD64)this); }
	void DetachFromLadder() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "DetachFromLadder"))((DWORD64)this); }
	UPrimalPlayerData* GetPlayerData() { return static_cast<UPrimalPlayerData*(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetPlayerData"))((DWORD64)this); }
	AActor* GetOtherActorToIgnore() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetOtherActorToIgnore"))((DWORD64)this); }
	void WasPushed(ACharacter* a1) { static_cast<void(_cdecl*)(DWORD64, ACharacter*)>(GetAddress("AShooterCharacter", "WasPushed"))((DWORD64)this, a1); }
	void NotifyBumpedPawn(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("AShooterCharacter", "NotifyBumpedPawn"))((DWORD64)this, a1); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "CheckAndHandleBasedPlayersBeingPushedThroughWalls"))((DWORD64)this); }
	void ClientNetEndClimbingLadder() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ClientNetEndClimbingLadder"))((DWORD64)this); }
	bool IsProneOrSitting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsProneOrSitting"))((DWORD64)this); }
	bool IsSitting() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsSitting"))((DWORD64)this); }
	bool IsIndoorsAtLoc(UWorld* a1, const FVector& a2) { return static_cast<bool(_cdecl*)(DWORD64, UWorld*, const FVector&)>(GetAddress("AShooterCharacter", "IsIndoorsAtLoc"))((DWORD64)this, a1, a2); }
	void RenamePlayer(const FString& a1) { static_cast<void(_cdecl*)(DWORD64, const FString&)>(GetAddress("AShooterCharacter", "RenamePlayer"))((DWORD64)this, a1); }
	bool AllowDinoTargetingRange(const FVector& a1, float a2) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&, float)>(GetAddress("AShooterCharacter", "AllowDinoTargetingRange"))((DWORD64)this, a1, a2); }
	FVector* GetPawnViewLocation(FVector* res, bool a1) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*, bool)>(GetAddress("AShooterCharacter", "GetPawnViewLocation"))((DWORD64)this, res, a1); }
	FRotator* GetPassengerAttachedRotation(FRotator* res) { return static_cast<FRotator*(_cdecl*)(DWORD64, FRotator*)>(GetAddress("AShooterCharacter", "GetPassengerAttachedRotation"))((DWORD64)this, res); }
	void ClientInviteToAlliance(int a1, unsigned int a2, const FString& a3, const FString& a4) { static_cast<void(_cdecl*)(DWORD64, int, unsigned int, const FString&, const FString&)>(GetAddress("AShooterCharacter", "ClientInviteToAlliance"))((DWORD64)this, a1, a2, a3, a4); }
	void InviteToAlliance(int a1, unsigned int a2, FString a3, FString a4) { static_cast<void(_cdecl*)(DWORD64, int, unsigned int, FString, FString)>(GetAddress("AShooterCharacter", "InviteToAlliance"))((DWORD64)this, a1, a2, a3, a4); }
	bool CanDragCharacter(APrimalCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("AShooterCharacter", "CanDragCharacter"))((DWORD64)this, a1); }
	void RefreshTribeName() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "RefreshTribeName"))((DWORD64)this); }
	bool IsCarryingSomething(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterCharacter", "IsCarryingSomething"))((DWORD64)this, a1); }
	void ForceGiveDefaultWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "ForceGiveDefaultWeapon"))((DWORD64)this); }
	APrimalDinoCharacter* GetBasedOnDino() { return static_cast<APrimalDinoCharacter*(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetBasedOnDino"))((DWORD64)this); }
	APrimalDinoCharacter* GetRidingDino() { return static_cast<APrimalDinoCharacter*(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetRidingDino"))((DWORD64)this); }
	void ResetCollisionSweepLocation(const FVector& a1) { static_cast<void(_cdecl*)(DWORD64, const FVector&)>(GetAddress("AShooterCharacter", "ResetCollisionSweepLocation"))((DWORD64)this, a1); }
	void ServerStartSurfaceCameraForPassenger(float a1, float a2, float a3, bool a4) { static_cast<void(_cdecl*)(DWORD64, float, float, float, bool)>(GetAddress("AShooterCharacter", "ServerStartSurfaceCameraForPassenger"))((DWORD64)this, a1, a2, a3, a4); }
	float ModifyAirControl(float a1) { return static_cast<float(_cdecl*)(DWORD64, float)>(GetAddress("AShooterCharacter", "ModifyAirControl"))((DWORD64)this, a1); }
	bool IsPlayingUpperBodyCallAnimation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "IsPlayingUpperBodyCallAnimation"))((DWORD64)this); }
	bool GetAdditiveStandingAnimNonAdditive() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterCharacter", "GetAdditiveStandingAnimNonAdditive"))((DWORD64)this); }
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
	void SetCharacterStatusComponent_ExtraCharacterLevel(unsigned short a0) { *(unsigned short*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExtraCharacterLevel") = a0; };
	unsigned short GetCharacterStatusComponent_ExtraCharacterLevel() const { return *(unsigned short*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExtraCharacterLevel"); };
	void SetCharacterStatusComponent_ExperiencePoints(float a0) { *(float*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExperiencePoints") = a0; };
	float GetCharacterStatusComponent_ExperiencePoints() const { return *(float*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "CharacterStatusComponent_ExperiencePoints"); };
	void SetPlayerState_TotalEngramPoints(int a0) { *(int*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "PlayerState_TotalEngramPoints") = a0; };
	int GetPlayerState_TotalEngramPoints() const { return *(int*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "PlayerState_TotalEngramPoints"); };
	void SetPerMapExplorerNoteUnlocks(TArray<unsigned int, FDefaultAllocator> a0) { *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "PerMapExplorerNoteUnlocks") = a0; };
	TArray<unsigned int, FDefaultAllocator> GetPerMapExplorerNoteUnlocks() const { return *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "PerMapExplorerNoteUnlocks"); };
	void SetEmoteUnlocks(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "EmoteUnlocks") = a0; };
	TArray<FName, FDefaultAllocator> GetEmoteUnlocks() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "EmoteUnlocks"); };
	//TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator> GetPlayerState_EngramBlueprints() const { return *(TArray<TSubclassOf<UPrimalItem>, FDefaultAllocator>*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "PlayerState_EngramBlueprints"); };
	void SetCurrentlySelectedDinoOrderGroup(int a0) { *(int*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "CurrentlySelectedDinoOrderGroup") = a0; };
	int GetCurrentlySelectedDinoOrderGroup() const { return *(int*)GetAddress(this, "FPrimalPersistentCharacterStatsStruct", "CurrentlySelectedDinoOrderGroup"); };

	// Functions

	void ApplyToPrimalCharacter(APrimalCharacter* a1, AShooterPlayerController* a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*, AShooterPlayerController*, bool)>(GetAddress("FPrimalPersistentCharacterStatsStruct", "ApplyToPrimalCharacter"))((DWORD64)this, a1, a2, a3); }
	void GiveEngramsToPlayerState(APrimalCharacter* a1, AShooterPlayerController* a2) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*, AShooterPlayerController*)>(GetAddress("FPrimalPersistentCharacterStatsStruct", "GiveEngramsToPlayerState"))((DWORD64)this, a1, a2); }
	bool IsPerMapExplorerNoteUnlocked(int a1) { return static_cast<bool(_cdecl*)(DWORD64, int)>(GetAddress("FPrimalPersistentCharacterStatsStruct", "IsPerMapExplorerNoteUnlocked"))((DWORD64)this, a1); }
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
	void SetPlayerDataID(unsigned __int64 a0) { *(unsigned __int64*)GetAddress(this, "FPrimalPlayerDataStruct", "PlayerDataID") = a0; };
	unsigned __int64 GetPlayerDataID() const { return *(unsigned __int64*)GetAddress(this, "FPrimalPlayerDataStruct", "PlayerDataID"); };
	void SetUniqueID(FUniqueNetIdRepl a0) { *(FUniqueNetIdRepl*)GetAddress(this, "FPrimalPlayerDataStruct", "UniqueID") = a0; };
	FUniqueNetIdRepl GetUniqueID() const { return *(FUniqueNetIdRepl*)GetAddress(this, "FPrimalPlayerDataStruct", "UniqueID"); };
	void SetSavedNetworkAddress(FString a0) { *(FString*)GetAddress(this, "FPrimalPlayerDataStruct", "SavedNetworkAddress") = a0; };
	FString GetSavedNetworkAddress() const { return *(FString*)GetAddress(this, "FPrimalPlayerDataStruct", "SavedNetworkAddress"); };
	void SetPlayerName(FString a0) { *(FString*)GetAddress(this, "FPrimalPlayerDataStruct", "PlayerName") = a0; };
	FString GetPlayerName() const { return *(FString*)GetAddress(this, "FPrimalPlayerDataStruct", "PlayerName"); };
	void SetLocalPlayerIndex(unsigned int a0) { *(unsigned int*)GetAddress(this, "FPrimalPlayerDataStruct", "LocalPlayerIndex") = a0; };
	unsigned int GetLocalPlayerIndex() const { return *(unsigned int*)GetAddress(this, "FPrimalPlayerDataStruct", "LocalPlayerIndex"); };
	FPrimalPlayerCharacterConfigStruct GetMyPlayerCharacterConfig() const { return *(FPrimalPlayerCharacterConfigStruct*)GetAddress(this, "FPrimalPlayerDataStruct", "MyPlayerCharacterConfig"); };
	FPrimalPersistentCharacterStatsStruct* GetMyPersistentCharacterStats() const { return (FPrimalPersistentCharacterStatsStruct*)GetAddress(this, "FPrimalPlayerDataStruct", "MyPersistentCharacterStats"); };
	void SetTribeID(int a0) { *(int*)GetAddress(this, "FPrimalPlayerDataStruct", "TribeID") = a0; };
	int GetTribeID() const { return *(int*)GetAddress(this, "FPrimalPlayerDataStruct", "TribeID"); };
	void SetPlayerDataVersion(int a0) { *(int*)GetAddress(this, "FPrimalPlayerDataStruct", "PlayerDataVersion") = a0; };
	int GetPlayerDataVersion() const { return *(int*)GetAddress(this, "FPrimalPlayerDataStruct", "PlayerDataVersion"); };
	void SetNextAllowedRespawnTime(double a0) { *(double*)GetAddress(this, "FPrimalPlayerDataStruct", "NextAllowedRespawnTime") = a0; };
	double GetNextAllowedRespawnTime() const { return *(double*)GetAddress(this, "FPrimalPlayerDataStruct", "NextAllowedRespawnTime"); };
	void SetLastTimeDiedToEnemyTeam(double a0) { *(double*)GetAddress(this, "FPrimalPlayerDataStruct", "LastTimeDiedToEnemyTeam") = a0; };
	double GetLastTimeDiedToEnemyTeam() const { return *(double*)GetAddress(this, "FPrimalPlayerDataStruct", "LastTimeDiedToEnemyTeam"); };
	void SetAllowedRespawnInterval(float a0) { *(float*)GetAddress(this, "FPrimalPlayerDataStruct", "AllowedRespawnInterval") = a0; };
	float GetAllowedRespawnInterval() const { return *(float*)GetAddress(this, "FPrimalPlayerDataStruct", "AllowedRespawnInterval"); };
	void SetNumOfDeaths(float a0) { *(float*)GetAddress(this, "FPrimalPlayerDataStruct", "NumOfDeaths") = a0; };
	float GetNumOfDeaths() const { return *(float*)GetAddress(this, "FPrimalPlayerDataStruct", "NumOfDeaths"); };
};

struct UPrimalPlayerData
{
	FPrimalPlayerDataStruct* GetMyData() const { return (FPrimalPlayerDataStruct*)GetAddress(this, "UPrimalPlayerData", "MyData"); };
	//TArray<UPrimalBuffPersistentData *, FDefaultAllocator> GetMyPersistentBuffDatas() const { return *(TArray<UPrimalBuffPersistentData *, FDefaultAllocator>*)GetAddress(this, "UPrimalPlayerData", "MyPersistentBuffDatas"); };
	bool GetbIsLocalPlayer() const { return *(bool*)GetAddress(this, "UPrimalPlayerData", "bIsLocalPlayer"); };
	void SetLastXPWritePercent(float a0) { *(float*)GetAddress(this, "UPrimalPlayerData", "LastXPWritePercent") = a0; };
	float GetLastXPWritePercent() const { return *(float*)GetAddress(this, "UPrimalPlayerData", "LastXPWritePercent"); };

	// Functions

	bool MatchesPlayer(AShooterPlayerState* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerState*, bool)>(GetAddress("UPrimalPlayerData", "MatchesPlayer"))((DWORD64)this, a1, a2); }
	void InitForPlayer(AShooterPlayerState* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerState*, bool)>(GetAddress("UPrimalPlayerData", "InitForPlayer"))((DWORD64)this, a1, a2); }
	AShooterPlayerState* GetPlayerState(AShooterPlayerState* a1, bool a2) { return static_cast<AShooterPlayerState*(_cdecl*)(DWORD64, AShooterPlayerState*, bool)>(GetAddress("UPrimalPlayerData", "GetPlayerState"))((DWORD64)this, a1, a2); }
	UPrimalPlayerData* GetDataForID(unsigned __int64 a1) { return static_cast<UPrimalPlayerData*(_cdecl*)(DWORD64, unsigned __int64)>(GetAddress("UPrimalPlayerData", "GetDataForID"))((DWORD64)this, a1); }
	void ApplyToPlayerState(AShooterPlayerState* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerState*)>(GetAddress("UPrimalPlayerData", "ApplyToPlayerState"))((DWORD64)this, a1); }
	void GiveInitialItems(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("UPrimalPlayerData", "GiveInitialItems"))((DWORD64)this, a1); }
	void SavePlayerData(UWorld* a1) { static_cast<void(_cdecl*)(DWORD64, UWorld*)>(GetAddress("UPrimalPlayerData", "SavePlayerData"))((DWORD64)this, a1); }
	void ApplyToPlayerCharacter(AShooterCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterCharacter*)>(GetAddress("UPrimalPlayerData", "ApplyToPlayerCharacter"))((DWORD64)this, a1); }
	void RefreshPersistentBuffs() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalPlayerData", "RefreshPersistentBuffs"))((DWORD64)this); }
};

struct UPrimalCharacterStatusComponent
{
	void SetTamedIneffectivenessModifier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TamedIneffectivenessModifier") = a0; };
	float GetTamedIneffectivenessModifier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TamedIneffectivenessModifier"); };
	void SetMovingStaminaRecoveryRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MovingStaminaRecoveryRateMultiplier") = a0; };
	float GetMovingStaminaRecoveryRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MovingStaminaRecoveryRateMultiplier"); };
	void SetTamingIneffectivenessMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TamingIneffectivenessMultiplier") = a0; };
	float GetTamingIneffectivenessMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TamingIneffectivenessMultiplier"); };
	void SetDinoRiderWeightMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DinoRiderWeightMultiplier") = a0; };
	float GetDinoRiderWeightMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DinoRiderWeightMultiplier"); };
	void SetExperienceAutomaticConsciousIncreaseSpeed(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExperienceAutomaticConsciousIncreaseSpeed") = a0; };
	float GetExperienceAutomaticConsciousIncreaseSpeed() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExperienceAutomaticConsciousIncreaseSpeed"); };
	void SetCheatMaxWeight(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CheatMaxWeight") = a0; };
	float GetCheatMaxWeight() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CheatMaxWeight"); };
	void SetCharacterStatusComponentPriority(int a0) { *(int*)GetAddress(this, "UPrimalCharacterStatusComponent", "CharacterStatusComponentPriority") = a0; };
	int GetCharacterStatusComponentPriority() const { return *(int*)GetAddress(this, "UPrimalCharacterStatusComponent", "CharacterStatusComponentPriority"); };
	void SetSuffocationHealthPercentDecreaseSpeed(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SuffocationHealthPercentDecreaseSpeed") = a0; };
	float GetSuffocationHealthPercentDecreaseSpeed() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SuffocationHealthPercentDecreaseSpeed"); };
	void SetUnsubmergedOxygenIncreaseSpeed(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "UnsubmergedOxygenIncreaseSpeed") = a0; };
	float GetUnsubmergedOxygenIncreaseSpeed() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "UnsubmergedOxygenIncreaseSpeed"); };
	void SetSubmergedOxygenDecreaseSpeed(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SubmergedOxygenDecreaseSpeed") = a0; };
	float GetSubmergedOxygenDecreaseSpeed() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SubmergedOxygenDecreaseSpeed"); };
	void SetRunningStaminaConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "RunningStaminaConsumptionRate") = a0; };
	float GetRunningStaminaConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "RunningStaminaConsumptionRate"); };
	void SetWalkingStaminaConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WalkingStaminaConsumptionRate") = a0; };
	float GetWalkingStaminaConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WalkingStaminaConsumptionRate"); };
	void SetSwimmingOrFlyingStaminaConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SwimmingOrFlyingStaminaConsumptionRate") = a0; };
	float GetSwimmingOrFlyingStaminaConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SwimmingOrFlyingStaminaConsumptionRate"); };
	void SetJumpStaminaConsumption(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "JumpStaminaConsumption") = a0; };
	float GetJumpStaminaConsumption() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "JumpStaminaConsumption"); };
	void SetWindedSpeedModifier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifier") = a0; };
	float GetWindedSpeedModifier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifier"); };
	void SetWindedSpeedModifierSwimmingOrFlying(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifierSwimmingOrFlying") = a0; };
	float GetWindedSpeedModifierSwimmingOrFlying() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WindedSpeedModifierSwimmingOrFlying"); };
	void SetInjuredSpeedModifier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InjuredSpeedModifier") = a0; };
	float GetInjuredSpeedModifier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InjuredSpeedModifier"); };
	void SetHypothermicHealthDecreaseRateBase(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRateBase") = a0; };
	float GetHypothermicHealthDecreaseRateBase() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRateBase"); };
	void SetHypothermicHealthDecreaseRatePerDegree(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRatePerDegree") = a0; };
	float GetHypothermicHealthDecreaseRatePerDegree() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermicHealthDecreaseRatePerDegree"); };
	void SetHyperthermicHealthDecreaseRateBase(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRateBase") = a0; };
	float GetHyperthermicHealthDecreaseRateBase() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRateBase"); };
	void SetHyperthermicHealthDecreaseRatePerDegree(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRatePerDegree") = a0; };
	float GetHyperthermicHealthDecreaseRatePerDegree() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermicHealthDecreaseRatePerDegree"); };
	void SetXPEarnedPerStaminaConsumed(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "XPEarnedPerStaminaConsumed") = a0; };
	float GetXPEarnedPerStaminaConsumed() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "XPEarnedPerStaminaConsumed"); };
	void SetKillXPMultiplierPerCharacterLevel(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "KillXPMultiplierPerCharacterLevel") = a0; };
	float GetKillXPMultiplierPerCharacterLevel() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "KillXPMultiplierPerCharacterLevel"); };
	void SetShareXPWithTribeRange(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ShareXPWithTribeRange") = a0; };
	float GetShareXPWithTribeRange() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ShareXPWithTribeRange"); };
	void SetBaseCharacterLevel(int a0) { *(int*)GetAddress(this, "UPrimalCharacterStatusComponent", "BaseCharacterLevel") = a0; };
	int GetBaseCharacterLevel() const { return *(int*)GetAddress(this, "UPrimalCharacterStatusComponent", "BaseCharacterLevel"); };
	void SetExtraCharacterLevel(unsigned short a0) { *(unsigned short*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraCharacterLevel") = a0; };
	unsigned short GetExtraCharacterLevel() const { return *(unsigned short*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraCharacterLevel"); };
	void SetExperiencePoints(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExperiencePoints") = a0; };
	float GetExperiencePoints() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExperiencePoints"); };
	void SetReplicatedExperiencePoints(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ReplicatedExperiencePoints") = a0; };
	float GetReplicatedExperiencePoints() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ReplicatedExperiencePoints"); };
	//void SetLevelExperienceRampType(TEnumAsByte<enum ELevelExperienceRampType::Type> a0) { *(TEnumAsByte<enum ELevelExperienceRampType::Type>*)GetAddress(this, "UPrimalCharacterStatusComponent", "LevelExperienceRampType") = a0; };
	//TEnumAsByte<enum ELevelExperienceRampType::Type> GetLevelExperienceRampType() const { return *(TEnumAsByte<enum ELevelExperienceRampType::Type>*)GetAddress(this, "UPrimalCharacterStatusComponent", "LevelExperienceRampType"); };
	void SetMaxExperiencePoints(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MaxExperiencePoints") = a0; };
	float GetMaxExperiencePoints() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MaxExperiencePoints"); };
	void SetBaseFoodConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BaseFoodConsumptionRate") = a0; };
	float GetBaseFoodConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BaseFoodConsumptionRate"); };
	void SetBaseWaterConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BaseWaterConsumptionRate") = a0; };
	float GetBaseWaterConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BaseWaterConsumptionRate"); };
	void SetFortitudeTorpidityDecreaseMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityDecreaseMultiplier") = a0; };
	float GetFortitudeTorpidityDecreaseMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityDecreaseMultiplier"); };
	void SetFortitudeTorpidityIncreaseResistance(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityIncreaseResistance") = a0; };
	float GetFortitudeTorpidityIncreaseResistance() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "FortitudeTorpidityIncreaseResistance"); };
	void SetSubmergedWaterIncreaseRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SubmergedWaterIncreaseRate") = a0; };
	float GetSubmergedWaterIncreaseRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SubmergedWaterIncreaseRate"); };
	void SetCrouchedWaterFoodConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CrouchedWaterFoodConsumptionMultiplier") = a0; };
	float GetCrouchedWaterFoodConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CrouchedWaterFoodConsumptionMultiplier"); };
	void SetProneWaterFoodConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ProneWaterFoodConsumptionMultiplier") = a0; };
	float GetProneWaterFoodConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ProneWaterFoodConsumptionMultiplier"); };
	void SetStaminaRecoveryDecreaseFoodMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseFoodMultiplier") = a0; };
	float GetStaminaRecoveryDecreaseFoodMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseFoodMultiplier"); };
	void SetStaminaRecoveryDecreaseWaterMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseWaterMultiplier") = a0; };
	float GetStaminaRecoveryDecreaseWaterMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryDecreaseWaterMultiplier"); };
	void SetHealthRecoveryDecreaseFoodMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HealthRecoveryDecreaseFoodMultiplier") = a0; };
	float GetHealthRecoveryDecreaseFoodMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HealthRecoveryDecreaseFoodMultiplier"); };
	void SetBabyDinoConsumingFoodRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyDinoConsumingFoodRateMultiplier") = a0; };
	float GetBabyDinoConsumingFoodRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyDinoConsumingFoodRateMultiplier"); };
	void SetDinoTamedAdultConsumingFoodRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DinoTamedAdultConsumingFoodRateMultiplier") = a0; };
	float GetDinoTamedAdultConsumingFoodRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DinoTamedAdultConsumingFoodRateMultiplier"); };
	void SetBabyGestationConsumingFoodRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyGestationConsumingFoodRateMultiplier") = a0; };
	float GetBabyGestationConsumingFoodRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyGestationConsumingFoodRateMultiplier"); };
	void SetBabyDinoStarvationHealthDecreaseRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyDinoStarvationHealthDecreaseRateMultiplier") = a0; };
	float GetBabyDinoStarvationHealthDecreaseRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyDinoStarvationHealthDecreaseRateMultiplier"); };
	void SetBabyMaxHealthPercent(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyMaxHealthPercent") = a0; };
	float GetBabyMaxHealthPercent() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyMaxHealthPercent"); };
	void SetCrouchedStaminaConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CrouchedStaminaConsumptionMultiplier") = a0; };
	float GetCrouchedStaminaConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CrouchedStaminaConsumptionMultiplier"); };
	void SetProneStaminaConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ProneStaminaConsumptionMultiplier") = a0; };
	float GetProneStaminaConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ProneStaminaConsumptionMultiplier"); };
	void SetStarvationHealthConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StarvationHealthConsumptionRate") = a0; };
	float GetStarvationHealthConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StarvationHealthConsumptionRate"); };
	void SetDehyrdationHealthConsumptionRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehyrdationHealthConsumptionRate") = a0; };
	float GetDehyrdationHealthConsumptionRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehyrdationHealthConsumptionRate"); };
	void SetStaminaConsumptionDecreaseWaterMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseWaterMultiplier") = a0; };
	float GetStaminaConsumptionDecreaseWaterMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseWaterMultiplier"); };
	void SetStaminaConsumptionDecreaseFoodMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseFoodMultiplier") = a0; };
	float GetStaminaConsumptionDecreaseFoodMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaConsumptionDecreaseFoodMultiplier"); };
	void SetHypothermiaDecreaseFoodMultiplierBase(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierBase") = a0; };
	float GetHypothermiaDecreaseFoodMultiplierBase() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierBase"); };
	void SetHypothermiaDecreaseFoodMultiplierPerDegree(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierPerDegree") = a0; };
	float GetHypothermiaDecreaseFoodMultiplierPerDegree() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermiaDecreaseFoodMultiplierPerDegree"); };
	void SetHyperthermiaDecreaseWaterMultiplierBase(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierBase") = a0; };
	float GetHyperthermiaDecreaseWaterMultiplierBase() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierBase"); };
	void SetHyperthermiaDecreaseWaterMultiplierPerDegree(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierPerDegree") = a0; };
	float GetHyperthermiaDecreaseWaterMultiplierPerDegree() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermiaDecreaseWaterMultiplierPerDegree"); };
	void SetHyperthermiaTemperatureThreshold(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermiaTemperatureThreshold") = a0; };
	float GetHyperthermiaTemperatureThreshold() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperthermiaTemperatureThreshold"); };
	void SetHypothermiaTemperatureThreshold(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermiaTemperatureThreshold") = a0; };
	float GetHypothermiaTemperatureThreshold() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypothermiaTemperatureThreshold"); };
	void SetTorporExitPercentThreshold(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TorporExitPercentThreshold") = a0; };
	float GetTorporExitPercentThreshold() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TorporExitPercentThreshold"); };
	void SetKnockedOutTorpidityRecoveryRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "KnockedOutTorpidityRecoveryRateMultiplier") = a0; };
	float GetKnockedOutTorpidityRecoveryRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "KnockedOutTorpidityRecoveryRateMultiplier"); };
	void SetDehydrationTorpidityMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehydrationTorpidityMultiplier") = a0; };
	float GetDehydrationTorpidityMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehydrationTorpidityMultiplier"); };
	void SetStarvationTorpidityMultuplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityMultuplier") = a0; };
	float GetStarvationTorpidityMultuplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityMultuplier"); };
	void SetStarvationTorpidityIncreaseRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityIncreaseRate") = a0; };
	float GetStarvationTorpidityIncreaseRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StarvationTorpidityIncreaseRate"); };
	void SetDehyrdationTorpidityIncreaseRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehyrdationTorpidityIncreaseRate") = a0; };
	float GetDehyrdationTorpidityIncreaseRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehyrdationTorpidityIncreaseRate"); };
	void SetInjuredTorpidityIncreaseMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InjuredTorpidityIncreaseMultiplier") = a0; };
	float GetInjuredTorpidityIncreaseMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InjuredTorpidityIncreaseMultiplier"); };
	void SetWeightSpeedDecreasePower(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightSpeedDecreasePower") = a0; };
	float GetWeightSpeedDecreasePower() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightSpeedDecreasePower"); };
	void SetWeightJumpDecreasePower(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightJumpDecreasePower") = a0; };
	float GetWeightJumpDecreasePower() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightJumpDecreasePower"); };
	void SetPoopItemMinFoodConsumptionInterval(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "PoopItemMinFoodConsumptionInterval") = a0; };
	float GetPoopItemMinFoodConsumptionInterval() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "PoopItemMinFoodConsumptionInterval"); };
	void SetPoopItemMaxFoodConsumptionInterval(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "PoopItemMaxFoodConsumptionInterval") = a0; };
	float GetPoopItemMaxFoodConsumptionInterval() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "PoopItemMaxFoodConsumptionInterval"); };
	void SetTheMaxTorporIncreasePerBaseLevel(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TheMaxTorporIncreasePerBaseLevel") = a0; };
	float GetTheMaxTorporIncreasePerBaseLevel() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "TheMaxTorporIncreasePerBaseLevel"); };
	void SetCurrentStatusValuesReplicationInterval(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CurrentStatusValuesReplicationInterval") = a0; };
	float GetCurrentStatusValuesReplicationInterval() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CurrentStatusValuesReplicationInterval"); };
	void SetInsulationHyperthermiaOffsetExponent(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetExponent") = a0; };
	float GetInsulationHyperthermiaOffsetExponent() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetExponent"); };
	void SetInsulationHyperthermiaOffsetScaler(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetScaler") = a0; };
	float GetInsulationHyperthermiaOffsetScaler() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHyperthermiaOffsetScaler"); };
	void SetInsulationHypothermiaOffsetExponent(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetExponent") = a0; };
	float GetInsulationHypothermiaOffsetExponent() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetExponent"); };
	void SetInsulationHypothermiaOffsetScaler(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetScaler") = a0; };
	float GetInsulationHypothermiaOffsetScaler() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "InsulationHypothermiaOffsetScaler"); };
	void SetHypoCharacterInsulationValue(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypoCharacterInsulationValue") = a0; };
	float GetHypoCharacterInsulationValue() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HypoCharacterInsulationValue"); };
	void SetHyperCharacterInsulationValue(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperCharacterInsulationValue") = a0; };
	float GetHyperCharacterInsulationValue() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HyperCharacterInsulationValue"); };
	void SetPoopItemFoodConsumptionCache(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "PoopItemFoodConsumptionCache") = a0; };
	float GetPoopItemFoodConsumptionCache() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "PoopItemFoodConsumptionCache"); };
	void SetLastHypothermalCharacterInsulationValue(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastHypothermalCharacterInsulationValue") = a0; };
	float GetLastHypothermalCharacterInsulationValue() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastHypothermalCharacterInsulationValue"); };
	void SetLastHyperthermalCharacterInsulationValue(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastHyperthermalCharacterInsulationValue") = a0; };
	float GetLastHyperthermalCharacterInsulationValue() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastHyperthermalCharacterInsulationValue"); };
	void SetGenericXPMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "GenericXPMultiplier") = a0; };
	float GetGenericXPMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "GenericXPMultiplier"); };
	void SetCraftEarnXPMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CraftEarnXPMultiplier") = a0; };
	float GetCraftEarnXPMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "CraftEarnXPMultiplier"); };
	void SetKillEarnXPMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "KillEarnXPMultiplier") = a0; };
	float GetKillEarnXPMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "KillEarnXPMultiplier"); };
	void SetGenericEarnXPMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "GenericEarnXPMultiplier") = a0; };
	float GetGenericEarnXPMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "GenericEarnXPMultiplier"); };
	void SetSpecialEarnXPMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SpecialEarnXPMultiplier") = a0; };
	float GetSpecialEarnXPMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SpecialEarnXPMultiplier"); };
	void SetHarvestEarnXPMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HarvestEarnXPMultiplier") = a0; };
	float GetHarvestEarnXPMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "HarvestEarnXPMultiplier"); };
	void SetDefaultHyperthermicInsulation(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DefaultHyperthermicInsulation") = a0; };
	float GetDefaultHyperthermicInsulation() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DefaultHyperthermicInsulation"); };
	void SetDefaultHypothermicInsulation(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DefaultHypothermicInsulation") = a0; };
	float GetDefaultHypothermicInsulation() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DefaultHypothermicInsulation"); };
	void SetMaxTamingEffectivenessBaseLevelMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MaxTamingEffectivenessBaseLevelMultiplier") = a0; };
	float GetMaxTamingEffectivenessBaseLevelMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MaxTamingEffectivenessBaseLevelMultiplier"); };
	void SetBabyUnstasisFoodConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyUnstasisFoodConsumptionMultiplier") = a0; };
	float GetBabyUnstasisFoodConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "BabyUnstasisFoodConsumptionMultiplier"); };
	//void SetStatusValueModifiers(TArray<FPrimalCharacterStatusValueModifier, FDefaultAllocator> a0) { *(TArray<FPrimalCharacterStatusValueModifier, FDefaultAllocator>*)GetAddress(this, "UPrimalCharacterStatusComponent", "StatusValueModifiers") = a0; };
	//TArray<FPrimalCharacterStatusValueModifier, FDefaultAllocator> GetStatusValueModifiers() const { return *(TArray<FPrimalCharacterStatusValueModifier, FDefaultAllocator>*)GetAddress(this, "UPrimalCharacterStatusComponent", "StatusValueModifiers"); };
	void SetStatusValueModifierDescriptionIndices(TArray<unsigned char, FDefaultAllocator> a0) { *(TArray<unsigned char, FDefaultAllocator>*)GetAddress(this, "UPrimalCharacterStatusComponent", "StatusValueModifierDescriptionIndices") = a0; };
	TArray<unsigned char, FDefaultAllocator> GetStatusValueModifierDescriptionIndices() const { return *(TArray<unsigned char, FDefaultAllocator>*)GetAddress(this, "UPrimalCharacterStatusComponent", "StatusValueModifierDescriptionIndices"); };
	void SetStaminaRecoveryExtraResourceDecreaseMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryExtraResourceDecreaseMultiplier") = a0; };
	float GetStaminaRecoveryExtraResourceDecreaseMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "StaminaRecoveryExtraResourceDecreaseMultiplier"); };
	void SetDehydrationStaminaRecoveryRate(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehydrationStaminaRecoveryRate") = a0; };
	float GetDehydrationStaminaRecoveryRate() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DehydrationStaminaRecoveryRate"); };
	void SetWaterConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WaterConsumptionMultiplier") = a0; };
	float GetWaterConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WaterConsumptionMultiplier"); };
	void SetFoodConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "FoodConsumptionMultiplier") = a0; };
	float GetFoodConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "FoodConsumptionMultiplier"); };
	void SetExtraOxygenSpeedStatMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraOxygenSpeedStatMultiplier") = a0; };
	float GetExtraOxygenSpeedStatMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraOxygenSpeedStatMultiplier"); };
	void SetExtraTamedHealthMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraTamedHealthMultiplier") = a0; };
	float GetExtraTamedHealthMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraTamedHealthMultiplier"); };
	void SetWakingTameFoodConsumptionRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WakingTameFoodConsumptionRateMultiplier") = a0; };
	float GetWakingTameFoodConsumptionRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WakingTameFoodConsumptionRateMultiplier"); };
	void SetSwimmingStaminaRecoveryRateMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SwimmingStaminaRecoveryRateMultiplier") = a0; };
	float GetSwimmingStaminaRecoveryRateMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "SwimmingStaminaRecoveryRateMultiplier"); };
	void SetExtraWaterConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraWaterConsumptionMultiplier") = a0; };
	float GetExtraWaterConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraWaterConsumptionMultiplier"); };
	void SetExtraFoodConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraFoodConsumptionMultiplier") = a0; };
	float GetExtraFoodConsumptionMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraFoodConsumptionMultiplier"); };
	void SetDefaultMaxOxygen(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DefaultMaxOxygen") = a0; };
	float GetDefaultMaxOxygen() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DefaultMaxOxygen"); };
	void SetLastReplicatedCurrentStatusValuesTime(double a0) { *(double*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastReplicatedCurrentStatusValuesTime") = a0; };
	double GetLastReplicatedCurrentStatusValuesTime() const { return *(double*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastReplicatedCurrentStatusValuesTime"); };
	void SetOriginalMaxTorpor(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "OriginalMaxTorpor") = a0; };
	float GetOriginalMaxTorpor() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "OriginalMaxTorpor"); };
	void SetMountedDinoDinoWeightMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MountedDinoDinoWeightMultiplier") = a0; };
	float GetMountedDinoDinoWeightMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "MountedDinoDinoWeightMultiplier"); };
	void SetExtraWildDinoDamageMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraWildDinoDamageMultiplier") = a0; };
	float GetExtraWildDinoDamageMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraWildDinoDamageMultiplier"); };
	void SetExtraTamedDinoDamageMultiplier(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraTamedDinoDamageMultiplier") = a0; };
	float GetExtraTamedDinoDamageMultiplier() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "ExtraTamedDinoDamageMultiplier"); };
	void SetWeightMultiplierForCarriedPassengers(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForCarriedPassengers") = a0; };
	float GetWeightMultiplierForCarriedPassengers() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForCarriedPassengers"); };
	void SetWeightMultiplierForPlatformPassengersInventory(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForPlatformPassengersInventory") = a0; };
	float GetWeightMultiplierForPlatformPassengersInventory() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "WeightMultiplierForPlatformPassengersInventory"); };
	void SetDinoImprintingQuality(float a0) { *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DinoImprintingQuality") = a0; };
	float GetDinoImprintingQuality() const { return *(float*)GetAddress(this, "UPrimalCharacterStatusComponent", "DinoImprintingQuality"); };
	void SetbInWeightLock(bool a0) { *(bool*)GetAddress(this, "UPrimalCharacterStatusComponent", "bInWeightLock") = a0; };
	bool GetbInWeightLock() const { return *(bool*)GetAddress(this, "UPrimalCharacterStatusComponent", "bInWeightLock"); };
	void SetLastReplicatedXPTime(double a0) { *(double*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastReplicatedXPTime") = a0; };
	double GetLastReplicatedXPTime() const { return *(double*)GetAddress(this, "UPrimalCharacterStatusComponent", "LastReplicatedXPTime"); };

	// Functions

	//float ModifyCurrentStatusValue(EPrimalCharacterStatusValue::Type a1, float a2, bool a3, bool a4, bool a5, bool a6, TSubclassOf<UDamageType> a7, bool a8) { return static_cast<float(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type, float, bool, bool, bool, bool, TSubclassOf<UDamageType>, bool)>(GetAddress("UPrimalCharacterStatusComponent", "ModifyCurrentStatusValue"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8); }
	//void UpdatedCurrentStatusValue(EPrimalCharacterStatusValue::Type a1, float a2, bool a3, TSubclassOf<UDamageType> a4, bool a5) { static_cast<void(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type, float, bool, TSubclassOf<UDamageType>, bool)>(GetAddress("UPrimalCharacterStatusComponent", "UpdatedCurrentStatusValue"))((DWORD64)this, a1, a2, a3, a4, a5); }
	//float GetStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type a1) { return static_cast<float(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type)>(GetAddress("UPrimalCharacterStatusComponent", "GetStatusValueRecoveryRate"))((DWORD64)this, a1); }
	//void SetMaxStatusValue(EPrimalCharacterStatusValue::Type a1, float a2) { static_cast<void(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type, float)>(GetAddress("UPrimalCharacterStatusComponent", "SetMaxStatusValue"))((DWORD64)this, a1, a2); }
	void OnJumped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "OnJumped"))((DWORD64)this); }
	float GetMovementSpeedModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "GetMovementSpeedModifier"))((DWORD64)this); }
	float GetJumpZModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "GetJumpZModifier"))((DWORD64)this); }
	//void AdjustStatusValueModification(EPrimalCharacterStatusValue::Type a1, float& a2, TSubclassOf<UDamageType> a3) { static_cast<void(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type, float&, TSubclassOf<UDamageType>)>(GetAddress("UPrimalCharacterStatusComponent", "AdjustStatusValueModification"))((DWORD64)this, a1, a2, a3); }
	//void ChangedStatusState(EPrimalCharacterStatusState::Type a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, EPrimalCharacterStatusState::Type, bool)>(GetAddress("UPrimalCharacterStatusComponent", "ChangedStatusState"))((DWORD64)this, a1, a2); }
	void ServerSyncReplicatedValues() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "ServerSyncReplicatedValues"))((DWORD64)this); }
	void UpdateWeightStat() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "UpdateWeightStat"))((DWORD64)this); }
	void CharacterUpdatedInventory(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalCharacterStatusComponent", "CharacterUpdatedInventory"))((DWORD64)this, a1); }
	float GetMeleeDamageModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "GetMeleeDamageModifier"))((DWORD64)this); }
	//void ServerApplyLevelUp(EPrimalCharacterStatusValue::Type a1, AShooterPlayerController* a2) { static_cast<void(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type, AShooterPlayerController*)>(GetAddress("UPrimalCharacterStatusComponent", "ServerApplyLevelUp"))((DWORD64)this, a1, a2); }
	//bool CanLevelUp(EPrimalCharacterStatusValue::Type a1) { return static_cast<bool(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type)>(GetAddress("UPrimalCharacterStatusComponent", "CanLevelUp"))((DWORD64)this, a1); }
	bool HasExperienceForLevelUp() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "HasExperienceForLevelUp"))((DWORD64)this); }
	//void AddExperience(float a1, bool a2, EXPType::Type a3) { static_cast<void(_cdecl*)(DWORD64, float, bool, EXPType::Type)>(GetAddress("UPrimalCharacterStatusComponent", "AddExperience"))((DWORD64)this, a1, a2, a3); }
	float GetExperienceRequiredForNextLevelUp() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "GetExperienceRequiredForNextLevelUp"))((DWORD64)this); }
	float GetExperienceRequiredForPreviousLevelUp() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "GetExperienceRequiredForPreviousLevelUp"))((DWORD64)this); }
	float GetExperiencePercent() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "GetExperiencePercent"))((DWORD64)this); }
	void SetTamed(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UPrimalCharacterStatusComponent", "SetTamed"))((DWORD64)this, a1); }
	void SetTameable(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("UPrimalCharacterStatusComponent", "SetTameable"))((DWORD64)this, a1); }
	void SetBaseLevel(int a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, int, bool)>(GetAddress("UPrimalCharacterStatusComponent", "SetBaseLevel"))((DWORD64)this, a1, a2); }
	void RefreshTemperature() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "RefreshTemperature"))((DWORD64)this); }
	//void AddStatusValueModifier(EPrimalCharacterStatusValue::Type a1, float a2, float a3, bool a4, bool a5, int a6, bool a7, float a8, bool a9, EPrimalCharacterStatusValue::Type a10, bool a11) { static_cast<void(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type, float, float, bool, bool, int, bool, float, bool, EPrimalCharacterStatusValue::Type, bool)>(GetAddress("UPrimalCharacterStatusComponent", "AddStatusValueModifier"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); }
	void ApplyStatusValueModifiers(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UPrimalCharacterStatusComponent", "ApplyStatusValueModifiers"))((DWORD64)this, a1); }
	float GetTotalStatusModifierDescriptionIndex(int a1) { return static_cast<float(_cdecl*)(DWORD64, int)>(GetAddress("UPrimalCharacterStatusComponent", "GetTotalStatusModifierDescriptionIndex"))((DWORD64)this, a1); }
	void Serialize(FArchive& a1) { static_cast<void(_cdecl*)(DWORD64, FArchive&)>(GetAddress("UPrimalCharacterStatusComponent", "Serialize"))((DWORD64)this, a1); }
	void ApplyTamingStatModifiers(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("UPrimalCharacterStatusComponent", "ApplyTamingStatModifiers"))((DWORD64)this, a1); }
	void RefreshInsulation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "RefreshInsulation"))((DWORD64)this); }
	void RescaleAllStats() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("UPrimalCharacterStatusComponent", "RescaleAllStats"))((DWORD64)this); }
	//void RescaleMaxStat(EPrimalCharacterStatusValue::Type a1, float a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, EPrimalCharacterStatusValue::Type, float, bool)>(GetAddress("UPrimalCharacterStatusComponent", "RescaleMaxStat"))((DWORD64)this, a1, a2, a3); }
};

// Dino

struct APrimalDinoCharacter : APrimalCharacter
{
	AWeakObjectPtr<AActor> GetForcedMasterTarget() const { return *(AWeakObjectPtr<AActor>*)GetAddress(this, "APrimalDinoCharacter", "ForcedMasterTarget"); };
	AWeakObjectPtr<APrimalCharacter> GetMountCharacter() const { return *(AWeakObjectPtr<APrimalCharacter>*)GetAddress(this, "APrimalDinoCharacter", "MountCharacter"); };
	void SetColorizationIntensity(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ColorizationIntensity") = a0; };
	float GetColorizationIntensity() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ColorizationIntensity"); };
	void SetRidingAttackExtraVelocity(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RidingAttackExtraVelocity") = a0; };
	FVector GetRidingAttackExtraVelocity() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RidingAttackExtraVelocity"); };
	void SetPaintConsumptionMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "PaintConsumptionMultiplier") = a0; };
	float GetPaintConsumptionMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "PaintConsumptionMultiplier"); };
	void SetChargingBlockedStopTimeThreshold(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingBlockedStopTimeThreshold") = a0; };
	float GetChargingBlockedStopTimeThreshold() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingBlockedStopTimeThreshold"); };
	void SetMeleeSwingSockets(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "MeleeSwingSockets") = a0; };
	TArray<FName, FDefaultAllocator> GetMeleeSwingSockets() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "MeleeSwingSockets"); };
	void SetMeleeDamageAmount(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "MeleeDamageAmount") = a0; };
	int GetMeleeDamageAmount() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "MeleeDamageAmount"); };
	void SetMeleeDamageImpulse(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeDamageImpulse") = a0; };
	float GetMeleeDamageImpulse() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeDamageImpulse"); };
	void SetMeleeSwingRadius(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeSwingRadius") = a0; };
	float GetMeleeSwingRadius() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeSwingRadius"); };
	unsigned char GetCurrentAttackIndex() const { return *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "CurrentAttackIndex"); };
	void SetLastAttackIndex(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "LastAttackIndex") = a0; };
	unsigned char GetLastAttackIndex() const { return *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "LastAttackIndex"); };
	void SetAttackOffset(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackOffset") = a0; };
	float GetAttackOffset() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackOffset"); };
	void SetFleeHealthPercentage(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FleeHealthPercentage") = a0; };
	float GetFleeHealthPercentage() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FleeHealthPercentage"); };
	void SetBreakFleeHealthPercentage(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BreakFleeHealthPercentage") = a0; };
	float GetBreakFleeHealthPercentage() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BreakFleeHealthPercentage"); };
	void SetTamerString(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "TamerString") = a0; };
	FString GetTamerString() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "TamerString"); };
	void SetTamedName(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "TamedName") = a0; };
	FString GetTamedName() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "TamedName"); };
	void SetOverlayTooltipPadding(FVector2D a0) { *(FVector2D*)GetAddress(this, "APrimalDinoCharacter", "OverlayTooltipPadding") = a0; };
	void SetLandingLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LandingLocation") = a0; };
	FVector GetLandingLocation() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LandingLocation"); };
	void SetStartLandingTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "StartLandingTime") = a0; };
	double GetStartLandingTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "StartLandingTime"); };
	void SetLastAxisStartPressTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAxisStartPressTime") = a0; };
	double GetLastAxisStartPressTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAxisStartPressTime"); };
	void SetLastMoveForwardTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastMoveForwardTime") = a0; };
	double GetLastMoveForwardTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastMoveForwardTime"); };
	void SetLandingTraceMaxDistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LandingTraceMaxDistance") = a0; };
	float GetLandingTraceMaxDistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LandingTraceMaxDistance"); };
	void SetFlyingWanderFixedDistanceAmount(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingWanderFixedDistanceAmount") = a0; };
	float GetFlyingWanderFixedDistanceAmount() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingWanderFixedDistanceAmount"); };
	void SetFlyingWanderRandomDistanceAmount(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingWanderRandomDistanceAmount") = a0; };
	float GetFlyingWanderRandomDistanceAmount() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingWanderRandomDistanceAmount"); };
	void SetAcceptableLandingRadius(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AcceptableLandingRadius") = a0; };
	float GetAcceptableLandingRadius() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AcceptableLandingRadius"); };
	void SetMaxLandingTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MaxLandingTime") = a0; };
	float GetMaxLandingTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MaxLandingTime"); };
	void SetChargeSpeedMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargeSpeedMultiplier") = a0; };
	float GetChargeSpeedMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargeSpeedMultiplier"); };
	void SetChargingStaminaPerSecondDrain(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingStaminaPerSecondDrain") = a0; };
	float GetChargingStaminaPerSecondDrain() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingStaminaPerSecondDrain"); };
	void SetChargingStopDotTreshold(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingStopDotTreshold") = a0; };
	float GetChargingStopDotTreshold() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingStopDotTreshold"); };
	void SetLastChargeLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastChargeLocation") = a0; };
	FVector GetLastChargeLocation() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastChargeLocation"); };
	void SetLastStartChargingTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastStartChargingTime") = a0; };
	double GetLastStartChargingTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastStartChargingTime"); };
	AWeakObjectPtr<AShooterCharacter> GetRider() const { return *(AWeakObjectPtr<AShooterCharacter>*)GetAddress(this, "APrimalDinoCharacter", "Rider"); };
	AWeakObjectPtr<AShooterCharacter> GetPreviousRider() const { return *(AWeakObjectPtr<AShooterCharacter>*)GetAddress(this, "APrimalDinoCharacter", "PreviousRider"); };
	AWeakObjectPtr<APrimalCharacter> GetCarriedCharacter() const { return *(AWeakObjectPtr<APrimalCharacter>*)GetAddress(this, "APrimalDinoCharacter", "CarriedCharacter"); };
	AWeakObjectPtr<APrimalCharacter> GetPreviousCarriedCharacter() const { return *(AWeakObjectPtr<APrimalCharacter>*)GetAddress(this, "APrimalDinoCharacter", "PreviousCarriedCharacter"); };
	//TWeakObjectPtr<UPrimalAIState, FWeakObjectPtr, FIndexToObject> GetActiveState() const { return *(TWeakObjectPtr<UPrimalAIState, FWeakObjectPtr, FIndexToObject>*)GetAddress(this, "APrimalDinoCharacter", "ActiveState"); };
	//void SetActiveWonderState(TWeakObjectPtr<UPrimalAIState, FWeakObjectPtr, FIndexToObject> a0) { *(TWeakObjectPtr<UPrimalAIState, FWeakObjectPtr, FIndexToObject>*)GetAddress(this, "APrimalDinoCharacter", "ActiveWonderState") = a0; };
	//TWeakObjectPtr<UPrimalAIState, FWeakObjectPtr, FIndexToObject> GetActiveWonderState() const { return *(TWeakObjectPtr<UPrimalAIState, FWeakObjectPtr, FIndexToObject>*)GetAddress(this, "APrimalDinoCharacter", "ActiveWonderState"); };
	void SetLastPlayedAttackAnimation(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "LastPlayedAttackAnimation") = a0; };
	int GetLastPlayedAttackAnimation() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "LastPlayedAttackAnimation"); };
	void SetAttackIndexOfPlayedAnimation(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "AttackIndexOfPlayedAnimation") = a0; };
	unsigned char GetAttackIndexOfPlayedAnimation() const { return *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "AttackIndexOfPlayedAnimation"); };
	//void SetDinoBaseLevelWeightEntries(TArray<FDinoBaseLevelWeightEntry, FDefaultAllocator> a0) { *(TArray<FDinoBaseLevelWeightEntry, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "DinoBaseLevelWeightEntries") = a0; };
	//TArray<FDinoBaseLevelWeightEntry, FDefaultAllocator> GetDinoBaseLevelWeightEntries() const { return *(TArray<FDinoBaseLevelWeightEntry, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "DinoBaseLevelWeightEntries"); };
	void SetOriginalCapsuleHalfHeight(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "OriginalCapsuleHalfHeight") = a0; };
	float GetOriginalCapsuleHalfHeight() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "OriginalCapsuleHalfHeight"); };
	void SetLastSocketPositions(TArray<FVector, FDefaultAllocator> a0) { *(TArray<FVector, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "LastSocketPositions") = a0; };
	TArray<FVector, FDefaultAllocator> GetLastSocketPositions() const { return *(TArray<FVector, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "LastSocketPositions"); };
	//TArray<FAttachedInstancedHarvestingElement *, FDefaultAllocator> GetMeleeSwingHarvestableComponentList() const { return *(TArray<FAttachedInstancedHarvestingElement *, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "MeleeSwingHarvestableComponentList"); };
	void SetEndAttackTargetTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "EndAttackTargetTime") = a0; };
	double GetEndAttackTargetTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "EndAttackTargetTime"); };
	void SetRidingFirstPersonViewLocationOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RidingFirstPersonViewLocationOffset") = a0; };
	FVector GetRidingFirstPersonViewLocationOffset() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RidingFirstPersonViewLocationOffset"); };
	void SetBabyChanceOfTwins(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyChanceOfTwins") = a0; };
	float GetBabyChanceOfTwins() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyChanceOfTwins"); };
	void SetBabyGestationSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyGestationSpeed") = a0; };
	float GetBabyGestationSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyGestationSpeed"); };
	void SetExtraBabyGestationSpeedMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraBabyGestationSpeedMultiplier") = a0; };
	float GetExtraBabyGestationSpeedMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraBabyGestationSpeedMultiplier"); };
	void SetLastEggBoostedTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastEggBoostedTime") = a0; };
	double GetLastEggBoostedTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastEggBoostedTime"); };
	void SetWildPercentageChanceOfBaby(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WildPercentageChanceOfBaby") = a0; };
	float GetWildPercentageChanceOfBaby() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WildPercentageChanceOfBaby"); };
	void SetWildBabyAgeWeight(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WildBabyAgeWeight") = a0; };
	float GetWildBabyAgeWeight() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WildBabyAgeWeight"); };
	void SetBabyGestationProgress(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyGestationProgress") = a0; };
	float GetBabyGestationProgress() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyGestationProgress"); };
	void SetLastBabyAge(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LastBabyAge") = a0; };
	float GetLastBabyAge() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LastBabyAge"); };
	void SetLastBabyGestationProgress(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LastBabyGestationProgress") = a0; };
	float GetLastBabyGestationProgress() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LastBabyGestationProgress"); };
	void SetBabyChanceOfTriplets(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyChanceOfTriplets") = a0; };
	float GetBabyChanceOfTriplets() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyChanceOfTriplets"); };
	float GetBabyAge() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyAge"); };
	void SetMaxPercentOfCapsulHeightAllowedForIK(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MaxPercentOfCapsulHeightAllowedForIK") = a0; };
	float GetMaxPercentOfCapsulHeightAllowedForIK() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MaxPercentOfCapsulHeightAllowedForIK"); };
	void SetSlopeBiasForMaxCapsulePercent(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "SlopeBiasForMaxCapsulePercent") = a0; };
	float GetSlopeBiasForMaxCapsulePercent() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "SlopeBiasForMaxCapsulePercent"); };
	void SetAutoFadeOutAfterTameTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AutoFadeOutAfterTameTime") = a0; };
	float GetAutoFadeOutAfterTameTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AutoFadeOutAfterTameTime"); };
	void SetFlyingForceRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingForceRotationRateModifier") = a0; };
	float GetFlyingForceRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingForceRotationRateModifier"); };
	void SetHideBoneNames(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "HideBoneNames") = a0; };
	TArray<FName, FDefaultAllocator> GetHideBoneNames() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "HideBoneNames"); };
	void SetHideBonesString(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "HideBonesString") = a0; };
	FString GetHideBonesString() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "HideBonesString"); };
	void SetWaterSurfaceExtraJumpVector(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "WaterSurfaceExtraJumpVector") = a0; };
	FVector GetWaterSurfaceExtraJumpVector() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "WaterSurfaceExtraJumpVector"); };
	void SetFlyerTakeOffAdditionalVelocity(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "FlyerTakeOffAdditionalVelocity") = a0; };
	FVector GetFlyerTakeOffAdditionalVelocity() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "FlyerTakeOffAdditionalVelocity"); };
	void SetOpenDoorDelay(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "OpenDoorDelay") = a0; };
	float GetOpenDoorDelay() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "OpenDoorDelay"); };
	void SetTamedWanderHarvestInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestInterval") = a0; };
	float GetTamedWanderHarvestInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestInterval"); };
	void SetTamedWanderHarvestSearchRange(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestSearchRange") = a0; };
	float GetTamedWanderHarvestSearchRange() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestSearchRange"); };
	void SetTamedWanderHarvestCollectRadius(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectRadius") = a0; };
	float GetTamedWanderHarvestCollectRadius() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectRadius"); };
	void SetTamedWanderHarvestCollectOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectOffset") = a0; };
	FVector GetTamedWanderHarvestCollectOffset() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "TamedWanderHarvestCollectOffset"); };
	void SetRootLocSwimOffset(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RootLocSwimOffset") = a0; };
	float GetRootLocSwimOffset() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RootLocSwimOffset"); };
	void SetPlayAnimBelowHealthPercent(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "PlayAnimBelowHealthPercent") = a0; };
	float GetPlayAnimBelowHealthPercent() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "PlayAnimBelowHealthPercent"); };
	void SetLeavePlayAnimBelowHealthPercent(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LeavePlayAnimBelowHealthPercent") = a0; };
	float GetLeavePlayAnimBelowHealthPercent() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LeavePlayAnimBelowHealthPercent"); };
	void SetPlatformSaddleMaxStructureBuildDistance2D(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "PlatformSaddleMaxStructureBuildDistance2D") = a0; };
	float GetPlatformSaddleMaxStructureBuildDistance2D() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "PlatformSaddleMaxStructureBuildDistance2D"); };
	float GetCurrentRootLocSwimOffset() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CurrentRootLocSwimOffset"); };
	void SetAIRangeMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AIRangeMultiplier") = a0; };
	float GetAIRangeMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AIRangeMultiplier"); };
	void SetMeleeAttackStaminaCost(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeAttackStaminaCost") = a0; };
	float GetMeleeAttackStaminaCost() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeAttackStaminaCost"); };
	AWeakObjectPtr<AActor> GetTarget() const { return *(AWeakObjectPtr<AActor>*)GetAddress(this, "APrimalDinoCharacter", "Target"); };
	AWeakObjectPtr<AActor> GetTamedFollowTarget() const { return *(AWeakObjectPtr<AActor>*)GetAddress(this, "APrimalDinoCharacter", "TamedFollowTarget"); };
	void SetPercentChanceFemale(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "PercentChanceFemale") = a0; };
	float GetPercentChanceFemale() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "PercentChanceFemale"); };
	void SetDeathGiveItemChanceToBeBlueprint(TArray<float, FDefaultAllocator> a0) { *(TArray<float, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemChanceToBeBlueprint") = a0; };
	TArray<float, FDefaultAllocator> GetDeathGiveItemChanceToBeBlueprint() const { return *(TArray<float, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemChanceToBeBlueprint"); };
	void SetDeathGiveItemQualityMin(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemQualityMin") = a0; };
	float GetDeathGiveItemQualityMin() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemQualityMin"); };
	void SetDeathGiveItemQualityMax(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemQualityMax") = a0; };
	float GetDeathGiveItemQualityMax() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemQualityMax"); };
	void SetDeathGiveItemRange(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemRange") = a0; };
	float GetDeathGiveItemRange() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveItemRange"); };
	void SetDeathGiveAchievement(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveAchievement") = a0; };
	FString GetDeathGiveAchievement() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "DeathGiveAchievement"); };
	void SetUnboardLocationOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "UnboardLocationOffset") = a0; };
	FVector GetUnboardLocationOffset() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "UnboardLocationOffset"); };
	void SetLastTimeWhileHeadingToGoal(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LastTimeWhileHeadingToGoal") = a0; };
	float GetLastTimeWhileHeadingToGoal() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LastTimeWhileHeadingToGoal"); };
	void SetRidingNetUpdateFequency(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RidingNetUpdateFequency") = a0; };
	float GetRidingNetUpdateFequency() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RidingNetUpdateFequency"); };
	void SetRiderMaxSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxSpeedModifier") = a0; };
	float GetRiderMaxSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxSpeedModifier"); };
	void SetRiderMaxRunSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxRunSpeedModifier") = a0; };
	float GetRiderMaxRunSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxRunSpeedModifier"); };
	void SetRiderRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderRotationRateModifier") = a0; };
	float GetRiderRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderRotationRateModifier"); };
	void SetSwimmingRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "SwimmingRotationRateModifier") = a0; };
	float GetSwimmingRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "SwimmingRotationRateModifier"); };
	void SetControlFacePitchInterpSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ControlFacePitchInterpSpeed") = a0; };
	float GetControlFacePitchInterpSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ControlFacePitchInterpSpeed"); };
	void SetTamedWalkableFloorZ(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWalkableFloorZ") = a0; };
	float GetTamedWalkableFloorZ() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWalkableFloorZ"); };
	void SetCurrentMovementAnimRate(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "CurrentMovementAnimRate") = a0; };
	float GetCurrentMovementAnimRate() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CurrentMovementAnimRate"); };
	void SetMinPlayerLevelForWakingTame(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "MinPlayerLevelForWakingTame") = a0; };
	int GetMinPlayerLevelForWakingTame() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "MinPlayerLevelForWakingTame"); };
	void SetForceNextAttackIndex(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ForceNextAttackIndex") = a0; };
	float GetForceNextAttackIndex() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ForceNextAttackIndex"); };
	void SetDeathInventoryChanceToUse(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathInventoryChanceToUse") = a0; };
	float GetDeathInventoryChanceToUse() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathInventoryChanceToUse"); };
	void SetWakingTameFeedInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameFeedInterval") = a0; };
	float GetWakingTameFeedInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameFeedInterval"); };
	void SetLastWakingTameFedTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastWakingTameFedTime") = a0; };
	double GetLastWakingTameFedTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastWakingTameFedTime"); };
	void SetDeathInventoryQualityPerLevelMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathInventoryQualityPerLevelMultiplier") = a0; };
	float GetDeathInventoryQualityPerLevelMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DeathInventoryQualityPerLevelMultiplier"); };
	void SetRequiredTameAffinity(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RequiredTameAffinity") = a0; };
	float GetRequiredTameAffinity() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RequiredTameAffinity"); };
	void SetRequiredTameAffinityPerBaseLevel(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RequiredTameAffinityPerBaseLevel") = a0; };
	float GetRequiredTameAffinityPerBaseLevel() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RequiredTameAffinityPerBaseLevel"); };
	void SetTamedAITargetingRange(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "TamedAITargetingRange") = a0; };
	unsigned char GetTamedAITargetingRange() const { return *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "TamedAITargetingRange"); };
	void SetCurrentTameAffinity(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "CurrentTameAffinity") = a0; };
	float GetCurrentTameAffinity() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CurrentTameAffinity"); };
	void SetTameIneffectivenessModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TameIneffectivenessModifier") = a0; };
	float GetTameIneffectivenessModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TameIneffectivenessModifier"); };
	void SetTameIneffectivenessByAffinity(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TameIneffectivenessByAffinity") = a0; };
	float GetTameIneffectivenessByAffinity() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TameIneffectivenessByAffinity"); };
	void SetLastFrameUseLowQualityAnimationTick(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "LastFrameUseLowQualityAnimationTick") = a0; };
	int GetLastFrameUseLowQualityAnimationTick() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "LastFrameUseLowQualityAnimationTick"); };
	//TArray<FPrimalSaddleStructure, FDefaultAllocator> GetSaddleStructures() const { return *(TArray<FPrimalSaddleStructure, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "SaddleStructures"); };
	void SetMaxSaddleStructuresHeight(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxSaddleStructuresHeight") = a0; };
	int GetMaxSaddleStructuresHeight() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxSaddleStructuresHeight"); };
	void SetSaddlePivotOffset(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "SaddlePivotOffset") = a0; };
	int GetSaddlePivotOffset() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "SaddlePivotOffset"); };
	void SetMaxSaddleStructuresNum(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxSaddleStructuresNum") = a0; };
	int GetMaxSaddleStructuresNum() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxSaddleStructuresNum"); };
	void SetTamingFoodConsumeInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamingFoodConsumeInterval") = a0; };
	float GetTamingFoodConsumeInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamingFoodConsumeInterval"); };
	void SetDediForceAttackAnimTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DediForceAttackAnimTime") = a0; };
	float GetDediForceAttackAnimTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DediForceAttackAnimTime"); };
	void SetDediForceStartAttackAfterAnimTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DediForceStartAttackAfterAnimTime") = a0; };
	float GetDediForceStartAttackAfterAnimTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DediForceStartAttackAfterAnimTime"); };
	void SetWakingTameFoodIncreaseMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameFoodIncreaseMultiplier") = a0; };
	float GetWakingTameFoodIncreaseMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameFoodIncreaseMultiplier"); };
	void SetTamingTeamID(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "TamingTeamID") = a0; };
	int GetTamingTeamID() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "TamingTeamID"); };
	void SetOwningPlayerID(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "OwningPlayerID") = a0; };
	int GetOwningPlayerID() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "OwningPlayerID"); };
	void SetOwningPlayerName(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "OwningPlayerName") = a0; };
	FString GetOwningPlayerName() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "OwningPlayerName"); };
	void SetTamingLastFoodConsumptionTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "TamingLastFoodConsumptionTime") = a0; };
	double GetTamingLastFoodConsumptionTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "TamingLastFoodConsumptionTime"); };
	void SetDinoID1(unsigned int a0) { *(unsigned int*)GetAddress(this, "APrimalDinoCharacter", "DinoID1") = a0; };
	unsigned int GetDinoID1() const { return *(unsigned int*)GetAddress(this, "APrimalDinoCharacter", "DinoID1"); };
	void SetDinoID2(unsigned int a0) { *(unsigned int*)GetAddress(this, "APrimalDinoCharacter", "DinoID2") = a0; };
	unsigned int GetDinoID2() const { return *(unsigned int*)GetAddress(this, "APrimalDinoCharacter", "DinoID2"); };
	void SetPreviousAimRot(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalDinoCharacter", "PreviousAimRot") = a0; };
	FRotator GetPreviousAimRot() const { return *(FRotator*)GetAddress(this, "APrimalDinoCharacter", "PreviousAimRot"); };
	void SetTamedAggressionLevel(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "TamedAggressionLevel") = a0; };
	int GetTamedAggressionLevel() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "TamedAggressionLevel"); };
	void SetTamingIneffectivenessModifierIncreaseByDamagePercent(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamingIneffectivenessModifierIncreaseByDamagePercent") = a0; };
	float GetTamingIneffectivenessModifierIncreaseByDamagePercent() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamingIneffectivenessModifierIncreaseByDamagePercent"); };
	void SetNPCSpawnerExtraLevelOffset(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "NPCSpawnerExtraLevelOffset") = a0; };
	int GetNPCSpawnerExtraLevelOffset() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "NPCSpawnerExtraLevelOffset"); };
	void SetNPCSpawnerLevelMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "NPCSpawnerLevelMultiplier") = a0; };
	float GetNPCSpawnerLevelMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "NPCSpawnerLevelMultiplier"); };
	void SetUntamedPoopTimeMinInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedPoopTimeMinInterval") = a0; };
	float GetUntamedPoopTimeMinInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedPoopTimeMinInterval"); };
	void SetUntamedPoopTimeMaxInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedPoopTimeMaxInterval") = a0; };
	float GetUntamedPoopTimeMaxInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedPoopTimeMaxInterval"); };
	void SetMeleeHarvestDamageMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeHarvestDamageMultiplier") = a0; };
	float GetMeleeHarvestDamageMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MeleeHarvestDamageMultiplier"); };
	void SetAllowRidingMaxDistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AllowRidingMaxDistance") = a0; };
	float GetAllowRidingMaxDistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AllowRidingMaxDistance"); };
	void SetUntamedPoopTimeCache(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedPoopTimeCache") = a0; };
	float GetUntamedPoopTimeCache() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedPoopTimeCache"); };
	void SetEggWeightsToSpawn(TArray<float, FDefaultAllocator> a0) { *(TArray<float, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "EggWeightsToSpawn") = a0; };
	TArray<float, FDefaultAllocator> GetEggWeightsToSpawn() const { return *(TArray<float, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "EggWeightsToSpawn"); };
	void SetFertilizedEggWeightsToSpawn(TArray<float, FDefaultAllocator> a0) { *(TArray<float, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "FertilizedEggWeightsToSpawn") = a0; };
	TArray<float, FDefaultAllocator> GetFertilizedEggWeightsToSpawn() const { return *(TArray<float, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "FertilizedEggWeightsToSpawn"); };
	void SetEggChanceToSpawnUnstasis(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "EggChanceToSpawnUnstasis") = a0; };
	float GetEggChanceToSpawnUnstasis() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "EggChanceToSpawnUnstasis"); };
	void SetEggIntervalBetweenUnstasisChances(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "EggIntervalBetweenUnstasisChances") = a0; };
	float GetEggIntervalBetweenUnstasisChances() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "EggIntervalBetweenUnstasisChances"); };
	void SetEggRangeMaximumNumberFromSameDinoType(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "EggRangeMaximumNumberFromSameDinoType") = a0; };
	float GetEggRangeMaximumNumberFromSameDinoType() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "EggRangeMaximumNumberFromSameDinoType"); };
	void SetEggMaximumNumberFromSameDinoType(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "EggMaximumNumberFromSameDinoType") = a0; };
	int GetEggMaximumNumberFromSameDinoType() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "EggMaximumNumberFromSameDinoType"); };
	void SetEggRangeMaximumNumber(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "EggRangeMaximumNumber") = a0; };
	float GetEggRangeMaximumNumber() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "EggRangeMaximumNumber"); };
	void SetEggMaximumNumber(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "EggMaximumNumber") = a0; };
	int GetEggMaximumNumber() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "EggMaximumNumber"); };
	void SetUntamedWalkingSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedWalkingSpeedModifier") = a0; };
	float GetUntamedWalkingSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedWalkingSpeedModifier"); };
	void SetTamedWalkingSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWalkingSpeedModifier") = a0; };
	float GetTamedWalkingSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedWalkingSpeedModifier"); };
	void SetUntamedRunningSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedRunningSpeedModifier") = a0; };
	float GetUntamedRunningSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "UntamedRunningSpeedModifier"); };
	void SetTamedRunningSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedRunningSpeedModifier") = a0; };
	float GetTamedRunningSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedRunningSpeedModifier"); };
	//void SetRandomColorSetsMale(TSubclassOf<UPrimalColorSet> a0) { *(TSubclassOf<UPrimalColorSet>*)GetAddress(this, "APrimalDinoCharacter", "RandomColorSetsMale") = a0; };
	//TSubclassOf<UPrimalColorSet> GetRandomColorSetsMale() const { return *(TSubclassOf<UPrimalColorSet>*)GetAddress(this, "APrimalDinoCharacter", "RandomColorSetsMale"); };
	//void SetRandomColorSetsFemale(TSubclassOf<UPrimalColorSet> a0) { *(TSubclassOf<UPrimalColorSet>*)GetAddress(this, "APrimalDinoCharacter", "RandomColorSetsFemale") = a0; };
	//TSubclassOf<UPrimalColorSet> GetRandomColorSetsFemale() const { return *(TSubclassOf<UPrimalColorSet>*)GetAddress(this, "APrimalDinoCharacter", "RandomColorSetsFemale"); };
	void SetRidingAnimSpeedFactor(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RidingAnimSpeedFactor") = a0; };
	float GetRidingAnimSpeedFactor() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RidingAnimSpeedFactor"); };
	void SetTargetingTeamNameOverride(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "TargetingTeamNameOverride") = a0; };
	FName GetTargetingTeamNameOverride() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "TargetingTeamNameOverride"); };
	void SetExtraTamedSpeedMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraTamedSpeedMultiplier") = a0; };
	float GetExtraTamedSpeedMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraTamedSpeedMultiplier"); };
	void SetExtraUnTamedSpeedMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraUnTamedSpeedMultiplier") = a0; };
	float GetExtraUnTamedSpeedMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraUnTamedSpeedMultiplier"); };
	void SetLastEggSpawnChanceTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastEggSpawnChanceTime") = a0; };
	double GetLastEggSpawnChanceTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastEggSpawnChanceTime"); };
	void SetOriginalNPCVolumeName(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "OriginalNPCVolumeName") = a0; };
	FName GetOriginalNPCVolumeName() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "OriginalNPCVolumeName"); };
	void SetOutsideOriginalNPCVolumeStasisDestroyInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "OutsideOriginalNPCVolumeStasisDestroyInterval") = a0; };
	float GetOutsideOriginalNPCVolumeStasisDestroyInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "OutsideOriginalNPCVolumeStasisDestroyInterval"); };
	void SetStasisedDestroyInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StasisedDestroyInterval") = a0; };
	float GetStasisedDestroyInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StasisedDestroyInterval"); };
	void SetTamedAllowNamingTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedAllowNamingTime") = a0; };
	float GetTamedAllowNamingTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedAllowNamingTime"); };
	void SetMovementSpeedScalingRotationRatePower(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MovementSpeedScalingRotationRatePower") = a0; };
	float GetMovementSpeedScalingRotationRatePower() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MovementSpeedScalingRotationRatePower"); };
	void SetAttackNoStaminaTorpidityMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackNoStaminaTorpidityMultiplier") = a0; };
	float GetAttackNoStaminaTorpidityMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackNoStaminaTorpidityMultiplier"); };
	void SetDecayDestructionPeriod(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DecayDestructionPeriod") = a0; };
	float GetDecayDestructionPeriod() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DecayDestructionPeriod"); };
	void SetTamedAtTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "TamedAtTime") = a0; };
	double GetTamedAtTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "TamedAtTime"); };
	void SetLastInAllyRangeTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastInAllyRangeTime") = a0; };
	double GetLastInAllyRangeTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastInAllyRangeTime"); };
	void SetLatchedOnStructures(TArray<APrimalStructure *, FDefaultAllocator> a0) { *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "LatchedOnStructures") = a0; };
	TArray<APrimalStructure *, FDefaultAllocator> GetLatchedOnStructures() const { return *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "LatchedOnStructures"); };
	//UPrimalDinoSettings* GetMyDinoSettingsCDO() const { return *(UPrimalDinoSettings**)GetAddress(this, "APrimalDinoCharacter", "MyDinoSettingsCDO"); };
	void SetOriginalTargetingTeam(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "OriginalTargetingTeam") = a0; };
	int GetOriginalTargetingTeam() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "OriginalTargetingTeam"); };
	void SetPreviousRootYawSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "PreviousRootYawSpeed") = a0; };
	float GetPreviousRootYawSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "PreviousRootYawSpeed"); };
	void SetLastTimeFalling(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastTimeFalling") = a0; };
	double GetLastTimeFalling() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastTimeFalling"); };
	void SetTamedCorpseLifespan(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedCorpseLifespan") = a0; };
	float GetTamedCorpseLifespan() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedCorpseLifespan"); };
	void SetMateBoostDamageReceiveMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MateBoostDamageReceiveMultiplier") = a0; };
	float GetMateBoostDamageReceiveMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MateBoostDamageReceiveMultiplier"); };
	void SetMateBoostDamageGiveMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MateBoostDamageGiveMultiplier") = a0; };
	float GetMateBoostDamageGiveMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MateBoostDamageGiveMultiplier"); };
	void SetMateBoostRange(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MateBoostRange") = a0; };
	float GetMateBoostRange() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MateBoostRange"); };
	void SetDinoNameTag(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "DinoNameTag") = a0; };
	FName GetDinoNameTag() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "DinoNameTag"); };
	void SetAttackMyTargetForPlayerController(AShooterPlayerController* a0) { *(AShooterPlayerController**)GetAddress(this, "APrimalDinoCharacter", "AttackMyTargetForPlayerController") = a0; };
	AShooterPlayerController* GetAttackMyTargetForPlayerController() const { return *(AShooterPlayerController**)GetAddress(this, "APrimalDinoCharacter", "AttackMyTargetForPlayerController"); };
	void SetRidingAttackExtraVelocityDelay(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RidingAttackExtraVelocityDelay") = a0; };
	float GetRidingAttackExtraVelocityDelay() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RidingAttackExtraVelocityDelay"); };
	void SetStepDamageRadialDamageInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageInterval") = a0; };
	float GetStepDamageRadialDamageInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageInterval"); };
	void SetStepDamageRadialDamageExtraRadius(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageExtraRadius") = a0; };
	float GetStepDamageRadialDamageExtraRadius() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageExtraRadius"); };
	void SetStepDamageRadialDamageAmountGeneral(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountGeneral") = a0; };
	float GetStepDamageRadialDamageAmountGeneral() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountGeneral"); };
	void SetStepDamageRadialDamageAmountHarvestable(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountHarvestable") = a0; };
	float GetStepDamageRadialDamageAmountHarvestable() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageRadialDamageAmountHarvestable"); };
	void SetLastRadialStepDamageTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastRadialStepDamageTime") = a0; };
	double GetLastRadialStepDamageTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastRadialStepDamageTime"); };
	void SetStepDamageFootDamageInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageInterval") = a0; };
	float GetStepDamageFootDamageInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageInterval"); };
	void SetStepDamageFootDamageRadius(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageRadius") = a0; };
	float GetStepDamageFootDamageRadius() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageRadius"); };
	void SetStepDamageFootDamageAmount(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageAmount") = a0; };
	float GetStepDamageFootDamageAmount() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageAmount"); };
	void SetStepDamageFootDamageSockets(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageSockets") = a0; };
	TArray<FName, FDefaultAllocator> GetStepDamageFootDamageSockets() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageSockets"); };
	void SetDurationBeforeMovingStuckPawn(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DurationBeforeMovingStuckPawn") = a0; };
	float GetDurationBeforeMovingStuckPawn() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DurationBeforeMovingStuckPawn"); };
	void SetLastCheckedLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastCheckedLocation") = a0; };
	FVector GetLastCheckedLocation() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastCheckedLocation"); };
	void SetLastValidNotStuckTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastValidNotStuckTime") = a0; };
	double GetLastValidNotStuckTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastValidNotStuckTime"); };
	void SetRandomPlayStartledAnimIntervalMin(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomPlayStartledAnimIntervalMin") = a0; };
	float GetRandomPlayStartledAnimIntervalMin() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomPlayStartledAnimIntervalMin"); };
	void SetRandomPlayStartledAnimIntervalMax(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomPlayStartledAnimIntervalMax") = a0; };
	float GetRandomPlayStartledAnimIntervalMax() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomPlayStartledAnimIntervalMax"); };
	void SetStartledAnimationCooldown(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StartledAnimationCooldown") = a0; };
	float GetStartledAnimationCooldown() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StartledAnimationCooldown"); };
	void SetDefaultActivateAttackRangeOffset(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "DefaultActivateAttackRangeOffset") = a0; };
	float GetDefaultActivateAttackRangeOffset() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "DefaultActivateAttackRangeOffset"); };
	void SetCorpseTargetingMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "CorpseTargetingMultiplier") = a0; };
	float GetCorpseTargetingMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CorpseTargetingMultiplier"); };
	void SetLastFootStepDamageTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastFootStepDamageTime") = a0; };
	double GetLastFootStepDamageTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastFootStepDamageTime"); };
	void SetLastStartledTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastStartledTime") = a0; };
	double GetLastStartledTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastStartledTime"); };
	void SetCorpseLifespanNonRelevant(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "CorpseLifespanNonRelevant") = a0; };
	float GetCorpseLifespanNonRelevant() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CorpseLifespanNonRelevant"); };
	void SetMinStaminaForRider(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MinStaminaForRider") = a0; };
	float GetMinStaminaForRider() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MinStaminaForRider"); };
	void SetLoseStaminaWithRiderRate(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LoseStaminaWithRiderRate") = a0; };
	float GetLoseStaminaWithRiderRate() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LoseStaminaWithRiderRate"); };
	void SetFollowingRunDistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FollowingRunDistance") = a0; };
	float GetFollowingRunDistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FollowingRunDistance"); };
	void SetMaxDinoKillerTransferWeightPercent(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MaxDinoKillerTransferWeightPercent") = a0; };
	float GetMaxDinoKillerTransferWeightPercent() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MaxDinoKillerTransferWeightPercent"); };
	void SetNPCZoneVolumeCountWeight(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "NPCZoneVolumeCountWeight") = a0; };
	float GetNPCZoneVolumeCountWeight() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "NPCZoneVolumeCountWeight"); };
	void SetFloatingHUDTextWorldOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "FloatingHUDTextWorldOffset") = a0; };
	FVector GetFloatingHUDTextWorldOffset() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "FloatingHUDTextWorldOffset"); };
	void SetLastAttackedTargetTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAttackedTargetTime") = a0; };
	double GetLastAttackedTargetTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAttackedTargetTime"); };
	void SetLastForcedLandingCheckTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastForcedLandingCheckTime") = a0; };
	double GetLastForcedLandingCheckTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastForcedLandingCheckTime"); };
	void SetLastAllyTargetLookTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAllyTargetLookTime") = a0; };
	double GetLastAllyTargetLookTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAllyTargetLookTime"); };
	void SetLastAttackedTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAttackedTime") = a0; };
	double GetLastAttackedTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAttackedTime"); };
	void SetLastPlayerDinoOverlapRelevantTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastPlayerDinoOverlapRelevantTime") = a0; };
	double GetLastPlayerDinoOverlapRelevantTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastPlayerDinoOverlapRelevantTime"); };
	void SetDinoAimRotationOffset(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalDinoCharacter", "DinoAimRotationOffset") = a0; };
	FRotator GetDinoAimRotationOffset() const { return *(FRotator*)GetAddress(this, "APrimalDinoCharacter", "DinoAimRotationOffset"); };
	void SetLastDinoAllyLookInterpTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastDinoAllyLookInterpTime") = a0; };
	double GetLastDinoAllyLookInterpTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastDinoAllyLookInterpTime"); };
	void SetLastRiderOverlappedPosition(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastRiderOverlappedPosition") = a0; };
	FVector GetLastRiderOverlappedPosition() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastRiderOverlappedPosition"); };
	void SetNextRidingFlyerUndergroundCheck(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "NextRidingFlyerUndergroundCheck") = a0; };
	double GetNextRidingFlyerUndergroundCheck() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "NextRidingFlyerUndergroundCheck"); };
	void SetLastSetRiderTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastSetRiderTime") = a0; };
	double GetLastSetRiderTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastSetRiderTime"); };
	void SetRepairAmountRemaining(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RepairAmountRemaining") = a0; };
	float GetRepairAmountRemaining() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RepairAmountRemaining"); };
	void SetRepairCheckInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RepairCheckInterval") = a0; };
	float GetRepairCheckInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RepairCheckInterval"); };
	void SetRepairPercentPerInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RepairPercentPerInterval") = a0; };
	float GetRepairPercentPerInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RepairPercentPerInterval"); };
	void SetRiderCheckTraceOffset(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RiderCheckTraceOffset") = a0; };
	FVector GetRiderCheckTraceOffset() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RiderCheckTraceOffset"); };
	void SetRiderEjectionImpulse(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RiderEjectionImpulse") = a0; };
	FVector GetRiderEjectionImpulse() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RiderEjectionImpulse"); };
	void SetWakingTameAffinityDecreaseFoodPercentage(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameAffinityDecreaseFoodPercentage") = a0; };
	float GetWakingTameAffinityDecreaseFoodPercentage() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameAffinityDecreaseFoodPercentage"); };
	void SetWakingTameAllowFeedingFoodPercentage(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameAllowFeedingFoodPercentage") = a0; };
	float GetWakingTameAllowFeedingFoodPercentage() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameAllowFeedingFoodPercentage"); };
	void SetWakingTameFoodAffinityMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameFoodAffinityMultiplier") = a0; };
	float GetWakingTameFoodAffinityMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameFoodAffinityMultiplier"); };
	void SetCheckForWildAmbientHarvestingIntervalMin(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMin") = a0; };
	float GetCheckForWildAmbientHarvestingIntervalMin() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMin"); };
	void SetCheckForWildAmbientHarvestingIntervalMax(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMax") = a0; };
	float GetCheckForWildAmbientHarvestingIntervalMax() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CheckForWildAmbientHarvestingIntervalMax"); };
	void SetWildAmbientHarvestingTimer(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WildAmbientHarvestingTimer") = a0; };
	float GetWildAmbientHarvestingTimer() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WildAmbientHarvestingTimer"); };
	void SetWildAmbientHarvestingRadius(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WildAmbientHarvestingRadius") = a0; };
	float GetWildAmbientHarvestingRadius() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WildAmbientHarvestingRadius"); };
	void SetFlyerNumUnderGroundFail(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "FlyerNumUnderGroundFail") = a0; };
	int GetFlyerNumUnderGroundFail() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "FlyerNumUnderGroundFail"); };
	void SetAbsoluteBaseLevel(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "AbsoluteBaseLevel") = a0; };
	int GetAbsoluteBaseLevel() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "AbsoluteBaseLevel"); };
	//FDinoSaddleStruct GetSaddleStruct() const { return *(FDinoSaddleStruct*)GetAddress(this, "APrimalDinoCharacter", "SaddleStruct"); };
	void SetDraggedRagdolls(TArray<APrimalCharacter *, FDefaultAllocator> a0) { *(TArray<APrimalCharacter *, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "DraggedRagdolls") = a0; };
	TArray<APrimalCharacter *, FDefaultAllocator> GetDraggedRagdolls() const { return *(TArray<APrimalCharacter *, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "DraggedRagdolls"); };
	void SetLastOverrodeRandomWanderLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastOverrodeRandomWanderLocation") = a0; };
	FVector GetLastOverrodeRandomWanderLocation() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastOverrodeRandomWanderLocation"); };
	void SetChargeBumpDamage(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargeBumpDamage") = a0; };
	float GetChargeBumpDamage() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargeBumpDamage"); };
	void SetChargeBumpImpulse(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargeBumpImpulse") = a0; };
	float GetChargeBumpImpulse() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargeBumpImpulse"); };
	void SetMinChargeInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MinChargeInterval") = a0; };
	float GetMinChargeInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MinChargeInterval"); };
	void SetPlayerMountedLaunchFowardSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "PlayerMountedLaunchFowardSpeed") = a0; };
	float GetPlayerMountedLaunchFowardSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "PlayerMountedLaunchFowardSpeed"); };
	void SetPlayerMountedLaunchUpSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "PlayerMountedLaunchUpSpeed") = a0; };
	float GetPlayerMountedLaunchUpSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "PlayerMountedLaunchUpSpeed"); };
	void SetAttackOnLaunchMaximumTargetDistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackOnLaunchMaximumTargetDistance") = a0; };
	float GetAttackOnLaunchMaximumTargetDistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackOnLaunchMaximumTargetDistance"); };
	void SetKeepFlightRemainingTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "KeepFlightRemainingTime") = a0; };
	float GetKeepFlightRemainingTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "KeepFlightRemainingTime"); };
	void SetFlyingRunSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingRunSpeedModifier") = a0; };
	float GetFlyingRunSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyingRunSpeedModifier"); };
	void SetChargingAnimDelay(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingAnimDelay") = a0; };
	float GetChargingAnimDelay() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingAnimDelay"); };
	void SetRiderSocketName(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "RiderSocketName") = a0; };
	FName GetRiderSocketName() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "RiderSocketName"); };
	void SetChargingActivationRequiresStamina(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingActivationRequiresStamina") = a0; };
	float GetChargingActivationRequiresStamina() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingActivationRequiresStamina"); };
	void SetChargingActivationConsumesStamina(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingActivationConsumesStamina") = a0; };
	float GetChargingActivationConsumesStamina() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ChargingActivationConsumesStamina"); };
	void SetFlyerHardBreakingOverride(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyerHardBreakingOverride") = a0; };
	float GetFlyerHardBreakingOverride() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FlyerHardBreakingOverride"); };
	void SetBabyScale(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyScale") = a0; };
	float GetBabyScale() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyScale"); };
	void SetBabySpeedMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabySpeedMultiplier") = a0; };
	float GetBabySpeedMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabySpeedMultiplier"); };
	void SetBabyPitchMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyPitchMultiplier") = a0; };
	float GetBabyPitchMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyPitchMultiplier"); };
	void SetBabyVolumeMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyVolumeMultiplier") = a0; };
	float GetBabyVolumeMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyVolumeMultiplier"); };
	void SetChargingStartBlockedTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "ChargingStartBlockedTime") = a0; };
	double GetChargingStartBlockedTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "ChargingStartBlockedTime"); };
	void SetLastChargeEndTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastChargeEndTime") = a0; };
	double GetLastChargeEndTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastChargeEndTime"); };
	void SetSaddledStructures(TArray<APrimalStructure *, FDefaultAllocator> a0) { *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "SaddledStructures") = a0; };
	TArray<APrimalStructure *, FDefaultAllocator> GetSaddledStructures() const { return *(TArray<APrimalStructure *, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "SaddledStructures"); };
	void SetLastTamedFlyerNearbyAllyCheckTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastTamedFlyerNearbyAllyCheckTime") = a0; };
	double GetLastTamedFlyerNearbyAllyCheckTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastTamedFlyerNearbyAllyCheckTime"); };
	void SetLastUpdatedBabyAgeAtTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastUpdatedBabyAgeAtTime") = a0; };
	double GetLastUpdatedBabyAgeAtTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastUpdatedBabyAgeAtTime"); };
	void SetLastUpdatedGestationAtTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastUpdatedGestationAtTime") = a0; };
	double GetLastUpdatedGestationAtTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastUpdatedGestationAtTime"); };
	void SetLastUpdatedMatingAtTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastUpdatedMatingAtTime") = a0; };
	double GetLastUpdatedMatingAtTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastUpdatedMatingAtTime"); };
	void SetBabyAgeSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyAgeSpeed") = a0; };
	float GetBabyAgeSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyAgeSpeed"); };
	void SetExtraBabyAgeSpeedMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraBabyAgeSpeedMultiplier") = a0; };
	float GetExtraBabyAgeSpeedMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraBabyAgeSpeedMultiplier"); };
	void SetFemaleMinTimeBetweenMating(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMinTimeBetweenMating") = a0; };
	float GetFemaleMinTimeBetweenMating() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMinTimeBetweenMating"); };
	void SetFemaleMaxTimeBetweenMating(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMaxTimeBetweenMating") = a0; };
	float GetFemaleMaxTimeBetweenMating() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMaxTimeBetweenMating"); };
	void SetFemaleMatingRangeAddition(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMatingRangeAddition") = a0; };
	float GetFemaleMatingRangeAddition() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMatingRangeAddition"); };
	void SetFemaleMatingTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMatingTime") = a0; };
	float GetFemaleMatingTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "FemaleMatingTime"); };
	void SetNextAllowedMatingTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "NextAllowedMatingTime") = a0; };
	double GetNextAllowedMatingTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "NextAllowedMatingTime"); };
	void SetMatingProgress(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "MatingProgress") = a0; };
	float GetMatingProgress() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "MatingProgress"); };
	void SetLastMatingNotificationTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastMatingNotificationTime") = a0; };
	double GetLastMatingNotificationTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastMatingNotificationTime"); };
	void SetMatingWithDino(APrimalDinoCharacter* a0) { *(APrimalDinoCharacter**)GetAddress(this, "APrimalDinoCharacter", "MatingWithDino") = a0; };
	APrimalDinoCharacter* GetMatingWithDino() const { return *(APrimalDinoCharacter**)GetAddress(this, "APrimalDinoCharacter", "MatingWithDino"); };
	void SetGestationEggTamedIneffectivenessModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "GestationEggTamedIneffectivenessModifier") = a0; };
	float GetGestationEggTamedIneffectivenessModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "GestationEggTamedIneffectivenessModifier"); };
	void SetNewFemaleMinTimeBetweenMating(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "NewFemaleMinTimeBetweenMating") = a0; };
	float GetNewFemaleMinTimeBetweenMating() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "NewFemaleMinTimeBetweenMating"); };
	void SetNewFemaleMaxTimeBetweenMating(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "NewFemaleMaxTimeBetweenMating") = a0; };
	float GetNewFemaleMaxTimeBetweenMating() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "NewFemaleMaxTimeBetweenMating"); };
	void SetInterpolatedVelocity(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "InterpolatedVelocity") = a0; };
	FVector GetInterpolatedVelocity() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "InterpolatedVelocity"); };
	void SetOldInterpolatedLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "OldInterpolatedLocation") = a0; };
	FVector GetOldInterpolatedLocation() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "OldInterpolatedLocation"); };
	void SetHyperThermiaInsulation(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "HyperThermiaInsulation") = a0; };
	float GetHyperThermiaInsulation() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "HyperThermiaInsulation"); };
	void SetHypoThermiaInsulation(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "HypoThermiaInsulation") = a0; };
	float GetHypoThermiaInsulation() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "HypoThermiaInsulation"); };
	void SetInsulationRange(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "InsulationRange") = a0; };
	float GetInsulationRange() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "InsulationRange"); };
	void SetGangOverlapRange(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "GangOverlapRange") = a0; };
	float GetGangOverlapRange() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "GangOverlapRange"); };
	void SetGangDamageResistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "GangDamageResistance") = a0; };
	float GetGangDamageResistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "GangDamageResistance"); };
	void SetGangDamage(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "GangDamage") = a0; };
	float GetGangDamage() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "GangDamage"); };
	void SetMaxGangCount(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxGangCount") = a0; };
	int GetMaxGangCount() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxGangCount"); };
	void SetGangCount(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "GangCount") = a0; };
	int GetGangCount() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "GangCount"); };
	void SetLastGangCheckTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastGangCheckTime") = a0; };
	double GetLastGangCheckTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastGangCheckTime"); };
	void SetLastGangCheckPosition(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastGangCheckPosition") = a0; };
	FVector GetLastGangCheckPosition() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "LastGangCheckPosition"); };
	void SetLastRiderExitFrameCounter(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "LastRiderExitFrameCounter") = a0; };
	int GetLastRiderExitFrameCounter() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "LastRiderExitFrameCounter"); };
	void SetWildRandomScale(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WildRandomScale") = a0; };
	float GetWildRandomScale() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WildRandomScale"); };
	void SetHeldJumpSlowFallingGravityZScale(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "HeldJumpSlowFallingGravityZScale") = a0; };
	float GetHeldJumpSlowFallingGravityZScale() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "HeldJumpSlowFallingGravityZScale"); };
	void SetSlowFallingStaminaCostPerSecond(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "SlowFallingStaminaCostPerSecond") = a0; };
	float GetSlowFallingStaminaCostPerSecond() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "SlowFallingStaminaCostPerSecond"); };
	void SetNoRiderRotationModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "NoRiderRotationModifier") = a0; };
	float GetNoRiderRotationModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "NoRiderRotationModifier"); };
	void SetRiderFPVCameraUseSocketName(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "RiderFPVCameraUseSocketName") = a0; };
	FName GetRiderFPVCameraUseSocketName() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "RiderFPVCameraUseSocketName"); };
	void SetRiderLatchedFPVCameraUseSocketName(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "RiderLatchedFPVCameraUseSocketName") = a0; };
	FName GetRiderLatchedFPVCameraUseSocketName() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "RiderLatchedFPVCameraUseSocketName"); };
	void SetPassengerFPVCameraRootSocket(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "PassengerFPVCameraRootSocket") = a0; };
	FName GetPassengerFPVCameraRootSocket() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "PassengerFPVCameraRootSocket"); };
	void SetFPVRiderBoneNamesToHide(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "FPVRiderBoneNamesToHide") = a0; };
	TArray<FName, FDefaultAllocator> GetFPVRiderBoneNamesToHide() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "APrimalDinoCharacter", "FPVRiderBoneNamesToHide"); };
	void SetExtraRunningSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraRunningSpeedModifier") = a0; };
	float GetExtraRunningSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ExtraRunningSpeedModifier"); };
	void SetScaleExtraRunningSpeedModifierMin(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMin") = a0; };
	float GetScaleExtraRunningSpeedModifierMin() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMin"); };
	void SetScaleExtraRunningSpeedModifierMax(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMax") = a0; };
	float GetScaleExtraRunningSpeedModifierMax() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierMax"); };
	void SetScaleExtraRunningSpeedModifierSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierSpeed") = a0; };
	float GetScaleExtraRunningSpeedModifierSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ScaleExtraRunningSpeedModifierSpeed"); };
	void SetLastHigherScaleExtraRunningSpeedValue(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedValue") = a0; };
	float GetLastHigherScaleExtraRunningSpeedValue() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedValue"); };
	void SetLastHigherScaleExtraRunningSpeedTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedTime") = a0; };
	double GetLastHigherScaleExtraRunningSpeedTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastHigherScaleExtraRunningSpeedTime"); };
	void SetRiderMovementSpeedScalingRotationRatePowerMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMovementSpeedScalingRotationRatePowerMultiplier") = a0; };
	float GetRiderMovementSpeedScalingRotationRatePowerMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMovementSpeedScalingRotationRatePowerMultiplier"); };
	void SetLoadDestroyWildDinosUnderVersion(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "LoadDestroyWildDinosUnderVersion") = a0; };
	int GetLoadDestroyWildDinosUnderVersion() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "LoadDestroyWildDinosUnderVersion"); };
	void SetSaveDestroyWildDinosUnderVersion(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "SaveDestroyWildDinosUnderVersion") = a0; };
	int GetSaveDestroyWildDinosUnderVersion() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "SaveDestroyWildDinosUnderVersion"); };
	void SetAllowWaterSurfaceExtraJumpStaminaCost(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AllowWaterSurfaceExtraJumpStaminaCost") = a0; };
	float GetAllowWaterSurfaceExtraJumpStaminaCost() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AllowWaterSurfaceExtraJumpStaminaCost"); };
	AWeakObjectPtr<AActor> GetRiderAttackTarget() const { return *(AWeakObjectPtr<AActor>*)GetAddress(this, "APrimalDinoCharacter", "RiderAttackTarget"); };
	void SetRiderAttackLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RiderAttackLocation") = a0; };
	FVector GetRiderAttackLocation() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "RiderAttackLocation"); };
	void SetTribeGroupPetOrderingRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "TribeGroupPetOrderingRank") = a0; };
	unsigned char GetTribeGroupPetOrderingRank() const { return *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "TribeGroupPetOrderingRank"); };
	void SetTribeGroupPetRidingRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "TribeGroupPetRidingRank") = a0; };
	unsigned char GetTribeGroupPetRidingRank() const { return *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "TribeGroupPetRidingRank"); };
	void SetFollowStoppingDistance(unsigned char a0) { *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "FollowStoppingDistance") = a0; };
	unsigned char GetFollowStoppingDistance() const { return *(unsigned char*)GetAddress(this, "APrimalDinoCharacter", "FollowStoppingDistance"); };
	void SetImprinterName(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "ImprinterName") = a0; };
	FString GetImprinterName() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "ImprinterName"); };
	unsigned __int64 GetImprinterPlayerDataID() const { return *(unsigned __int64*)GetAddress(this, "APrimalDinoCharacter", "ImprinterPlayerDataID"); };
	void SetBabyMinCuddleInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyMinCuddleInterval") = a0; };
	float GetBabyMinCuddleInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyMinCuddleInterval"); };
	void SetBabyMaxCuddleInterval(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyMaxCuddleInterval") = a0; };
	float GetBabyMaxCuddleInterval() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyMaxCuddleInterval"); };
	void SetBabyCuddleGracePeriod(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleGracePeriod") = a0; };
	float GetBabyCuddleGracePeriod() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleGracePeriod"); };
	void SetBabyCuddleLoseImpringQualityPerSecond(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleLoseImpringQualityPerSecond") = a0; };
	float GetBabyCuddleLoseImpringQualityPerSecond() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleLoseImpringQualityPerSecond"); };
	void SetBabyCuddleWalkDistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleWalkDistance") = a0; };
	float GetBabyCuddleWalkDistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleWalkDistance"); };
	void SetBabyCuddleWalkStartingLocation(FVector a0) { *(FVector*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleWalkStartingLocation") = a0; };
	FVector GetBabyCuddleWalkStartingLocation() const { return *(FVector*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleWalkStartingLocation"); };
	void SetBabyNextCuddleTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "BabyNextCuddleTime") = a0; };
	double GetBabyNextCuddleTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "BabyNextCuddleTime"); };
	//TEnumAsByte<enum EBabyCuddleType::Type> GetBabyCuddleType() const { return *(TEnumAsByte<enum EBabyCuddleType::Type>*)GetAddress(this, "APrimalDinoCharacter", "BabyCuddleType"); };
	void SetRiderMaxImprintingQualityDamageReduction(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageReduction") = a0; };
	float GetRiderMaxImprintingQualityDamageReduction() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageReduction"); };
	void SetRiderMaxImprintingQualityDamageMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageMultiplier") = a0; };
	float GetRiderMaxImprintingQualityDamageMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderMaxImprintingQualityDamageMultiplier"); };
	void SetBabyImprintingQualityTotalMaturationTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyImprintingQualityTotalMaturationTime") = a0; };
	float GetBabyImprintingQualityTotalMaturationTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "BabyImprintingQualityTotalMaturationTime"); };
	void SetWakingTameMaxDistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameMaxDistance") = a0; };
	float GetWakingTameMaxDistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WakingTameMaxDistance"); };
	void SetTimeBetweenTamedWakingEatAnimations(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TimeBetweenTamedWakingEatAnimations") = a0; };
	float GetTimeBetweenTamedWakingEatAnimations() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TimeBetweenTamedWakingEatAnimations"); };
	void SetLastEatAnimationTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastEatAnimationTime") = a0; };
	double GetLastEatAnimationTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastEatAnimationTime"); };
	void SetStepDamageFootDamageRunningMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageRunningMultiplier") = a0; };
	float GetStepDamageFootDamageRunningMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepDamageFootDamageRunningMultiplier"); };
	void SetStepRadialDamageOffset(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "StepRadialDamageOffset") = a0; };
	float GetStepRadialDamageOffset() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "StepRadialDamageOffset"); };
	void SetForcePawnBigPushingForTime(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "ForcePawnBigPushingForTime") = a0; };
	float GetForcePawnBigPushingForTime() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "ForcePawnBigPushingForTime"); };
	void SetAIDinoForceActiveUntasisingRange(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AIDinoForceActiveUntasisingRange") = a0; };
	float GetAIDinoForceActiveUntasisingRange() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AIDinoForceActiveUntasisingRange"); };
	void SetWildRunningRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WildRunningRotationRateModifier") = a0; };
	float GetWildRunningRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WildRunningRotationRateModifier"); };
	void SetTamedRunningRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedRunningRotationRateModifier") = a0; };
	float GetTamedRunningRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedRunningRotationRateModifier"); };
	void SetTamedSwimmingRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedSwimmingRotationRateModifier") = a0; };
	float GetTamedSwimmingRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TamedSwimmingRotationRateModifier"); };
	void SetWildSwimmingRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WildSwimmingRotationRateModifier") = a0; };
	float GetWildSwimmingRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WildSwimmingRotationRateModifier"); };
	void SetRiderFlyingRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderFlyingRotationRateModifier") = a0; };
	float GetRiderFlyingRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RiderFlyingRotationRateModifier"); };
	void SetNoRiderFlyingRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "NoRiderFlyingRotationRateModifier") = a0; };
	float GetNoRiderFlyingRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "NoRiderFlyingRotationRateModifier"); };
	void SetAICombatRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AICombatRotationRateModifier") = a0; };
	float GetAICombatRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AICombatRotationRateModifier"); };
	void SetWalkingRotationRateModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WalkingRotationRateModifier") = a0; };
	float GetWalkingRotationRateModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WalkingRotationRateModifier"); };
	void SetSetAttackTargetTraceDistance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "SetAttackTargetTraceDistance") = a0; };
	float GetSetAttackTargetTraceDistance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "SetAttackTargetTraceDistance"); };
	void SetSetAttackTargetTraceWidth(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "SetAttackTargetTraceWidth") = a0; };
	float GetSetAttackTargetTraceWidth() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "SetAttackTargetTraceWidth"); };
	void SetWanderRadiusMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "WanderRadiusMultiplier") = a0; };
	float GetWanderRadiusMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "WanderRadiusMultiplier"); };
	void SetRepeatPrimaryAttackLastSendTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "RepeatPrimaryAttackLastSendTime") = a0; };
	double GetRepeatPrimaryAttackLastSendTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "RepeatPrimaryAttackLastSendTime"); };
	void SetNextTamedDinoCharacterStatusTickTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "NextTamedDinoCharacterStatusTickTime") = a0; };
	double GetNextTamedDinoCharacterStatusTickTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "NextTamedDinoCharacterStatusTickTime"); };
	void SetLastTamedDinoCharacterStatusTickTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastTamedDinoCharacterStatusTickTime") = a0; };
	double GetLastTamedDinoCharacterStatusTickTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastTamedDinoCharacterStatusTickTime"); };
	void SetLimitRiderYawOnLatchedRange(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LimitRiderYawOnLatchedRange") = a0; };
	float GetLimitRiderYawOnLatchedRange() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LimitRiderYawOnLatchedRange"); };
	void SetLatchingDistanceLimit(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingDistanceLimit") = a0; };
	float GetLatchingDistanceLimit() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingDistanceLimit"); };
	void SetLatchingInitialYaw(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingInitialYaw") = a0; };
	float GetLatchingInitialYaw() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingInitialYaw"); };
	void SetLatchingInitialPitch(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingInitialPitch") = a0; };
	float GetLatchingInitialPitch() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingInitialPitch"); };
	void SetLatchingInterpolatedPitch(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingInterpolatedPitch") = a0; };
	float GetLatchingInterpolatedPitch() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingInterpolatedPitch"); };
	void SetLatchedFirstPersonViewAngle(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchedFirstPersonViewAngle") = a0; };
	float GetLatchedFirstPersonViewAngle() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchedFirstPersonViewAngle"); };
	void SetLatchingCameraInterpolationSpeed(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingCameraInterpolationSpeed") = a0; };
	float GetLatchingCameraInterpolationSpeed() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "LatchingCameraInterpolationSpeed"); };
	void SetTargetLatchingInitialYaw(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "TargetLatchingInitialYaw") = a0; };
	float GetTargetLatchingInitialYaw() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "TargetLatchingInitialYaw"); };
	void SetCurrentStrafeMagnitude(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "CurrentStrafeMagnitude") = a0; };
	float GetCurrentStrafeMagnitude() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "CurrentStrafeMagnitude"); };
	void SetGainStaminaWhenLatchedRate(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "GainStaminaWhenLatchedRate") = a0; };
	float GetGainStaminaWhenLatchedRate() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "GainStaminaWhenLatchedRate"); };
	void SetLastFrameMoveRight(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "LastFrameMoveRight") = a0; };
	int GetLastFrameMoveRight() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "LastFrameMoveRight"); };
	void SetLastFrameMoveLeft(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "LastFrameMoveLeft") = a0; };
	int GetLastFrameMoveLeft() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "LastFrameMoveLeft"); };
	void SetLastRiderMountedWeaponRotation(FRotator a0) { *(FRotator*)GetAddress(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotation") = a0; };
	FRotator GetLastRiderMountedWeaponRotation() const { return *(FRotator*)GetAddress(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotation"); };
	void SetLastRiderMountedWeaponRotationSentTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotationSentTime") = a0; };
	double GetLastRiderMountedWeaponRotationSentTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastRiderMountedWeaponRotationSentTime"); };
	void SetDeathGivesDossierIndex(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "DeathGivesDossierIndex") = a0; };
	int GetDeathGivesDossierIndex() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "DeathGivesDossierIndex"); };
	void SetSaddleRiderMovementTraceThruSocketName(FName a0) { *(FName*)GetAddress(this, "APrimalDinoCharacter", "SaddleRiderMovementTraceThruSocketName") = a0; };
	FName GetSaddleRiderMovementTraceThruSocketName() const { return *(FName*)GetAddress(this, "APrimalDinoCharacter", "SaddleRiderMovementTraceThruSocketName"); };
	void SetSwimmingRunSpeedModifier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "SwimmingRunSpeedModifier") = a0; };
	float GetSwimmingRunSpeedModifier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "SwimmingRunSpeedModifier"); };
	void SetDinoDownloadedAtTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "DinoDownloadedAtTime") = a0; };
	double GetDinoDownloadedAtTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "DinoDownloadedAtTime"); };
	void SetUploadedFromServerName(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "UploadedFromServerName") = a0; };
	FString GetUploadedFromServerName() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "UploadedFromServerName"); };
	void SetLatestUploadedFromServerName(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "LatestUploadedFromServerName") = a0; };
	FString GetLatestUploadedFromServerName() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "LatestUploadedFromServerName"); };
	void SetPreviousUploadedFromServerName(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "PreviousUploadedFromServerName") = a0; };
	FString GetPreviousUploadedFromServerName() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "PreviousUploadedFromServerName"); };
	void SetTamedOnServerName(FString a0) { *(FString*)GetAddress(this, "APrimalDinoCharacter", "TamedOnServerName") = a0; };
	FString GetTamedOnServerName() const { return *(FString*)GetAddress(this, "APrimalDinoCharacter", "TamedOnServerName"); };
	void SetMaxAllowedRandomMutations(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxAllowedRandomMutations") = a0; };
	int GetMaxAllowedRandomMutations() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "MaxAllowedRandomMutations"); };
	void SetRandomMutationRolls(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationRolls") = a0; };
	int GetRandomMutationRolls() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationRolls"); };
	void SetRandomMutationChance(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationChance") = a0; };
	float GetRandomMutationChance() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationChance"); };
	void SetRandomMutationGivePoints(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationGivePoints") = a0; };
	float GetRandomMutationGivePoints() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationGivePoints"); };
	void SetRandomMutationsMale(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationsMale") = a0; };
	int GetRandomMutationsMale() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationsMale"); };
	void SetRandomMutationsFemale(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationsFemale") = a0; };
	int GetRandomMutationsFemale() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "RandomMutationsFemale"); };
	void SetGestationEggRandomMutationsFemale(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "GestationEggRandomMutationsFemale") = a0; };
	int GetGestationEggRandomMutationsFemale() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "GestationEggRandomMutationsFemale"); };
	void SetGestationEggRandomMutationsMale(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "GestationEggRandomMutationsMale") = a0; };
	int GetGestationEggRandomMutationsMale() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "GestationEggRandomMutationsMale"); };
	void SetWakingTameConsumeEntireStackMaxQuantity(int a0) { *(int*)GetAddress(this, "APrimalDinoCharacter", "WakingTameConsumeEntireStackMaxQuantity") = a0; };
	int GetWakingTameConsumeEntireStackMaxQuantity() const { return *(int*)GetAddress(this, "APrimalDinoCharacter", "WakingTameConsumeEntireStackMaxQuantity"); };
	void SetAttackPlayerDesirabilityMultiplier(float a0) { *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackPlayerDesirabilityMultiplier") = a0; };
	float GetAttackPlayerDesirabilityMultiplier() const { return *(float*)GetAddress(this, "APrimalDinoCharacter", "AttackPlayerDesirabilityMultiplier"); };
	void SetLastAutoHealingItemUse(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAutoHealingItemUse") = a0; };
	double GetLastAutoHealingItemUse() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastAutoHealingItemUse"); };
	void SetLastStartedCarryingCharacterTime(double a0) { *(double*)GetAddress(this, "APrimalDinoCharacter", "LastStartedCarryingCharacterTime") = a0; };
	double GetLastStartedCarryingCharacterTime() const { return *(double*)GetAddress(this, "APrimalDinoCharacter", "LastStartedCarryingCharacterTime"); };

	// Functions

	bool DoAttack(int a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, int, bool)>(GetAddress("APrimalDinoCharacter", "DoAttack"))((DWORD64)this, a1, a2); }
	bool CanAttack(int a1) { return static_cast<bool(_cdecl*)(DWORD64, int)>(GetAddress("APrimalDinoCharacter", "CanAttack"))((DWORD64)this, a1); }
	bool IsAttacking() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "IsAttacking"))((DWORD64)this); }
	bool ShouldDealDamage(AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "ShouldDealDamage"))((DWORD64)this, a1); }
	//void SetState(UPrimalAIState* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalAIState*)>(GetAddress("APrimalDinoCharacter", "SetState"))((DWORD64)this, a1); }
	void StopActiveState(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "StopActiveState"))((DWORD64)this, a1); }
	void PlayDying(float a1, const FDamageEvent& a2, APawn* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const FDamageEvent&, APawn*, AActor*)>(GetAddress("APrimalDinoCharacter", "PlayDying"))((DWORD64)this, a1, a2, a3, a4); }
	void BlueprintPlayDying(float a1, const FDamageEvent& a2, APawn* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const FDamageEvent&, APawn*, AActor*)>(GetAddress("APrimalDinoCharacter", "BlueprintPlayDying"))((DWORD64)this, a1, a2, a3, a4); }
	float TakeDamage(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<float(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalDinoCharacter", "TakeDamage"))((DWORD64)this, a1, a2, a3, a4); }
	void CycleAttackWeightsForAttackAtIndex(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalDinoCharacter", "CycleAttackWeightsForAttackAtIndex"))((DWORD64)this, a1); }
	AActor* GetOtherActorToIgnore() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetOtherActorToIgnore"))((DWORD64)this); }
	void SetCarryingDino(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalDinoCharacter", "SetCarryingDino"))((DWORD64)this, a1); }
	void ClearCarryingDino(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "ClearCarryingDino"))((DWORD64)this, a1); }
	void GetRidingCarryingIgnoreList(TArray<AActor *, FDefaultAllocator>& a1) { static_cast<void(_cdecl*)(DWORD64, TArray<AActor *, FDefaultAllocator>&)>(GetAddress("APrimalDinoCharacter", "GetRidingCarryingIgnoreList"))((DWORD64)this, a1); }
	void SetMountCharacter(APrimalCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalDinoCharacter", "SetMountCharacter"))((DWORD64)this, a1); }
	void ClearMountCharacter(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "ClearMountCharacter"))((DWORD64)this, a1); }
	bool CanMount(APrimalCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalDinoCharacter", "CanMount"))((DWORD64)this, a1); }
	bool IsUpdatingComponentTransforms(USceneComponent* a1) { return static_cast<bool(_cdecl*)(DWORD64, USceneComponent*)>(GetAddress("APrimalDinoCharacter", "IsUpdatingComponentTransforms"))((DWORD64)this, a1); }
	bool BPCanTargetCorpse() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "BPCanTargetCorpse"))((DWORD64)this); }
	FString* GetDescriptiveName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APrimalDinoCharacter", "GetDescriptiveName"))((DWORD64)this, res); }
	FString* GetEntryString(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APrimalDinoCharacter", "GetEntryString"))((DWORD64)this, res); }
	FString* GetEntryDescription(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APrimalDinoCharacter", "GetEntryDescription"))((DWORD64)this, res); }
	void ControllerLeavingGame(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalDinoCharacter", "ControllerLeavingGame"))((DWORD64)this, a1); }
	void ClearRider(bool a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("APrimalDinoCharacter", "ClearRider"))((DWORD64)this, a1, a2, a3); }
	void SetRider(AShooterCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterCharacter*)>(GetAddress("APrimalDinoCharacter", "SetRider"))((DWORD64)this, a1); }
	bool CanRide(AShooterCharacter* a1, unsigned char* a2, unsigned char* a3, bool a4) { return static_cast<bool(_cdecl*)(DWORD64, AShooterCharacter*, unsigned char*, unsigned char*, bool)>(GetAddress("APrimalDinoCharacter", "CanRide"))((DWORD64)this, a1, a2, a3, a4); }
	void OnElevateDino(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "OnElevateDino"))((DWORD64)this, a1); }
	void OnLowerDino(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "OnLowerDino"))((DWORD64)this, a1); }
	void OnBrake(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "OnBrake"))((DWORD64)this, a1); }
	bool BPHandleUseButtonPress(AShooterPlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalDinoCharacter", "BPHandleUseButtonPress"))((DWORD64)this, a1); }
	void StartLanding(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("APrimalDinoCharacter", "StartLanding"))((DWORD64)this, a1); }
	void InterruptLanding() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "InterruptLanding"))((DWORD64)this); }
	void FinishedLanding() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "FinishedLanding"))((DWORD64)this); }
	FVector* GetLandingLocation(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("APrimalDinoCharacter", "GetLandingLocation"))((DWORD64)this, res); }
	void OnRep_bBonesHidden() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnRep_bBonesHidden"))((DWORD64)this); }
	void StartCharging(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "StartCharging"))((DWORD64)this, a1); }
	void EndCharging(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "EndCharging"))((DWORD64)this, a1); }
	bool AllowHurtAnimation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AllowHurtAnimation"))((DWORD64)this); }
	void OnRep_Rider() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnRep_Rider"))((DWORD64)this); }
	void ClearCarriedCharacter(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "ClearCarriedCharacter"))((DWORD64)this, a1); }
	bool CarryCharacter(APrimalCharacter* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*, bool)>(GetAddress("APrimalDinoCharacter", "CarryCharacter"))((DWORD64)this, a1, a2); }
	bool CanCarryCharacter(APrimalCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalDinoCharacter", "CanCarryCharacter"))((DWORD64)this, a1); }
	void OnRep_CarriedCharacter() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnRep_CarriedCharacter"))((DWORD64)this); }
	TArray<AShooterCharacter *, FDefaultAllocator> GetPassengers() { return static_cast<TArray<AShooterCharacter *, FDefaultAllocator>(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetPassengers"))((DWORD64)this); }
	void ClearPassengers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ClearPassengers"))((DWORD64)this); }
	bool AddPassenger(AShooterCharacter* a1, unsigned char a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterCharacter*, unsigned char)>(GetAddress("APrimalDinoCharacter", "AddPassenger"))((DWORD64)this, a1, a2); }
	void RemovePassenger(AShooterCharacter* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, AShooterCharacter*, bool)>(GetAddress("APrimalDinoCharacter", "RemovePassenger"))((DWORD64)this, a1, a2); }
	bool CheckLocalPassengers() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "CheckLocalPassengers"))((DWORD64)this); }
	bool CanTakePassenger(AShooterCharacter* a1, unsigned char a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterCharacter*, unsigned char)>(GetAddress("APrimalDinoCharacter", "CanTakePassenger"))((DWORD64)this, a1, a2); }
	unsigned char GetNumPassengerSeats() { return static_cast<unsigned char(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetNumPassengerSeats"))((DWORD64)this); }
	//FSaddlePassengerSeatDefinition GetPassengerSeatDefinition(unsigned char a1) { return static_cast<FSaddlePassengerSeatDefinition(_cdecl*)(DWORD64, unsigned char)>(GetAddress("APrimalDinoCharacter", "GetPassengerSeatDefinition"))((DWORD64)this, a1); }
	void OnRep_PassengerPerSeat() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnRep_PassengerPerSeat"))((DWORD64)this); }
	bool HasReachedDestination(const FVector& a1) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&)>(GetAddress("APrimalDinoCharacter", "HasReachedDestination"))((DWORD64)this, a1); }
	bool AddToMeleeSwingHurtList(AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "AddToMeleeSwingHurtList"))((DWORD64)this, a1); }
	void RemoveFromMeleeSwingHurtList(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "RemoveFromMeleeSwingHurtList"))((DWORD64)this, a1); }
	int GetRandomBaseLevel() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetRandomBaseLevel"))((DWORD64)this); }
	void UpdateCarriedLocationAndRotation(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "UpdateCarriedLocationAndRotation"))((DWORD64)this, a1); }
	void CalcCapsuleHalfHeight() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "CalcCapsuleHalfHeight"))((DWORD64)this); }
	void OnControllerInitiatedAttack(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalDinoCharacter", "OnControllerInitiatedAttack"))((DWORD64)this, a1); }
	void UpdateAttackTargets() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "UpdateAttackTargets"))((DWORD64)this); }
	void GetAttackTargets(AActor** a1, FVector& a2) { static_cast<void(_cdecl*)(DWORD64, AActor**, FVector&)>(GetAddress("APrimalDinoCharacter", "GetAttackTargets"))((DWORD64)this, a1, a2); }
	//UPrimalAIState* GetActiveState() { return static_cast<UPrimalAIState*(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetActiveState"))((DWORD64)this); }
	void ServerClearRider() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerClearRider"))((DWORD64)this); }
	void OnStartFire(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "OnStartFire"))((DWORD64)this, a1); }
	void OnStopFire(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "OnStopFire"))((DWORD64)this, a1); }
	void OnStartTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "OnStartTargeting"))((DWORD64)this, a1); }
	bool ShouldReplicateRotPitch() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ShouldReplicateRotPitch"))((DWORD64)this); }
	void ServerRequestAttack(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalDinoCharacter", "ServerRequestAttack"))((DWORD64)this, a1); }
	void OnPrimalCharacterSleeped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnPrimalCharacterSleeped"))((DWORD64)this); }
	void InterruptLatching() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "InterruptLatching"))((DWORD64)this); }
	void AddDinoReferenceInLatchingStructure(APrimalStructure* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*)>(GetAddress("APrimalDinoCharacter", "AddDinoReferenceInLatchingStructure"))((DWORD64)this, a1); }
	void RemoveDinoReferenceFromLatchingStructure() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "RemoveDinoReferenceFromLatchingStructure"))((DWORD64)this); }
	AActor* GetTamedFollowTarget() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetTamedFollowTarget"))((DWORD64)this); }
	void AutoTame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AutoTame"))((DWORD64)this); }
	bool CanBeCarried() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "CanBeCarried"))((DWORD64)this); }
	void RefreshColorization() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "RefreshColorization"))((DWORD64)this); }
	FRotator* GetAimOffsets(FRotator* res, float a1, FRotator& a2, float& a3, float a4, FVector& a5) { return static_cast<FRotator*(_cdecl*)(DWORD64, FRotator*, float, FRotator&, float&, float, FVector&)>(GetAddress("APrimalDinoCharacter", "GetAimOffsets"))((DWORD64)this, res, a1, a2, a3, a4, a5); }
	void UpdateMateBoost() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "UpdateMateBoost"))((DWORD64)this); }
	void AdjustDamage(float& a1, const FDamageEvent& a2, AController* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float&, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalDinoCharacter", "AdjustDamage"))((DWORD64)this, a1, a2, a3, a4); }
	FRotator* GetAimOffsetsTransform(FRotator* res, float a1, FTransform& a2, float& a3, float a4, FVector& a5) { return static_cast<FRotator*(_cdecl*)(DWORD64, FRotator*, float, FTransform&, float&, float, FVector&)>(GetAddress("APrimalDinoCharacter", "GetAimOffsetsTransform"))((DWORD64)this, res, a1, a2, a3, a4, a5); }
	float GetAttackRangeOffset() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetAttackRangeOffset"))((DWORD64)this); }
	bool ModifyInputAcceleration(FVector& a1) { return static_cast<bool(_cdecl*)(DWORD64, FVector&)>(GetAddress("APrimalDinoCharacter", "ModifyInputAcceleration"))((DWORD64)this, a1); }
	float GetMaxSpeedModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetMaxSpeedModifier"))((DWORD64)this); }
	float GetRotationRateModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetRotationRateModifier"))((DWORD64)this); }
	void SetCurrentAttackIndex(unsigned char a1) { static_cast<void(_cdecl*)(DWORD64, unsigned char)>(GetAddress("APrimalDinoCharacter", "SetCurrentAttackIndex"))((DWORD64)this, a1); }
	unsigned char GetWiegthedAttack(float a1, float a2, AActor* a3) { return static_cast<unsigned char(_cdecl*)(DWORD64, float, float, AActor*)>(GetAddress("APrimalDinoCharacter", "GetWiegthedAttack"))((DWORD64)this, a1, a2, a3); }
	bool IsFleeing() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "IsFleeing"))((DWORD64)this); }
	void FaceRotation(FRotator a1, float a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, FRotator, float, bool)>(GetAddress("APrimalDinoCharacter", "FaceRotation"))((DWORD64)this, a1, a2, a3); }
	void MoveForward(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "MoveForward"))((DWORD64)this, a1); }
	void MoveRight(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "MoveRight"))((DWORD64)this, a1); }
	void MoveUp(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "MoveUp"))((DWORD64)this, a1); }
	void OnStartJump() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnStartJump"))((DWORD64)this); }
	void SetFlight(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("APrimalDinoCharacter", "SetFlight"))((DWORD64)this, a1, a2); }
	void KeepFlightTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "KeepFlightTimer"))((DWORD64)this); }
	void TameDino(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalDinoCharacter", "TameDino"))((DWORD64)this, a1); }
	bool CanTame(AShooterPlayerController* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerController*, bool)>(GetAddress("APrimalDinoCharacter", "CanTame"))((DWORD64)this, a1, a2); }
	void OnPrimalCharacterUnsleeped() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnPrimalCharacterUnsleeped"))((DWORD64)this); }
	void SetCharacterStatusTameable(bool a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, bool, bool, bool)>(GetAddress("APrimalDinoCharacter", "SetCharacterStatusTameable"))((DWORD64)this, a1, a2, a3); }
	bool IsValidForStatusUpdate() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "IsValidForStatusUpdate"))((DWORD64)this); }
	void ServerSleepingTick() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerSleepingTick"))((DWORD64)this); }
	void Unstasis() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "Unstasis"))((DWORD64)this); }
	UPrimalItem* GetBestInventoryFoodItem(float& a1, bool a2, bool a3, UPrimalItem** a4, bool a5) { return static_cast<UPrimalItem*(_cdecl*)(DWORD64, float&, bool, bool, UPrimalItem**, bool)>(GetAddress("APrimalDinoCharacter", "GetBestInventoryFoodItem"))((DWORD64)this, a1, a2, a3, a4, a5); }
	AShooterCharacter* ConsumeInventoryFoodItem(UPrimalItem* a1, float* a2, bool a3, float* a4, float a5, bool a6) { return static_cast<AShooterCharacter*(_cdecl*)(DWORD64, UPrimalItem*, float*, bool, float*, float, bool)>(GetAddress("APrimalDinoCharacter", "ConsumeInventoryFoodItem"))((DWORD64)this, a1, a2, a3, a4, a5, a6); }
	int GetFoodItemEffectivenessMultipliersIndex(UPrimalItem* a1) { return static_cast<int(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("APrimalDinoCharacter", "GetFoodItemEffectivenessMultipliersIndex"))((DWORD64)this, a1); }
	int GetExtraFoodItemEffectivenessMultipliersIndex(UPrimalItem* a1) { return static_cast<int(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("APrimalDinoCharacter", "GetExtraFoodItemEffectivenessMultipliersIndex"))((DWORD64)this, a1); }
	void ServerTamedTick() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerTamedTick"))((DWORD64)this); }
	float GetAffinityIncreaseForFoodItem(UPrimalItem* a1) { return static_cast<float(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("APrimalDinoCharacter", "GetAffinityIncreaseForFoodItem"))((DWORD64)this, a1); }
	bool CanOrder(APrimalCharacter* a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*, bool)>(GetAddress("APrimalDinoCharacter", "CanOrder"))((DWORD64)this, a1, a2); }
	//bool TamedProcessOrder(APrimalCharacter* a1, EDinoTamedOrder::Type a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*, EDinoTamedOrder::Type, bool)>(GetAddress("APrimalDinoCharacter", "TamedProcessOrder"))((DWORD64)this, a1, a2, a3); }
	void AddStructure(APrimalStructure* a1, FVector a2, FRotator a3, FName a4) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*, FVector, FRotator, FName)>(GetAddress("APrimalDinoCharacter", "AddStructure"))((DWORD64)this, a1, a2, a3, a4); }
	void RemoveStructure(APrimalStructure* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalStructure*)>(GetAddress("APrimalDinoCharacter", "RemoveStructure"))((DWORD64)this, a1); }
	void ChangeActorTeam(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalDinoCharacter", "ChangeActorTeam"))((DWORD64)this, a1); }
	void SpawnEgg() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "SpawnEgg"))((DWORD64)this); }
	//void SetForcedAggro(ITargetableInterface* a1, float a2, float a3) { static_cast<void(_cdecl*)(DWORD64, ITargetableInterface*, float, float)>(GetAddress("APrimalDinoCharacter", "SetForcedAggro"))((DWORD64)this, a1, a2, a3); }
	bool AllowNewEggAtLocation(const FVector& a1) { return static_cast<bool(_cdecl*)(DWORD64, const FVector&)>(GetAddress("APrimalDinoCharacter", "AllowNewEggAtLocation"))((DWORD64)this, a1); }
	float GetRunningSpeedModifier(bool a1) { return static_cast<float(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "GetRunningSpeedModifier"))((DWORD64)this, a1); }
	void SetupColorization() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "SetupColorization"))((DWORD64)this); }
	//bool CanTarget(const ITargetableInterface* a1) { return static_cast<bool(_cdecl*)(DWORD64, const ITargetableInterface*)>(GetAddress("APrimalDinoCharacter", "CanTarget"))((DWORD64)this, a1); }
	int GetOriginalTargetingTeam() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetOriginalTargetingTeam"))((DWORD64)this); }
	void ProcessEditText(AShooterPlayerController* a1, const FString& a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*, const FString&, bool)>(GetAddress("APrimalDinoCharacter", "ProcessEditText"))((DWORD64)this, a1, a2, a3); }
	AShooterCharacter* FindFirstFoodItemPlayerCharacter() { return static_cast<AShooterCharacter*(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "FindFirstFoodItemPlayerCharacter"))((DWORD64)this); }
	void NetUpdateDinoNameStrings(const FString& a1, const FString& a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, const FString&)>(GetAddress("APrimalDinoCharacter", "NetUpdateDinoNameStrings"))((DWORD64)this, a1, a2); }
	void NetUpdateDinoOwnerData(const FString& a1, int a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, int)>(GetAddress("APrimalDinoCharacter", "NetUpdateDinoOwnerData"))((DWORD64)this, a1, a2); }
	APrimalDinoCharacter* FindDinoWithID(UWorld* a1, unsigned int a2, unsigned int a3) { return static_cast<APrimalDinoCharacter*(_cdecl*)(DWORD64, UWorld*, unsigned int, unsigned int)>(GetAddress("APrimalDinoCharacter", "FindDinoWithID"))((DWORD64)this, a1, a2, a3); }
	void TargetingTeamChanged() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "TargetingTeamChanged"))((DWORD64)this); }
	void Destroyed() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "Destroyed"))((DWORD64)this); }
	void DeathHarvestingFadeOut_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "DeathHarvestingFadeOut_Implementation"))((DWORD64)this); }
	void NotifyItemAdded(UPrimalItem* a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*, bool)>(GetAddress("APrimalDinoCharacter", "NotifyItemAdded"))((DWORD64)this, a1, a2); }
	void NotifyItemRemoved(UPrimalItem* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalItem*)>(GetAddress("APrimalDinoCharacter", "NotifyItemRemoved"))((DWORD64)this, a1); }
	FString* GetDinoDescriptiveName(FString* res) { return static_cast<FString*(_cdecl*)(DWORD64, FString*)>(GetAddress("APrimalDinoCharacter", "GetDinoDescriptiveName"))((DWORD64)this, res); }
	void ServerGiveDefaultWeapon_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerGiveDefaultWeapon_Implementation"))((DWORD64)this); }
	void ServerCallFollow_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerCallFollow_Implementation"))((DWORD64)this); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalDinoCharacter", "ServerCallFollowOne_Implementation"))((DWORD64)this, a1); }
	void ServerCallStay_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerCallStay_Implementation"))((DWORD64)this); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalDinoCharacter", "ServerCallStayOne_Implementation"))((DWORD64)this, a1); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalDinoCharacter", "ServerCallFollowDistanceCycleOne_Implementation"))((DWORD64)this, a1); }
	void ServerCallSetAggressive_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerCallSetAggressive_Implementation"))((DWORD64)this); }
	void ServerCallAggressive_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerCallAggressive_Implementation"))((DWORD64)this); }
	void ServerCallNeutral_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerCallNeutral_Implementation"))((DWORD64)this); }
	void ServerCallPassive_Implementation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerCallPassive_Implementation"))((DWORD64)this); }
	void ServerCallAttackTarget_Implementation(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "ServerCallAttackTarget_Implementation"))((DWORD64)this, a1); }
	void ServerCallMoveTo_Implementation(FVector a1) { static_cast<void(_cdecl*)(DWORD64, FVector)>(GetAddress("APrimalDinoCharacter", "ServerCallMoveTo_Implementation"))((DWORD64)this, a1); }
	float GetCorpseLifespan() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetCorpseLifespan"))((DWORD64)this); }
	void SpawnDefaultController() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "SpawnDefaultController"))((DWORD64)this); }
	bool AllowFallDamage() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AllowFallDamage"))((DWORD64)this); }
	void ApplyDamageMomentum(float a1, const FDamageEvent& a2, APawn* a3, AActor* a4) { static_cast<void(_cdecl*)(DWORD64, float, const FDamageEvent&, APawn*, AActor*)>(GetAddress("APrimalDinoCharacter", "ApplyDamageMomentum"))((DWORD64)this, a1, a2, a3, a4); }
	bool IsPrimalDino() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "IsPrimalDino"))((DWORD64)this); }
	bool ShouldIgnoreMoveCombiningOverlap() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ShouldIgnoreMoveCombiningOverlap"))((DWORD64)this); }
	void SetSleeping(bool a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, bool, bool)>(GetAddress("APrimalDinoCharacter", "SetSleeping"))((DWORD64)this, a1, a2); }
	bool Die(float a1, const FDamageEvent& a2, AController* a3, AActor* a4) { return static_cast<bool(_cdecl*)(DWORD64, float, const FDamageEvent&, AController*, AActor*)>(GetAddress("APrimalDinoCharacter", "Die"))((DWORD64)this, a1, a2, a3, a4); }
	bool UseHighQualityMovement() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "UseHighQualityMovement"))((DWORD64)this); }
	bool AllowPenetrationCheck(AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "AllowPenetrationCheck"))((DWORD64)this, a1); }
	void InitDownloadedTamedDino(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalDinoCharacter", "InitDownloadedTamedDino"))((DWORD64)this, a1); }
	void ApplyRidingAttackExtraVelocity() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ApplyRidingAttackExtraVelocity"))((DWORD64)this); }
	void LoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "LoadedFromSaveGame"))((DWORD64)this); }
	float GetCorpseTargetingMultiplier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetCorpseTargetingMultiplier"))((DWORD64)this); }
	void UpdateStatusComponent(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "UpdateStatusComponent"))((DWORD64)this, a1); }
	void TamedDinoUnstasisConsumeFood() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "TamedDinoUnstasisConsumeFood"))((DWORD64)this); }
	void ForceClearRider() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ForceClearRider"))((DWORD64)this); }
	void DinoKillerTransferItemsToInventory(UPrimalInventoryComponent* a1) { static_cast<void(_cdecl*)(DWORD64, UPrimalInventoryComponent*)>(GetAddress("APrimalDinoCharacter", "DinoKillerTransferItemsToInventory"))((DWORD64)this, a1); }
	void DoCalcCapsuleHalfHeight() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "DoCalcCapsuleHalfHeight"))((DWORD64)this); }
	bool UsePlayerControlCollisionIK() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "UsePlayerControlCollisionIK"))((DWORD64)this); }
	bool AllowWalkableSlopeOverride() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AllowWalkableSlopeOverride"))((DWORD64)this); }
	void ServerUploadCharacter(AShooterPlayerController* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterPlayerController*)>(GetAddress("APrimalDinoCharacter", "ServerUploadCharacter"))((DWORD64)this, a1); }
	//APrimalDinoCharacter* SpawnDino(UWorld* a1, TSubclassOf<APrimalDinoCharacter> a2, FVector a3, FRotator a4, float a5, int a6, bool a7, bool a8, int a9, bool a10, float a11, int a12) { return static_cast<APrimalDinoCharacter*(_cdecl*)(DWORD64, UWorld*, TSubclassOf<APrimalDinoCharacter>, FVector, FRotator, float, int, bool, bool, int, bool, float, int)>(GetAddress("APrimalDinoCharacter", "SpawnDino"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); }
	bool RemoveInventoryAllowViewing(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APrimalDinoCharacter", "RemoveInventoryAllowViewing"))((DWORD64)this, a1); }
	bool ForceAllowBackwardsMovement() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ForceAllowBackwardsMovement"))((DWORD64)this); }
	bool CanDragCharacter(APrimalCharacter* a1) { return static_cast<bool(_cdecl*)(DWORD64, APrimalCharacter*)>(GetAddress("APrimalDinoCharacter", "CanDragCharacter"))((DWORD64)this, a1); }
	void AutoDrag() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AutoDrag"))((DWORD64)this); }
	bool IsTaming() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "IsTaming"))((DWORD64)this); }
	void UpdateWakingTame(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "UpdateWakingTame"))((DWORD64)this, a1); }
	void StartRepair() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "StartRepair"))((DWORD64)this); }
	void RepairCheckTimer() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "RepairCheckTimer"))((DWORD64)this); }
	void BPDoHarvestAttack(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("APrimalDinoCharacter", "BPDoHarvestAttack"))((DWORD64)this, a1); }
	void UnclaimDino(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "UnclaimDino"))((DWORD64)this, a1); }
	void EmitPoop() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "EmitPoop"))((DWORD64)this); }
	void CheckForWildAmbientHarvesting() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "CheckForWildAmbientHarvesting"))((DWORD64)this); }
	void Poop() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "Poop"))((DWORD64)this); }
	void OnRep_Saddle() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnRep_Saddle"))((DWORD64)this); }
	void OverrideRandomWanderLocation(const FVector& a1, FVector& a2) { static_cast<void(_cdecl*)(DWORD64, const FVector&, FVector&)>(GetAddress("APrimalDinoCharacter", "OverrideRandomWanderLocation"))((DWORD64)this, a1, a2); }
	bool AllowEquippingItemType(EPrimalEquipmentType a1) { return static_cast<bool(_cdecl*)(DWORD64, EPrimalEquipmentType)>(GetAddress("APrimalDinoCharacter", "AllowEquippingItemType"))((DWORD64)this, a1); }
	void OnPressProne() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnPressProne"))((DWORD64)this); }
	void OnPressReload() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnPressReload"))((DWORD64)this); }
	void OnPressCrouch() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OnPressCrouch"))((DWORD64)this); }
	void NotifyBumpedPawn(APawn* a1) { static_cast<void(_cdecl*)(DWORD64, APawn*)>(GetAddress("APrimalDinoCharacter", "NotifyBumpedPawn"))((DWORD64)this, a1); }
	void NotifyBumpedStructure(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "NotifyBumpedStructure"))((DWORD64)this, a1); }
	void AddFlyerTakeOffImpulse() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AddFlyerTakeOffImpulse"))((DWORD64)this); }
	void DoDeathHarvestingFadeOut() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "DoDeathHarvestingFadeOut"))((DWORD64)this); }
	void DidLand() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "DidLand"))((DWORD64)this); }
	void StartForceSkelUpdate(float a1, bool a2, bool a3) { static_cast<void(_cdecl*)(DWORD64, float, bool, bool)>(GetAddress("APrimalDinoCharacter", "StartForceSkelUpdate"))((DWORD64)this, a1, a2, a3); }
	double GetForceClaimTime() { return static_cast<double(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetForceClaimTime"))((DWORD64)this); }
	bool IsNearFeed(AShooterPlayerState* a1) { return static_cast<bool(_cdecl*)(DWORD64, AShooterPlayerState*)>(GetAddress("APrimalDinoCharacter", "IsNearFeed"))((DWORD64)this, a1); }
	void PlayChargingAnim() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "PlayChargingAnim"))((DWORD64)this); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "CheckAndHandleBasedPlayersBeingPushedThroughWalls"))((DWORD64)this); }
	void ForceRefreshTransform() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ForceRefreshTransform"))((DWORD64)this); }
	bool InitializeForReplicatedBasing() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "InitializeForReplicatedBasing"))((DWORD64)this); }
	void RemoveBasedPawn(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "RemoveBasedPawn"))((DWORD64)this, a1); }
	void AddBasedPawn(AActor* a1) { static_cast<void(_cdecl*)(DWORD64, AActor*)>(GetAddress("APrimalDinoCharacter", "AddBasedPawn"))((DWORD64)this, a1); }
	bool AllowMovementMode(EMovementMode a1, unsigned char a2) { return static_cast<bool(_cdecl*)(DWORD64, EMovementMode, unsigned char)>(GetAddress("APrimalDinoCharacter", "AllowMovementMode"))((DWORD64)this, a1, a2); }
	void SetupTamed(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "SetupTamed"))((DWORD64)this, a1); }
	void SetBabyAge(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "SetBabyAge"))((DWORD64)this, a1); }
	void ApplyBoneModifiers(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "ApplyBoneModifiers"))((DWORD64)this, a1); }
	void ApplyGestationBoneModifiers() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ApplyGestationBoneModifiers"))((DWORD64)this); }
	float GetAttachedSoundPitchMultiplier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetAttachedSoundPitchMultiplier"))((DWORD64)this); }
	float GetAttachedSoundVolumeMultiplier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetAttachedSoundVolumeMultiplier"))((DWORD64)this); }
	bool AllowPushOthers() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AllowPushOthers"))((DWORD64)this); }
	float GetBaseDragWeight() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetBaseDragWeight"))((DWORD64)this); }
	void UpdateMating() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "UpdateMating"))((DWORD64)this); }
	void ServerUpdateBabyAge() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerUpdateBabyAge"))((DWORD64)this); }
	float GetXPMultiplier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetXPMultiplier"))((DWORD64)this); }
	float GetHealthPercentage() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetHealthPercentage"))((DWORD64)this); }
	void DoMate(APrimalDinoCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, APrimalDinoCharacter*)>(GetAddress("APrimalDinoCharacter", "DoMate"))((DWORD64)this, a1); }
	//ADroppedItem* CreateCloneFertilizedEgg(FVector a1, FRotator a2) { return static_cast<ADroppedItem*(_cdecl*)(DWORD64, FVector, FRotator)>(GetAddress("APrimalDinoCharacter", "CreateCloneFertilizedEgg"))((DWORD64)this, a1, a2); }
	//APrimalDinoCharacter* StaticCreateBabyDino(UWorld* a1, TSubclassOf<APrimalDinoCharacter> a2, const FVector& a3, float a4, unsigned char* a5, unsigned char* a6, float a7, int a8, TArray<FDinoAncestorsEntry, FDefaultAllocator>* a9, TArray<FDinoAncestorsEntry, FDefaultAllocator>* a10, int a11, int a12) { return static_cast<APrimalDinoCharacter*(_cdecl*)(DWORD64, UWorld*, TSubclassOf<APrimalDinoCharacter>, const FVector&, float, unsigned char*, unsigned char*, float, int, TArray<FDinoAncestorsEntry, FDefaultAllocator>*, TArray<FDinoAncestorsEntry, FDefaultAllocator>*, int, int)>(GetAddress("APrimalDinoCharacter", "StaticCreateBabyDino"))((DWORD64)this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); }
	void ServerUpdateGestation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ServerUpdateGestation"))((DWORD64)this); }
	float BlueprintGetAttackWeight(int a1, float a2, float a3, float a4, AActor* a5) { return static_cast<float(_cdecl*)(DWORD64, int, float, float, float, AActor*)>(GetAddress("APrimalDinoCharacter", "BlueprintGetAttackWeight"))((DWORD64)this, a1, a2, a3, a4, a5); }
	void UpdateGang() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "UpdateGang"))((DWORD64)this); }
	bool BlueprintOverrideWantsToRun(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("APrimalDinoCharacter", "BlueprintOverrideWantsToRun"))((DWORD64)this, a1); }
	float GetGravityZScale() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetGravityZScale"))((DWORD64)this); }
	bool ForceAllowAccelerationRotationWhenFalling() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ForceAllowAccelerationRotationWhenFalling"))((DWORD64)this); }
	bool ShouldDisableControllerDesiredRotation() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ShouldDisableControllerDesiredRotation"))((DWORD64)this); }
	bool AllowExtendedCraftingFunctionality() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "AllowExtendedCraftingFunctionality"))((DWORD64)this); }
	float GetSpeedModifier() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GetSpeedModifier"))((DWORD64)this); }
	void UpdateTribeGroupRanks(unsigned char a1, unsigned char a2) { static_cast<void(_cdecl*)(DWORD64, unsigned char, unsigned char)>(GetAddress("APrimalDinoCharacter", "UpdateTribeGroupRanks"))((DWORD64)this, a1, a2); }
	void WasPushed(ACharacter* a1) { static_cast<void(_cdecl*)(DWORD64, ACharacter*)>(GetAddress("APrimalDinoCharacter", "WasPushed"))((DWORD64)this, a1); }
	void UpdateImprintingDetails(const FString& a1, unsigned __int64 a2) { static_cast<void(_cdecl*)(DWORD64, const FString&, unsigned __int64)>(GetAddress("APrimalDinoCharacter", "UpdateImprintingDetails"))((DWORD64)this, a1, a2); }
	void UpdateImprintingQuality(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("APrimalDinoCharacter", "UpdateImprintingQuality"))((DWORD64)this, a1); }
	void IncrementImprintingQuality() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "IncrementImprintingQuality"))((DWORD64)this); }
	bool AllowWakingTame(APlayerController* a1) { return static_cast<bool(_cdecl*)(DWORD64, APlayerController*)>(GetAddress("APrimalDinoCharacter", "AllowWakingTame"))((DWORD64)this, a1); }
	bool IsVehicle() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "IsVehicle"))((DWORD64)this); }
	void PostNetReceiveLocationAndRotation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "PostNetReceiveLocationAndRotation"))((DWORD64)this); }
	void ResetTakingOff() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "ResetTakingOff"))((DWORD64)this); }
	void StartSurfaceCameraForPassengers(float a1, float a2, float a3) { static_cast<void(_cdecl*)(DWORD64, float, float, float)>(GetAddress("APrimalDinoCharacter", "StartSurfaceCameraForPassengers"))((DWORD64)this, a1, a2, a3); }
	bool AllowMountedWeaponry(bool a1, bool a2) { return static_cast<bool(_cdecl*)(DWORD64, bool, bool)>(GetAddress("APrimalDinoCharacter", "AllowMountedWeaponry"))((DWORD64)this, a1, a2); }
	void ModifyDesiredRotation(FRotator& a1) { static_cast<void(_cdecl*)(DWORD64, FRotator&)>(GetAddress("APrimalDinoCharacter", "ModifyDesiredRotation"))((DWORD64)this, a1); }
	void GiveDeathDossier() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "GiveDeathDossier"))((DWORD64)this); }
	void BPModifyHarvestingWeightsArray(const TArray<float, FDefaultAllocator>& a1, const TArray<UPrimalItem *, FDefaultAllocator>& a2, TArray<float, FDefaultAllocator>& a3) { static_cast<void(_cdecl*)(DWORD64, const TArray<float, FDefaultAllocator>&, const TArray<UPrimalItem *, FDefaultAllocator>&, TArray<float, FDefaultAllocator>&)>(GetAddress("APrimalDinoCharacter", "BPModifyHarvestingWeightsArray"))((DWORD64)this, a1, a2, a3); }
	bool OverrideForcePreventExitingWater() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("APrimalDinoCharacter", "OverrideForcePreventExitingWater"))((DWORD64)this); }
};

// Weapon

struct AShooterWeapon : AActor
{
	void SetEquipTime(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "EquipTime") = a0; };
	float GetEquipTime() const { return *(float*)GetAddress(this, "AShooterWeapon", "EquipTime"); };
	void SetItemDurabilityToConsumePerMeleeHit(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "ItemDurabilityToConsumePerMeleeHit") = a0; };
	float GetItemDurabilityToConsumePerMeleeHit() const { return *(float*)GetAddress(this, "AShooterWeapon", "ItemDurabilityToConsumePerMeleeHit"); };
	void SetAmmoIconsCount(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "AmmoIconsCount") = a0; };
	float GetAmmoIconsCount() const { return *(float*)GetAddress(this, "AShooterWeapon", "AmmoIconsCount"); };
	void SetPrimaryClipIconOffset(int a0) { *(int*)GetAddress(this, "AShooterWeapon", "PrimaryClipIconOffset") = a0; };
	int GetPrimaryClipIconOffset() const { return *(int*)GetAddress(this, "AShooterWeapon", "PrimaryClipIconOffset"); };
	void SetSecondaryClipIconOffset(int a0) { *(int*)GetAddress(this, "AShooterWeapon", "SecondaryClipIconOffset") = a0; };
	int GetSecondaryClipIconOffset() const { return *(int*)GetAddress(this, "AShooterWeapon", "SecondaryClipIconOffset"); };
	void SetTargetingInfoTooltipPadding(FVector2D a0) { *(FVector2D*)GetAddress(this, "AShooterWeapon", "TargetingInfoTooltipPadding") = a0; };
	FVector2D GetTargetingInfoTooltipPadding() const { return *(FVector2D*)GetAddress(this, "AShooterWeapon", "TargetingInfoTooltipPadding"); };
	void SetTargetingInfoTooltipScale(FVector2D a0) { *(FVector2D*)GetAddress(this, "AShooterWeapon", "TargetingInfoTooltipScale") = a0; };
	FVector2D GetTargetingInfoTooltipScale() const { return *(FVector2D*)GetAddress(this, "AShooterWeapon", "TargetingInfoTooltipScale"); };
	void SetbDisableShooterOnElectricStorm(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bDisableShooterOnElectricStorm") = a0; };
	bool GetbDisableShooterOnElectricStorm() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bDisableShooterOnElectricStorm"); };
	void SetOverrideAttachPoint(FName a0) { *(FName*)GetAddress(this, "AShooterWeapon", "OverrideAttachPoint") = a0; };
	FName GetOverrideAttachPoint() const { return *(FName*)GetAddress(this, "AShooterWeapon", "OverrideAttachPoint"); };
	void SetFPVRelativeLocation(FVector a0) { *(FVector*)GetAddress(this, "AShooterWeapon", "FPVRelativeLocation") = a0; };
	FVector GetFPVRelativeLocation() const { return *(FVector*)GetAddress(this, "AShooterWeapon", "FPVRelativeLocation"); };
	void SetFPVRelativeRotation(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVRelativeRotation") = a0; };
	FRotator GetFPVRelativeRotation() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVRelativeRotation"); };
	void SetFPVRelativeLocation_Targeting(FVector a0) { *(FVector*)GetAddress(this, "AShooterWeapon", "FPVRelativeLocation_Targeting") = a0; };
	FVector GetFPVRelativeLocation_Targeting() const { return *(FVector*)GetAddress(this, "AShooterWeapon", "FPVRelativeLocation_Targeting"); };
	void SetFPVRelativeRotation_Targeting(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVRelativeRotation_Targeting") = a0; };
	FRotator GetFPVRelativeRotation_Targeting() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVRelativeRotation_Targeting"); };
	void SetFPVEnterTargetingInterpSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVEnterTargetingInterpSpeed") = a0; };
	float GetFPVEnterTargetingInterpSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVEnterTargetingInterpSpeed"); };
	void SetFPVExitTargetingInterpSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVExitTargetingInterpSpeed") = a0; };
	float GetFPVExitTargetingInterpSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVExitTargetingInterpSpeed"); };
	void SetFPVLookAtMaximumOffset(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtMaximumOffset") = a0; };
	FRotator GetFPVLookAtMaximumOffset() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtMaximumOffset"); };
	void SetFPVLookAtSpeedBase(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtSpeedBase") = a0; };
	FRotator GetFPVLookAtSpeedBase() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtSpeedBase"); };
	void SetFPVLookAtInterpSpeed(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtInterpSpeed") = a0; };
	FRotator GetFPVLookAtInterpSpeed() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtInterpSpeed"); };
	void SetFPVLookAtMaximumOffset_Targeting(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtMaximumOffset_Targeting") = a0; };
	FRotator GetFPVLookAtMaximumOffset_Targeting() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtMaximumOffset_Targeting"); };
	void SetFPVLookAtSpeedBase_Targeting(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtSpeedBase_Targeting") = a0; };
	FRotator GetFPVLookAtSpeedBase_Targeting() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtSpeedBase_Targeting"); };
	void SetFPVLookAtInterpSpeed_Targeting(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtInterpSpeed_Targeting") = a0; };
	FRotator GetFPVLookAtInterpSpeed_Targeting() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLookAtInterpSpeed_Targeting"); };
	void SetbUseBlueprintAnimNotifications(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bUseBlueprintAnimNotifications") = a0; };
	bool GetbUseBlueprintAnimNotifications() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bUseBlueprintAnimNotifications"); };
	void SetMeleeSwingSockets(TArray<FName, FDefaultAllocator> a0) { *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "AShooterWeapon", "MeleeSwingSockets") = a0; };
	TArray<FName, FDefaultAllocator> GetMeleeSwingSockets() const { return *(TArray<FName, FDefaultAllocator>*)GetAddress(this, "AShooterWeapon", "MeleeSwingSockets"); };
	void SetAllowMeleeTimeBeforeAnimationEnd(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "AllowMeleeTimeBeforeAnimationEnd") = a0; };
	float GetAllowMeleeTimeBeforeAnimationEnd() const { return *(float*)GetAddress(this, "AShooterWeapon", "AllowMeleeTimeBeforeAnimationEnd"); };
	void SetAssociatedPrimalItem(UPrimalItem* a0) { *(UPrimalItem**)GetAddress(this, "AShooterWeapon", "AssociatedPrimalItem") = a0; };
	UPrimalItem* GetAssociatedPrimalItem() const { return *(UPrimalItem**)GetAddress(this, "AShooterWeapon", "AssociatedPrimalItem"); };
	void SetbCanBeUsedAsEquipment(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bCanBeUsedAsEquipment") = a0; };
	bool GetbCanBeUsedAsEquipment() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bCanBeUsedAsEquipment"); };
	void SetAssociatedItemNetInfo(FItemNetInfo a0) { *(FItemNetInfo*)GetAddress(this, "AShooterWeapon", "AssociatedItemNetInfo") = a0; };
	FItemNetInfo GetAssociatedItemNetInfo() const { return *(FItemNetInfo*)GetAddress(this, "AShooterWeapon", "AssociatedItemNetInfo"); };
	//void SetWeaponConfig(FWeaponData a0) { *(FWeaponData*)GetAddress(this, "AShooterWeapon", "WeaponConfig") = a0; };
	//FWeaponData GetWeaponConfig() const { return *(FWeaponData*)GetAddress(this, "AShooterWeapon", "WeaponConfig"); };
	void SetNextAllowedMeleeTime(double a0) { *(double*)GetAddress(this, "AShooterWeapon", "NextAllowedMeleeTime") = a0; };
	double GetNextAllowedMeleeTime() const { return *(double*)GetAddress(this, "AShooterWeapon", "NextAllowedMeleeTime"); };
	void SetLastSocketPositions(TArray<FVector, FDefaultAllocator> a0) { *(TArray<FVector, FDefaultAllocator>*)GetAddress(this, "AShooterWeapon", "LastSocketPositions") = a0; };
	TArray<FVector, FDefaultAllocator> GetLastSocketPositions() const { return *(TArray<FVector, FDefaultAllocator>*)GetAddress(this, "AShooterWeapon", "LastSocketPositions"); };
	TArray<AWeakObjectPtr<AActor>, FDefaultAllocator> GetMeleeSwingHurtList() const { return *(TArray<AWeakObjectPtr<AActor>, FDefaultAllocator>*)GetAddress(this, "AShooterWeapon", "MeleeSwingHurtList"); };
	void SetLastFPVRenderTime(double a0) { *(double*)GetAddress(this, "AShooterWeapon", "LastFPVRenderTime") = a0; };
	double GetLastFPVRenderTime() const { return *(double*)GetAddress(this, "AShooterWeapon", "LastFPVRenderTime"); };
	void SetLastCameraRotation(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "LastCameraRotation") = a0; };
	FRotator GetLastCameraRotation() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "LastCameraRotation"); };
	void SetFPVAdditionalLookRotOffset(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVAdditionalLookRotOffset") = a0; };
	FRotator GetFPVAdditionalLookRotOffset() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVAdditionalLookRotOffset"); };
	void SetFPVLastLocOffset(FVector a0) { *(FVector*)GetAddress(this, "AShooterWeapon", "FPVLastLocOffset") = a0; };
	FVector GetFPVLastLocOffset() const { return *(FVector*)GetAddress(this, "AShooterWeapon", "FPVLastLocOffset"); };
	void SetFPVLastVROffset(FVector a0) { *(FVector*)GetAddress(this, "AShooterWeapon", "FPVLastVROffset") = a0; };
	FVector GetFPVLastVROffset() const { return *(FVector*)GetAddress(this, "AShooterWeapon", "FPVLastVROffset"); };
	void SetFPVRelativeLocationOffscreenOffset(FVector a0) { *(FVector*)GetAddress(this, "AShooterWeapon", "FPVRelativeLocationOffscreenOffset") = a0; };
	FVector GetFPVRelativeLocationOffscreenOffset() const { return *(FVector*)GetAddress(this, "AShooterWeapon", "FPVRelativeLocationOffscreenOffset"); };
	void SetFPVLastRotOffset(FRotator a0) { *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLastRotOffset") = a0; };
	FRotator GetFPVLastRotOffset() const { return *(FRotator*)GetAddress(this, "AShooterWeapon", "FPVLastRotOffset"); };
	void SetMyPawn(AShooterCharacter* a0) { *(AShooterCharacter**)GetAddress(this, "AShooterWeapon", "MyPawn") = a0; };
	AShooterCharacter* GetMyPawn() const { return *(AShooterCharacter**)GetAddress(this, "AShooterWeapon", "MyPawn"); };
	void SetMeleeDamageAmount(int a0) { *(int*)GetAddress(this, "AShooterWeapon", "MeleeDamageAmount") = a0; };
	int GetMeleeDamageAmount() const { return *(int*)GetAddress(this, "AShooterWeapon", "MeleeDamageAmount"); };
	void SetTheMeleeSwingRadius(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "TheMeleeSwingRadius") = a0; };
	float GetTheMeleeSwingRadius() const { return *(float*)GetAddress(this, "AShooterWeapon", "TheMeleeSwingRadius"); };
	void SetMeleeDamageImpulse(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "MeleeDamageImpulse") = a0; };
	float GetMeleeDamageImpulse() const { return *(float*)GetAddress(this, "AShooterWeapon", "MeleeDamageImpulse"); };
	void SetFPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed") = a0; };
	float GetFPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed"); };
	void SetFPVMoveOffscreenWhenTurningMinMoveWeaponSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed") = a0; };
	float GetFPVMoveOffscreenWhenTurningMinMoveWeaponSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed"); };
	void SetFPVMoveOffscreenWhenTurningMinViewRotSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinViewRotSpeed") = a0; };
	float GetFPVMoveOffscreenWhenTurningMinViewRotSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMinViewRotSpeed"); };
	void SetFPVMoveOffscreenWhenTurningMaxViewRotSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxViewRotSpeed") = a0; };
	float GetFPVMoveOffscreenWhenTurningMaxViewRotSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxViewRotSpeed"); };
	void SetFPVMoveOffscreenIdleRestoreInterval(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreInterval") = a0; };
	float GetFPVMoveOffscreenIdleRestoreInterval() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreInterval"); };
	void SetFPVMoveOffscreenIdleRestoreSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreSpeed") = a0; };
	float GetFPVMoveOffscreenIdleRestoreSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenIdleRestoreSpeed"); };
	void SetFPVMoveOffscreenWhenTurningMaxOffset(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxOffset") = a0; };
	float GetFPVMoveOffscreenWhenTurningMaxOffset() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMoveOffscreenWhenTurningMaxOffset"); };
	void SetFPVStoppedTurningTime(double a0) { *(double*)GetAddress(this, "AShooterWeapon", "FPVStoppedTurningTime") = a0; };
	double GetFPVStoppedTurningTime() const { return *(double*)GetAddress(this, "AShooterWeapon", "FPVStoppedTurningTime"); };
	//void SetCurrentState(EWeaponState::Type a0) { *(EWeaponState::Type*)GetAddress(this, "AShooterWeapon", "CurrentState") = a0; };
	//EWeaponState::Type GetCurrentState() const { return *(EWeaponState::Type*)GetAddress(this, "AShooterWeapon", "CurrentState"); };
	void SetLastFireTime(double a0) { *(double*)GetAddress(this, "AShooterWeapon", "LastFireTime") = a0; };
	double GetLastFireTime() const { return *(double*)GetAddress(this, "AShooterWeapon", "LastFireTime"); };
	void SetCurrentAmmo(int a0) { *(int*)GetAddress(this, "AShooterWeapon", "CurrentAmmo") = a0; };
	int GetCurrentAmmo() const { return *(int*)GetAddress(this, "AShooterWeapon", "CurrentAmmo"); };
	void SetCurrentAmmoInClip(int a0) { *(int*)GetAddress(this, "AShooterWeapon", "CurrentAmmoInClip") = a0; };
	int GetCurrentAmmoInClip() const { return *(int*)GetAddress(this, "AShooterWeapon", "CurrentAmmoInClip"); };
	void SetbReplicateCurrentAmmoInClipToNonOwners(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bReplicateCurrentAmmoInClipToNonOwners") = a0; };
	bool GetbReplicateCurrentAmmoInClipToNonOwners() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bReplicateCurrentAmmoInClipToNonOwners"); };
	void SetFPVAccessoryToggleComponent(FName a0) { *(FName*)GetAddress(this, "AShooterWeapon", "FPVAccessoryToggleComponent") = a0; };
	FName GetFPVAccessoryToggleComponent() const { return *(FName*)GetAddress(this, "AShooterWeapon", "FPVAccessoryToggleComponent"); };
	void SetTPVAccessoryToggleComponent(FName a0) { *(FName*)GetAddress(this, "AShooterWeapon", "TPVAccessoryToggleComponent") = a0; };
	FName GetTPVAccessoryToggleComponent() const { return *(FName*)GetAddress(this, "AShooterWeapon", "TPVAccessoryToggleComponent"); };
	void SetTimeToAutoReload(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "TimeToAutoReload") = a0; };
	float GetTimeToAutoReload() const { return *(float*)GetAddress(this, "AShooterWeapon", "TimeToAutoReload"); };
	void SetFiredLastNoAmmoShot(int a0) { *(int*)GetAddress(this, "AShooterWeapon", "FiredLastNoAmmoShot") = a0; };
	int GetFiredLastNoAmmoShot() const { return *(int*)GetAddress(this, "AShooterWeapon", "FiredLastNoAmmoShot"); };
	void SetLastNotifyShotTime(double a0) { *(double*)GetAddress(this, "AShooterWeapon", "LastNotifyShotTime") = a0; };
	double GetLastNotifyShotTime() const { return *(double*)GetAddress(this, "AShooterWeapon", "LastNotifyShotTime"); };
	void SetVRTargetingModelOffset(FVector a0) { *(FVector*)GetAddress(this, "AShooterWeapon", "VRTargetingModelOffset") = a0; };
	FVector GetVRTargetingModelOffset() const { return *(FVector*)GetAddress(this, "AShooterWeapon", "VRTargetingModelOffset"); };
	void SetVRTargetingAimOriginOffset(FVector a0) { *(FVector*)GetAddress(this, "AShooterWeapon", "VRTargetingAimOriginOffset") = a0; };
	FVector GetVRTargetingAimOriginOffset() const { return *(FVector*)GetAddress(this, "AShooterWeapon", "VRTargetingAimOriginOffset"); };
	void SetScopeCrosshairSize(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "ScopeCrosshairSize") = a0; };
	float GetScopeCrosshairSize() const { return *(float*)GetAddress(this, "AShooterWeapon", "ScopeCrosshairSize"); };
	void SetScopeCrosshairColorParameter(FName a0) { *(FName*)GetAddress(this, "AShooterWeapon", "ScopeCrosshairColorParameter") = a0; };
	FName GetScopeCrosshairColorParameter() const { return *(FName*)GetAddress(this, "AShooterWeapon", "ScopeCrosshairColorParameter"); };
	void SetMinItemDurabilityPercentageForShot(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "MinItemDurabilityPercentageForShot") = a0; };
	float GetMinItemDurabilityPercentageForShot() const { return *(float*)GetAddress(this, "AShooterWeapon", "MinItemDurabilityPercentageForShot"); };
	void SetOverrideTargetingFOV(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "OverrideTargetingFOV") = a0; };
	float GetOverrideTargetingFOV() const { return *(float*)GetAddress(this, "AShooterWeapon", "OverrideTargetingFOV"); };
	void SetTargetingDelayTime(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "TargetingDelayTime") = a0; };
	float GetTargetingDelayTime() const { return *(float*)GetAddress(this, "AShooterWeapon", "TargetingDelayTime"); };
	void SetTargetingFOVInterpSpeed(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "TargetingFOVInterpSpeed") = a0; };
	float GetTargetingFOVInterpSpeed() const { return *(float*)GetAddress(this, "AShooterWeapon", "TargetingFOVInterpSpeed"); };
	void SetAimDriftYawAngle(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "AimDriftYawAngle") = a0; };
	float GetAimDriftYawAngle() const { return *(float*)GetAddress(this, "AShooterWeapon", "AimDriftYawAngle"); };
	void SetAimDriftPitchAngle(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "AimDriftPitchAngle") = a0; };
	float GetAimDriftPitchAngle() const { return *(float*)GetAddress(this, "AShooterWeapon", "AimDriftPitchAngle"); };
	void SetAimDriftYawFrequency(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "AimDriftYawFrequency") = a0; };
	float GetAimDriftYawFrequency() const { return *(float*)GetAddress(this, "AShooterWeapon", "AimDriftYawFrequency"); };
	void SetAimDriftPitchFrequency(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "AimDriftPitchFrequency") = a0; };
	float GetAimDriftPitchFrequency() const { return *(float*)GetAddress(this, "AShooterWeapon", "AimDriftPitchFrequency"); };
	void SetMeleeHitRandomChanceToDestroyItem(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "MeleeHitRandomChanceToDestroyItem") = a0; };
	float GetMeleeHitRandomChanceToDestroyItem() const { return *(float*)GetAddress(this, "AShooterWeapon", "MeleeHitRandomChanceToDestroyItem"); };
	void SetGlobalFireCameraShakeScale(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "GlobalFireCameraShakeScale") = a0; };
	float GetGlobalFireCameraShakeScale() const { return *(float*)GetAddress(this, "AShooterWeapon", "GlobalFireCameraShakeScale"); };
	void SetDurabilityCostToEquip(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "DurabilityCostToEquip") = a0; };
	float GetDurabilityCostToEquip() const { return *(float*)GetAddress(this, "AShooterWeapon", "DurabilityCostToEquip"); };
	void SetPassiveDurabilityCostPerInterval(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "PassiveDurabilityCostPerInterval") = a0; };
	float GetPassiveDurabilityCostPerInterval() const { return *(float*)GetAddress(this, "AShooterWeapon", "PassiveDurabilityCostPerInterval"); };
	void SetPassiveDurabilityCostInterval(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "PassiveDurabilityCostInterval") = a0; };
	float GetPassiveDurabilityCostInterval() const { return *(float*)GetAddress(this, "AShooterWeapon", "PassiveDurabilityCostInterval"); };
	void SetGlobalFireCameraShakeScaleTargeting(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "GlobalFireCameraShakeScaleTargeting") = a0; };
	float GetGlobalFireCameraShakeScaleTargeting() const { return *(float*)GetAddress(this, "AShooterWeapon", "GlobalFireCameraShakeScaleTargeting"); };
	void SetMeleeCameraShakeSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "MeleeCameraShakeSpeedScale") = a0; };
	float GetMeleeCameraShakeSpeedScale() const { return *(float*)GetAddress(this, "AShooterWeapon", "MeleeCameraShakeSpeedScale"); };
	void SetReloadCameraShakeSpeedScale(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "ReloadCameraShakeSpeedScale") = a0; };
	float GetReloadCameraShakeSpeedScale() const { return *(float*)GetAddress(this, "AShooterWeapon", "ReloadCameraShakeSpeedScale"); };
	void SetMeleeConsumesStamina(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "MeleeConsumesStamina") = a0; };
	float GetMeleeConsumesStamina() const { return *(float*)GetAddress(this, "AShooterWeapon", "MeleeConsumesStamina"); };
	void SetHypoThermiaInsulation(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "HypoThermiaInsulation") = a0; };
	float GetHypoThermiaInsulation() const { return *(float*)GetAddress(this, "AShooterWeapon", "HypoThermiaInsulation"); };
	void SetHyperThermiaInsulation(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "HyperThermiaInsulation") = a0; };
	float GetHyperThermiaInsulation() const { return *(float*)GetAddress(this, "AShooterWeapon", "HyperThermiaInsulation"); };
	void SetInsulationRange(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "InsulationRange") = a0; };
	float GetInsulationRange() const { return *(float*)GetAddress(this, "AShooterWeapon", "InsulationRange"); };
	void SetLastDurabilityConsumptionTime(double a0) { *(double*)GetAddress(this, "AShooterWeapon", "LastDurabilityConsumptionTime") = a0; };
	double GetLastDurabilityConsumptionTime() const { return *(double*)GetAddress(this, "AShooterWeapon", "LastDurabilityConsumptionTime"); };
	void SetbLastMeleeHit(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bLastMeleeHit") = a0; };
	bool GetbLastMeleeHit() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bLastMeleeHit"); };
	void SetbLastMeleeHitStationary(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bLastMeleeHitStationary") = a0; };
	bool GetbLastMeleeHitStationary() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bLastMeleeHitStationary"); };
	void SetbClientAlreadyReloaded(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bClientAlreadyReloaded") = a0; };
	bool GetbClientAlreadyReloaded() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bClientAlreadyReloaded"); };
	void SetAutoReloadTimer(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "AutoReloadTimer") = a0; };
	float GetAutoReloadTimer() const { return *(float*)GetAddress(this, "AShooterWeapon", "AutoReloadTimer"); };
	void SetbConsumedDurabilityForThisMeleeHit(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bConsumedDurabilityForThisMeleeHit") = a0; };
	bool GetbConsumedDurabilityForThisMeleeHit() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bConsumedDurabilityForThisMeleeHit"); };
	void SetFPVMeleeTraceFXRange(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "FPVMeleeTraceFXRange") = a0; };
	float GetFPVMeleeTraceFXRange() const { return *(float*)GetAddress(this, "AShooterWeapon", "FPVMeleeTraceFXRange"); };
	void SetMeleeAttackHarvetUsableComponentsRadius(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "MeleeAttackHarvetUsableComponentsRadius") = a0; };
	float GetMeleeAttackHarvetUsableComponentsRadius() const { return *(float*)GetAddress(this, "AShooterWeapon", "MeleeAttackHarvetUsableComponentsRadius"); };
	void SetMeleeAttackUsableHarvestDamageMultiplier(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "MeleeAttackUsableHarvestDamageMultiplier") = a0; };
	float GetMeleeAttackUsableHarvestDamageMultiplier() const { return *(float*)GetAddress(this, "AShooterWeapon", "MeleeAttackUsableHarvestDamageMultiplier"); };
	//TArray<FAttachedInstancedHarvestingElement *, FDefaultAllocator> GetMeleeSwingHarvestableComponentList() const { return *(TArray<FAttachedInstancedHarvestingElement *, FDefaultAllocator>*)GetAddress(this, "AShooterWeapon", "MeleeSwingHarvestableComponentList"); };
	void SetbPreventOpeningInventory(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bPreventOpeningInventory") = a0; };
	bool GetbPreventOpeningInventory() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bPreventOpeningInventory"); };
	void SetbAllowUseOnSeatingStructure(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bAllowUseOnSeatingStructure") = a0; };
	bool GetbAllowUseOnSeatingStructure() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bAllowUseOnSeatingStructure"); };
	void SetbOnlyUseOnSeatingStructure(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bOnlyUseOnSeatingStructure") = a0; };
	bool GetbOnlyUseOnSeatingStructure() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bOnlyUseOnSeatingStructure"); };
	void SetbBPDoClientCheckCanFire(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bBPDoClientCheckCanFire") = a0; };
	bool GetbBPDoClientCheckCanFire() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bBPDoClientCheckCanFire"); };
	void SetbRestrictTPVCameraYaw(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bRestrictTPVCameraYaw") = a0; };
	bool GetbRestrictTPVCameraYaw() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bRestrictTPVCameraYaw"); };
	void SetTPVCameraYawRange(float a0) { *(float*)GetAddress(this, "AShooterWeapon", "TPVCameraYawRange") = a0; };
	float GetTPVCameraYawRange() const { return *(float*)GetAddress(this, "AShooterWeapon", "TPVCameraYawRange"); };
	void SetbFoceSimulatedTick(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bFoceSimulatedTick") = a0; };
	bool GetbFoceSimulatedTick() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bFoceSimulatedTick"); };
	void SetbWasLastFireFromGamePad(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bWasLastFireFromGamePad") = a0; };
	bool GetbWasLastFireFromGamePad() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bWasLastFireFromGamePad"); };
	void SetbDisableWeaponCrosshair(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bDisableWeaponCrosshair") = a0; };
	bool GetbDisableWeaponCrosshair() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bDisableWeaponCrosshair"); };
	void SetbForceAllowMountedWeaponry(bool a0) { *(bool*)GetAddress(this, "AShooterWeapon", "bForceAllowMountedWeaponry") = a0; };
	bool GetbForceAllowMountedWeaponry() const { return *(bool*)GetAddress(this, "AShooterWeapon", "bForceAllowMountedWeaponry"); };

	// Functions

	void StartFire(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterWeapon", "StartFire"))((DWORD64)this, a1); }
	void StopFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopFire"))((DWORD64)this); }
	void StartAltFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StartAltFire"))((DWORD64)this); }
	void StopAltFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopAltFire"))((DWORD64)this); }
	void StartSecondaryAction() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StartSecondaryAction"))((DWORD64)this); }
	void StopSecondaryAction() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopSecondaryAction"))((DWORD64)this); }
	void ZoomIn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "ZoomIn"))((DWORD64)this); }
	void ZoomOut() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "ZoomOut"))((DWORD64)this); }
	void OnStartTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterWeapon", "OnStartTargeting"))((DWORD64)this, a1); }
	void OnStopTargeting(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterWeapon", "OnStopTargeting"))((DWORD64)this, a1); }
	void ToggleAccessory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "ToggleAccessory"))((DWORD64)this); }
	void RefreshToggleAccessory() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "RefreshToggleAccessory"))((DWORD64)this); }
	void StartReload(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterWeapon", "StartReload"))((DWORD64)this, a1); }
	float PlayReloadAnimation() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "PlayReloadAnimation"))((DWORD64)this); }
	void StopReloadAnimation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopReloadAnimation"))((DWORD64)this); }
	void ReloadWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "ReloadWeapon"))((DWORD64)this); }
	bool CanTarget() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "CanTarget"))((DWORD64)this); }
	bool CanFire(bool a1) { return static_cast<bool(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterWeapon", "CanFire"))((DWORD64)this, a1); }
	bool CanReload() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "CanReload"))((DWORD64)this); }
	bool HasInfiniteAmmo() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "HasInfiniteAmmo"))((DWORD64)this); }
	void SetOwningPawn(AShooterCharacter* a1) { static_cast<void(_cdecl*)(DWORD64, AShooterCharacter*)>(GetAddress("AShooterWeapon", "SetOwningPawn"))((DWORD64)this, a1); }
	void OnCameraUpdate(const FVector& a1, const FRotator& a2, const FVector& a3) { static_cast<void(_cdecl*)(DWORD64, const FVector&, const FRotator&, const FVector&)>(GetAddress("AShooterWeapon", "OnCameraUpdate"))((DWORD64)this, a1, a2, a3); }
	void StartMeleeSwing() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StartMeleeSwing"))((DWORD64)this); }
	void EndMeleeSwing() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "EndMeleeSwing"))((DWORD64)this); }
	void TickMeleeSwing(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterWeapon", "TickMeleeSwing"))((DWORD64)this, a1); }
	bool CanRun() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "CanRun"))((DWORD64)this); }
	void CheckItemAssocation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "CheckItemAssocation"))((DWORD64)this); }
	bool AddToMeleeSwingHurtList(AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, AActor*)>(GetAddress("AShooterWeapon", "AddToMeleeSwingHurtList"))((DWORD64)this, a1); }
	void OnRep_NetLoopedWeaponFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "OnRep_NetLoopedWeaponFire"))((DWORD64)this); }
	void ServerStartFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "ServerStartFire"))((DWORD64)this); }
	void OnRep_CurrentAmmoInClip() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "OnRep_CurrentAmmoInClip"))((DWORD64)this); }
	void SimulateWeaponFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "SimulateWeaponFire"))((DWORD64)this); }
	void StopSimulatingWeaponFire() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopSimulatingWeaponFire"))((DWORD64)this); }
	void StartMuzzleFX() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StartMuzzleFX"))((DWORD64)this); }
	void StopMuzzleFX() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopMuzzleFX"))((DWORD64)this); }
	void ClientStartMuzzleFX() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "ClientStartMuzzleFX"))((DWORD64)this); }
	void PlayFireAnimation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "PlayFireAnimation"))((DWORD64)this); }
	void FireWeapon() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "FireWeapon"))((DWORD64)this); }
	void HandleFiring(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterWeapon", "HandleFiring"))((DWORD64)this, a1); }
	void OnBurstStarted() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "OnBurstStarted"))((DWORD64)this); }
	void OnBurstFinished() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "OnBurstFinished"))((DWORD64)this); }
	void DetermineWeaponState() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "DetermineWeaponState"))((DWORD64)this); }
	void SetAutoReload() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "SetAutoReload"))((DWORD64)this); }
	void AttachMeshToPawn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "AttachMeshToPawn"))((DWORD64)this); }
	void DetachMeshFromPawn() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "DetachMeshFromPawn"))((DWORD64)this); }
	void AttachOtherMeshes() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "AttachOtherMeshes"))((DWORD64)this); }
	void DetachOtherMeshes() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "DetachOtherMeshes"))((DWORD64)this); }
	void PostAttachOtherMeshes() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "PostAttachOtherMeshes"))((DWORD64)this); }
	void StopCameraAnimationFPV() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopCameraAnimationFPV"))((DWORD64)this); }
	FVector* GetAdjustedAim(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("AShooterWeapon", "GetAdjustedAim"))((DWORD64)this, res); }
	FVector* GetCameraDamageStartLocation(FVector* res, const FVector& a1) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*, const FVector&)>(GetAddress("AShooterWeapon", "GetCameraDamageStartLocation"))((DWORD64)this, res, a1); }
	FVector* GetMuzzleLocation(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("AShooterWeapon", "GetMuzzleLocation"))((DWORD64)this, res); }
	FHitResult* WeaponTrace(FHitResult* res, const FVector& a1, const FVector& a2) { return static_cast<FHitResult*(_cdecl*)(DWORD64, FHitResult*, const FVector&, const FVector&)>(GetAddress("AShooterWeapon", "WeaponTrace"))((DWORD64)this, res, a1, a2); }
	bool ShouldDealDamage(AActor* a1) { return static_cast<bool(_cdecl*)(DWORD64, AActor*)>(GetAddress("AShooterWeapon", "ShouldDealDamage"))((DWORD64)this, a1); }
	bool CanMeleeAttack() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "CanMeleeAttack"))((DWORD64)this); }
	void DoMeleeAttack() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "DoMeleeAttack"))((DWORD64)this); }
	void DoHandleFiring() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "DoHandleFiring"))((DWORD64)this); }
	void StartUnequip() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StartUnequip"))((DWORD64)this); }
	void PlayUnequipAnimation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "PlayUnequipAnimation"))((DWORD64)this); }
	bool IsLocallyOwned() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "IsLocallyOwned"))((DWORD64)this); }
	float GetFireCameraShakeScale() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "GetFireCameraShakeScale"))((DWORD64)this); }
	void ApplyPrimalItemSettingsToWeapon(bool a1) { static_cast<void(_cdecl*)(DWORD64, bool)>(GetAddress("AShooterWeapon", "ApplyPrimalItemSettingsToWeapon"))((DWORD64)this, a1); }
	void RefreshAmmoItemQuantity() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "RefreshAmmoItemQuantity"))((DWORD64)this); }
	void ConsumeAmmoItem(int a1) { static_cast<void(_cdecl*)(DWORD64, int)>(GetAddress("AShooterWeapon", "ConsumeAmmoItem"))((DWORD64)this, a1); }
	void CheckForMeleeAttack() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "CheckForMeleeAttack"))((DWORD64)this); }
	void StopCheckForMeleeAttack() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopCheckForMeleeAttack"))((DWORD64)this); }
	void WeaponTraceHits(TArray<FHitResult, FDefaultAllocator>& a1, const FVector& a2, const FVector& a3) { static_cast<void(_cdecl*)(DWORD64, TArray<FHitResult, FDefaultAllocator>&, const FVector&, const FVector&)>(GetAddress("AShooterWeapon", "WeaponTraceHits"))((DWORD64)this, a1, a2, a3); }
	void CosumeMeleeHitDurability(float a1) { static_cast<void(_cdecl*)(DWORD64, float)>(GetAddress("AShooterWeapon", "CosumeMeleeHitDurability"))((DWORD64)this, a1); }
	void LoadedFromSaveGame() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "LoadedFromSaveGame"))((DWORD64)this); }
	void PlayWeaponBreakAnimation() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "PlayWeaponBreakAnimation"))((DWORD64)this); }
	void StopOwnerEffects() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "StopOwnerEffects"))((DWORD64)this); }
	void OwnerDied() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "OwnerDied"))((DWORD64)this); }
	FVector* GetShootingCameraLocation(FVector* res) { return static_cast<FVector*(_cdecl*)(DWORD64, FVector*)>(GetAddress("AShooterWeapon", "GetShootingCameraLocation"))((DWORD64)this, res); }
	bool UseAlternateAimOffsetAnim() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "UseAlternateAimOffsetAnim"))((DWORD64)this); }
	void ClearClientReload() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "ClearClientReload"))((DWORD64)this); }
	bool IsFirstPersonMeshVisible() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "IsFirstPersonMeshVisible"))((DWORD64)this); }
	float GetConsumeDurabilityPerShot() { return static_cast<float(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "GetConsumeDurabilityPerShot"))((DWORD64)this); }
	void ServerSetColorizeRegion(int a1, bool a2) { static_cast<void(_cdecl*)(DWORD64, int, bool)>(GetAddress("AShooterWeapon", "ServerSetColorizeRegion"))((DWORD64)this, a1, a2); }
	bool AllowFiring() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "AllowFiring"))((DWORD64)this); }
	void DoReregisterAllComponents() { static_cast<void(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "DoReregisterAllComponents"))((DWORD64)this); }
	bool BPWeaponCanFire() { return static_cast<bool(_cdecl*)(DWORD64)>(GetAddress("AShooterWeapon", "BPWeaponCanFire"))((DWORD64)this); }
};