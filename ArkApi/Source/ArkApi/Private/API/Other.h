#pragma once

#include "Base.h"

struct FDamageEvent
{
	void SetImpulse(float a0) { *(float*)GetAddress(this, "FDamageEvent", "Impulse") = a0; };
	float GetImpulse() const { return *(float*)GetAddress(this, "FDamageEvent", "Impulse"); };
	void SetOriginalDamage(float a0) { *(float*)GetAddress(this, "FDamageEvent", "OriginalDamage") = a0; };
	float GetOriginalDamage() const { return *(float*)GetAddress(this, "FDamageEvent", "OriginalDamage"); };
	void SetInstanceBodyIndex(int a0) { *(int*)GetAddress(this, "FDamageEvent", "InstanceBodyIndex") = a0; };
	int GetInstanceBodyIndex() const { return *(int*)GetAddress(this, "FDamageEvent", "InstanceBodyIndex"); };

	// Functions

	int GetTypeID() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("FDamageEvent", "GetTypeID"))((DWORD64)this); }
	bool IsOfType(int a1) { return static_cast<bool(_cdecl*)(DWORD64, int)>(GetAddress("FDamageEvent", "IsOfType"))((DWORD64)this, a1); }
	void GetBestHitInfo(const AActor* a1, const AActor* a2, FHitResult& a3, FVector& a4) { static_cast<void(_cdecl*)(DWORD64, const AActor*, const AActor*, FHitResult&, FVector&)>(GetAddress("FDamageEvent", "GetBestHitInfo"))((DWORD64)this, a1, a2, a3, a4); }
};

struct FHitResult
{
	void SetTime(float a0) { *(float*)GetAddress(this, "FHitResult", "Time") = a0; };
	float GetTime() const { return *(float*)GetAddress(this, "FHitResult", "Time"); };
	//FVector_NetQuantize GetLocation() const { return *(FVector_NetQuantize*)GetAddress(this, "FHitResult", "Location"); };
	//FVector_NetQuantizeNormal GetNormal() const { return *(FVector_NetQuantizeNormal*)GetAddress(this, "FHitResult", "Normal"); };
	//FVector_NetQuantize GetImpactPoint() const { return *(FVector_NetQuantize*)GetAddress(this, "FHitResult", "ImpactPoint"); };
	//FVector_NetQuantizeNormal GetImpactNormal() const { return *(FVector_NetQuantizeNormal*)GetAddress(this, "FHitResult", "ImpactNormal"); };
	//FVector_NetQuantize GetTraceStart() const { return *(FVector_NetQuantize*)GetAddress(this, "FHitResult", "TraceStart"); };
	//FVector_NetQuantize GetTraceEnd() const { return *(FVector_NetQuantize*)GetAddress(this, "FHitResult", "TraceEnd"); };
	void SetPenetrationDepth(float a0) { *(float*)GetAddress(this, "FHitResult", "PenetrationDepth") = a0; };
	float GetPenetrationDepth() const { return *(float*)GetAddress(this, "FHitResult", "PenetrationDepth"); };
	void SetItem(int a0) { *(int*)GetAddress(this, "FHitResult", "Item") = a0; };
	int GetItem() const { return *(int*)GetAddress(this, "FHitResult", "Item"); };
	//AWeakObjectPtr<UPhysicalMaterial> GetPhysMaterial() const { return *(AWeakObjectPtr<UPhysicalMaterial>*)GetAddress(this, "FHitResult", "PhysMaterial"); };
	//FBodyInstance* GetBodyInstance() const { return *(FBodyInstance**)GetAddress(this, "FHitResult", "BodyInstance"); };
	void SetBoneName(FName a0) { *(FName*)GetAddress(this, "FHitResult", "BoneName") = a0; };
	FName GetBoneName() const { return *(FName*)GetAddress(this, "FHitResult", "BoneName"); };
	void SetFaceIndex(int a0) { *(int*)GetAddress(this, "FHitResult", "FaceIndex") = a0; };
	int GetFaceIndex() const { return *(int*)GetAddress(this, "FHitResult", "FaceIndex"); };

	// Functions

	AActor* GetActor() { return static_cast<AActor*(_cdecl*)(DWORD64)>(GetAddress("FHitResult", "GetActor"))((DWORD64)this); }
};
