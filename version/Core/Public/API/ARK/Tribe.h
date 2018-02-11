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
	FieldValue<FString> TribeNameField() { return { this, "FTribeData.TribeName" }; }
	FieldValue<long double> LastNameChangeTimeField() { return { this, "FTribeData.LastNameChangeTime" }; }
	FieldValue<unsigned int> OwnerPlayerDataIDField() { return { this, "FTribeData.OwnerPlayerDataID" }; }
	FieldValue<int> TribeIDField() { return { this, "FTribeData.TribeID" }; }
	FieldValue<TArray<FString>> MembersPlayerNameField() { return { this, "FTribeData.MembersPlayerName" }; }
	FieldValue<TArray<unsigned int>> MembersPlayerDataIDField() { return { this, "FTribeData.MembersPlayerDataID" }; }
	FieldValue<TArray<unsigned char>> MembersRankGroupsField() { return { this, "FTribeData.MembersRankGroups" }; }
	FieldValue<TArray<unsigned int>> TribeAdminsField() { return { this, "FTribeData.TribeAdmins" }; }
	FieldValue<TArray<FTribeAlliance>> TribeAlliancesField() { return { this, "FTribeData.TribeAlliances" }; }
	FieldValue<bool> bSetGovernmentField() { return { this, "FTribeData.bSetGovernment" }; }
	FieldValue<FTribeGovernment> TribeGovernmentField() { return { this, "FTribeData.TribeGovernment" }; }
	FieldValue<TArray<FPrimalPlayerCharacterConfigStruct>> MembersConfigsField() { return { this, "FTribeData.MembersConfigs" }; }
	FieldValue<TArray<FTribeWar>> TribeWarsField() { return { this, "FTribeData.TribeWars" }; }
	FieldValue<TArray<FString>> TribeLogField() { return { this, "FTribeData.TribeLog" }; }
	FieldValue<int> LogIndexField() { return { this, "FTribeData.LogIndex" }; }
	FieldValue<TArray<FTribeRankGroup>> TribeRankGroupsField() { return { this, "FTribeData.TribeRankGroups" }; }
	FieldValue<int> NumTribeDinosField() { return { this, "FTribeData.NumTribeDinos" }; }
	FieldValue<TSet<unsigned __int64, DefaultKeyFuncs<unsigned __int64, 0>, FDefaultSetAllocator>> MembersPlayerDataIDSet_ServerField() { return { this, "FTribeData.MembersPlayerDataIDSet_Server" }; }

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