#pragma once

#include "Base.h"
#include <comdef.h>

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

// Base types

#pragma warning (push)
#pragma warning (disable: 4267)

template <class T>
struct TArray
{
	T* Data;
	uint32_t Count;
	uint32_t Max;

	TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	uint32_t Num() const
	{
		return this->Count;
	};

	T& operator()(int i)
	{
		return this->Data[i];
	};

	const T& operator()(int i) const
	{
		return this->Data[i];
	};

	T& operator [](int i)
	{
		return this->Data[i];
	}

	T operator [](int i) const
	{
		return this->Data[i];
	}

	bool Add(T InputData)
	{
		T* tmp = reinterpret_cast<T*>(realloc(Data, sizeof(T) * (Count + 1)));
		if (tmp == nullptr)
			return false;

		Data = tmp;

		Data[Count++] = InputData;
		Max = Count;

		return true;
	};

	FORCEINLINE bool IsValidIndex(uint32_t Index) const
	{
		return Index >= 0 && Index < Count;
	}

	void Clear()
	{
		free(Data);
		Count = Max = 0;
	};
};

struct FString : TArray<wchar_t>
{
	FString()
	{
	}

	FString(wchar_t* Other)
	{
		this->Max = this->Count = *Other ? (wcslen(Other) + 1) : 0;

		if (this->Count)
			this->Data = Other;
	}

	/*FString(const std::string& Other)
	{
		
	}*/

	~FString()
	{
	}

	FString operator =(wchar_t* Other)
	{
		if (this->Data != Other)
		{
			this->Max = this->Count = *Other ? (wcslen(Other) + 1) : 0;

			if (this->Count)
				this->Data = Other;
		}

		return *this;
	}

	bool operator ==(const FString& rhs) const
	{
		return this->Data == rhs.Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}

	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? this->Data : TEXT("");
	}

	static FORCEINLINE FString FromInt(int Num)
	{
		FString Ret;
		Ret.AppendInt(Num);
		return Ret;
	}

	bool Split(FString* InS, FString* LeftS, FString* RightS, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir) const { return NativeCall<bool, FString *, FString *, FString *, ESearchCase::Type, ESearchDir::Type>((DWORD64)this, "FString", "Split", InS, LeftS, RightS, SearchCase, SearchDir); }
	void TrimToNullTerminator() const { NativeCall<void>((DWORD64)this, "FString", "TrimToNullTerminator"); }
	int Find(const wchar_t* SubStr, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir, int StartPosition) const { return NativeCall<int, const wchar_t *, ESearchCase::Type, ESearchDir::Type, int>((DWORD64)this, "FString", "Find", SubStr, SearchCase, SearchDir, StartPosition); }
	FString* ToUpper(FString* result) const { return NativeCall<FString *, FString *>((DWORD64)this, "FString", "ToUpper", result); }
	FString* ToLower(FString* result) const { return NativeCall<FString *, FString *>((DWORD64)this, "FString", "ToLower", result); }
	bool StartsWith(const FString& InPrefix, ESearchCase::Type SearchCase) const { return NativeCall<bool, const FString&, ESearchCase::Type>((DWORD64)this, "FString", "StartsWith", InPrefix, SearchCase); }
	bool EndsWith(FString* InSuffix, ESearchCase::Type SearchCase) const { return NativeCall<bool, FString *, ESearchCase::Type>((DWORD64)this, "FString", "EndsWith", InSuffix, SearchCase); }
	bool RemoveFromEnd(FString* InSuffix, ESearchCase::Type SearchCase) const { return NativeCall<bool, FString *, ESearchCase::Type>((DWORD64)this, "FString", "RemoveFromEnd", InSuffix, SearchCase); }
	FString* Trim(FString* result) const { return NativeCall<FString *, FString *>((DWORD64)this, "FString", "Trim", result); }
	FString* TrimTrailing(FString* result) const { return NativeCall<FString *, FString *>((DWORD64)this, "FString", "TrimTrailing", result); }
	FString* TrimQuotes(FString* result, bool* bQuotesRemoved) const { return NativeCall<FString *, FString *, bool *>((DWORD64)this, "FString", "TrimQuotes", result, bQuotesRemoved); }
	static FString* FormatAsNumber(FString* result, int InNumber) { return NativeCall<FString *, FString *, int>(nullptr, "FString", "FormatAsNumber", result, InNumber); }
	void AppendInt(int InNum) const { NativeCall<void, int>((DWORD64)this, "FString", "AppendInt", InNum); }
	static FString* FromBlob(FString* result, const char* SrcBuffer, const unsigned int SrcSize) { return NativeCall<FString *, FString *, const char *, const unsigned int>(nullptr, "FString", "FromBlob", result, SrcBuffer, SrcSize); }
	static bool ToBlob(FString* Source, char* DestBuffer, const unsigned int DestSize) { return NativeCall<bool, FString *, char *, const unsigned int>(nullptr, "FString", "ToBlob", Source, DestBuffer, DestSize); }
	static FString* Chr(FString* result, wchar_t Ch) { return NativeCall<FString *, FString *, wchar_t>(nullptr, "FString", "Chr", result, Ch); }
	FString* LeftPad(FString* result, int ChCount) const { return NativeCall<FString *, FString *, int>((DWORD64)this, "FString", "LeftPad", result, ChCount); }
	FString* RightPad(FString* result, int ChCount) const { return NativeCall<FString *, FString *, int>((DWORD64)this, "FString", "RightPad", result, ChCount); }
	bool IsNumeric() const { return NativeCall<bool>((DWORD64)this, "FString", "IsNumeric"); }
	int ParseIntoArray(TArray<FString>* InArray, const wchar_t* pchDelim, bool InCullEmpty) const { return NativeCall<int, TArray<FString> *, const wchar_t *, bool>((DWORD64)this, "FString", "ParseIntoArray", InArray, pchDelim, InCullEmpty); }
	bool MatchesWildcard(FString* InWildcard, ESearchCase::Type SearchCase) const { return NativeCall<bool, FString *, ESearchCase::Type>((DWORD64)this, "FString", "MatchesWildcard", InWildcard, SearchCase); }
	FString* Replace(FString* result, const wchar_t* From, const wchar_t* To, ESearchCase::Type SearchCase) const { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *, ESearchCase::Type>((DWORD64)this, "FString", "Replace", result, From, To, SearchCase); }
	int ReplaceInline(const wchar_t* SearchText, const wchar_t* ReplacementText, ESearchCase::Type SearchCase) const { return NativeCall<int, const wchar_t *, const wchar_t *, ESearchCase::Type>((DWORD64)this, "FString", "ReplaceInline", SearchText, ReplacementText, SearchCase); }
	FString* ReplaceQuotesWithEscapedQuotes(FString* result) const { return NativeCall<FString *, FString *>((DWORD64)this, "FString", "ReplaceQuotesWithEscapedQuotes", result); }
	FString* ReplaceEscapedCharWithChar(FString* result, TArray<wchar_t>* Chars) const { return NativeCall<FString *, FString *, TArray<wchar_t> *>((DWORD64)this, "FString", "ReplaceEscapedCharWithChar", result, Chars); }
	FString* Append(const wchar_t* Text, int Count) const { return NativeCall<FString *, const wchar_t *, int>((DWORD64)this, "FString", "Append", Text, Count); }
};

#pragma warning (pop)

struct FVector
{
	float X;
	float Y;
	float Z;

	FORCEINLINE FString ToString() const
	{
		wchar_t buffer[256];
		swprintf_s(buffer, TEXT("X=%3.3f Y=%3.3f Z=%3.3f"), X, Y, Z);

		return FString(buffer);
	}
};

struct FRotator
{
	float Pitch;
	float Yaw;
	float Roll;
};

struct FVector2D
{
	float X;
	float Y;
};

struct FName
{
	int ComparisonIndex;
	unsigned int Number;

	// Functions

	FName() : ComparisonIndex(0), Number(0)
	{
	}

	//static TStaticIndirectArrayThreadSafeRead<FNameEntry, 2097152, 16384> * GetNames() { return NativeCall<TStaticIndirectArrayThreadSafeRead<FNameEntry, 2097152, 16384> *>(nullptr, "FName", "GetNames"); }
	static FString* NameToDisplayString(FString* result, FString* InDisplayName, const bool bIsBool) { return NativeCall<FString *, FString *, FString *, const bool>(nullptr, "FName", "NameToDisplayString", result, InDisplayName, bIsBool); }
	FName(const wchar_t* Name, EFindName FindType, bool __formal) { NativeCall<void, const wchar_t *, EFindName, bool>((DWORD64)this, "FName", "FName", Name, FindType, __formal); }
	bool operator==(const wchar_t* Other) { return NativeCall<bool, const wchar_t *>((DWORD64)this, "FName", "operator==", Other); }
	int Compare(FName* Other) { return NativeCall<int, FName *>((DWORD64)this, "FName", "Compare", Other); }
	void Init(const wchar_t* InName, int InNumber, EFindName FindType, bool bSplitName, int HardcodeIndex) { NativeCall<void, const wchar_t *, int, EFindName, bool, int>((DWORD64)this, "FName", "Init", InName, InNumber, FindType, bSplitName, HardcodeIndex); }
	void ToString(FString* Out) { NativeCall<void, FString *>((DWORD64)this, "FName", "ToString", Out); }
	void AppendString(FString* Out) { NativeCall<void, FString *>((DWORD64)this, "FName", "AppendString", Out); }
	static bool SplitNameWithCheck(const wchar_t* OldName, wchar_t* NewName, int NewNameLen, int* NewNumber) { return NativeCall<bool, const wchar_t *, wchar_t *, int, int *>(nullptr, "FName", "SplitNameWithCheck", OldName, NewName, NewNameLen, NewNumber); }
	bool IsValidXName() { return NativeCall<bool>((DWORD64)this, "FName", "IsValidXName"); }
	void Init(const char* InName, int InNumber, EFindName FindType, bool bSplitName, int HardcodeIndex) { NativeCall<void, const char *, int, EFindName, bool, int>((DWORD64)this, "FName", "Init", InName, InNumber, FindType, bSplitName, HardcodeIndex); }
};

struct FTransform
{
	__m128 Rotation;
	__m128 Translation;
	__m128 Scale3D;
};

template <class TEnum>
class TEnumAsByte
{
public:
	TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	operator TEnum() const
	{
		return static_cast<TEnum>(value);
	}

	TEnum GetValue() const
	{
		return static_cast<TEnum>(value);
	}

private:
	uint8_t value;
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

struct FLinearColor
{
	float R,
	      G,
	      B,
	      A;
};

template <typename ObjectType>
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

	FText* GetEmpty() { return NativeCall<FText *>((DWORD64)this, "FText", "GetEmpty"); }
	int CompareTo(FText* Other, ETextComparisonLevel::Type ComparisonLevel) { return NativeCall<int, FText *, ETextComparisonLevel::Type>((DWORD64)this, "FText", "CompareTo", Other, ComparisonLevel); }
	static FText* TrimPreceding(FText* result, FText* InText) { return NativeCall<FText *, FText *, FText *>(nullptr, "FText", "TrimPreceding", result, InText); }
	static FText* TrimTrailing(FText* result, FText* InText) { return NativeCall<FText *, FText *, FText *>(nullptr, "FText", "TrimTrailing", result, InText); }
	static FText* TrimPrecedingAndTrailing(FText* result, FText* InText) { return NativeCall<FText *, FText *, FText *>(nullptr, "FText", "TrimPrecedingAndTrailing", result, InText); }
	static bool FindText(FString* Namespace, FString* Key, FText* OutText, FString*const SourceString) { return NativeCall<bool, FString *, FString *, FText *, FString *const>(nullptr, "FText", "FindText", Namespace, Key, OutText, SourceString); }
	FText* CreateChronologicalText() { return NativeCall<FText *>((DWORD64)this, "FText", "CreateChronologicalText"); }
	static FText* FromName(FText* result, FName* Val) { return NativeCall<FText *, FText *, FName *>(nullptr, "FText", "FromName", result, Val); }
	static FText* FromString() { return NativeCall<FText *>(nullptr, "FText", "FromString"); }
	FString* ToString() { return NativeCall<FString *>((DWORD64)this, "FText", "ToString"); }
	bool ShouldGatherForLocalization() { return NativeCall<bool>((DWORD64)this, "FText", "ShouldGatherForLocalization"); }
	TSharedPtr<FString>* GetSourceString(TSharedPtr<FString>* result) { return NativeCall<TSharedPtr<FString> *, TSharedPtr<FString> *>((DWORD64)this, "FText", "GetSourceString", result); }
};

struct FColor
{
	union
	{
		struct
		{
			unsigned __int8 B, G, R, A;
		};

		unsigned __int32 AlignmentDummy;
	};
};

struct FIntVector
{
};

struct FDateTime
{
};

template <typename T>
struct TWeakObjectPtr
{
	int ObjectIndex;
	int ObjectSerialNumber;

	FORCEINLINE T& operator*() const
	{
		return *Get();
	}

	FORCEINLINE T* operator->() const
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

struct FUniqueNetId
{
public:
	unsigned __int64 GetUniqueNetIdField() const { return GetNativeField<unsigned __int64>(this, "FUniqueNetIdSteam", "UniqueNetId"); }

	// Functions

	int GetSize() { return NativeCall<int>((DWORD64)this, "FUniqueNetIdSteam", "GetSize"); }
	FString* ToString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "FUniqueNetIdSteam", "ToString", result); }
	bool IsValid() { return NativeCall<bool>((DWORD64)this, "FUniqueNetIdSteam", "IsValid"); }
	FString* ToDebugString(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "FUniqueNetIdSteam", "ToDebugString", result); }
};

struct UObjectBase
{
public:
	int GetInternalIndexField() const { return GetNativeField<int>(this, "UObjectBase", "InternalIndex"); }
	UClass* GetClassField() const { return GetNativeField<UClass *>(this, "UObjectBase", "Class"); }
	FName GetNameField() const { return GetNativeField<FName>(this, "UObjectBase", "Name"); }
	UObject* GetOuterField() const { return GetNativeField<UObject *>(this, "UObjectBase", "Outer"); }
};

struct UObjectBaseUtility : public UObjectBase
{
public:
	int GetLinkerUE4Version() { return NativeCall<int>((DWORD64)this, "UObjectBaseUtility", "GetLinkerUE4Version"); }
	int GetLinkerLicenseeUE4Version() { return NativeCall<int>((DWORD64)this, "UObjectBaseUtility", "GetLinkerLicenseeUE4Version"); }
	FString* GetPathName(FString* result, UObject* StopOuter) { return NativeCall<FString *, FString *, UObject *>((DWORD64)this, "UObjectBaseUtility", "GetPathName", result, StopOuter); }
	void GetPathName(UObject* StopOuter, FString* ResultString) { NativeCall<void, UObject *, FString *>((DWORD64)this, "UObjectBaseUtility", "GetPathName", StopOuter, ResultString); }
	FString* GetFullName(FString* result, UObject* StopOuter) { return NativeCall<FString *, FString *, UObject *>((DWORD64)this, "UObjectBaseUtility", "GetFullName", result, StopOuter); }
	void MarkPackageDirty() { NativeCall<void>((DWORD64)this, "UObjectBaseUtility", "MarkPackageDirty"); }
	bool IsIn(UObject* SomeOuter) { return NativeCall<bool, UObject *>((DWORD64)this, "UObjectBaseUtility", "IsIn", SomeOuter); }
	bool IsA(UClass* SomeBase) { return NativeCall<bool, UClass *>((DWORD64)this, "UObjectBaseUtility", "IsA", SomeBase); }
	void* GetInterfaceAddress(UClass* InterfaceClass) { return NativeCall<void *, UClass *>((DWORD64)this, "UObjectBaseUtility", "GetInterfaceAddress", InterfaceClass); }
	bool IsDefaultSubobject() { return NativeCall<bool>((DWORD64)this, "UObjectBaseUtility", "IsDefaultSubobject"); }
	int GetLinkerIndex() { return NativeCall<int>((DWORD64)this, "UObjectBaseUtility", "GetLinkerIndex"); }
};

struct UObject : UObjectBaseUtility
{
	static UClass* StaticClass() { return NativeCall<UClass *>(nullptr, "UObject", "StaticClass"); }
	void ExecuteUbergraph(int EntryPoint) { NativeCall<void, int>((DWORD64)this, "UObject", "ExecuteUbergraph", EntryPoint); }
	bool AreAllOuterObjectsValid() { return NativeCall<bool>((DWORD64)this, "UObject", "AreAllOuterObjectsValid"); }
	FName* GetExporterName(FName* result) { return NativeCall<FName *, FName *>((DWORD64)this, "UObject", "GetExporterName", result); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UObject", "GetDetailedInfoInternal", result); }
	UObject* GetArchetype() { return NativeCall<UObject *>((DWORD64)this, "UObject", "GetArchetype"); }
	bool IsBasedOnArchetype(UObject*const SomeObject) { return NativeCall<bool, UObject *const>((DWORD64)this, "UObject", "IsBasedOnArchetype", SomeObject); }
	bool IsInBlueprint() { return NativeCall<bool>((DWORD64)this, "UObject", "IsInBlueprint"); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>((DWORD64)this, "UObject", "Rename", InName, NewOuter, Flags); }
	void LoadLocalized(UObject* LocBase, bool bLoadHierachecally) { NativeCall<void, UObject *, bool>((DWORD64)this, "UObject", "LoadLocalized", LocBase, bLoadHierachecally); }
	void BeginDestroy() { NativeCall<void>((DWORD64)this, "UObject", "BeginDestroy"); }
	void FinishDestroy() { NativeCall<void>((DWORD64)this, "UObject", "FinishDestroy"); }
	FString* GetDetailedInfo(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UObject", "GetDetailedInfo", result); }
	void ConditionalPostLoad() { NativeCall<void>((DWORD64)this, "UObject", "ConditionalPostLoad"); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>((DWORD64)this, "UObject", "Modify", bAlwaysMarkDirty); }
	bool IsSelected() { return NativeCall<bool>((DWORD64)this, "UObject", "IsSelected"); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>((DWORD64)this, "UObject", "CheckDefaultSubobjectsInternal"); }
	bool IsAsset() { return NativeCall<bool>((DWORD64)this, "UObject", "IsAsset"); }
	bool IsSafeForRootSet() { return NativeCall<bool>((DWORD64)this, "UObject", "IsSafeForRootSet"); }
	void ConditionalShutdownAfterError() { NativeCall<void>((DWORD64)this, "UObject", "ConditionalShutdownAfterError"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>((DWORD64)this, "UObject", "IsNameStableForNetworking"); }
	bool IsFullNameStableForNetworking() { return NativeCall<bool>((DWORD64)this, "UObject", "IsFullNameStableForNetworking"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>((DWORD64)this, "UObject", "IsSupportedForNetworking"); }
	//void CallFunction(FFrame * Stack, void *const  Result, UFunction * Function) { NativeCall<void, FFrame *, void *const, UFunction *>((DWORD64)this, "UObject", "CallFunction", Stack, Result, Function); }
	//bool CallFunctionByNameWithArguments(const wchar_t * Str, FOutputDevice * Ar, UObject * Executor, bool bForceCallWithNonExec) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UObject *, bool>((DWORD64)this, "UObject", "CallFunctionByNameWithArguments", Str, Ar, Executor, bForceCallWithNonExec); }
	UFunction* FindFunctionChecked(FName InName) { return NativeCall<UFunction *, FName>((DWORD64)this, "UObject", "FindFunctionChecked", InName); }
	void ProcessEvent(UFunction* Function, void* Parms) { NativeCall<void, UFunction *, void *>((DWORD64)this, "UObject", "ProcessEvent", Function, Parms); }
};

struct UField : UObject
{
	UField* GetNextField() const { return GetNativeField<UField *>(this, "UField", "Next"); }

	// Functions

	UClass* GetOwnerClass() { return NativeCall<UClass *>((DWORD64)this, "UField", "GetOwnerClass"); }
	UStruct* GetOwnerStruct() { return NativeCall<UStruct *>((DWORD64)this, "UField", "GetOwnerStruct"); }
	void PostLoad() { NativeCall<void>((DWORD64)this, "UField", "PostLoad"); }
	void AddCppProperty(UProperty* Property) { NativeCall<void, UProperty *>((DWORD64)this, "UField", "AddCppProperty", Property); }
};

struct UStruct : UField
{
	UStruct* GetSuperStructField() const { return GetNativeField<UStruct *>(this, "UStruct", "SuperStruct"); }
	UField* GetChildrenField() const { return GetNativeField<UField *>(this, "UStruct", "Children"); }
	int GetPropertiesSizeField() const { return GetNativeField<int>(this, "UStruct", "PropertiesSize"); }
	TArray<unsigned char> GetScriptField() const { return GetNativeField<TArray<unsigned char>>(this, "UStruct", "Script"); }
	int GetMinAlignmentField() const { return GetNativeField<int>(this, "UStruct", "MinAlignment"); }
	void SetMinAlignmentField(int newValue) { SetNativeField(this, "UStruct", "MinAlignment", newValue); }
	UProperty* GetPropertyLinkField() const { return GetNativeField<UProperty *>(this, "UStruct", "PropertyLink"); }
	UProperty* GetRefLinkField() const { return GetNativeField<UProperty *>(this, "UStruct", "RefLink"); }
	UProperty* GetDestructorLinkField() const { return GetNativeField<UProperty *>(this, "UStruct", "DestructorLink"); }
	UProperty* GetPostConstructLinkField() const { return GetNativeField<UProperty *>(this, "UStruct", "PostConstructLink"); }
	TArray<UObject *> GetScriptObjectReferencesField() const { return GetNativeField<TArray<UObject *>>(this, "UStruct", "ScriptObjectReferences"); }

	// Functions

	bool IsChildOf(UStruct* SomeBase) { return NativeCall<bool, UStruct *>((DWORD64)this, "UStruct", "IsChildOf", SomeBase); }
	static UField* StaticClass() { return NativeCall<UField *>(nullptr, "UStruct", "StaticClass"); }
	void LinkChild(UProperty* Property) { NativeCall<void, UProperty *>((DWORD64)this, "UStruct", "LinkChild", Property); }
	const wchar_t* GetPrefixCPP() { return NativeCall<const wchar_t *>((DWORD64)this, "UStruct", "GetPrefixCPP"); }
	void StaticLink(bool bRelinkExistingProperties) { NativeCall<void, bool>((DWORD64)this, "UStruct", "StaticLink", bRelinkExistingProperties); }
	void FinishDestroy() { NativeCall<void>((DWORD64)this, "UStruct", "FinishDestroy"); }
	void SetSuperStruct(UStruct* NewSuperStruct) { NativeCall<void, UStruct *>((DWORD64)this, "UStruct", "SetSuperStruct", NewSuperStruct); }
};

struct UClass : UStruct
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
	UObject* GetClassDefaultObjectField() const { return GetNativeField<UObject *>(this, "UClass", "ClassDefaultObject"); }
	bool GetbCookedField() const { return GetNativeField<bool>(this, "UClass", "bCooked"); }

	// Functions

	UObject* GetDefaultObject(bool bCreateIfNeeded) { return NativeCall<UObject *, bool>((DWORD64)this, "UClass", "GetDefaultObject", bCreateIfNeeded); }
	void PostInitProperties() { NativeCall<void>((DWORD64)this, "UClass", "PostInitProperties"); }
	UObject* GetDefaultSubobjectByName(FName ToFind) { return NativeCall<UObject *, FName>((DWORD64)this, "UClass", "GetDefaultSubobjectByName", ToFind); }
	UObject* CreateDefaultObject() { return NativeCall<UObject *>((DWORD64)this, "UClass", "CreateDefaultObject"); }
	FName* GetDefaultObjectName(FName* result) { return NativeCall<FName *, FName *>((DWORD64)this, "UClass", "GetDefaultObjectName", result); }
	void DeferredRegister(UClass* UClassStaticClass, const wchar_t* PackageName, const wchar_t* Name) { NativeCall<void, UClass *, const wchar_t *, const wchar_t *>((DWORD64)this, "UClass", "DeferredRegister", UClassStaticClass, PackageName, Name); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>((DWORD64)this, "UClass", "Rename", InName, NewOuter, Flags); }
	void Bind() { NativeCall<void>((DWORD64)this, "UClass", "Bind"); }
	const wchar_t* GetPrefixCPP() { return NativeCall<const wchar_t *>((DWORD64)this, "UClass", "GetPrefixCPP"); }
	FString* GetDescription(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UClass", "GetDescription", result); }
	void FinishDestroy() { NativeCall<void>((DWORD64)this, "UClass", "FinishDestroy"); }
	void PostLoad() { NativeCall<void>((DWORD64)this, "UClass", "PostLoad"); }
	bool ImplementsInterface(UClass* SomeInterface) { return NativeCall<bool, UClass *>((DWORD64)this, "UClass", "ImplementsInterface", SomeInterface); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>((DWORD64)this, "UClass", "PurgeClass", bRecompilingOnLoad); }
	bool HasProperty(UProperty* InProperty) { return NativeCall<bool, UProperty *>((DWORD64)this, "UClass", "HasProperty", InProperty); }
	FString* GetConfigName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UClass", "GetConfigName", result); }
	unsigned int EmitStructArrayBegin(int Offset, FName* DebugName, int Stride) { return NativeCall<unsigned int, int, FName *, int>((DWORD64)this, "UClass", "EmitStructArrayBegin", Offset, DebugName, Stride); }
	void AssembleReferenceTokenStream() { NativeCall<void>((DWORD64)this, "UClass", "AssembleReferenceTokenStream"); }
};

struct UBlueprintCore : UObject
{
	TSubclassOf<UObject> GetSkeletonGeneratedClassField() const { return GetNativeField<TSubclassOf<UObject>>(this, "UBlueprintCore", "SkeletonGeneratedClass"); }
	TSubclassOf<UObject> GetGeneratedClassField() const { return GetNativeField<TSubclassOf<UObject>>(this, "UBlueprintCore", "GeneratedClass"); }
	bool GetbLegacyNeedToPurgeSkelRefsField() const { return GetNativeField<bool>(this, "UBlueprintCore", "bLegacyNeedToPurgeSkelRefs"); }
	bool GetbLegacyGeneratedClassIsAuthoritativeField() const { return GetNativeField<bool>(this, "UBlueprintCore", "bLegacyGeneratedClassIsAuthoritative"); }
	FGuid GetBlueprintGuidField() const { return GetNativeField<FGuid>(this, "UBlueprintCore", "BlueprintGuid"); }
};

struct UBlueprint : UBlueprintCore
{
	TSubclassOf<UObject> GetParentClassField() const { return GetNativeField<TSubclassOf<UObject>>(this, "UBlueprint", "ParentClass"); }
	TEnumAsByte<enum EBlueprintType> GetBlueprintTypeField() const { return GetNativeField<TEnumAsByte<enum EBlueprintType>>(this, "UBlueprint", "BlueprintType"); }
	int GetBlueprintSystemVersionField() const { return GetNativeField<int>(this, "UBlueprint", "BlueprintSystemVersion"); }

	// Functions

	FString* GetDesc(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UBlueprint", "GetDesc", result); }
	bool NeedsLoadForClient() { return NativeCall<bool>((DWORD64)this, "UBlueprint", "NeedsLoadForClient"); }
	bool NeedsLoadForServer() { return NativeCall<bool>((DWORD64)this, "UBlueprint", "NeedsLoadForServer"); }
};

struct UProperty : UField
{
	int GetArrayDimField() const { return GetNativeField<int>(this, "UProperty", "ArrayDim"); }
	void SetArrayDimField(int newValue) { SetNativeField(this, "UProperty", "ArrayDim", newValue); }
	int GetElementSizeField() const { return GetNativeField<int>(this, "UProperty", "ElementSize"); }
	void SetElementSizeField(int newValue) { SetNativeField(this, "UProperty", "ElementSize", newValue); }
	unsigned __int64 GetPropertyFlagsField() const { return GetNativeField<unsigned __int64>(this, "UProperty", "PropertyFlags"); }
	void SetPropertyFlagsField(unsigned __int64 newValue) { SetNativeField(this, "UProperty", "PropertyFlags", newValue); }
	unsigned __int16 GetRepIndexField() const { return GetNativeField<unsigned __int16>(this, "UProperty", "RepIndex"); }
	void SetRepIndexField(unsigned __int16 newValue) { SetNativeField(this, "UProperty", "RepIndex", newValue); }
	FName GetRepNotifyFuncField() const { return GetNativeField<FName>(this, "UProperty", "RepNotifyFunc"); }
	void SetRepNotifyFuncField(FName newValue) { SetNativeField(this, "UProperty", "RepNotifyFunc", newValue); }
	int GetOffset_InternalField() const { return GetNativeField<int>(this, "UProperty", "Offset_Internal"); }
	void SetOffset_InternalField(int newValue) { SetNativeField(this, "UProperty", "Offset_Internal", newValue); }
	UProperty* GetPropertyLinkNextField() const { return GetNativeField<UProperty *>(this, "UProperty", "PropertyLinkNext"); }
	UProperty* GetNextRefField() const { return GetNativeField<UProperty *>(this, "UProperty", "NextRef"); }
	UProperty* GetDestructorLinkNextField() const { return GetNativeField<UProperty *>(this, "UProperty", "DestructorLinkNext"); }
	UProperty* GetPostConstructLinkNextField() const { return GetNativeField<UProperty *>(this, "UProperty", "PostConstructLinkNext"); }

	// Functions

	bool Identical(const void* A, const void* B, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, unsigned int>((DWORD64)this, "UProperty", "Identical", A, B, PortFlags); }
	void ExportTextItem(FString* ValueStr, const void* PropertyValue, const void* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>((DWORD64)this, "UProperty", "ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	void CopySingleValueFromScriptVM(void* Dest, const void* Src) { NativeCall<void, void *, const void *>((DWORD64)this, "UProperty", "CopySingleValueFromScriptVM", Dest, Src); }
	void CopyCompleteValueFromScriptVM(void* Dest, const void* Src) { NativeCall<void, void *, const void *>((DWORD64)this, "UProperty", "CopyCompleteValueFromScriptVM", Dest, Src); }
	FString* GetCPPType(FString* result, FString* ExtendedTypeText, unsigned int CPPExportFlags) { return NativeCall<FString *, FString *, FString *, unsigned int>((DWORD64)this, "UProperty", "GetCPPType", result, ExtendedTypeText, CPPExportFlags); }
	bool Identical_InContainer(const void* A, const void* B, int ArrayIndex, unsigned int PortFlags) { return NativeCall<bool, const void *, const void *, int, unsigned int>((DWORD64)this, "UProperty", "Identical_InContainer", A, B, ArrayIndex, PortFlags); }
	bool ShouldDuplicateValue() { return NativeCall<bool>((DWORD64)this, "UProperty", "ShouldDuplicateValue"); }
	FString* GetCPPMacroType(FString* result, FString* ExtendedTypeText) { return NativeCall<FString *, FString *, FString *>((DWORD64)this, "UProperty", "GetCPPMacroType", result, ExtendedTypeText); }
	bool ExportText_Direct(FString* ValueStr, const void* Data, const void* Delta, UObject* Parent, int PortFlags, UObject* ExportRootScope) { return NativeCall<bool, FString *, const void *, const void *, UObject *, int, UObject *>((DWORD64)this, "UProperty", "ExportText_Direct", ValueStr, Data, Delta, Parent, PortFlags, ExportRootScope); }
	bool IsLocalized() { return NativeCall<bool>((DWORD64)this, "UProperty", "IsLocalized"); }
	bool ShouldPort(unsigned int PortFlags) { return NativeCall<bool, unsigned int>((DWORD64)this, "UProperty", "ShouldPort", PortFlags); }
	FName* GetID(FName* result) { return NativeCall<FName *, FName *>((DWORD64)this, "UProperty", "GetID", result); }
	bool SameType(UProperty* Other) { return NativeCall<bool, UProperty *>((DWORD64)this, "UProperty", "SameType", Other); }
};

struct UNumericProperty : UProperty
{
	__int64 GetSignedIntPropertyValue(void const* Data) { return NativeCall<__int64, void const *>((DWORD64)this, "UNumericProperty", "GetSignedIntPropertyValue", Data); }
};

struct Globals
{
	static UObject* StaticLoadObject(UClass* ObjectClass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int LoadFlags, DWORD64 Sandbox, bool bAllowObjectReconciliation) { return NativeCall<UObject*, UClass *, UObject *, const wchar_t *, const wchar_t *, unsigned int, DWORD64, bool>(nullptr, "Global", "StaticLoadObject", ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation); }
};

struct FAssetData
{
	FName ObjectPath;
	FName PackageName;
	FName PackagePath;
	FName GroupNames;
	FName AssetName;
	FName AssetClass;
	char unk[50];// TMap<FName, FString<FName, FString> > TagsAndValues;
	TArray<int> ChunkIDs;

	// Functions

	bool IsUAsset() { return NativeCall<bool>((DWORD64)this, "FAssetData", "IsUAsset"); }
	void PrintAssetData() { NativeCall<void>((DWORD64)this, "FAssetData", "PrintAssetData"); }
	UObject* GetAsset() { return NativeCall<UObject *>((DWORD64)this, "FAssetData", "GetAsset"); }
};

struct IModuleInterface
{
};

struct IAssetRegistryInterface : IModuleInterface
{
};

struct FAssetRegistryModule : IAssetRegistryInterface
{
	FAssetRegistry* Get() { return NativeCall<FAssetRegistry *>((DWORD64)this, "FAssetRegistryModule", "Get"); }
};

struct FModuleManager
{
	static FModuleManager* Get() { return NativeCall<FModuleManager *>(nullptr, "FModuleManager", "Get"); }
	void FindModules(const wchar_t* WildcardWithoutExtension, TArray<FName>* OutModules) { NativeCall<void, const wchar_t *, TArray<FName> *>((DWORD64)this, "FModuleManager", "FindModules", WildcardWithoutExtension, OutModules); }
	bool IsModuleLoaded(FName InModuleName) { return NativeCall<bool, FName>((DWORD64)this, "FModuleManager", "IsModuleLoaded", InModuleName); }
	bool IsModuleUpToDate(FName InModuleName) { return NativeCall<bool, FName>((DWORD64)this, "FModuleManager", "IsModuleUpToDate", InModuleName); }
	void AddModule(FName InModuleName) { NativeCall<void, FName>((DWORD64)this, "FModuleManager", "AddModule", InModuleName); }
	TSharedPtr<IModuleInterface>* LoadModule(TSharedPtr<IModuleInterface>* result, FName InModuleName, const bool bWasReloaded) { return NativeCall<TSharedPtr<IModuleInterface> *, TSharedPtr<IModuleInterface> *, FName, const bool>((DWORD64)this, "FModuleManager", "LoadModule", result, InModuleName, bWasReloaded); }
	bool UnloadModule(FName InModuleName, bool bIsShutdown) { return NativeCall<bool, FName, bool>((DWORD64)this, "FModuleManager", "UnloadModule", InModuleName, bIsShutdown); }
	void UnloadModulesAtShutdown() { NativeCall<void>((DWORD64)this, "FModuleManager", "UnloadModulesAtShutdown"); }
	TSharedPtr<IModuleInterface>* GetModule(TSharedPtr<IModuleInterface>* result, FName InModuleName) { return NativeCall<TSharedPtr<IModuleInterface> *, TSharedPtr<IModuleInterface> *, FName>((DWORD64)this, "FModuleManager", "GetModule", result, InModuleName); }
	static FString* GetCleanModuleFilename(FString* result, FName ModuleName, bool bGameModule) { return NativeCall<FString *, FString *, FName, bool>(nullptr, "FModuleManager", "GetCleanModuleFilename", result, ModuleName, bGameModule); }
	static void GetModuleFilenameFormat(bool bGameModule, FString* OutPrefix, FString* OutSuffix) { NativeCall<void, bool, FString *, FString *>(nullptr, "FModuleManager", "GetModuleFilenameFormat", bGameModule, OutPrefix, OutSuffix); }
	//void FindModulePaths(const wchar_t * NamePattern, TMap<FName, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, FString, 0> > * OutModulePaths) { NativeCall<void, const wchar_t *, TMap<FName, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, FString, 0> > *>((DWORD64)this, "FModuleManager", "FindModulePaths", NamePattern, OutModulePaths); }
	//void FindModulePathsInDirectory(FString * InDirectoryName, bool bIsGameDirectory, const wchar_t * NamePattern, TMap<FName, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, FString, 0> > * OutModulePaths) { NativeCall<void, FString *, bool, const wchar_t *, TMap<FName, FString, FDefaultSetAllocator, TDefaultMapKeyFuncs<FName, FString, 0> > *>((DWORD64)this, "FModuleManager", "FindModulePathsInDirectory", InDirectoryName, bIsGameDirectory, NamePattern, OutModulePaths); }
	void AddBinariesDirectory(const wchar_t* InDirectory, bool bIsGameDirectory) { NativeCall<void, const wchar_t *, bool>((DWORD64)this, "FModuleManager", "AddBinariesDirectory", InDirectory, bIsGameDirectory); }
};

struct FAssetRegistry
{
	void SearchAllAssets(bool bSynchronousSearch) { NativeCall<void, bool>((DWORD64)this, "FAssetRegistry", "SearchAllAssets", bSynchronousSearch); }
	bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>* OutAssetData) { return NativeCall<bool, FName, TArray<FAssetData> *>((DWORD64)this, "FAssetRegistry", "GetAssetsByPackageName", PackageName, OutAssetData); }
	bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>* OutAssetData, bool bRecursive) { return NativeCall<bool, FName, TArray<FAssetData> *, bool>((DWORD64)this, "FAssetRegistry", "GetAssetsByPath", PackagePath, OutAssetData, bRecursive); }
	bool GetAssetsByClass(FName ClassName, TArray<FAssetData>* OutAssetData, bool bSearchSubClasses) { return NativeCall<bool, FName, TArray<FAssetData> *, bool>((DWORD64)this, "FAssetRegistry", "GetAssetsByClass", ClassName, OutAssetData, bSearchSubClasses); }
	FAssetData* GetAssetByObjectPath(FAssetData* result, FName ObjectPath) { return NativeCall<FAssetData *, FAssetData *, FName>((DWORD64)this, "FAssetRegistry", "GetAssetByObjectPath", result, ObjectPath); }
	bool GetAllAssets(TArray<FAssetData>* OutAssetData) { return NativeCall<bool, TArray<FAssetData> *>((DWORD64)this, "FAssetRegistry", "GetAllAssets", OutAssetData); }
	bool GetDependencies(FName PackageName, TArray<FName>* OutDependencies) { return NativeCall<bool, FName, TArray<FName> *>((DWORD64)this, "FAssetRegistry", "GetDependencies", PackageName, OutDependencies); }
	bool GetReferencers(FName PackageName, TArray<FName>* OutReferencers) { return NativeCall<bool, FName, TArray<FName> *>((DWORD64)this, "FAssetRegistry", "GetReferencers", PackageName, OutReferencers); }
	bool GetAncestorClassNames(FName ClassName, TArray<FName>* OutAncestorClassNames) { return NativeCall<bool, FName, TArray<FName> *>((DWORD64)this, "FAssetRegistry", "GetAncestorClassNames", ClassName, OutAncestorClassNames); }
	void GetAllCachedPaths(TArray<FString>* OutPathList) { NativeCall<void, TArray<FString> *>((DWORD64)this, "FAssetRegistry", "GetAllCachedPaths", OutPathList); }
	void GetSubPaths(FString* InBasePath, TArray<FString>* OutPathList, bool bInRecurse) { NativeCall<void, FString *, TArray<FString> *, bool>((DWORD64)this, "FAssetRegistry", "GetSubPaths", InBasePath, OutPathList, bInRecurse); }
	void PrioritizeAssetInstall(FAssetData* AssetData) { NativeCall<void, FAssetData *>((DWORD64)this, "FAssetRegistry", "PrioritizeAssetInstall", AssetData); }
	bool AddPath(FString* PathToAdd) { return NativeCall<bool, FString *>((DWORD64)this, "FAssetRegistry", "AddPath", PathToAdd); }
	bool RemovePath(FString* PathToRemove) { return NativeCall<bool, FString *>((DWORD64)this, "FAssetRegistry", "RemovePath", PathToRemove); }
	void ScanPathsSynchronous(TArray<FString>* InPaths, bool bForceRescan) { NativeCall<void, TArray<FString> *, bool>((DWORD64)this, "FAssetRegistry", "ScanPathsSynchronous", InPaths, bForceRescan); }
	void PrioritizeSearchPath(FString* PathToPrioritize) { NativeCall<void, FString *>((DWORD64)this, "FAssetRegistry", "PrioritizeSearchPath", PathToPrioritize); }
	void AssetCreated(UObject* NewAsset) { NativeCall<void, UObject *>((DWORD64)this, "FAssetRegistry", "AssetCreated", NewAsset); }
	void AssetDeleted(UObject* DeletedAsset) { NativeCall<void, UObject *>((DWORD64)this, "FAssetRegistry", "AssetDeleted", DeletedAsset); }
	void AssetRenamed(UObject* RenamedAsset, FString* OldObjectPath) { NativeCall<void, UObject *, FString *>((DWORD64)this, "FAssetRegistry", "AssetRenamed", RenamedAsset, OldObjectPath); }
	bool IsLoadingAssets() { return NativeCall<bool>((DWORD64)this, "FAssetRegistry", "IsLoadingAssets"); }
	void Tick(float DeltaTime) { NativeCall<void, float>((DWORD64)this, "FAssetRegistry", "Tick", DeltaTime); }
	bool IsUsingWorldAssets() { return NativeCall<bool>((DWORD64)this, "FAssetRegistry", "IsUsingWorldAssets"); }
	void ScanPathsSynchronous_Internal(TArray<FString>* InPaths, bool bForceRescan, bool bUseCache) { NativeCall<void, TArray<FString> *, bool, bool>((DWORD64)this, "FAssetRegistry", "ScanPathsSynchronous_Internal", InPaths, bForceRescan, bUseCache); }
	void PathDataGathered(const long double TickStartTime, TArray<FString>* PathResults) { NativeCall<void, const long double, TArray<FString> *>((DWORD64)this, "FAssetRegistry", "PathDataGathered", TickStartTime, PathResults); }
	bool RemoveDependsNode(FName PackageName) { return NativeCall<bool, FName>((DWORD64)this, "FAssetRegistry", "RemoveDependsNode", PackageName); }
	bool RemoveAssetPath(FString* PathToRemove, bool bEvenIfAssetsStillExist) { return NativeCall<bool, FString *, bool>((DWORD64)this, "FAssetRegistry", "RemoveAssetPath", PathToRemove, bEvenIfAssetsStillExist); }
	FString* ExportTextPathToObjectName(FString* result, FString* InExportTextPath) { return NativeCall<FString *, FString *, FString *>((DWORD64)this, "FAssetRegistry", "ExportTextPathToObjectName", result, InExportTextPath); }
	void AddAssetData(FAssetData* AssetData) { NativeCall<void, FAssetData *>((DWORD64)this, "FAssetRegistry", "AddAssetData", AssetData); }
	bool RemoveAssetData(FAssetData* AssetData) { return NativeCall<bool, FAssetData *>((DWORD64)this, "FAssetRegistry", "RemoveAssetData", AssetData); }
	void OnContentPathMounted(FString* InAssetPath, FString* FileSystemPath) { NativeCall<void, FString *, FString *>((DWORD64)this, "FAssetRegistry", "OnContentPathMounted", InAssetPath, FileSystemPath); }
	void OnContentPathDismounted(FString* InAssetPath, FString* FileSystemPath) { NativeCall<void, FString *, FString *>((DWORD64)this, "FAssetRegistry", "OnContentPathDismounted", InAssetPath, FileSystemPath); }
};
