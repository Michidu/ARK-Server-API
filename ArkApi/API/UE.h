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

	const char* c_str() const
	{
		_bstr_t b(this->Data);
		return b;
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
	__int32 ComparisonIndex;
	unsigned __int32 Number;
};

struct FTransform
{
	__m128 Rotation;
	__m128 Translation;
	__m128 Scale3D;
};

template <typename TEnum>
struct TEnumAsByte
{
};

struct UProperty
{
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

struct UField
{
};

struct FText
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

struct UClass
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
	//void Link(FArchive* Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive *, bool>((DWORD64)this, "UClass", "Link", Ar, bRelinkExistingProperties); }
	//void SetSuperStruct(UStruct* NewSuperStruct) { NativeCall<void, UStruct *>((DWORD64)this, "UClass", "SetSuperStruct", NewSuperStruct); }
	//void Serialize(FArchive* Ar) { NativeCall<void, FArchive *>((DWORD64)this, "UClass", "Serialize", Ar); }
	bool ImplementsInterface(UClass* SomeInterface) { return NativeCall<bool, UClass *>((DWORD64)this, "UClass", "ImplementsInterface", SomeInterface); }
	//void SerializeDefaultObject(UObject* Object, FArchive* Ar) { NativeCall<void, UObject *, FArchive *>((DWORD64)this, "UClass", "SerializeDefaultObject", Object, Ar); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>((DWORD64)this, "UClass", "PurgeClass", bRecompilingOnLoad); }
	//bool HasProperty(UProperty* InProperty) { return NativeCall<bool, UProperty *>((DWORD64)this, "UClass", "HasProperty", InProperty); }
	FString* GetConfigName(FString* result) { return NativeCall<FString *, FString *>((DWORD64)this, "UClass", "GetConfigName", result); }
	unsigned int EmitStructArrayBegin(int Offset, FName* DebugName, int Stride) { return NativeCall<unsigned int, int, FName *, int>((DWORD64)this, "UClass", "EmitStructArrayBegin", Offset, DebugName, Stride); }
	void AssembleReferenceTokenStream() { NativeCall<void>((DWORD64)this, "UClass", "AssembleReferenceTokenStream"); }
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
