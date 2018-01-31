#pragma once

#include <comdef.h>
#include <xmmintrin.h>

#include "Containers/TArray.h"
#include "Containers/FString.h"
#include "Containers/EnumAsByte.h"
#include "API/Fields.h"
#include "API/Enums.h"

// Base types

struct FText;

struct FName
{
	int ComparisonIndex;
	unsigned int Number;

	// Functions

	FName() : ComparisonIndex(0), Number(0)
	{
	}

	//static TStaticIndirectArrayThreadSafeRead<FNameEntry, 2097152, 16384> * GetNames() { return NativeCall<TStaticIndirectArrayThreadSafeRead<FNameEntry, 2097152, 16384> *>(nullptr, "FName.GetNames"); }
	static FString * NameToDisplayString(FString * result, FString * InDisplayName, const bool bIsBool) { return NativeCall<FString *, FString *, FString *, const bool>(nullptr, "FName.NameToDisplayString", result, InDisplayName, bIsBool); }
	FName(const wchar_t * Name, EFindName FindType, bool __formal) { NativeCall<void, const wchar_t *, EFindName, bool>(this, "FName.FName", Name, FindType, __formal); }
	FName(const char * Name, EFindName FindType, bool __formal) { NativeCall<void, const char *, EFindName, bool>(this, "FName.FName", Name, FindType, __formal); }
	bool operator==(const wchar_t * Other) { return NativeCall<bool, const wchar_t *>(this, "FName.operator==", Other); }
	int Compare(FName * Other) { return NativeCall<int, FName *>(this, "FName.Compare", Other); }
	void Init(const wchar_t * InName, int InNumber, EFindName FindType, bool bSplitName, int HardcodeIndex) { NativeCall<void, const wchar_t *, int, EFindName, bool, int>(this, "FName.Init", InName, InNumber, FindType, bSplitName, HardcodeIndex); }
	void ToString(FString * Out) { NativeCall<void, FString *>(this, "FName.ToString", Out); }
	void AppendString(FString * Out) { NativeCall<void, FString *>(this, "FName.AppendString", Out); }
	static bool SplitNameWithCheck(const wchar_t * OldName, wchar_t * NewName, int NewNameLen, int * NewNumber) { return NativeCall<bool, const wchar_t *, wchar_t *, int, int *>(nullptr, "FName.SplitNameWithCheck", OldName, NewName, NewNameLen, NewNumber); }
	bool IsValidXName(FString InvalidChars, FText * Reason) { return NativeCall<bool, FString, FText *>(this, "FName.IsValidXName", InvalidChars, Reason); }
	void Init(const char * InName, int InNumber, EFindName FindType, bool bSplitName, int HardcodeIndex) { NativeCall<void, const char *, int, EFindName, bool, int>(this, "FName.Init", InName, InNumber, FindType, bSplitName, HardcodeIndex); }
};

struct FTransform
{
	__m128 Rotation;
	__m128 Translation;
	__m128 Scale3D;
};

struct FBoxSphereBounds
{
};

struct FGuid
{
	uint32_t A;
	uint32_t B;
	uint32_t C;
	uint32_t D;
};

struct UFunction
{
};

struct FBox
{
};

template <typename ObjectType, int Dummy = int()>
struct TSharedPtr
{
	ObjectType* Object;
	short int SharedReferenceCount;

	FORCEINLINE ObjectType& operator*() const
	{
		return *Object;
	}

	FORCEINLINE ObjectType* operator->() const
	{
		return Object;
	}
};

template <typename ObjectType>
struct TSubobjectPtr
{
	UObject *Object;

	FORCEINLINE ObjectType& operator*() const
	{
		return *Object;
	}

	FORCEINLINE ObjectType* operator->() const
	{
		return Object;
	}
};

struct __declspec(align(8)) FTextHistory
{
	void* vfptr;
	int Revision;
};

struct FText
{
	TSharedPtr<FTextHistory> History;
	int Flags;
	TSharedPtr<FString> DisplayString;

	// Functions

	int CompareTo(FText * Other, ETextComparisonLevel::Type ComparisonLevel) { return NativeCall<int, FText *, ETextComparisonLevel::Type>(this, "FText.CompareTo", Other, ComparisonLevel); }
	FText() { NativeCall<void>(this, "FText.FText"); }
	FText(FText * Source) { NativeCall<void, FText *>(this, "FText.FText", Source); }
	FText * operator=(FText * Source) { return NativeCall<FText *, FText *>(this, "FText.operator=", Source); }
	FText(FString InSourceString) { NativeCall<void, FString>(this, "FText.FText", InSourceString); }
	FText(FString InSourceString, FString InNamespace, FString InKey, int InFlags) { NativeCall<void, FString, FString, FString, int>(this, "FText.FText", InSourceString, InNamespace, InKey, InFlags); }
	static FText * TrimPreceding(FText * result, FText * InText) { return NativeCall<FText *, FText *, FText *>(nullptr, "FText.TrimPreceding", result, InText); }
	static FText * TrimTrailing(FText * result, FText * InText) { return NativeCall<FText *, FText *, FText *>(nullptr, "FText.TrimTrailing", result, InText); }
	static FText * TrimPrecedingAndTrailing(FText * result, FText * InText) { return NativeCall<FText *, FText *, FText *>(nullptr, "FText.TrimPrecedingAndTrailing", result, InText); }
	static FText * Format(FText * result, FText * Fmt, FText * v1) { return NativeCall<FText *, FText *, FText *, FText *>(nullptr, "FText.Format", result, Fmt, v1); }
	static FText * Format(FText * result, FText * Fmt, FText * v1, FText * v2) { return NativeCall<FText *, FText *, FText *, FText *, FText *>(nullptr, "FText.Format", result, Fmt, v1, v2); }
	static FText * Format(FText * result, FText * Fmt, FText * v1, FText * v2, FText * v3) { return NativeCall<FText *, FText *, FText *, FText *, FText *, FText *>(nullptr, "FText.Format", result, Fmt, v1, v2, v3); }
	static bool FindText(FString * Namespace, FString * Key, FText * OutText, FString *const  SourceString) { return NativeCall<bool, FString *, FString *, FText *, FString *const>(nullptr, "FText.FindText", Namespace, Key, OutText, SourceString); }
	static FText * CreateChronologicalText(FText * result, FString InSourceString) { return NativeCall<FText *, FText *, FString>(nullptr, "FText.CreateChronologicalText", result, InSourceString); }
	static FText * FromName(FText * result, FName * Val) { return NativeCall<FText *, FText *, FName *>(nullptr, "FText.FromName", result, Val); }
	static FText * FromString(FText * result, FString String) { return NativeCall<FText *, FText *, FString>(nullptr, "FText.FromString", result, String); }
	FString * ToString() { return NativeCall<FString *>(this, "FText.ToString"); }
	bool ShouldGatherForLocalization() { return NativeCall<bool>(this, "FText.ShouldGatherForLocalization"); }
	TSharedPtr<FString> * GetSourceString(TSharedPtr<FString> * result) { return NativeCall<TSharedPtr<FString> *, TSharedPtr<FString> *>(this, "FText.GetSourceString", result); }
	static void GetEmpty() { NativeCall<void>(nullptr, "FText.GetEmpty"); }
};

struct FDateTime
{
};

template <typename T>
struct TWeakObjectPtr
{
	int ObjectIndex;
	int ObjectSerialNumber;

	FORCEINLINE T& operator*()
	{
		return *Get();
	}

	FORCEINLINE T* operator->()
	{
		return Get();
	}

	T* Get(bool bEvenIfPendingKill = false)
	{
		return NativeCall<T*, bool>(this, "FWeakObjectPtr.Get", bEvenIfPendingKill);
	}
};

template <typename T>
using TAutoWeakObjectPtr = TWeakObjectPtr<T>;

template <typename T>
struct TSubclassOf
{
	TSubclassOf()
		: uClass(nullptr)
	{
	}

	TSubclassOf(UClass* uClass)
		: uClass(uClass)
	{
	}

	UClass* uClass;
};

struct IOnlinePlatformData
{
	void *vfptr;
};

struct FUniqueNetId : IOnlinePlatformData
{

};

struct FUniqueNetIdSteam : FUniqueNetId
{
	unsigned __int64 UniqueNetId;

	// Functions

	int GetSize() { return NativeCall<int>(this, "FUniqueNetIdSteam.GetSize"); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdSteam.ToString", result); }
	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdSteam.IsValid"); }
	FString * ToDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdSteam.ToDebugString", result); }
};

struct UObjectBase
{
	FieldValue<EObjectFlags> ObjectFlagsField() { return { this, "UObjectBase.ObjectFlags" }; }
	FieldValue<int> InternalIndexField() { return { this, "UObjectBase.InternalIndex" }; }
	FieldValue<UClass *> ClassField() { return { this, "UObjectBase.Class" }; }
	FieldValue<FName> NameField() { return { this, "UObjectBase.Name" }; }
	FieldValue<UObject *> OuterField() { return { this, "UObjectBase.Outer" }; }

	// Functions

	void DeferredRegister(UClass * UClassStaticClass, const wchar_t * PackageName, const wchar_t * InName) { NativeCall<void, UClass *, const wchar_t *, const wchar_t *>(this, "UObjectBase.DeferredRegister", UClassStaticClass, PackageName, InName); }
	bool IsValidLowLevel() { return NativeCall<bool>(this, "UObjectBase.IsValidLowLevel"); }
	bool IsValidLowLevelFast(bool bRecursive) { return NativeCall<bool, bool>(this, "UObjectBase.IsValidLowLevelFast", bRecursive); }
	static void EmitBaseReferences(UClass * RootClass) { NativeCall<void, UClass *>(nullptr, "UObjectBase.EmitBaseReferences", RootClass); }
	void Register(const wchar_t * PackageName, const wchar_t * InName) { NativeCall<void, const wchar_t *, const wchar_t *>(this, "UObjectBase.Register", PackageName, InName); }
};

struct UObjectBaseUtility : public UObjectBase
{
	int GetLinkerUE4Version() { return NativeCall<int>(this, "UObjectBaseUtility.GetLinkerUE4Version"); }
	int GetLinkerLicenseeUE4Version() { return NativeCall<int>(this, "UObjectBaseUtility.GetLinkerLicenseeUE4Version"); }
	FString * GetPathName(FString * result, UObject * StopOuter) { return NativeCall<FString *, FString *, UObject *>(this, "UObjectBaseUtility.GetPathName", result, StopOuter); }
	void GetPathName(UObject * StopOuter, FString * ResultString) { NativeCall<void, UObject *, FString *>(this, "UObjectBaseUtility.GetPathName", StopOuter, ResultString); }
	FString * GetFullName(FString * result, UObject * StopOuter) { return NativeCall<FString *, FString *, UObject *>(this, "UObjectBaseUtility.GetFullName", result, StopOuter); }
	void MarkPackageDirty() { NativeCall<void>(this, "UObjectBaseUtility.MarkPackageDirty"); }
	bool IsIn(UObject * SomeOuter) { return NativeCall<bool, UObject *>(this, "UObjectBaseUtility.IsIn", SomeOuter); }
	bool IsA(UClass * SomeBase) { return NativeCall<bool, UClass *>(this, "UObjectBaseUtility.IsA", SomeBase); }
	void * GetInterfaceAddress(UClass * InterfaceClass) { return NativeCall<void *, UClass *>(this, "UObjectBaseUtility.GetInterfaceAddress", InterfaceClass); }
	bool IsDefaultSubobject() { return NativeCall<bool>(this, "UObjectBaseUtility.IsDefaultSubobject"); }
	int GetLinkerIndex() { return NativeCall<int>(this, "UObjectBaseUtility.GetLinkerIndex"); }
};

struct UObject : UObjectBaseUtility
{
	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "UObject.StaticClass"); }
	void ExecuteUbergraph(int EntryPoint) { NativeCall<void, int>(this, "UObject.ExecuteUbergraph", EntryPoint); }
	bool AreAllOuterObjectsValid() { return NativeCall<bool>(this, "UObject.AreAllOuterObjectsValid"); }
	FName * GetExporterName(FName * result) { return NativeCall<FName *, FName *>(this, "UObject.GetExporterName", result); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "UObject.GetDetailedInfoInternal", result); }
	UObject * GetArchetype() { return NativeCall<UObject *>(this, "UObject.GetArchetype"); }
	bool IsBasedOnArchetype(UObject *const  SomeObject) { return NativeCall<bool, UObject *const>(this, "UObject.IsBasedOnArchetype", SomeObject); }
	bool IsInBlueprint() { return NativeCall<bool>(this, "UObject.IsInBlueprint"); }
	bool Rename(const wchar_t * InName, UObject * NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>(this, "UObject.Rename", InName, NewOuter, Flags); }
	void LoadLocalized(UObject * LocBase, bool bLoadHierachecally) { NativeCall<void, UObject *, bool>(this, "UObject.LoadLocalized", LocBase, bLoadHierachecally); }
	void LocalizeProperty(UObject * LocBase, TArray<FString> * PropertyTagChain, UProperty *const  BaseProperty, UProperty *const  Property, void *const  ValueAddress) { NativeCall<void, UObject *, TArray<FString> *, UProperty *const, UProperty *const, void *const>(this, "UObject.LocalizeProperty", LocBase, PropertyTagChain, BaseProperty, Property, ValueAddress); }
	void BeginDestroy() { NativeCall<void>(this, "UObject.BeginDestroy"); }
	void FinishDestroy() { NativeCall<void>(this, "UObject.FinishDestroy"); }
	FString * GetDetailedInfo(FString * result) { return NativeCall<FString *, FString *>(this, "UObject.GetDetailedInfo", result); }
	bool ConditionalBeginDestroy() { return NativeCall<bool>(this, "UObject.ConditionalBeginDestroy"); }
	bool ConditionalFinishDestroy() { return NativeCall<bool>(this, "UObject.ConditionalFinishDestroy"); }
	void ConditionalPostLoad() { NativeCall<void>(this, "UObject.ConditionalPostLoad"); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "UObject.Modify", bAlwaysMarkDirty); }
	bool IsSelected() { return NativeCall<bool>(this, "UObject.IsSelected"); }
	void CollectDefaultSubobjects(TArray<UObject *> * OutSubobjectArray, bool bIncludeNestedSubobjects) { NativeCall<void, TArray<UObject *> *, bool>(this, "UObject.CollectDefaultSubobjects", OutSubobjectArray, bIncludeNestedSubobjects); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>(this, "UObject.CheckDefaultSubobjectsInternal"); }
	bool IsAsset() { return NativeCall<bool>(this, "UObject.IsAsset"); }
	bool IsSafeForRootSet() { return NativeCall<bool>(this, "UObject.IsSafeForRootSet"); }
	void LoadConfig(UClass * ConfigClass, const wchar_t * InFilename, unsigned int PropagationFlags, UProperty * PropertyToLoad) { NativeCall<void, UClass *, const wchar_t *, unsigned int, UProperty *>(this, "UObject.LoadConfig", ConfigClass, InFilename, PropagationFlags, PropertyToLoad); }
	void ConditionalShutdownAfterError() { NativeCall<void>(this, "UObject.ConditionalShutdownAfterError"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsNameStableForNetworking"); }
	bool IsFullNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsFullNameStableForNetworking"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UObject.IsSupportedForNetworking"); }
	UFunction * FindFunctionChecked(FName InName) { return NativeCall<UFunction *, FName>(this, "UObject.FindFunctionChecked", InName); }
	void ProcessEvent(UFunction * Function, void * Parms) { NativeCall<void, UFunction *, void *>(this, "UObject.ProcessEvent", Function, Parms); }
	static UObject * GetArchetypeFromRequiredInfo(UClass * Class, UObject * Outer, FName Name, bool bIsCDO) { return NativeCall<UObject *, UClass *, UObject *, FName, bool>(nullptr, "UObject.GetArchetypeFromRequiredInfo", Class, Outer, Name, bIsCDO); }
};

struct UField : UObject
{
	FieldValue<UField *> NextField() { return { this, "UField.Next" }; }

	// Functions

	UClass * GetOwnerClass() { return NativeCall<UClass *>(this, "UField.GetOwnerClass"); }
	UStruct * GetOwnerStruct() { return NativeCall<UStruct *>(this, "UField.GetOwnerStruct"); }
	void PostLoad() { NativeCall<void>(this, "UField.PostLoad"); }
	void AddCppProperty(UProperty * Property) { NativeCall<void, UProperty *>(this, "UField.AddCppProperty", Property); }
};

struct UStruct : UField
{
	FieldValue<UStruct *> SuperStructField() { return { this, "UStruct.SuperStruct" }; }
	FieldValue<UField *> ChildrenField() { return { this, "UStruct.Children" }; }
	FieldValue<int> PropertiesSizeField() { return { this, "UStruct.PropertiesSize" }; }
	FieldValue<TArray<unsigned char>> ScriptField() { return { this, "UStruct.Script" }; }
	FieldValue<int> MinAlignmentField() { return { this, "UStruct.MinAlignment" }; }
	FieldValue<UProperty *> PropertyLinkField() { return { this, "UStruct.PropertyLink" }; }
	FieldValue<UProperty *> RefLinkField() { return { this, "UStruct.RefLink" }; }
	FieldValue<UProperty *> DestructorLinkField() { return { this, "UStruct.DestructorLink" }; }
	FieldValue<UProperty *> PostConstructLinkField() { return { this, "UStruct.PostConstructLink" }; }
	FieldValue<TArray<UObject *>> ScriptObjectReferencesField() { return { this, "UStruct.ScriptObjectReferences" }; }

	// Functions

	bool IsChildOf(UStruct * SomeBase) { return NativeCall<bool, UStruct *>(this, "UStruct.IsChildOf", SomeBase); }
	UField * StaticClass() { return NativeCall<UField *>(this, "UStruct.StaticClass"); }
	void LinkChild(UProperty * Property) { NativeCall<void, UProperty *>(this, "UStruct.LinkChild", Property); }
	const wchar_t * GetPrefixCPP() { return NativeCall<const wchar_t *>(this, "UStruct.GetPrefixCPP"); }
	void RegisterDependencies() { NativeCall<void>(this, "UStruct.RegisterDependencies"); }
	void StaticLink(bool bRelinkExistingProperties) { NativeCall<void, bool>(this, "UStruct.StaticLink", bRelinkExistingProperties); }
	void FinishDestroy() { NativeCall<void>(this, "UStruct.FinishDestroy"); }
	void SetSuperStruct(UStruct * NewSuperStruct) { NativeCall<void, UStruct *>(this, "UStruct.SetSuperStruct", NewSuperStruct); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UStruct.TagSubobjects", NewFlags); }
};

struct UClass : UStruct
{
	FieldValue<unsigned int> ClassFlagsField() { return { this, "UClass.ClassFlags" }; }
	FieldValue<unsigned __int64> ClassCastFlagsField() { return { this, "UClass.ClassCastFlags" }; }
	FieldValue<int> ClassUniqueField() { return { this, "UClass.ClassUnique" }; }
	FieldValue<UClass *> ClassWithinField() { return { this, "UClass.ClassWithin" }; }
	FieldValue<UObject *> ClassGeneratedByField() { return { this, "UClass.ClassGeneratedBy" }; }
	FieldValue<bool> bIsGameClassField() { return { this, "UClass.bIsGameClass" }; }
	FieldValue<FName> ClassConfigNameField() { return { this, "UClass.ClassConfigName" }; }
	FieldValue<TArray<UField *>> NetFieldsField() { return { this, "UClass.NetFields" }; }
	FieldValue<UObject *> ClassDefaultObjectField() { return { this, "UClass.ClassDefaultObject" }; }
	FieldValue<bool> bCookedField() { return { this, "UClass.bCooked" }; }
	//FieldValue<TMap<FName, UFunction *, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, UFunction *, 0> >> FuncMapField() { return { this, "UClass.FuncMap" }; }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "UClass.StaticClass"); }
	UObject * GetDefaultObject(bool bCreateIfNeeded) { return NativeCall<UObject *, bool>(this, "UClass.GetDefaultObject", bCreateIfNeeded); }
	void AddFunctionToFunctionMap(UFunction * NewFunction) { NativeCall<void, UFunction *>(this, "UClass.AddFunctionToFunctionMap", NewFunction); }
	void PostInitProperties() { NativeCall<void>(this, "UClass.PostInitProperties"); }
	UObject * GetDefaultSubobjectByName(FName ToFind) { return NativeCall<UObject *, FName>(this, "UClass.GetDefaultSubobjectByName", ToFind); }
	void GetDefaultObjectSubobjects(TArray<UObject *> * OutDefaultSubobjects) { NativeCall<void, TArray<UObject *> *>(this, "UClass.GetDefaultObjectSubobjects", OutDefaultSubobjects); }
	UObject * CreateDefaultObject() { return NativeCall<UObject *>(this, "UClass.CreateDefaultObject"); }
	FName * GetDefaultObjectName(FName * result) { return NativeCall<FName *, FName *>(this, "UClass.GetDefaultObjectName", result); }
	void DeferredRegister(UClass * UClassStaticClass, const wchar_t * PackageName, const wchar_t * Name) { NativeCall<void, UClass *, const wchar_t *, const wchar_t *>(this, "UClass.DeferredRegister", UClassStaticClass, PackageName, Name); }
	bool Rename(const wchar_t * InName, UObject * NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>(this, "UClass.Rename", InName, NewOuter, Flags); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UClass.TagSubobjects", NewFlags); }
	void Bind() { NativeCall<void>(this, "UClass.Bind"); }
	const wchar_t * GetPrefixCPP() { return NativeCall<const wchar_t *>(this, "UClass.GetPrefixCPP"); }
	FString * GetDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UClass.GetDescription", result); }
	void FinishDestroy() { NativeCall<void>(this, "UClass.FinishDestroy"); }
	void PostLoad() { NativeCall<void>(this, "UClass.PostLoad"); }
	void SetSuperStruct(UStruct * NewSuperStruct) { NativeCall<void, UStruct *>(this, "UClass.SetSuperStruct", NewSuperStruct); }
	bool ImplementsInterface(UClass * SomeInterface) { return NativeCall<bool, UClass *>(this, "UClass.ImplementsInterface", SomeInterface); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UClass.PurgeClass", bRecompilingOnLoad); }
	bool HasProperty(UProperty * InProperty) { return NativeCall<bool, UProperty *>(this, "UClass.HasProperty", InProperty); }
	UFunction * FindFunctionByName(FName InName, EIncludeSuperFlag::Type IncludeSuper) { return NativeCall<UFunction *, FName, EIncludeSuperFlag::Type>(this, "UClass.FindFunctionByName", InName, IncludeSuper); }
	FString * GetConfigName(FString * result) { return NativeCall<FString *, FString *>(this, "UClass.GetConfigName", result); }
	unsigned int EmitStructArrayBegin(int Offset, FName * DebugName, int Stride) { return NativeCall<unsigned int, int, FName *, int>(this, "UClass.EmitStructArrayBegin", Offset, DebugName, Stride); }
	void AssembleReferenceTokenStream() { NativeCall<void>(this, "UClass.AssembleReferenceTokenStream"); }
};

struct UBlueprintCore : UObject
{
	FieldValue<TSubclassOf<UObject>> SkeletonGeneratedClassField() { return { this, "UBlueprintCore.SkeletonGeneratedClass" }; }
	FieldValue<TSubclassOf<UObject>> GeneratedClassField() { return { this, "UBlueprintCore.GeneratedClass" }; }
	FieldValue<bool> bLegacyNeedToPurgeSkelRefsField() { return { this, "UBlueprintCore.bLegacyNeedToPurgeSkelRefs" }; }
	FieldValue<bool> bLegacyGeneratedClassIsAuthoritativeField() { return { this, "UBlueprintCore.bLegacyGeneratedClassIsAuthoritative" }; }
	FieldValue<FGuid> BlueprintGuidField() { return { this, "UBlueprintCore.BlueprintGuid" }; }
};

struct UBlueprint : UBlueprintCore
{
	FieldValue<TSubclassOf<UObject>> ParentClassField() { return { this, "UBlueprint.ParentClass" }; }
	FieldValue<UObject *> PRIVATE_InnermostPreviousCDOField() { return { this, "UBlueprint.PRIVATE_InnermostPreviousCDO" }; }
	FieldValue<TArray<UActorComponent *>> ComponentTemplatesField() { return { this, "UBlueprint.ComponentTemplates" }; }
	FieldValue<TEnumAsByte<enum EBlueprintType>> BlueprintTypeField() { return { this, "UBlueprint.BlueprintType" }; }
	FieldValue<int> BlueprintSystemVersionField() { return { this, "UBlueprint.BlueprintSystemVersion" }; }

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "UBlueprint.StaticClass"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UBlueprint.GetDesc", result); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UBlueprint.NeedsLoadForClient"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UBlueprint.NeedsLoadForServer"); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UBlueprint.TagSubobjects", NewFlags); }
};

struct UProperty : UField
{
	FieldValue<int> ArrayDimField() { return { this, "UProperty.ArrayDim" }; }
	FieldValue<int> ElementSizeField() { return { this, "UProperty.ElementSize" }; }
	FieldValue<unsigned __int64> PropertyFlagsField() { return { this, "UProperty.PropertyFlags" }; }
	FieldValue<unsigned __int16> RepIndexField() { return { this, "UProperty.RepIndex" }; }
	FieldValue<FName> RepNotifyFuncField() { return { this, "UProperty.RepNotifyFunc" }; }
	FieldValue<int> Offset_InternalField() { return { this, "UProperty.Offset_Internal" }; }
	FieldValue<UProperty *> PropertyLinkNextField() { return { this, "UProperty.PropertyLinkNext" }; }
	FieldValue<UProperty *> NextRefField() { return { this, "UProperty.NextRef" }; }
	FieldValue<UProperty *> DestructorLinkNextField() { return { this, "UProperty.DestructorLinkNext" }; }
	FieldValue<UProperty *> PostConstructLinkNextField() { return { this, "UProperty.PostConstructLinkNext" }; }

	// Functions

	bool Identical(const void * A, const void * B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>(this, "UProperty.Identical", A, B, PortFlags); }
	void ExportTextItem(FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UProperty.ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	void CopySingleValueFromScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UProperty.CopySingleValueFromScriptVM", Dest, Src); }
	void CopyCompleteValueFromScriptVM(void * Dest, const void * Src) { NativeCall<void, void *, const void *>(this, "UProperty.CopyCompleteValueFromScriptVM", Dest, Src); }
	FString * GetCPPType(FString * result, FString * ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString *, FString *, FString *, unsigned int>(this, "UProperty.GetCPPType", result, ExtendedTypeText, CPPExportFlags); }
	bool Identical_InContainer(const void * A, const void * B, int ArrayIndex, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, int, unsigned int>(this, "UProperty.Identical_InContainer", A, B, ArrayIndex, PortFlags); }
	bool ShouldDuplicateValue() { return NativeCall<bool>(this, "UProperty.ShouldDuplicateValue"); }
	FString * GetCPPMacroType(FString * result, FString * ExtendedTypeText) { return NativeCall<FString *, FString *, FString *>(this, "UProperty.GetCPPMacroType", result, ExtendedTypeText); }
	bool ExportText_Direct(FString * ValueStr, const void * Data, const void * Delta, UObject * Parent, int PortFlags, UObject * ExportRootScope) { return NativeCall<bool, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UProperty.ExportText_Direct", ValueStr, Data, Delta, Parent, PortFlags, ExportRootScope); }
	bool IsLocalized() { return NativeCall<bool>(this, "UProperty.IsLocalized"); }
	bool ShouldPort(unsigned int PortFlags) { return NativeCall<bool, unsigned int>(this, "UProperty.ShouldPort", PortFlags); }
	FName * GetID(FName * result) { return NativeCall<FName *, FName *>(this, "UProperty.GetID", result); }
	bool SameType(UProperty * Other) { return NativeCall<bool, UProperty *>(this, "UProperty.SameType", Other); }
};

struct UNumericProperty : UProperty
{
	__int64 GetSignedIntPropertyValue(void const* Data) { return NativeCall<__int64, void const *>(this, "UNumericProperty.GetSignedIntPropertyValue", Data); }
	double GetFloatingPointPropertyValue(void const* Data) { return NativeCall<double, void const *>(this, "UNumericProperty.GetFloatingPointPropertyValue", Data); }
	unsigned __int64 GetUnsignedIntPropertyValue(void const* Data) { return NativeCall<unsigned __int64, void const *>(this, "UNumericProperty.GetUnsignedIntPropertyValue", Data); }
};

struct UBoolProperty : UProperty
{
	FieldValue<char> FieldSizeField() { return { this, "UBoolProperty.FieldSize" }; }
	FieldValue<char> ByteOffsetField() { return { this, "UBoolProperty.ByteOffset" }; }
	FieldValue<char> ByteMaskField() { return { this, "UBoolProperty.ByteMask" }; }
	FieldValue<char> FieldMaskField() { return { this, "UBoolProperty.FieldMask" }; }

	// Functions

	static void SetIntPropertyValue(void * Scratch, bool Value) { NativeCall<void, void *, bool>(nullptr, "TProperty_Numeric<signed char>.SetIntPropertyValue", Scratch, Value); }
	void SetFloatingPointPropertyValue(void * Data, long double Value) { NativeCall<void, void *, long double>(this, "TProperty_Numeric<signed char>.SetFloatingPointPropertyValue", Data, Value); }
	void SetNumericPropertyValueFromString(void * Data, const wchar_t * Value) { NativeCall<void, void *, const wchar_t *>(this, "TProperty_Numeric<signed char>.SetNumericPropertyValueFromString", Data, Value); }
	unsigned __int64 GetSignedIntPropertyValue(const void * Data) { return NativeCall<unsigned __int64, const void *>(this, "TProperty_Numeric<signed char>.GetSignedIntPropertyValue", Data); }
	long double GetFloatingPointPropertyValue(const void * Data) { return NativeCall<long double, const void *>(this, "TProperty_Numeric<signed char>.GetFloatingPointPropertyValue", Data); }
	FString * GetNumericPropertyValueToString(FString * result, const void * Data) { return NativeCall<FString *, FString *, const void *>(this, "TProperty_Numeric<signed char>.GetNumericPropertyValueToString", result, Data); }
	void SetBoolSize(const unsigned int InSize, const bool bIsNativeBool, const unsigned int InBitMask) { NativeCall<void, const unsigned int, const bool, const unsigned int>(this, "UBoolProperty.SetBoolSize", InSize, bIsNativeBool, InBitMask); }
	int GetMinAlignment() { return NativeCall<int>(this, "UBoolProperty.GetMinAlignment"); }
	FString * GetCPPType(FString * result, FString * ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString *, FString *, FString *, unsigned int>(this, "UBoolProperty.GetCPPType", result, ExtendedTypeText, CPPExportFlags); }
	FString * GetCPPMacroType(FString * result, FString * ExtendedTypeText) { return NativeCall<FString *, FString *, FString *>(this, "UBoolProperty.GetCPPMacroType", result, ExtendedTypeText); }
	void ExportTextItem(FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UBoolProperty.ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	bool Identical(const void * A, const void * B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>(this, "UBoolProperty.Identical", A, B, PortFlags); }
	void CopyValuesInternal(void * Dest, const void * Src, int Count) { NativeCall<void, void *, const void *, int>(this, "UBoolProperty.CopyValuesInternal", Dest, Src, Count); }
	void ClearValueInternal(void * Data) { NativeCall<void, void *>(this, "UBoolProperty.ClearValueInternal", Data); }
};

//not using this right now so leave empty
struct FObjectInstancingGraph
{
	/*UObject *SourceRoot;
	UObject *DestinationRoot;
	bool bCreatingArchetype;
	bool bEnableSubobjectInstancing;
	bool bLoadingObject;
	TMap<UObject *, UObject *, FDefaultSetAllocator, TDefaultMapKeyFuncs<UObject *, UObject *, 0> > SourceToDestinationMap;*/
};


struct Globals
{
	static UObject* StaticLoadObject(UClass* ObjectClass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename,
		unsigned int LoadFlags, DWORD64 Sandbox, bool bAllowObjectReconciliation)
	{
		return NativeCall<UObject*, UClass *, UObject *, const wchar_t *, const wchar_t *, unsigned int, DWORD64, bool>(
			nullptr, "Global.StaticLoadObject", ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox,
			bAllowObjectReconciliation);
	}

	//UObject *__fastcall StaticConstructObject(UClass *InClass, UObject *InOuter, FName InName, EObjectFlags InFlags, UObject *InTemplate, bool bCopyTransientsFromClassDefaults, FObjectInstancingGraph *InInstanceGraph)
	static UObject* StaticConstructObject(UClass* InClass, UObject* InOuter, FName InName, EObjectFlags InFlags,
		UObject* InTemplate, bool bCopyTransientsFromClassDefaults,
		FObjectInstancingGraph* InInstanceGraph)
	{
		return NativeCall<UObject*, UClass*, UObject*, FName, EObjectFlags, UObject*, bool, FObjectInstancingGraph*>(
			nullptr, "Global.StaticConstructObject", InClass, InOuter, InName, InFlags, InTemplate,
			bCopyTransientsFromClassDefaults, InInstanceGraph);
	}

	//UObject *__fastcall StaticFindObjectFastInternal(UClass *ObjectClass, UObject *ObjectPackage, FName ObjectName, bool bExactClass, bool bAnyPackage, EObjectFlags ExcludeFlags)

	template <typename T>
	static void GetPrivateStaticClassBody(const wchar_t* PackageName, const wchar_t* Name, T** ReturnClass,
		void(__cdecl *RegisterNativeFunc)());

	/*template <>
	static void GetPrivateStaticClassBody<UClass>(const wchar_t *PackageName, const wchar_t *Name, UClass **ReturnClass, void(__cdecl *RegisterNativeFunc)()) { return NativeCall<void, const wchar_t *, const wchar_t *, UClass **, void(__cdecl *)()>(nullptr, "Global.GetPrivateStaticClassBody<UClass>", PackageName, Name, ReturnClass, RegisterNativeFunc); }*/

	//void __fastcall GetPrivateStaticClassBody<UClass>(const wchar_t *PackageName, const wchar_t *Name, UClass **ReturnClass, void(__cdecl *RegisterNativeFunc)())

	//static char RaycastSingle(UWorld *World, FHitResult *OutHit, FVector *Start, FVector *End, ECollisionChannel TraceChannel, FCollisionQueryParams *Params, FCollisionResponseParams *ResponseParams, FCollisionObjectQueryParams *ObjectParams) { return NativeCall<char, UWorld *, FHitResult *, FVector *, FVector *, ECollisionChannel, FCollisionQueryParams *, FCollisionResponseParams *, FCollisionObjectQueryParams *>(nullptr, "Global.RaycastSingle", World, OutHit, Start, End, TraceChannel, Params, ResponseParams, ObjectParams); }
	//char RaycastSingle(UWorld *World, FHitResult *OutHit, FVector *Start, FVector *End, ECollisionChannel TraceChannel, FCollisionQueryParams *Params, FCollisionResponseParams *ResponseParams, FCollisionObjectQueryParams *ObjectParams)

	static bool HasClassCastFlags(UObject* object, ClassCastFlags flags)
	{
		const auto flags_value = static_cast<std::underlying_type<ClassCastFlags>::type>(flags);
		return object != nullptr && (object->ClassField()()->ClassCastFlagsField()() & flags_value) == flags_value;
	}

	static bool HasClassCastFlags(UClass* _class, ClassCastFlags flags)
	{
		const auto flags_value = static_cast<std::underlying_type<ClassCastFlags>::type>(flags);
		return _class != nullptr && (_class->ClassCastFlagsField()() & flags_value) == flags_value;
	}

	static DataValue<UEngine *> GEngine() { return { "Global.GEngine" }; }
};

template <>
inline void Globals::GetPrivateStaticClassBody<UClass>(const wchar_t* PackageName, const wchar_t* Name,
	UClass** ReturnClass, void(__cdecl *RegisterNativeFunc)())
{
	return NativeCall<void, const wchar_t *, const wchar_t *, UClass **, void(__cdecl *)()>(
		nullptr, "Global.GetPrivateStaticClassBody<UClass>", PackageName, Name, ReturnClass, RegisterNativeFunc);
}

struct FAssetData
{
	FName ObjectPath;
	FName PackageName;
	FName PackagePath;
	FName GroupNames;
	FName AssetName;
	FName AssetClass;
	char unk[80];// TMap<FName, FString<FName, FString> > TagsAndValues;
	TArray<int> ChunkIDs;

	// Functions

	bool IsUAsset() { return NativeCall<bool>(this, "FAssetData.IsUAsset"); }
	void PrintAssetData() { NativeCall<void>(this, "FAssetData.PrintAssetData"); }
	UObject * GetAsset() { return NativeCall<UObject *>(this, "FAssetData.GetAsset"); }
};

struct IModuleInterface
{
};

struct IAssetRegistryInterface : IModuleInterface
{
};

struct FAssetRegistryModule : IAssetRegistryInterface
{
	FAssetRegistry* Get() { return NativeCall<FAssetRegistry *>(this, "FAssetRegistryModule.Get"); }
};

struct FModuleManager
{
	static FModuleManager * Get() { return NativeCall<FModuleManager *>(nullptr, "FModuleManager.Get"); }
	void FindModules(const wchar_t * WildcardWithoutExtension, TArray<FName> * OutModules) { NativeCall<void, const wchar_t *, TArray<FName> *>(this, "FModuleManager.FindModules", WildcardWithoutExtension, OutModules); }
	bool IsModuleLoaded(FName InModuleName) { return NativeCall<bool, FName>(this, "FModuleManager.IsModuleLoaded", InModuleName); }
	bool IsModuleUpToDate(FName InModuleName) { return NativeCall<bool, FName>(this, "FModuleManager.IsModuleUpToDate", InModuleName); }
	void AddModule(FName InModuleName) { NativeCall<void, FName>(this, "FModuleManager.AddModule", InModuleName); }
	TSharedPtr<IModuleInterface> * LoadModule(TSharedPtr<IModuleInterface> * result, FName InModuleName, const bool bWasReloaded) { return NativeCall<TSharedPtr<IModuleInterface> *, TSharedPtr<IModuleInterface> *, FName, const bool>(this, "FModuleManager.LoadModule", result, InModuleName, bWasReloaded); }
	bool UnloadModule(FName InModuleName, bool bIsShutdown) { return NativeCall<bool, FName, bool>(this, "FModuleManager.UnloadModule", InModuleName, bIsShutdown); }
	void UnloadModulesAtShutdown() { NativeCall<void>(this, "FModuleManager.UnloadModulesAtShutdown"); }
	TSharedPtr<IModuleInterface> * GetModule(TSharedPtr<IModuleInterface> * result, FName InModuleName) { return NativeCall<TSharedPtr<IModuleInterface> *, TSharedPtr<IModuleInterface> *, FName>(this, "FModuleManager.GetModule", result, InModuleName); }
	static FString * GetCleanModuleFilename(FString * result, FName ModuleName, bool bGameModule) { return NativeCall<FString *, FString *, FName, bool>(nullptr, "FModuleManager.GetCleanModuleFilename", result, ModuleName, bGameModule); }
	static void GetModuleFilenameFormat(bool bGameModule, FString * OutPrefix, FString * OutSuffix) { NativeCall<void, bool, FString *, FString *>(nullptr, "FModuleManager.GetModuleFilenameFormat", bGameModule, OutPrefix, OutSuffix); }
	void AddBinariesDirectory(const wchar_t * InDirectory, bool bIsGameDirectory) { NativeCall<void, const wchar_t *, bool>(this, "FModuleManager.AddBinariesDirectory", InDirectory, bIsGameDirectory); }
	void FModuleInfo() { NativeCall<void>(this, "FModuleManager.FModuleInfo"); }
};

struct FAssetRegistry
{
	void CollectCodeGeneratorClasses() { NativeCall<void>(this, "FAssetRegistry.CollectCodeGeneratorClasses"); }
	void SearchAllAssets(bool bSynchronousSearch) { NativeCall<void, bool>(this, "FAssetRegistry.SearchAllAssets", bSynchronousSearch); }
	bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData> * OutAssetData) { return NativeCall<bool, FName, TArray<FAssetData> *>(this, "FAssetRegistry.GetAssetsByPackageName", PackageName, OutAssetData); }
	bool GetAssetsByPath(FName PackagePath, TArray<FAssetData> * OutAssetData, bool bRecursive) { return NativeCall<bool, FName, TArray<FAssetData> *, bool>(this, "FAssetRegistry.GetAssetsByPath", PackagePath, OutAssetData, bRecursive); }
	bool GetAssetsByClass(FName ClassName, TArray<FAssetData> * OutAssetData, bool bSearchSubClasses) { return NativeCall<bool, FName, TArray<FAssetData> *, bool>(this, "FAssetRegistry.GetAssetsByClass", ClassName, OutAssetData, bSearchSubClasses); }
	//bool GetAssetsByTagValues(TMultiMap<FName, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, FString, 1> > * AssetTagsAndValues, TArray<FAssetData> * OutAssetData) { return NativeCall<bool, TMultiMap<FName, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, FString, 1> > *, TArray<FAssetData> *>(this, "FAssetRegistry.GetAssetsByTagValues", AssetTagsAndValues, OutAssetData); }
	//bool GetAssets(FARFilter * Filter, TArray<FAssetData> * OutAssetData) { return NativeCall<bool, FARFilter *, TArray<FAssetData> *>(this, "FAssetRegistry.GetAssets", Filter, OutAssetData); }
	FAssetData * GetAssetByObjectPath(FAssetData * result, FName ObjectPath) { return NativeCall<FAssetData *, FAssetData *, FName>(this, "FAssetRegistry.GetAssetByObjectPath", result, ObjectPath); }
	bool GetAllAssets(TArray<FAssetData> * OutAssetData) { return NativeCall<bool, TArray<FAssetData> *>(this, "FAssetRegistry.GetAllAssets", OutAssetData); }
	bool GetDependencies(FName PackageName, TArray<FName> * OutDependencies) { return NativeCall<bool, FName, TArray<FName> *>(this, "FAssetRegistry.GetDependencies", PackageName, OutDependencies); }
	bool GetReferencers(FName PackageName, TArray<FName> * OutReferencers) { return NativeCall<bool, FName, TArray<FName> *>(this, "FAssetRegistry.GetReferencers", PackageName, OutReferencers); }
	bool GetAncestorClassNames(FName ClassName, TArray<FName> * OutAncestorClassNames) { return NativeCall<bool, FName, TArray<FName> *>(this, "FAssetRegistry.GetAncestorClassNames", ClassName, OutAncestorClassNames); }
	void GetAllCachedPaths(TArray<FString> * OutPathList) { NativeCall<void, TArray<FString> *>(this, "FAssetRegistry.GetAllCachedPaths", OutPathList); }
	void GetSubPaths(FString * InBasePath, TArray<FString> * OutPathList, bool bInRecurse) { NativeCall<void, FString *, TArray<FString> *, bool>(this, "FAssetRegistry.GetSubPaths", InBasePath, OutPathList, bInRecurse); }
	EAssetAvailability::Type GetAssetAvailability(FAssetData * AssetData) { return NativeCall<EAssetAvailability::Type, FAssetData *>(this, "FAssetRegistry.GetAssetAvailability", AssetData); }
	float GetAssetAvailabilityProgress(FAssetData * AssetData, EAssetAvailabilityProgressReportingType::Type ReportType) { return NativeCall<float, FAssetData *, EAssetAvailabilityProgressReportingType::Type>(this, "FAssetRegistry.GetAssetAvailabilityProgress", AssetData, ReportType); }
	bool GetAssetAvailabilityProgressTypeSupported(EAssetAvailabilityProgressReportingType::Type ReportType) { return NativeCall<bool, EAssetAvailabilityProgressReportingType::Type>(this, "FAssetRegistry.GetAssetAvailabilityProgressTypeSupported", ReportType); }
	void PrioritizeAssetInstall(FAssetData * AssetData) { NativeCall<void, FAssetData *>(this, "FAssetRegistry.PrioritizeAssetInstall", AssetData); }
	bool AddPath(FString * PathToAdd) { return NativeCall<bool, FString *>(this, "FAssetRegistry.AddPath", PathToAdd); }
	bool RemovePath(FString * PathToRemove) { return NativeCall<bool, FString *>(this, "FAssetRegistry.RemovePath", PathToRemove); }
	void ScanPathsSynchronous(TArray<FString> * InPaths, bool bForceRescan) { NativeCall<void, TArray<FString> *, bool>(this, "FAssetRegistry.ScanPathsSynchronous", InPaths, bForceRescan); }
	void PrioritizeSearchPath(FString * PathToPrioritize) { NativeCall<void, FString *>(this, "FAssetRegistry.PrioritizeSearchPath", PathToPrioritize); }
	void AssetCreated(UObject * NewAsset) { NativeCall<void, UObject *>(this, "FAssetRegistry.AssetCreated", NewAsset); }
	void AssetDeleted(UObject * DeletedAsset) { NativeCall<void, UObject *>(this, "FAssetRegistry.AssetDeleted", DeletedAsset); }
	void AssetRenamed(UObject * RenamedAsset, FString * OldObjectPath) { NativeCall<void, UObject *, FString *>(this, "FAssetRegistry.AssetRenamed", RenamedAsset, OldObjectPath); }
	bool IsLoadingAssets() { return NativeCall<bool>(this, "FAssetRegistry.IsLoadingAssets"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FAssetRegistry.Tick", DeltaTime); }
	static bool IsUsingWorldAssets() { return NativeCall<bool>(nullptr, "FAssetRegistry.IsUsingWorldAssets"); }
	void ScanPathsSynchronous_Internal(TArray<FString> * InPaths, bool bForceRescan, bool bUseCache) { NativeCall<void, TArray<FString> *, bool, bool>(this, "FAssetRegistry.ScanPathsSynchronous_Internal", InPaths, bForceRescan, bUseCache); }
	void PathDataGathered(const long double TickStartTime, TArray<FString> * PathResults) { NativeCall<void, const long double, TArray<FString> *>(this, "FAssetRegistry.PathDataGathered", TickStartTime, PathResults); }
	bool RemoveDependsNode(FName PackageName) { return NativeCall<bool, FName>(this, "FAssetRegistry.RemoveDependsNode", PackageName); }
	bool RemoveAssetPath(FString * PathToRemove, bool bEvenIfAssetsStillExist) { return NativeCall<bool, FString *, bool>(this, "FAssetRegistry.RemoveAssetPath", PathToRemove, bEvenIfAssetsStillExist); }
	FString * ExportTextPathToObjectName(FString * result, FString * InExportTextPath) { return NativeCall<FString *, FString *, FString *>(this, "FAssetRegistry.ExportTextPathToObjectName", result, InExportTextPath); }
	void AddAssetData(FAssetData * AssetData) { NativeCall<void, FAssetData *>(this, "FAssetRegistry.AddAssetData", AssetData); }
	bool RemoveAssetData(FAssetData * AssetData) { return NativeCall<bool, FAssetData *>(this, "FAssetRegistry.RemoveAssetData", AssetData); }
	void OnContentPathMounted(FString * InAssetPath, FString * FileSystemPath) { NativeCall<void, FString *, FString *>(this, "FAssetRegistry.OnContentPathMounted", InAssetPath, FileSystemPath); }
	void OnContentPathDismounted(FString * InAssetPath, FString * FileSystemPath) { NativeCall<void, FString *, FString *>(this, "FAssetRegistry.OnContentPathDismounted", InAssetPath, FileSystemPath); }
	//static void GetAssets(FAssetData ** First, const int Num, TDereferenceWrapper<FAssetData *, `FAssetRegistry::GetAssets'::`124'::FCompareFAssetData> * Predicate) { NativeCall<void, FAssetData **, const int, TDereferenceWrapper<FAssetData *, `FAssetRegistry::GetAssets'::`124'::FCompareFAssetData> *>(nullptr, "FAssetRegistry.GetAssets", First, Num, Predicate); }
};

struct UTexture2D
{
	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "UTexture2D.StaticClass"); }
};

struct FNavigationFilterFlags
{
	uint32_t Flags;
};

struct __declspec(align(8)) UNavArea : UObject
{
	float DefaultCost;
	float FixedAreaEnteringCost;
	FColor DrawColor;
	uint32_t unk;
	uint16_t AreaFlags;
};

struct __declspec(align(8)) FNavigationFilterArea
{
	TSubclassOf<UNavArea> AreaClass;
	float TravelCostOverride;
	float EnteringCostOverride;
	uint32_t bIsExcluded : 1;
	uint32_t bOverrideTravelCost : 1;
	uint32_t bOverrideEnteringCost : 1;
};

struct UNavigationQueryFilter : UObject
{
	//TArray<FNavigationFilterArea, FDefaultAllocator> Areas;
	TArray<FNavigationFilterArea> Areas;
	FNavigationFilterFlags IncludeFlags;
	FNavigationFilterFlags ExcludeFlags;
};


struct FCollisionQueryParams
{
	FName TraceTag;
	FName OwnerTag;
	bool bTraceAsyncScene;
	bool bTraceComplex;
	bool bFindInitialOverlaps;
	bool bReturnFaceIndex;
	bool bReturnPhysicalMaterial;
	TArray<unsigned int> IgnoreActors;
};

struct FCollisionResponseContainer
{
	char unk[32];
};

struct FCollisionResponseParams
{
	FCollisionResponseContainer CollisionResponse;
};

struct FCollisionObjectQueryParams
{
	int ObjectTypesToQuery;
};