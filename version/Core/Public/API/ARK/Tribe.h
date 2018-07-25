#pragma once

struct FTribeGovernment
{
	FTribeGovernment()
	{
		TribeGovern_PINCode = 0;
		TribeGovern_DinoOwnership = 0;
		TribeGovern_StructureOwnership = 0;
		TribeGovern_DinoTaming = 0;
		TribeGovern_DinoUnclaimAdminOnly = 0;
	}

	int TribeGovern_PINCode;
	int TribeGovern_DinoOwnership;
	int TribeGovern_StructureOwnership;
	int TribeGovern_DinoTaming;
	int TribeGovern_DinoUnclaimAdminOnly;
};

struct FTribeData
{
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FTribeData.TribeName"); }
	long double& LastNameChangeTimeField() { return *GetNativePointerField<long double*>(this, "FTribeData.LastNameChangeTime"); }
	unsigned int& OwnerPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeData.OwnerPlayerDataID"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FTribeData.TribeID"); }
	TArray<FString>& MembersPlayerNameField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.MembersPlayerName"); }
	TArray<unsigned int>& MembersPlayerDataIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.MembersPlayerDataID"); }
	TArray<unsigned char>& MembersRankGroupsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FTribeData.MembersRankGroups"); }
	TArray<double>& SlotFreedTimeField() { return *GetNativePointerField<TArray<double>*>(this, "FTribeData.SlotFreedTime"); }
	TArray<unsigned int>& TribeAdminsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeData.TribeAdmins"); }
	TArray<FTribeAlliance>& TribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance>*>(this, "FTribeData.TribeAlliances"); }
	bool& bSetGovernmentField() { return *GetNativePointerField<bool*>(this, "FTribeData.bSetGovernment"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "FTribeData.TribeGovernment"); }
	TArray<FPrimalPlayerCharacterConfigStruct>& MembersConfigsField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStruct>*>(this, "FTribeData.MembersConfigs"); }
	TArray<FTribeWar>& TribeWarsField() { return *GetNativePointerField<TArray<FTribeWar>*>(this, "FTribeData.TribeWars"); }
	TArray<FString>& TribeLogField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeData.TribeLog"); }
	int& LogIndexField() { return *GetNativePointerField<int*>(this, "FTribeData.LogIndex"); }
	TArray<FTribeRankGroup>& TribeRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup>*>(this, "FTribeData.TribeRankGroups"); }
	int& NumTribeDinosField() { return *GetNativePointerField<int*>(this, "FTribeData.NumTribeDinos"); }
	TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>& MembersPlayerDataIDSet_ServerField() { return *GetNativePointerField<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>*>(this, "FTribeData.MembersPlayerDataIDSet_Server"); }

	// Functions

	bool IsTribeWarActive(int TribeID, UWorld * ForWorld, bool bIncludeUnstarted) { return NativeCall<bool, int, UWorld *, bool>(this, "FTribeData.IsTribeWarActive", TribeID, ForWorld, bIncludeUnstarted); }
	bool HasTribeWarRequest(int TribeID, UWorld * ForWorld) { return NativeCall<bool, int, UWorld *>(this, "FTribeData.HasTribeWarRequest", TribeID, ForWorld); }
	void RefreshTribeWars(UWorld * ForWorld) { NativeCall<void, UWorld *>(this, "FTribeData.RefreshTribeWars", ForWorld); }
	FTribeAlliance * FindTribeAlliance(unsigned int AllianceID) { return NativeCall<FTribeAlliance *, unsigned int>(this, "FTribeData.FindTribeAlliance", AllianceID); }
	bool IsTribeAlliedWith(unsigned int OtherTribeID) { return NativeCall<bool, unsigned int>(this, "FTribeData.IsTribeAlliedWith", OtherTribeID); }
	bool GetTribeRankGroupForPlayer(unsigned int PlayerDataID, FTribeRankGroup * outRankGroup) { return NativeCall<bool, unsigned int, FTribeRankGroup *>(this, "FTribeData.GetTribeRankGroupForPlayer", PlayerDataID, outRankGroup); }
	int GetBestRankGroupForRank(int Rank) { return NativeCall<int, int>(this, "FTribeData.GetBestRankGroupForRank", Rank); }
	long double GetSecondsSinceLastNameChange(UObject * WorldContextObject) { return NativeCall<long double, UObject *>(this, "FTribeData.GetSecondsSinceLastNameChange", WorldContextObject); }
	int GetDefaultRankGroupIndex() { return NativeCall<int>(this, "FTribeData.GetDefaultRankGroupIndex"); }
	FTribeData * operator=(FTribeData * __that) { return NativeCall<FTribeData *, FTribeData *>(this, "FTribeData.operator=", __that); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeData.StaticStruct"); }
};

struct FTribeWar
{
	int EnemyTribeID;
	int StartDayNumber;
	int EndDayNumber;
	float StartDayTime;
	float EndDayTime;
	bool bIsApproved;
	int InitiatingTribeID;
	FString EnemyTribeName;

	// Functions

	bool CanBeRejected(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.CanBeRejected", ForWorld); }
	bool IsCurrentlyActive(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsCurrentlyActive", ForWorld); }
	bool IsTribeWarOn(UWorld * ForWorld) { return NativeCall<bool, UWorld *>(this, "FTribeWar.IsTribeWarOn", ForWorld); }
	FString * GetWarTimeString(FString * result, int DayNumber, float DayTime) { return NativeCall<FString *, FString *, int, float>(this, "FTribeWar.GetWarTimeString", result, DayNumber, DayTime); }
	bool operator==(FTribeWar * Other) { return NativeCall<bool, FTribeWar *>(this, "FTribeWar.operator==", Other); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeWar.StaticStruct"); }
};

struct FTribeRankGroup
{
	FString RankGroupName;
	char RankGroupRank;
	char InventoryRank;
	char StructureActivationRank;
	char NewStructureActivationRank;
	char NewStructureInventoryRank;
	char PetOrderRank;
	char PetRidingRank;
	char InviteToGroupRank;
	char MaxPromotionGroupRank;
	char MaxDemotionGroupRank;
	char MaxBanishmentGroupRank;
	char NumInvitesRemaining;
	unsigned __int32 bPreventStructureDemolish : 1;
	unsigned __int32 bPreventStructureAttachment : 1;
	unsigned __int32 bPreventStructureBuildInRange : 1;
	unsigned __int32 bPreventUnclaiming : 1;
	unsigned __int32 bAllowInvites : 1;
	unsigned __int32 bLimitInvites : 1;
	unsigned __int32 bAllowDemotions : 1;
	unsigned __int32 bAllowPromotions : 1;
	unsigned __int32 bAllowBanishments : 1;
	unsigned __int32 bDefaultRank : 1;

	// Functions

	FTribeRankGroup(FTribeRankGroup * __that) { NativeCall<void, FTribeRankGroup *>(this, "FTribeRankGroup.FTribeRankGroup", __that); }
	FTribeRankGroup * operator=(FTribeRankGroup * __that) { return NativeCall<FTribeRankGroup *, FTribeRankGroup *>(this, "FTribeRankGroup.operator=", __that); }
	void ValidateSettings() { NativeCall<void>(this, "FTribeRankGroup.ValidateSettings"); }
	bool operator==(FTribeRankGroup * Other) { return NativeCall<bool, FTribeRankGroup *>(this, "FTribeRankGroup.operator==", Other); }
	static UScriptStruct * StaticStruct() { return NativeCall<UScriptStruct *>(nullptr, "FTribeRankGroup.StaticStruct"); }

};

struct FTribeAlliance
{
	FString AllianceName;
	unsigned int AllianceID;
	TArray<FString, FDefaultAllocator> MembersTribeName;
	TArray<unsigned int, FDefaultAllocator> MembersTribeID;
	TArray<unsigned int, FDefaultAllocator> AdminsTribeID;
};