#pragma once

#include "Base.h"

struct FTribeData
{
	void SetTribeName(FString a0) { *(FString*)GetAddress(this, "FTribeData", "TribeName") = a0; };
	FString GetTribeName() const { return *(FString*)GetAddress(this, "FTribeData", "TribeName"); };
	void SetOwnerPlayerDataID(unsigned int a0) { *(unsigned int*)GetAddress(this, "FTribeData", "OwnerPlayerDataID") = a0; };
	unsigned int GetOwnerPlayerDataID() const { return *(unsigned int*)GetAddress(this, "FTribeData", "OwnerPlayerDataID"); };
	void SetTribeID(int a0) { *(int*)GetAddress(this, "FTribeData", "TribeID") = a0; };
	int GetTribeID() const { return *(int*)GetAddress(this, "FTribeData", "TribeID"); };
	void SetMembersPlayerName(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersPlayerName") = a0; };
	TArray<FString, FDefaultAllocator> GetMembersPlayerName() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersPlayerName"); };
	void SetMembersPlayerDataID(TArray<unsigned int, FDefaultAllocator> a0) { *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersPlayerDataID") = a0; };
	TArray<unsigned int, FDefaultAllocator> GetMembersPlayerDataID() const { return *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersPlayerDataID"); };
	void SetMembersRankGroups(TArray<unsigned char, FDefaultAllocator> a0) { *(TArray<unsigned char, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersRankGroups") = a0; };
	TArray<unsigned char, FDefaultAllocator> GetMembersRankGroups() const { return *(TArray<unsigned char, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersRankGroups"); };
	void SetTribeAdmins(TArray<unsigned int, FDefaultAllocator> a0) { *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeAdmins") = a0; };
	TArray<unsigned int, FDefaultAllocator> GetTribeAdmins() const { return *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeAdmins"); };
	void SetTribeAlliances(TArray<FTribeAlliance, FDefaultAllocator> a0) { *(TArray<FTribeAlliance, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeAlliances") = a0; };
	TArray<FTribeAlliance, FDefaultAllocator> GetTribeAlliances() const { return *(TArray<FTribeAlliance, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeAlliances"); };
	void SetbSetGovernment(bool a0) { *(bool*)GetAddress(this, "FTribeData", "bSetGovernment") = a0; };
	bool GetbSetGovernment() const { return *(bool*)GetAddress(this, "FTribeData", "bSetGovernment"); };
	void SetMembersConfigs(TArray<FPrimalPlayerCharacterConfigStruct, FDefaultAllocator> a0) { *(TArray<FPrimalPlayerCharacterConfigStruct, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersConfigs") = a0; };
	TArray<FPrimalPlayerCharacterConfigStruct, FDefaultAllocator> GetMembersConfigs() const { return *(TArray<FPrimalPlayerCharacterConfigStruct, FDefaultAllocator>*)GetAddress(this, "FTribeData", "MembersConfigs"); };
	void SetTribeWars(TArray<FTribeWar, FDefaultAllocator> a0) { *(TArray<FTribeWar, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeWars") = a0; };
	TArray<FTribeWar, FDefaultAllocator> GetTribeWars() const { return *(TArray<FTribeWar, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeWars"); };
	void SetTribeLog(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeLog") = a0; };
	TArray<FString, FDefaultAllocator> GetTribeLog() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeLog"); };
	void SetLogIndex(int a0) { *(int*)GetAddress(this, "FTribeData", "LogIndex") = a0; };
	int GetLogIndex() const { return *(int*)GetAddress(this, "FTribeData", "LogIndex"); };
	void SetTribeRankGroups(TArray<FTribeRankGroup, FDefaultAllocator> a0) { *(TArray<FTribeRankGroup, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeRankGroups") = a0; };
	TArray<FTribeRankGroup, FDefaultAllocator> GetTribeRankGroups() const { return *(TArray<FTribeRankGroup, FDefaultAllocator>*)GetAddress(this, "FTribeData", "TribeRankGroups"); };
	FTribeGovernment* GetTribeGovernment() const { return (FTribeGovernment*)GetAddress(this, "FTribeData", "TribeGovernment"); };

	// Functions

	bool IsTribeWarActive(int a1, UWorld* a2, bool a3) { return static_cast<bool(_cdecl*)(DWORD64, int, UWorld*, bool)>(GetAddress("FTribeData", "IsTribeWarActive"))((DWORD64)this, a1, a2, a3); }
	bool HasTribeWarRequest(int a1, UWorld* a2) { return static_cast<bool(_cdecl*)(DWORD64, int, UWorld*)>(GetAddress("FTribeData", "HasTribeWarRequest"))((DWORD64)this, a1, a2); }
	void RefreshTribeWars(UWorld* a1) { static_cast<void(_cdecl*)(DWORD64, UWorld*)>(GetAddress("FTribeData", "RefreshTribeWars"))((DWORD64)this, a1); }
	FTribeAlliance* FindTribeAlliance(unsigned int a1) { return static_cast<FTribeAlliance*(_cdecl*)(DWORD64, unsigned int)>(GetAddress("FTribeData", "FindTribeAlliance"))((DWORD64)this, a1); }
	bool IsTribeAlliedWith(unsigned int a1) { return static_cast<bool(_cdecl*)(DWORD64, unsigned int)>(GetAddress("FTribeData", "IsTribeAlliedWith"))((DWORD64)this, a1); }
	int GetDefaultRankGroupIndex() { return static_cast<int(_cdecl*)(DWORD64)>(GetAddress("FTribeData", "GetDefaultRankGroupIndex"))((DWORD64)this); }
	bool GetTribeRankGroupForPlayer(unsigned int a1, FTribeRankGroup& a2) { return static_cast<bool(_cdecl*)(DWORD64, unsigned int, FTribeRankGroup&)>(GetAddress("FTribeData", "GetTribeRankGroupForPlayer"))((DWORD64)this, a1, a2); }
	int GetBestRankGroupForRank(int a1) { return static_cast<int(_cdecl*)(DWORD64, int)>(GetAddress("FTribeData", "GetBestRankGroupForRank"))((DWORD64)this, a1); }
};

struct FTribeWar
{
	void SetEnemyTribeID(int a0) { *(int*)GetAddress(this, "FTribeWar", "EnemyTribeID") = a0; };
	int GetEnemyTribeID() const { return *(int*)GetAddress(this, "FTribeWar", "EnemyTribeID"); };
	void SetStartDayNumber(int a0) { *(int*)GetAddress(this, "FTribeWar", "StartDayNumber") = a0; };
	int GetStartDayNumber() const { return *(int*)GetAddress(this, "FTribeWar", "StartDayNumber"); };
	void SetEndDayNumber(int a0) { *(int*)GetAddress(this, "FTribeWar", "EndDayNumber") = a0; };
	int GetEndDayNumber() const { return *(int*)GetAddress(this, "FTribeWar", "EndDayNumber"); };
	void SetStartDayTime(float a0) { *(float*)GetAddress(this, "FTribeWar", "StartDayTime") = a0; };
	float GetStartDayTime() const { return *(float*)GetAddress(this, "FTribeWar", "StartDayTime"); };
	void SetEndDayTime(float a0) { *(float*)GetAddress(this, "FTribeWar", "EndDayTime") = a0; };
	float GetEndDayTime() const { return *(float*)GetAddress(this, "FTribeWar", "EndDayTime"); };
	void SetbIsApproved(bool a0) { *(bool*)GetAddress(this, "FTribeWar", "bIsApproved") = a0; };
	bool GetbIsApproved() const { return *(bool*)GetAddress(this, "FTribeWar", "bIsApproved"); };
	void SetInitiatingTribeID(int a0) { *(int*)GetAddress(this, "FTribeWar", "InitiatingTribeID") = a0; };
	int GetInitiatingTribeID() const { return *(int*)GetAddress(this, "FTribeWar", "InitiatingTribeID"); };
	void SetEnemyTribeName(FString a0) { *(FString*)GetAddress(this, "FTribeWar", "EnemyTribeName") = a0; };
	FString GetEnemyTribeName() const { return *(FString*)GetAddress(this, "FTribeWar", "EnemyTribeName"); };

	// Functions

	bool IsCurrentlyActive(UWorld* a1) { return static_cast<bool(_cdecl*)(DWORD64, UWorld*)>(GetAddress("FTribeWar", "IsCurrentlyActive"))((DWORD64)this, a1); }
	FString* GetDescriptiveString(FString* res, UWorld* a1) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, UWorld*)>(GetAddress("FTribeWar", "GetDescriptiveString"))((DWORD64)this, res, a1); }
	bool IsTribeWarOn(UWorld* a1) { return static_cast<bool(_cdecl*)(DWORD64, UWorld*)>(GetAddress("FTribeWar", "IsTribeWarOn"))((DWORD64)this, a1); }
	bool CanBeRejected(UWorld* a1) { return static_cast<bool(_cdecl*)(DWORD64, UWorld*)>(GetAddress("FTribeWar", "CanBeRejected"))((DWORD64)this, a1); }
	FString* GetWarTimeString(FString* res, int a1, float a2) { return static_cast<FString*(_cdecl*)(DWORD64, FString*, int, float)>(GetAddress("FTribeWar", "GetWarTimeString"))((DWORD64)this, res, a1, a2); }
};

struct FTribeRankGroup
{
	void SetRankGroupName(FString a0) { *(FString*)GetAddress(this, "FTribeRankGroup", "RankGroupName") = a0; };
	FString GetRankGroupName() const { return *(FString*)GetAddress(this, "FTribeRankGroup", "RankGroupName"); };
	void SetRankGroupRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "RankGroupRank") = a0; };
	unsigned char GetRankGroupRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "RankGroupRank"); };
	void SetInventoryRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "InventoryRank") = a0; };
	unsigned char GetInventoryRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "InventoryRank"); };
	void SetStructureActivationRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "StructureActivationRank") = a0; };
	unsigned char GetStructureActivationRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "StructureActivationRank"); };
	void SetNewStructureActivationRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "NewStructureActivationRank") = a0; };
	unsigned char GetNewStructureActivationRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "NewStructureActivationRank"); };
	void SetNewStructureInventoryRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "NewStructureInventoryRank") = a0; };
	unsigned char GetNewStructureInventoryRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "NewStructureInventoryRank"); };
	void SetPetOrderRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "PetOrderRank") = a0; };
	unsigned char GetPetOrderRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "PetOrderRank"); };
	void SetPetRidingRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "PetRidingRank") = a0; };
	unsigned char GetPetRidingRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "PetRidingRank"); };
	void SetInviteToGroupRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "InviteToGroupRank") = a0; };
	unsigned char GetInviteToGroupRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "InviteToGroupRank"); };
	void SetMaxPromotionGroupRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "MaxPromotionGroupRank") = a0; };
	unsigned char GetMaxPromotionGroupRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "MaxPromotionGroupRank"); };
	void SetMaxDemotionGroupRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "MaxDemotionGroupRank") = a0; };
	unsigned char GetMaxDemotionGroupRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "MaxDemotionGroupRank"); };
	void SetMaxBanishmentGroupRank(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "MaxBanishmentGroupRank") = a0; };
	unsigned char GetMaxBanishmentGroupRank() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "MaxBanishmentGroupRank"); };
	void SetNumInvitesRemaining(unsigned char a0) { *(unsigned char*)GetAddress(this, "FTribeRankGroup", "NumInvitesRemaining") = a0; };
	unsigned char GetNumInvitesRemaining() const { return *(unsigned char*)GetAddress(this, "FTribeRankGroup", "NumInvitesRemaining"); };
};

struct FTribeAlliance
{
	void SetAllianceName(FString a0) { *(FString*)GetAddress(this, "FTribeAlliance", "AllianceName") = a0; };
	FString GetAllianceName() const { return *(FString*)GetAddress(this, "FTribeAlliance", "AllianceName"); };
	void SetAllianceID(unsigned int a0) { *(unsigned int*)GetAddress(this, "FTribeAlliance", "AllianceID") = a0; };
	unsigned int GetAllianceID() const { return *(unsigned int*)GetAddress(this, "FTribeAlliance", "AllianceID"); };
	void SetMembersTribeName(TArray<FString, FDefaultAllocator> a0) { *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "FTribeAlliance", "MembersTribeName") = a0; };
	TArray<FString, FDefaultAllocator> GetMembersTribeName() const { return *(TArray<FString, FDefaultAllocator>*)GetAddress(this, "FTribeAlliance", "MembersTribeName"); };
	void SetMembersTribeID(TArray<unsigned int, FDefaultAllocator> a0) { *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeAlliance", "MembersTribeID") = a0; };
	TArray<unsigned int, FDefaultAllocator> GetMembersTribeID() const { return *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeAlliance", "MembersTribeID"); };
	void SetAdminsTribeID(TArray<unsigned int, FDefaultAllocator> a0) { *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeAlliance", "AdminsTribeID") = a0; };
	TArray<unsigned int, FDefaultAllocator> GetAdminsTribeID() const { return *(TArray<unsigned int, FDefaultAllocator>*)GetAddress(this, "FTribeAlliance", "AdminsTribeID"); };
};

struct FTribeGovernment
{
	void SetTribeGovern_PINCode(int a0) { *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_PINCode") = a0; };
	int GetTribeGovern_PINCode() const { return *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_PINCode"); };
	void SetTribeGovern_DinoOwnership(int a0) { *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_DinoOwnership") = a0; };
	int GetTribeGovern_DinoOwnership() const { return *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_DinoOwnership"); };
	void SetTribeGovern_StructureOwnership(int a0) { *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_StructureOwnership") = a0; };
	int GetTribeGovern_StructureOwnership() const { return *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_StructureOwnership"); };
	void SetTribeGovern_DinoTaming(int a0) { *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_DinoTaming") = a0; };
	int GetTribeGovern_DinoTaming() const { return *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_DinoTaming"); };
	void SetTribeGovern_DinoUnclaimAdminOnly(int a0) { *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_DinoUnclaimAdminOnly") = a0; };
	int GetTribeGovern_DinoUnclaimAdminOnly() const { return *(int*)GetAddress(this, "FTribeGovernment", "TribeGovern_DinoUnclaimAdminOnly"); };
};