#pragma once

#include "Base.h"

struct FTribeData
{
	FString GetTribeNameField() const { return GetNativeField<FString>(this, "FTribeData", "TribeName"); }
	void SetTribeNameField(FString newValue) { SetNativeField(this, "FTribeData", "TribeName", newValue); }
	unsigned int GetOwnerPlayerDataIDField() const { return GetNativeField<unsigned int>(this, "FTribeData", "OwnerPlayerDataID"); }
	void SetOwnerPlayerDataIDField(unsigned int newValue) { SetNativeField(this, "FTribeData", "OwnerPlayerDataID", newValue); }
	int GetTribeIDField() const { return GetNativeField<int>(this, "FTribeData", "TribeID"); }
	void SetTribeIDField(int newValue) { SetNativeField(this, "FTribeData", "TribeID", newValue); }
	TArray<FString> GetMembersPlayerNameField() const { return GetNativeField<TArray<FString>>(this, "FTribeData", "MembersPlayerName"); }
	TArray<unsigned int> GetMembersPlayerDataIDField() const { return GetNativeField<TArray<unsigned int>>(this, "FTribeData", "MembersPlayerDataID"); }
	TArray<unsigned char> GetMembersRankGroupsField() const { return GetNativeField<TArray<unsigned char>>(this, "FTribeData", "MembersRankGroups"); }
	void SetMembersRankGroupsField(TArray<unsigned char> newValue) { SetNativeField(this, "FTribeData", "MembersRankGroups", newValue); }
	TArray<unsigned int> GetTribeAdminsField() const { return GetNativeField<TArray<unsigned int>>(this, "FTribeData", "TribeAdmins"); }
	void SetTribeAdminsField(TArray<unsigned int> newValue) { SetNativeField(this, "FTribeData", "TribeAdmins", newValue); }
	TArray<FTribeAlliance> GetTribeAlliancesField() const { return GetNativeField<TArray<FTribeAlliance>>(this, "FTribeData", "TribeAlliances"); }
	void SetTribeAlliancesField(TArray<FTribeAlliance> newValue) { SetNativeField(this, "FTribeData", "TribeAlliances", newValue); }
	bool GetbSetGovernmentField() const { return GetNativeField<bool>(this, "FTribeData", "bSetGovernment"); }
	void SetbSetGovernmentField(bool newValue) { SetNativeField(this, "FTribeData", "bSetGovernment", newValue); }
	FTribeGovernment* GetTribeGovernmentField() const { return GetNativePointerField<FTribeGovernment*>(this, "FTribeData", "TribeGovernment"); }
	TArray<FPrimalPlayerCharacterConfigStruct> GetMembersConfigsField() const { return GetNativeField<TArray<FPrimalPlayerCharacterConfigStruct>>(this, "FTribeData", "MembersConfigs"); }
	TArray<FTribeWar> GetTribeWarsField() const { return GetNativeField<TArray<FTribeWar>>(this, "FTribeData", "TribeWars"); }
	TArray<FString> GetTribeLogField() const { return GetNativeField<TArray<FString>>(this, "FTribeData", "TribeLog"); }
	void SetTribeLogField(TArray<FString> newValue) { SetNativeField(this, "FTribeData", "TribeLog", newValue); }
	int GetLogIndexField() const { return GetNativeField<int>(this, "FTribeData", "LogIndex"); }
	void SetLogIndexField(int newValue) { SetNativeField(this, "FTribeData", "LogIndex", newValue); }
	TArray<FTribeRankGroup> GetTribeRankGroupsField() const { return GetNativeField<TArray<FTribeRankGroup>>(this, "FTribeData", "TribeRankGroups"); }

	// Functions

	bool IsTribeWarActive(int TribeID, UWorld * ForWorld, bool bIncludeUnstarted) { return NativeCall<bool, int, UWorld *, bool>((DWORD64)this, "FTribeData", "IsTribeWarActive", TribeID, ForWorld, bIncludeUnstarted); }
	bool HasTribeWarRequest(int TribeID, UWorld * ForWorld) { return NativeCall<bool, int, UWorld *>((DWORD64)this, "FTribeData", "HasTribeWarRequest", TribeID, ForWorld); }
	void RefreshTribeWars(UWorld * ForWorld) { NativeCall<void, UWorld *>((DWORD64)this, "FTribeData", "RefreshTribeWars", ForWorld); }
	FTribeAlliance * FindTribeAlliance(unsigned int AllianceID) { return NativeCall<FTribeAlliance *, unsigned int>((DWORD64)this, "FTribeData", "FindTribeAlliance", AllianceID); }
	bool IsTribeAlliedWith(unsigned int OtherTribeID) { return NativeCall<bool, unsigned int>((DWORD64)this, "FTribeData", "IsTribeAlliedWith", OtherTribeID); }
	bool GetTribeRankGroupForPlayer(unsigned int PlayerDataID, FTribeRankGroup * outRankGroup) { return NativeCall<bool, unsigned int, FTribeRankGroup *>((DWORD64)this, "FTribeData", "GetTribeRankGroupForPlayer", PlayerDataID, outRankGroup); }
	int GetBestRankGroupForRank(int Rank) { return NativeCall<int, int>((DWORD64)this, "FTribeData", "GetBestRankGroupForRank", Rank); }
	int GetDefaultRankGroupIndex() { return NativeCall<int>((DWORD64)this, "FTribeData", "GetDefaultRankGroupIndex"); }
};

struct FTribeWar
{
	int GetEnemyTribeIDField() const { return GetNativeField<int>(this, "FTribeWar", "EnemyTribeID"); }
	void SetEnemyTribeIDField(int newValue) { SetNativeField(this, "FTribeWar", "EnemyTribeID", newValue); }
	int GetStartDayNumberField() const { return GetNativeField<int>(this, "FTribeWar", "StartDayNumber"); }
	void SetStartDayNumberField(int newValue) { SetNativeField(this, "FTribeWar", "StartDayNumber", newValue); }
	int GetEndDayNumberField() const { return GetNativeField<int>(this, "FTribeWar", "EndDayNumber"); }
	void SetEndDayNumberField(int newValue) { SetNativeField(this, "FTribeWar", "EndDayNumber", newValue); }
	float GetStartDayTimeField() const { return GetNativeField<float>(this, "FTribeWar", "StartDayTime"); }
	void SetStartDayTimeField(float newValue) { SetNativeField(this, "FTribeWar", "StartDayTime", newValue); }
	float GetEndDayTimeField() const { return GetNativeField<float>(this, "FTribeWar", "EndDayTime"); }
	void SetEndDayTimeField(float newValue) { SetNativeField(this, "FTribeWar", "EndDayTime", newValue); }
	bool GetbIsApprovedField() const { return GetNativeField<bool>(this, "FTribeWar", "bIsApproved"); }
	void SetbIsApprovedField(bool newValue) { SetNativeField(this, "FTribeWar", "bIsApproved", newValue); }
	int GetInitiatingTribeIDField() const { return GetNativeField<int>(this, "FTribeWar", "InitiatingTribeID"); }
	void SetInitiatingTribeIDField(int newValue) { SetNativeField(this, "FTribeWar", "InitiatingTribeID", newValue); }
	FString GetEnemyTribeNameField() const { return GetNativeField<FString>(this, "FTribeWar", "EnemyTribeName"); }
	void SetEnemyTribeNameField(FString newValue) { SetNativeField(this, "FTribeWar", "EnemyTribeName", newValue); }

	// Functions

	bool CanBeRejected(UWorld * ForWorld) { return NativeCall<bool, UWorld *>((DWORD64)this, "FTribeWar", "CanBeRejected", ForWorld); }
	bool IsCurrentlyActive(UWorld * ForWorld) { return NativeCall<bool, UWorld *>((DWORD64)this, "FTribeWar", "IsCurrentlyActive", ForWorld); }
	bool IsTribeWarOn(UWorld * ForWorld) { return NativeCall<bool, UWorld *>((DWORD64)this, "FTribeWar", "IsTribeWarOn", ForWorld); }
	FString * GetDescriptiveString(FString * result, UWorld * ForWorld) { return NativeCall<FString *, FString *, UWorld *>((DWORD64)this, "FTribeWar", "GetDescriptiveString", result, ForWorld); }
	FString * GetWarTimeString(FString * result, int DayNumber, float DayTime) { return NativeCall<FString *, FString *, int, float>((DWORD64)this, "FTribeWar", "GetWarTimeString", result, DayNumber, DayTime); }
};

struct FTribeRankGroup
{
	FString GetRankGroupNameField() const { return GetNativeField<FString>(this, "FTribeRankGroup", "RankGroupName"); }
	void SetRankGroupNameField(FString newValue) { SetNativeField(this, "FTribeRankGroup", "RankGroupName", newValue); }
	char GetRankGroupRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "RankGroupRank"); }
	void SetRankGroupRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "RankGroupRank", newValue); }
	char GetInventoryRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "InventoryRank"); }
	void SetInventoryRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "InventoryRank", newValue); }
	char GetStructureActivationRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "StructureActivationRank"); }
	void SetStructureActivationRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "StructureActivationRank", newValue); }
	char GetNewStructureActivationRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "NewStructureActivationRank"); }
	void SetNewStructureActivationRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "NewStructureActivationRank", newValue); }
	char GetNewStructureInventoryRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "NewStructureInventoryRank"); }
	void SetNewStructureInventoryRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "NewStructureInventoryRank", newValue); }
	char GetPetOrderRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "PetOrderRank"); }
	void SetPetOrderRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "PetOrderRank", newValue); }
	char GetPetRidingRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "PetRidingRank"); }
	void SetPetRidingRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "PetRidingRank", newValue); }
	char GetInviteToGroupRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "InviteToGroupRank"); }
	void SetInviteToGroupRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "InviteToGroupRank", newValue); }
	char GetMaxPromotionGroupRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "MaxPromotionGroupRank"); }
	void SetMaxPromotionGroupRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "MaxPromotionGroupRank", newValue); }
	char GetMaxDemotionGroupRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "MaxDemotionGroupRank"); }
	void SetMaxDemotionGroupRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "MaxDemotionGroupRank", newValue); }
	char GetMaxBanishmentGroupRankField() const { return GetNativeField<char>(this, "FTribeRankGroup", "MaxBanishmentGroupRank"); }
	void SetMaxBanishmentGroupRankField(char newValue) { SetNativeField(this, "FTribeRankGroup", "MaxBanishmentGroupRank", newValue); }
	char GetNumInvitesRemainingField() const { return GetNativeField<char>(this, "FTribeRankGroup", "NumInvitesRemaining"); }
	void SetNumInvitesRemainingField(char newValue) { SetNativeField(this, "FTribeRankGroup", "NumInvitesRemaining", newValue); }

	// Functions

	void ValidateSettings() { NativeCall<void>((DWORD64)this, "FTribeRankGroup", "ValidateSettings"); }
};

struct FTribeAlliance
{
	FString GetAllianceNameField() const { return GetNativeField<FString>(this, "FTribeAlliance", "AllianceName"); }
	void SetAllianceNameField(FString newValue) { SetNativeField(this, "FTribeAlliance", "AllianceName", newValue); }
	unsigned int GetAllianceIDField() const { return GetNativeField<unsigned int>(this, "FTribeAlliance", "AllianceID"); }
	void SetAllianceIDField(unsigned int newValue) { SetNativeField(this, "FTribeAlliance", "AllianceID", newValue); }
	TArray<FString> GetMembersTribeNameField() const { return GetNativeField<TArray<FString>>(this, "FTribeAlliance", "MembersTribeName"); }
	TArray<unsigned int> GetMembersTribeIDField() const { return GetNativeField<TArray<unsigned int>>(this, "FTribeAlliance", "MembersTribeID"); }
	TArray<unsigned int> GetAdminsTribeIDField() const { return GetNativeField<TArray<unsigned int>>(this, "FTribeAlliance", "AdminsTribeID"); }
};

struct FTribeGovernment
{
	int GetTribeGovern_PINCodeField() const { return GetNativeField<int>(this, "FTribeGovernment", "TribeGovern_PINCode"); }
	void SetTribeGovern_PINCodeField(int newValue) { SetNativeField(this, "FTribeGovernment", "TribeGovern_PINCode", newValue); }
	int GetTribeGovern_DinoOwnershipField() const { return GetNativeField<int>(this, "FTribeGovernment", "TribeGovern_DinoOwnership"); }
	void SetTribeGovern_DinoOwnershipField(int newValue) { SetNativeField(this, "FTribeGovernment", "TribeGovern_DinoOwnership", newValue); }
	int GetTribeGovern_StructureOwnershipField() const { return GetNativeField<int>(this, "FTribeGovernment", "TribeGovern_StructureOwnership"); }
	void SetTribeGovern_StructureOwnershipField(int newValue) { SetNativeField(this, "FTribeGovernment", "TribeGovern_StructureOwnership", newValue); }
	int GetTribeGovern_DinoTamingField() const { return GetNativeField<int>(this, "FTribeGovernment", "TribeGovern_DinoTaming"); }
	void SetTribeGovern_DinoTamingField(int newValue) { SetNativeField(this, "FTribeGovernment", "TribeGovern_DinoTaming", newValue); }
	int GetTribeGovern_DinoUnclaimAdminOnlyField() const { return GetNativeField<int>(this, "FTribeGovernment", "TribeGovern_DinoUnclaimAdminOnly"); }
	void SetTribeGovern_DinoUnclaimAdminOnlyField(int newValue) { SetNativeField(this, "FTribeGovernment", "TribeGovern_DinoUnclaimAdminOnly", newValue); }
};