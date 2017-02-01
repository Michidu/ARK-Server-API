#pragma once

#include "Base.h"

template <typename RT>
RT NativeCall(DWORD64 _this, const std::string& structure, const std::string& funcName)
{
	return static_cast<RT(_cdecl*)(DWORD64)>(GetAddress(structure, funcName))(_this);
}

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(DWORD64 _this, const std::string& structure, const std::string& funcName, Args&&... args)
{
	return static_cast<RT(_cdecl*)(DWORD64, ArgsTypes ...)>(GetAddress(structure, funcName))(_this, std::forward<Args>(args)...);
}

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(std::nullptr_t, const std::string& structure, const std::string& funcName, Args&&... args)
{
	return static_cast<RT(_cdecl*)(ArgsTypes ...)>(GetAddress(structure, funcName))(std::forward<Args>(args)...);
}

template <typename RT>
RT GetNativeField(const void* _this, const std::string& structure, const std::string& fieldName)
{
	return *reinterpret_cast<RT*>(GetAddress(_this, structure, fieldName));
}

template <typename RT>
RT GetNativePointerField(const void* _this, const std::string& structure, const std::string& fieldName)
{
	return reinterpret_cast<RT>(GetAddress(_this, structure, fieldName));
}

template <typename T>
void SetNativeField(LPVOID _this, const std::string& structure, const std::string& fieldName, T newValue)
{
	*reinterpret_cast<T*>(GetAddress(_this, structure, fieldName)) = newValue;
}

// Replacement for TWeakObjectPtr

template <typename T>
struct AWeakObjectPtr
{
	int ObjectIndex;
	int ObjectSerialNumber;

	__forceinline T& operator*() const
	{
		return *Get();
	}

	__forceinline T* operator->() const
	{
		return Get();
	}

	T* Get(bool bEvenIfPendingKill = false) const { return NativeCall<T*, bool>((DWORD64)this, "FWeakObjectPtr", "Get", bEvenIfPendingKill); }
};

template <typename T>
struct TSubclassOf
{
	UClass* uClass;
};

class FUniqueNetId
{
public:
	unsigned __int64 GetUniqueNetIdField() const { return GetNativeField<unsigned __int64>(this, "FUniqueNetIdSteam", "UniqueNetId"); }

	// Functions

	int GetSize() { return NativeCall<int>((DWORD64)this, "FUniqueNetIdSteam", "GetSize"); }
	FString* ToString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "FUniqueNetIdSteam", "ToString", result); }
	bool IsValid() { return NativeCall<bool>((DWORD64)this, "FUniqueNetIdSteam", "IsValid"); }
	FString* ToDebugString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "FUniqueNetIdSteam", "ToDebugString", result); }
};

class UClass
{
public:
	unsigned int GetClassFlagsField() const { return GetNativeField<unsigned int>(this, "UClass", "ClassFlags"); }
	unsigned __int64 GetClassCastFlagsField() const { return GetNativeField<unsigned __int64>(this, "UClass", "ClassCastFlags"); }
	int GetClassUniqueField() const { return GetNativeField<int>(this, "UClass", "ClassUnique"); }
	UClass* GetClassWithinField() const { return GetNativeField<UClass *>(this, "UClass", "ClassWithin"); }
	UObject* GetClassGeneratedByField() const { return GetNativeField<UObject *>(this, "UClass", "ClassGeneratedBy"); }
	bool GetbIsGameClassField() const { return GetNativeField<bool>(this, "UClass", "bIsGameClass"); }
	FName GetClassConfigNameField() const { return GetNativeField<FName>(this, "UClass", "ClassConfigName"); }
	void SetClassConfigNameField(FName newValue) { SetNativeField(this, "UClass", "ClassConfigName", newValue); }
	TArray<UField *, FDefaultAllocator> GetNetFieldsField() const { return GetNativeField<TArray<UField *, FDefaultAllocator>>(this, "UClass", "NetFields"); }
	void SetNetFieldsField(TArray<UField *, FDefaultAllocator> newValue) { SetNativeField(this, "UClass", "NetFields", newValue); }
	UObject* GetClassDefaultObjectField() const { return GetNativeField<UObject *>(this, "UClass", "ClassDefaultObject"); }
	bool GetbCookedField() const { return GetNativeField<bool>(this, "UClass", "bCooked"); }

	// Functions

	UObject* GetDefaultObject(bool bCreateIfNeeded) { return NativeCall<UObject *, bool>((DWORD64)this, "UClass", "GetDefaultObject", bCreateIfNeeded); }
	void AddFunctionToFunctionMap(UFunction* NewFunction) { NativeCall<void, UFunction *>((DWORD64)this, "UClass", "AddFunctionToFunctionMap", NewFunction); }
	void PostInitProperties() { NativeCall<void>((DWORD64)this, "UClass", "PostInitProperties"); }
	UObject* GetDefaultSubobjectByName(FName ToFind) { return NativeCall<UObject *, FName>((DWORD64)this, "UClass", "GetDefaultSubobjectByName", ToFind); }
	void GetDefaultObjectSubobjects(TArray<UObject *, FDefaultAllocator>* OutDefaultSubobjects) { NativeCall<void, TArray<UObject *, FDefaultAllocator> *>((DWORD64)this, "UClass", "GetDefaultObjectSubobjects", OutDefaultSubobjects); }
	UObject* CreateDefaultObject() { return NativeCall<UObject *>((DWORD64)this, "UClass", "CreateDefaultObject"); }
	FFeedbackContext* GetDefaultPropertiesFeedbackContext() { return NativeCall<FFeedbackContext *>((DWORD64)this, "UClass", "GetDefaultPropertiesFeedbackContext"); }
	FName* GetDefaultObjectName(FName* result) { return NativeCall<FName *, FName *>((DWORD64)this, "UClass", "GetDefaultObjectName", result); }
	void DeferredRegister(UClass* UClassStaticClass, const wchar_t* PackageName, const wchar_t* Name) { NativeCall<void, UClass *, const wchar_t *, const wchar_t *>((DWORD64)this, "UClass", "DeferredRegister", UClassStaticClass, PackageName, Name); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>((DWORD64)this, "UClass", "Rename", InName, NewOuter, Flags); }
	void Bind() { NativeCall<void>((DWORD64)this, "UClass", "Bind"); }
	const wchar_t* GetPrefixCPP() { return NativeCall<const wchar_t *>((DWORD64)this, "UClass", "GetPrefixCPP"); }
	FString* GetDescription(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UClass", "GetDescription", result); }
	void FinishDestroy() { NativeCall<void>((DWORD64)this, "UClass", "FinishDestroy"); }
	void PostLoad() { NativeCall<void>((DWORD64)this, "UClass", "PostLoad"); }
	void Link(FArchive* Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive *, bool>((DWORD64)this, "UClass", "Link", Ar, bRelinkExistingProperties); }
	void SetSuperStruct(UStruct* NewSuperStruct) { NativeCall<void, UStruct *>((DWORD64)this, "UClass", "SetSuperStruct", NewSuperStruct); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive *>((DWORD64)this, "UClass", "Serialize", Ar); }
	bool ImplementsInterface(UClass* SomeInterface) { return NativeCall<bool, UClass *>((DWORD64)this, "UClass", "ImplementsInterface", SomeInterface); }
	void SerializeDefaultObject(UObject* Object, FArchive* Ar) { NativeCall<void, UObject *, FArchive *>((DWORD64)this, "UClass", "SerializeDefaultObject", Object, Ar); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>((DWORD64)this, "UClass", "PurgeClass", bRecompilingOnLoad); }
	bool HasProperty(UProperty* InProperty) { return NativeCall<bool, UProperty *>((DWORD64)this, "UClass", "HasProperty", InProperty); }
	FString* GetConfigName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UClass", "GetConfigName", result); }
	unsigned int EmitStructArrayBegin(int Offset, FName* DebugName, int Stride) { return NativeCall<unsigned int, int, FName *, int>((DWORD64)this, "UClass", "EmitStructArrayBegin", Offset, DebugName, Stride); }
	void AssembleReferenceTokenStream() { NativeCall<void>((DWORD64)this, "UClass", "AssembleReferenceTokenStream"); }
};

class UObjectBase
{
public:
	int GetInternalIndexField() const { return GetNativeField<int>(this, "UObjectBase", "InternalIndex"); }
	UClass* GetClassField() const { return GetNativeField<UClass *>(this, "UObjectBase", "Class"); }
	FName GetNameField() const { return GetNativeField<FName>(this, "UObjectBase", "Name"); }
	UObject* GetOuterField() const { return GetNativeField<UObject *>(this, "UObjectBase", "Outer"); }
};

class UObjectBaseUtility : public UObjectBase
{
public:
	int GetLinkerUE4Version() { return NativeCall<int>((DWORD64)this, "UObjectBaseUtility", "GetLinkerUE4Version"); }
	int GetLinkerLicenseeUE4Version() { return NativeCall<int>((DWORD64)this, "UObjectBaseUtility", "GetLinkerLicenseeUE4Version"); }
	FString* GetPathName(FString* result, UObject* StopOuter) { return NativeCall<FString *, FString *, UObject *>((DWORD64)this, "UObjectBaseUtility", "GetPathName", result, StopOuter); }
	void GetPathName(UObject* StopOuter, FString* ResultString) { NativeCall<void, UObject *, FString *>((DWORD64)this, "UObjectBaseUtility", "GetPathName", StopOuter, ResultString); }
	FString* GetFullName(FString* result, UObject* StopOuter) { return NativeCall<FString *, FString *, UObject *>((DWORD64)this, "UObjectBaseUtility", "GetFullName", result, StopOuter); }
	UPackage* GetOutermost() { return NativeCall<UPackage *>((DWORD64)this, "UObjectBaseUtility", "GetOutermost"); }
	void MarkPackageDirty() { NativeCall<void>((DWORD64)this, "UObjectBaseUtility", "MarkPackageDirty"); }
	bool IsIn(UObject* SomeOuter) { return NativeCall<bool, UObject *>((DWORD64)this, "UObjectBaseUtility", "IsIn", SomeOuter); }
	bool IsA(UClass* SomeBase) { return NativeCall<bool, UClass *>((DWORD64)this, "UObjectBaseUtility", "IsA", SomeBase); }
	void* GetInterfaceAddress(UClass* InterfaceClass) { return NativeCall<void *, UClass *>((DWORD64)this, "UObjectBaseUtility", "GetInterfaceAddress", InterfaceClass); }
	bool IsDefaultSubobject() { return NativeCall<bool>((DWORD64)this, "UObjectBaseUtility", "IsDefaultSubobject"); }
	int GetLinkerIndex() { return NativeCall<int>((DWORD64)this, "UObjectBaseUtility", "GetLinkerIndex"); }
};
