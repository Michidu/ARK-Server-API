// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include <string>
#include <locale>
#include <Logger/Logger.h>

#include "TArray.h"
#include "../Windows/MicrosoftPlatformString.h"
#include "../Templates/MemoryOps.h"
#include "../Templates/UnrealTemplate.h"
#include "../Math/UnrealMathUtility.h"
#include "../Misc/CString.h"

#pragma warning(push)
#pragma warning(disable : 4244)

struct FStringFormatArg;

/** Determines case sensitivity options for string comparisons. */
namespace ESearchCase
{
	enum Type
	{
		/** Case sensitive. Upper/lower casing must match for strings to be considered equal. */
		CaseSensitive,

		/** Ignore case. Upper/lower casing does not matter when making a comparison. */
		IgnoreCase,
	};
};

/** Determines search direction for string operations. */
namespace ESearchDir
{
	enum Type
	{
		/** Search from the start, moving forward through the string. */
		FromStart,

		/** Search from the end, moving backward through the string. */
		FromEnd,
	};
}

/**
* A dynamically sizeable string.
* @see https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/StringHandling/FString/
*/
class FString
{
private:
	friend struct TContainerTraits<FString>;

	/** Array holding the character data */
	typedef TArray<TCHAR> DataType;
	DataType Data;

public:
	using ElementType = TCHAR;

	FString() = default;
	FString(FString&&) = default;
	FString(const FString&) = default;
	FString& operator=(FString&&) = default;
	FString& operator=(const FString&) = default;

	/**
	* Create a copy of the Other string with extra space for characters at the end of the string
	*
	* @param Other the other string to create a new copy from
	* @param ExtraSlack number of extra characters to add to the end of the other string in this string
	*/
	FORCEINLINE FString(const FString& Other, int32 ExtraSlack)
		: Data(Other.Data, ExtraSlack + ((Other.Data.Num() || !ExtraSlack) ? 0 : 1)) // Add 1 if the source string array is empty and we want some slack, because we'll need to include a null terminator which is currently missing
	{
	}

	/**
	* Create a copy of the Other string with extra space for characters at the end of the string
	*
	* @param Other the other string to create a new copy from
	* @param ExtraSlack number of extra characters to add to the end of the other string in this string
	*/
	FORCEINLINE FString(FString&& Other, int32 ExtraSlack)
		: Data(MoveTemp(Other.Data), ExtraSlack + ((Other.Data.Num() || !ExtraSlack) ? 0 : 1)) // Add 1 if the source string array is empty and we want some slack, because we'll need to include a null terminator which is currently missing
	{
	}

	/**
	* Constructor using an array of TCHAR
	*
	* @param In array of TCHAR
	*/
	template <typename CharType>
	FORCEINLINE FString(const CharType* Src, typename TEnableIf<TIsCharType<CharType>::Value>::Type* Dummy = nullptr) // This TEnableIf is to ensure we don't instantiate this constructor for non-char types, like id* in Obj-C
	{
		if (Src && *Src)
		{
			int32 SrcLen = TCString<CharType>::Strlen(Src) + 1;
			int32 DestLen = FPlatformString::ConvertedLength<TCHAR>(Src, SrcLen);
			Data.AddUninitialized(DestLen);

			FPlatformString::Convert(Data.GetData(), DestLen, Src, SrcLen);
		}
	}

	/**
	* Constructor to create FString with specified number of characters from another string with additional character zero
	*
	* @param InCount how many characters to copy
	* @param InSrc String to copy from
	*/
	FORCEINLINE explicit FString(int32 InCount, const TCHAR* InSrc)
	{
		Data.AddUninitialized(InCount ? InCount + 1 : 0);

		if (Data.Num() > 0)
		{
			FCString::Strncpy(Data.GetData(), InSrc, InCount + 1);
		}
	}

	/**
	* Constructor to create FString from std::string
	*/
	FORCEINLINE explicit FString(const std::string& str)
		: FString(str.c_str())
	{
	}
	
	/**
	* Constructor to create FString from std::wstring
	*/
	FORCEINLINE explicit FString(const std::wstring& str)
		: FString(str.c_str())
	{
	}

	/**
	* Copy Assignment from array of TCHAR
	*
	* @param Other array of TCHAR
	*/
	FORCEINLINE FString& operator=(const TCHAR* Other)
	{
		if (Data.GetData() != Other)
		{
			int32 Len = (Other && *Other) ? FCString::Strlen(Other) + 1 : 0;
			Data.Empty(Len);
			Data.AddUninitialized(Len);

			if (Len)
			{
				FMemory::Memcpy(Data.GetData(), Other, Len * sizeof(TCHAR));
			}
		}
		return *this;
	}

	/**
	* Return specific character from this string
	*
	* @param Index into string
	* @return Character at Index
	*/
	FORCEINLINE TCHAR& operator[](int32 Index)
	{
		return Data.GetData()[Index];
	}

	/**
	* Return specific const character from this string
	*
	* @param Index into string
	* @return const Character at Index
	*/
	FORCEINLINE const TCHAR& operator[](int32 Index) const
	{
		return Data.GetData()[Index];
	}

	/**
	* Iterator typedefs
	*/
	typedef TArray<TCHAR>::TIterator      TIterator;
	typedef TArray<TCHAR>::TConstIterator TConstIterator;

	/** Creates an iterator for the characters in this string */
	FORCEINLINE TIterator CreateIterator()
	{
		return Data.CreateIterator();
	}

	/** Creates a const iterator for the characters in this string */
	FORCEINLINE TConstIterator CreateConstIterator() const
	{
		return Data.CreateConstIterator();
	}

private:
	/**
	* DO NOT USE DIRECTLY
	* STL-like iterators to enable range-based for loop support.
	*/
	FORCEINLINE friend DataType::RangedForIteratorType      begin(FString& Str) { auto Result = begin(Str.Data);                                   return Result; }
	FORCEINLINE friend DataType::RangedForConstIteratorType begin(const FString& Str) { auto Result = begin(Str.Data);                                   return Result; }
	FORCEINLINE friend DataType::RangedForIteratorType      end(FString& Str) { auto Result = end(Str.Data); if (Str.Data.Num()) { --Result; } return Result; }
	FORCEINLINE friend DataType::RangedForConstIteratorType end(const FString& Str) { auto Result = end(Str.Data); if (Str.Data.Num()) { --Result; } return Result; }

public:
	FORCEINLINE uint32 GetAllocatedSize() const
	{
		return Data.GetAllocatedSize();
	}

	/**
	* Run slow checks on this string
	*/
	FORCEINLINE void CheckInvariants() const
	{
	}

	/**
	* Create empty string of given size with zero terminating character
	*
	* @param Slack length of empty string to create
	*/
	FORCEINLINE void Empty(int32 Slack = 0)
	{
		Data.Empty(Slack);
	}

	/**
	* Test whether this string is empty
	*
	* @return true if this string is empty, otherwise return false.
	*/
	FORCEINLINE bool IsEmpty() const
	{
		return Data.Num() <= 1;
	}

	/**
	* Empties the string, but doesn't change memory allocation, unless the new size is larger than the current string.
	*
	* @param NewReservedSize The expected usage size (in characters, not including the terminator) after calling this function.
	*/
	FORCEINLINE void Reset(int32 NewReservedSize = 0)
	{
		const int32 NewSizeIncludingTerminator = (NewReservedSize > 0) ? (NewReservedSize + 1) : 0;
		Data.Reset(NewSizeIncludingTerminator);
	}

	/**
	* Remove unallocated empty character space from the end of this string
	*/
	FORCEINLINE void Shrink()
	{
		Data.Shrink();
	}

	/**
	* Tests if index is valid, i.e. greater than or equal to zero, and less than the number of characters in this string (excluding the null terminator).
	*
	* @param Index Index to test.
	*
	* @returns True if index is valid. False otherwise.
	*/
	FORCEINLINE bool IsValidIndex(int32 Index) const
	{
		return Index >= 0 && Index < Len();
	}

	/**
	* Get pointer to the string
	*
	* @Return Pointer to Array of TCHAR if Num, otherwise the empty string
	*/
	FORCEINLINE const TCHAR* operator*() const
	{
		return Data.Num() ? Data.GetData() : TEXT("");
	}

	/**
	*Get string as array of TCHARS
	*
	* @warning: Operations on the TArray<*CHAR> can be unsafe, such as adding
	*		non-terminating 0's or removing the terminating zero.
	*/
	FORCEINLINE DataType& GetCharArray()
	{
		return Data;
	}

	/** Get string as const array of TCHARS */
	FORCEINLINE const DataType& GetCharArray() const
	{
		return Data;
	}

#ifdef __OBJC__
	/** Convert FString to Objective-C NSString */
	FORCEINLINE NSString* GetNSString() const
	{
#if PLATFORM_TCHAR_IS_4_BYTES
		return[[[NSString alloc] initWithBytes:Data.GetData() length : Len() * sizeof(TCHAR) encoding : NSUTF32LittleEndianStringEncoding] autorelease];
#else
		return[[[NSString alloc] initWithBytes:Data.GetData() length : Len() * sizeof(TCHAR) encoding : NSUTF16LittleEndianStringEncoding] autorelease];
#endif
	}
#endif

	/**
	* Appends an array of characters to the string.
	*
	* @param Array A pointer to the start of an array of characters to append.  This array need not be null-terminated, and null characters are not treated specially.
	* @param Count The number of characters to copy from Array.
	*/
	FORCEINLINE void AppendChars(const TCHAR* Array, int32 Count)
	{
		if (!Count)
			return;

		int32 Index = Data.Num();

		// Reserve enough space - including an extra gap for a null terminator if we don't already have a string allocated
		Data.AddUninitialized(Count + (Index ? 0 : 1));

		TCHAR* EndPtr = Data.GetData() + Index - (Index ? 1 : 0);

		// Copy characters to end of string, overwriting null terminator if we already have one
		CopyAssignItems(EndPtr, Array, Count);

		// (Re-)establish the null terminator
		*(EndPtr + Count) = 0;
	}

	/**
	* Concatenate this with given string
	*
	* @param Str array of TCHAR to be concatenated onto the end of this
	* @return reference to this
	*/
	FORCEINLINE FString& operator+=(const TCHAR* Str)
	{
		CheckInvariants();

		AppendChars(Str, FCString::Strlen(Str));

		return *this;
	}

	/**
	* Concatenate this with given char
	*
	* @param inChar other Char to be concatenated onto the end of this string
	* @return reference to this
	*/
	template <typename CharType>
	FORCEINLINE typename TEnableIf<TIsCharType<CharType>::Value, FString&>::Type operator+=(CharType InChar)
	{
		CheckInvariants();

		if (InChar != 0)
		{
			// position to insert the character.  
			// At the end of the string if we have existing characters, otherwise at the 0 position
			int32 InsertIndex = (Data.Num() > 0) ? Data.Num() - 1 : 0;

			// number of characters to add.  If we don't have any existing characters, 
			// we'll need to append the terminating zero as well.
			int32 InsertCount = (Data.Num() > 0) ? 1 : 2;

			Data.AddUninitialized(InsertCount);
			Data[InsertIndex] = InChar;
			Data[InsertIndex + 1] = 0;
		}
		return *this;
	}

	/**
	* Concatenate this with given char
	*
	* @param InChar other Char to be concatenated onto the end of this string
	* @return reference to this
	*/
	FORCEINLINE FString& AppendChar(const TCHAR InChar)
	{
		*this += InChar;
		return *this;
	}

	FORCEINLINE FString& Append(const FString& Text)
	{
		*this += Text;
		return *this;
	}

	FString& Append(const TCHAR* Text, int32 Count)
	{
		CheckInvariants();

		if (Count != 0)
		{
			// position to insert the character.  
			// At the end of the string if we have existing characters, otherwise at the 0 position
			int32 InsertIndex = (Data.Num() > 0) ? Data.Num() - 1 : 0;

			// number of characters to add.  If we don't have any existing characters, 
			// we'll need to append the terminating zero as well.
			int32 FinalCount = (Data.Num() > 0) ? Count : Count + 1;

			Data.AddUninitialized(FinalCount);

			for (int32 Index = 0; Index < Count; Index++)
			{
				Data[InsertIndex + Index] = Text[Index];
			}

			Data[Data.Num() - 1] = 0;
		}
		return *this;
	}

	/**
	* Removes characters within the string.
	*
	* @param Index           The index of the first character to remove.
	* @param Count           The number of characters to remove.
	* @param bAllowShrinking Whether or not to reallocate to shrink the storage after removal.
	*/
	FORCEINLINE void RemoveAt(int32 Index, int32 Count = 1, bool bAllowShrinking = true)
	{
		Data.RemoveAt(Index, Count, bAllowShrinking);
	}

	FORCEINLINE void InsertAt(int32 Index, TCHAR Character)
	{
		if (Character != 0)
		{
			if (Data.Num() == 0)
			{
				*this += Character;
			}
			else
			{
				Data.Insert(Character, Index);
			}
		}
	}

	FORCEINLINE void InsertAt(int32 Index, const FString& Characters)
	{
		if (Characters.Len())
		{
			if (Data.Num() == 0)
			{
				*this += Characters;
			}
			else
			{
				Data.Insert(Characters.Data.GetData(), Characters.Len(), Index);
			}
		}
	}

	/**
	* Removes the text from the start of the string if it exists.
	*
	* @param InPrefix the prefix to search for at the start of the string to remove.
	* @return true if the prefix was removed, otherwise false.
	*/
	bool RemoveFromStart(const FString& InPrefix, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase);

	/**
	* Removes the text from the end of the string if it exists.
	*
	* @param InSuffix the suffix to search for at the end of the string to remove.
	* @return true if the suffix was removed, otherwise false.
	*/
	bool RemoveFromEnd(const FString& InSuffix, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase);

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Str       Pointer to an array of TCHARs (not necessarily null-terminated) to be concatenated onto the end of this.
	* @param StrLength Exact number of characters from Str to append.
	*/
	void PathAppend(const TCHAR* Str, int32 StrLength);

	/**
	* Concatenate this with given string
	*
	* @param Str other string to be concatenated onto the end of this
	* @return reference to this
	*/
	FORCEINLINE FString& operator+=(const FString& Str)
	{
		CheckInvariants();
		Str.CheckInvariants();

		AppendChars(Str.Data.GetData(), Str.Len());

		return *this;
	}

	/**
	* Concatenates an FString with a TCHAR.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The char on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	template <typename CharType>
	FORCEINLINE friend typename TEnableIf<TIsCharType<CharType>::Value, FString>::Type operator+(const FString& Lhs, CharType Rhs)
	{
		Lhs.CheckInvariants();

		FString Result(Lhs, 1);
		Result += Rhs;

		return Result;
	}

	/**
	* Concatenates an FString with a TCHAR.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The char on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	template <typename CharType>
	FORCEINLINE friend typename TEnableIf<TIsCharType<CharType>::Value, FString>::Type operator+(FString&& Lhs, CharType Rhs)
	{
		Lhs.CheckInvariants();

		FString Result(MoveTemp(Lhs), 1);
		Result += Rhs;

		return Result;
	}

private:
	template <typename LhsType, typename RhsType>
	FORCEINLINE static FString ConcatFStrings(typename TIdentity<LhsType>::Type Lhs, typename TIdentity<RhsType>::Type Rhs)
	{
		Lhs.CheckInvariants();
		Rhs.CheckInvariants();

		if (Lhs.IsEmpty())
		{
			return MoveTempIfPossible(Rhs);
		}

		int32 RhsLen = Rhs.Len();

		FString Result(MoveTempIfPossible(Lhs), RhsLen);
		Result.AppendChars(Rhs.Data.GetData(), RhsLen);

		return Result;
	}

	template <typename RhsType>
	FORCEINLINE static FString ConcatTCHARsToFString(const TCHAR* Lhs, typename TIdentity<RhsType>::Type Rhs)
	{
		Rhs.CheckInvariants();

		if (!Lhs || !*Lhs)
		{
			return MoveTempIfPossible(Rhs);
		}

		int32 LhsLen = FCString::Strlen(Lhs);
		int32 RhsLen = Rhs.Len();

		// This is not entirely optimal, as if the Rhs is an rvalue and has enough slack space to hold Lhs, then
		// the memory could be reused here without constructing a new object.  However, until there is proof otherwise,
		// I believe this will be relatively rare and isn't worth making the code a lot more complex right now.
		FString Result;
		Result.Data.AddUninitialized(LhsLen + RhsLen + 1);

		TCHAR* ResultData = Result.Data.GetData();
		CopyAssignItems(ResultData, Lhs, LhsLen);
		CopyAssignItems(ResultData + LhsLen, Rhs.Data.GetData(), RhsLen);
		*(ResultData + LhsLen + RhsLen) = 0;

		return Result;
	}

	template <typename LhsType>
	FORCEINLINE static FString ConcatFStringToTCHARs(typename TIdentity<LhsType>::Type Lhs, const TCHAR* Rhs)
	{
		Lhs.CheckInvariants();

		if (!Rhs || !*Rhs)
		{
			return MoveTempIfPossible(Lhs);
		}

		int32 RhsLen = FCString::Strlen(Rhs);

		FString Result(MoveTempIfPossible(Lhs), RhsLen);
		Result.AppendChars(Rhs, RhsLen);

		return Result;
	}

public:
	/**
	* Concatenate two FStrings.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The FString on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(const FString& Lhs, const FString& Rhs)
	{
		return ConcatFStrings<const FString&, const FString&>(Lhs, Rhs);
	}

	/**
	* Concatenate two FStrings.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The FString on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(FString&& Lhs, const FString& Rhs)
	{
		return ConcatFStrings<FString&&, const FString&>(MoveTemp(Lhs), Rhs);
	}

	/**
	* Concatenate two FStrings.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The FString on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(const FString& Lhs, FString&& Rhs)
	{
		return ConcatFStrings<const FString&, FString&&>(Lhs, MoveTemp(Rhs));
	}

	/**
	* Concatenate two FStrings.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The FString on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(FString&& Lhs, FString&& Rhs)
	{
		return ConcatFStrings<FString&&, FString&&>(MoveTemp(Lhs), MoveTemp(Rhs));
	}

	/**
	* Concatenates a TCHAR array to an FString.
	*
	* @param Lhs The TCHAR array on the left-hand-side of the expression.
	* @param Rhs The FString on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(const TCHAR* Lhs, const FString& Rhs)
	{
		return ConcatTCHARsToFString<const FString&>(Lhs, Rhs);
	}

	/**
	* Concatenates a TCHAR array to an FString.
	*
	* @param Lhs The TCHAR array on the left-hand-side of the expression.
	* @param Rhs The FString on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(const TCHAR* Lhs, FString&& Rhs)
	{
		return ConcatTCHARsToFString<FString&&>(Lhs, MoveTemp(Rhs));
	}

	/**
	* Concatenates an FString to a TCHAR array.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The TCHAR array on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(const FString& Lhs, const TCHAR* Rhs)
	{
		return ConcatFStringToTCHARs<const FString&>(Lhs, Rhs);
	}

	/**
	* Concatenates an FString to a TCHAR array.
	*
	* @param Lhs The FString on the left-hand-side of the expression.
	* @param Rhs The TCHAR array on the right-hand-side of the expression.
	*
	* @return The concatenated string.
	*/
	FORCEINLINE friend FString operator+(FString&& Lhs, const TCHAR* Rhs)
	{
		return ConcatFStringToTCHARs<FString&&>(MoveTemp(Lhs), Rhs);
	}

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Str path array of TCHAR to be concatenated onto the end of this
	* @return reference to path
	*/
	FORCEINLINE FString& operator/=(const TCHAR* Str)
	{
		PathAppend(Str, FCString::Strlen(Str));
		return *this;
	}

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Str path FString to be concatenated onto the end of this
	* @return reference to path
	*/
	FORCEINLINE FString& operator/=(const FString& Str)
	{
		PathAppend(Str.Data.GetData(), Str.Len());
		return *this;
	}

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Lhs Path to concatenate onto.
	* @param Rhs Path to concatenate.
	* @return new FString of the path
	*/
	FORCEINLINE friend FString operator/(const FString& Lhs, const TCHAR* Rhs)
	{
		int32 StrLength = FCString::Strlen(Rhs);

		FString Result(Lhs, StrLength + 1);
		Result.PathAppend(Rhs, StrLength);
		return Result;
	}

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Lhs Path to concatenate onto.
	* @param Rhs Path to concatenate.
	* @return new FString of the path
	*/
	FORCEINLINE friend FString operator/(FString&& Lhs, const TCHAR* Rhs)
	{
		int32 StrLength = FCString::Strlen(Rhs);

		FString Result(MoveTemp(Lhs), StrLength + 1);
		Result.PathAppend(Rhs, StrLength);
		return Result;
	}

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Lhs Path to concatenate onto.
	* @param Rhs Path to concatenate.
	* @return new FString of the path
	*/
	FORCEINLINE friend FString operator/(const FString& Lhs, const FString& Rhs)
	{
		int32 StrLength = Rhs.Len();

		FString Result(Lhs, StrLength + 1);
		Result.PathAppend(Rhs.Data.GetData(), StrLength);
		return Result;
	}

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Lhs Path to concatenate onto.
	* @param Rhs Path to concatenate.
	* @return new FString of the path
	*/
	FORCEINLINE friend FString operator/(FString&& Lhs, const FString& Rhs)
	{
		int32 StrLength = Rhs.Len();

		FString Result(MoveTemp(Lhs), StrLength + 1);
		Result.PathAppend(Rhs.Data.GetData(), StrLength);
		return Result;
	}

	/**
	* Concatenate this path with given path ensuring the / character is used between them
	*
	* @param Lhs Path to concatenate onto.
	* @param Rhs Path to concatenate.
	* @return new FString of the path
	*/
	FORCEINLINE friend FString operator/(const TCHAR* Lhs, const FString& Rhs)
	{
		int32 StrLength = Rhs.Len();

		FString Result(FString(Lhs), StrLength + 1);
		Result.PathAppend(Rhs.Data.GetData(), Rhs.Len());
		return Result;
	}

	/**
	* Lexicographically test whether the left string is <= the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically <= the right string, otherwise false
	* @note case insensitive
	*/
	FORCEINLINE friend bool operator<=(const FString& Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, *Rhs) <= 0;
	}

	/**
	* Lexicographically test whether the left string is <= the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically <= the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator<=(const FString& Lhs, const CharType* Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, Rhs) <= 0;
	}

	/**
	* Lexicographically test whether the left string is <= the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically <= the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator<=(const CharType* Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(Lhs, *Rhs) <= 0;
	}

	/**
	* Lexicographically test whether the left string is < the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically < the right string, otherwise false
	* @note case insensitive
	*/
	FORCEINLINE friend bool operator<(const FString& Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, *Rhs) < 0;
	}

	/**
	* Lexicographically test whether the left string is < the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically < the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator<(const FString& Lhs, const CharType* Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, Rhs) < 0;
	}

	/**
	* Lexicographically test whether the left string is < the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically < the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator<(const CharType* Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(Lhs, *Rhs) < 0;
	}

	/**
	* Lexicographically test whether the left string is >= the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically >= the right string, otherwise false
	* @note case insensitive
	*/
	FORCEINLINE friend bool operator>=(const FString& Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, *Rhs) >= 0;
	}

	/**
	* Lexicographically test whether the left string is >= the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically >= the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator>=(const FString& Lhs, const CharType* Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, Rhs) >= 0;
	}

	/**
	* Lexicographically test whether the left string is >= the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically >= the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator>=(const CharType* Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(Lhs, *Rhs) >= 0;
	}

	/**
	* Lexicographically test whether the left string is > the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically > the right string, otherwise false
	* @note case insensitive
	*/
	FORCEINLINE friend bool operator>(const FString& Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, *Rhs) > 0;
	}

	/**
	* Lexicographically test whether the left string is > the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically > the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator>(const FString& Lhs, const CharType* Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, Rhs) > 0;
	}

	/**
	* Lexicographically test whether the left string is > the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically > the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator>(const CharType* Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(Lhs, *Rhs) > 0;
	}

	/**
	* Lexicographically test whether the left string is == the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically == the right string, otherwise false
	* @note case insensitive
	*/
	FORCEINLINE friend bool operator==(const FString& Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, *Rhs) == 0;
	}

	/**
	* Lexicographically test whether the left string is == the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically == the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator==(const FString& Lhs, const CharType* Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, Rhs) == 0;
	}

	/**
	* Lexicographically test whether the left string is == the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically == the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator==(const CharType* Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(Lhs, *Rhs) == 0;
	}

	/**
	* Lexicographically test whether the left string is != the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically != the right string, otherwise false
	* @note case insensitive
	*/
	FORCEINLINE friend bool operator!=(const FString& Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, *Rhs) != 0;
	}

	/**
	* Lexicographically test whether the left string is != the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically != the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator!=(const FString& Lhs, const CharType* Rhs)
	{
		return FPlatformString::Stricmp(*Lhs, Rhs) != 0;
	}

	/**
	* Lexicographically test whether the left string is != the right string
	*
	* @param Lhs String to compare against.
	* @param Rhs String to compare against.
	* @return true if the left string is lexicographically != the right string, otherwise false
	* @note case insensitive
	*/
	template <typename CharType>
	FORCEINLINE friend bool operator!=(const CharType* Lhs, const FString& Rhs)
	{
		return FPlatformString::Stricmp(Lhs, *Rhs) != 0;
	}

	/** Get the length of the string, excluding terminating character */
	FORCEINLINE int32 Len() const
	{
		return Data.Num() ? Data.Num() - 1 : 0;
	}

	/** @return the left most given number of characters */
	FORCEINLINE FString Left(int32 Count) const
	{
		return FString(FMath::Clamp(Count, 0, Len()), **this);
	}

	/** @return the left most characters from the string chopping the given number of characters from the end */
	FORCEINLINE FString LeftChop(int32 Count) const
	{
		return FString(FMath::Clamp(Len() - Count, 0, Len()), **this);
	}

	/** @return the string to the right of the specified location, counting back from the right (end of the word). */
	FORCEINLINE FString Right(int32 Count) const
	{
		return FString(**this + Len() - FMath::Clamp(Count, 0, Len()));
	}

	/** @return the string to the right of the specified location, counting forward from the left (from the beginning of the word). */
	FORCEINLINE FString RightChop(int32 Count) const
	{
		return FString(**this + Len() - FMath::Clamp(Len() - Count, 0, Len()));
	}

	/** @return the substring from Start position for Count characters. */
	FORCEINLINE FString Mid(int32 Start, int32 Count = INT_MAX) const
	{
		uint32 End = Start + Count;
		Start = FMath::Clamp((uint32)Start, (uint32)0, (uint32)Len());
		End = FMath::Clamp((uint32)End, (uint32)Start, (uint32)Len());
		return FString(End - Start, **this + Start);
	}

	/**
	* Searches the string for a substring, and returns index into this string
	* of the first found instance. Can search from beginning or end, and ignore case or not.
	*
	* @param SubStr			The string array of TCHAR to search for
	* @param StartPosition		The start character position to search from
	* @param SearchCase		Indicates whether the search is case sensitive or not
	* @param SearchDir			Indicates whether the search starts at the begining or at the end.
	*/
	int32 Find(const TCHAR* SubStr, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase,
		ESearchDir::Type SearchDir = ESearchDir::FromStart, int32 StartPosition = INDEX_NONE) const;

	/**
	* Searches the string for a substring, and returns index into this string
	* of the first found instance. Can search from beginning or end, and ignore case or not.
	*
	* @param SubStr			The string to search for
	* @param StartPosition		The start character position to search from
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @param SearchDir			Indicates whether the search starts at the begining or at the end ( defaults to ESearchDir::FromStart )
	*/
	FORCEINLINE int32 Find(const FString& SubStr, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase,
		ESearchDir::Type SearchDir = ESearchDir::FromStart, int32 StartPosition = INDEX_NONE) const
	{
		return Find(*SubStr, SearchCase, SearchDir, StartPosition);
	}

	/**
	* Returns whether this string contains the specified substring.
	*
	* @param SubStr			Find to search for
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @param SearchDir			Indicates whether the search starts at the begining or at the end ( defaults to ESearchDir::FromStart )
	* @return					Returns whether the string contains the substring
	**/
	FORCEINLINE bool Contains(const TCHAR* SubStr, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase,
		ESearchDir::Type SearchDir = ESearchDir::FromStart) const
	{
		return Find(SubStr, SearchCase, SearchDir) != INDEX_NONE;
	}

	/**
	* Returns whether this string contains the specified substring.
	*
	* @param SubStr			Find to search for
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @param SearchDir			Indicates whether the search starts at the begining or at the end ( defaults to ESearchDir::FromStart )
	* @return					Returns whether the string contains the substring
	**/
	FORCEINLINE bool Contains(const FString& SubStr, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase,
		ESearchDir::Type SearchDir = ESearchDir::FromStart) const
	{
		return Find(*SubStr, SearchCase, SearchDir) != INDEX_NONE;
	}

	/**
	* Searches the string for a character
	*
	* @param InChar the character to search for
	* @param Index out the position the character was found at, INDEX_NONE if return is false
	* @return true if character was found in this string, otherwise false
	*/
	FORCEINLINE bool FindChar(TCHAR InChar, int32& Index) const
	{
		return Data.Find(InChar, Index);
	}

	/**
	* Searches the string for the last occurrence of a character
	*
	* @param InChar the character to search for
	* @param Index out the position the character was found at, INDEX_NONE if return is false
	* @return true if character was found in this string, otherwise false
	*/
	FORCEINLINE bool FindLastChar(TCHAR InChar, int32& Index) const
	{
		return Data.FindLast(InChar, Index);
	}

	/**
	* Searches an initial substring for the last occurrence of a character which matches the specified predicate.
	*
	* @param Pred Predicate that takes TCHAR and returns true if TCHAR matches search criteria, false otherwise.
	* @param Count The number of characters from the front of the string through which to search.
	*
	* @return Index of found TCHAR, INDEX_NONE otherwise.
	*/
	template <typename Predicate>
	FORCEINLINE int32 FindLastCharByPredicate(Predicate Pred, int32 Count) const
	{
		return Data.FindLastByPredicate(Pred, Count);
	}

	/**
	* Searches the string for the last occurrence of a character which matches the specified predicate.
	*
	* @param Pred Predicate that takes TCHAR and returns true if TCHAR matches search criteria, false otherwise.
	* @param StartIndex Index of element from which to start searching. Defaults to last TCHAR in string.
	*
	* @return Index of found TCHAR, INDEX_NONE otherwise.
	*/
	template <typename Predicate>
	FORCEINLINE int32 FindLastCharByPredicate(Predicate Pred) const
	{
		return Data.FindLastByPredicate(Pred, this->Len());
	}

	/**
	* Lexicographically tests whether this string is equivalent to the Other given string
	*
	* @param Other 	The string test against
	* @param SearchCase 	Whether or not the comparison should ignore case
	* @return true if this string is lexicographically equivalent to the other, otherwise false
	*/
	FORCEINLINE bool Equals(const FString& Other, ESearchCase::Type SearchCase = ESearchCase::CaseSensitive) const
	{
		if (SearchCase == ESearchCase::CaseSensitive)
		{
			return FCString::Strcmp(**this, *Other) == 0;
		}
		else
		{
			return FCString::Stricmp(**this, *Other) == 0;
		}
	}

	/**
	* Lexicographically tests how this string compares to the Other given string
	*
	* @param Other 	The string test against
	* @param SearchCase 	Whether or not the comparison should ignore case
	* @return 0 if equal, negative if less than, positive if greater than
	*/
	FORCEINLINE int32 Compare(const FString& Other, ESearchCase::Type SearchCase = ESearchCase::CaseSensitive) const
	{
		if (SearchCase == ESearchCase::CaseSensitive)
		{
			return FCString::Strcmp(**this, *Other);
		}
		else
		{
			return FCString::Stricmp(**this, *Other);
		}
	}

	/**
	* Splits this string at given string position case sensitive.
	*
	* @param InStr The string to search and split at
	* @param LeftS out the string to the left of InStr, not updated if return is false
	* @param RightS out the string to the right of InStr, not updated if return is false
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @param SearchDir			Indicates whether the search starts at the begining or at the end ( defaults to ESearchDir::FromStart )
	* @return true if string is split, otherwise false
	*/
	bool Split(const FString& InS, FString* LeftS, FString* RightS, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase,
		ESearchDir::Type SearchDir = ESearchDir::FromStart) const
	{
		int32 InPos = Find(InS, SearchCase, SearchDir);

		if (InPos < 0) { return false; }

		if (LeftS) { *LeftS = Left(InPos); }
		if (RightS) { *RightS = Mid(InPos + InS.Len()); }

		return true;
	}

	/** @return a new string with the characters of this converted to uppercase */
	FString ToUpper() const &;

	/**
	* Converts all characters in this rvalue string to uppercase and moves it into the returned string.
	* @return a new string with the characters of this converted to uppercase
	*/
	FString ToUpper() && ;

	/** Converts all characters in this string to uppercase */
	void ToUpperInline();

	/** @return a new string with the characters of this converted to lowercase */
	FString ToLower() const &;

	/**
	* Converts all characters in this rvalue string to lowercase and moves it into the returned string.
	* @return a new string with the characters of this converted to lowercase
	*/
	FString ToLower() && ;

	/** Converts all characters in this string to lowercase */
	void ToLowerInline();

	/** Pad the left of this string for ChCount characters */
	FString LeftPad(int32 ChCount) const;

	/** Pad the right of this string for ChCount characters */
	FString RightPad(int32 ChCount) const;

	/** @return true if the string only contains numeric characters */
	bool IsNumeric() const;

	// @return string with Ch character
	static FString Chr(TCHAR Ch);

	/**
	* Returns a string that is full of a variable number of characters
	*
	* @param NumCharacters Number of characters to put into the string
	* @param Char Character to put into the string
	*
	* @return The string of NumCharacters characters.
	*/
	static FString ChrN(int32 NumCharacters, TCHAR Char);

	/**
	* Test whether this string starts with given string.
	*
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @return true if this string begins with specified text, false otherwise
	*/
	bool StartsWith(const TCHAR* InSuffix, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase) const;

	/**
	* Test whether this string starts with given string.
	*
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @return true if this string begins with specified text, false otherwise
	*/
	bool StartsWith(const FString& InPrefix, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase) const;

	/**
	* Test whether this string ends with given string.
	*
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @return true if this string ends with specified text, false otherwise
	*/
	bool EndsWith(const TCHAR* InSuffix, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase) const;

	/**
	* Test whether this string ends with given string.
	*
	* @param SearchCase		Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @return true if this string ends with specified text, false otherwise
	*/
	bool EndsWith(const FString& InSuffix, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase) const;

	/**
	* Searches this string for a given wild card
	*
	* @param Wildcard		*?-type wildcard
	* @param SearchCase	Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @return true if this string matches the *?-type wildcard given.
	* @warning This is a simple, SLOW routine. Use with caution
	*/
	bool MatchesWildcard(const FString& Wildcard, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase) const;

	/**
	* Removes whitespace characters from the start and end of this string. Modifies the string in-place.
	*/
	void TrimStartAndEndInline();

	/**
	* Removes whitespace characters from the start and end of this string.
	* @note Unlike Trim() this function returns a copy, and does not mutate the string.
	*/
	FString TrimStartAndEnd() const &;

	/**
	* Removes whitespace characters from the start and end of this string.
	* @note Unlike Trim() this function returns a copy, and does not mutate the string.
	*/
	FString TrimStartAndEnd() && ;

	/**
	* Removes whitespace characters from the start of this string. Modifies the string in-place.
	*/
	void TrimStartInline();

	/**
	* Removes whitespace characters from the start of this string.
	* @note Unlike Trim() this function returns a copy, and does not mutate the string.
	*/
	FString TrimStart() const &;

	/**
	* Removes whitespace characters from the start of this string.
	* @note Unlike Trim() this function returns a copy, and does not mutate the string.
	*/
	FString TrimStart() && ;

	/**
	* Removes whitespace characters from the end of this string. Modifies the string in-place.
	*/
	void TrimEndInline();

	/**
	* Removes whitespace characters from the end of this string.
	* @note Unlike TrimTrailing() this function returns a copy, and does not mutate the string.
	*/
	FString TrimEnd() const &;

	/**
	* Removes whitespace characters from the end of this string.
	* @note Unlike TrimTrailing() this function returns a copy, and does not mutate the string.
	*/
	FString TrimEnd() && ;

	/**
	* Trims the inner array after the null terminator.
	*/
	void TrimToNullTerminator();

	/**
	* Returns a copy of this string with wrapping quotation marks removed.
	*/
	FString TrimQuotes(bool* bQuotesRemoved = nullptr) const;

	/**
	* Breaks up a delimited string into elements of a string array.
	*
	* @param	InArray		The array to fill with the string pieces
	* @param	pchDelim	The string to delimit on
	* @param	InCullEmpty	If 1, empty strings are not added to the array
	*
	* @return	The number of elements in InArray
	*/
	int32 ParseIntoArray(TArray<FString>& OutArray, const TCHAR* pchDelim, bool InCullEmpty = true) const;

	/**
	* Breaks up a delimited string into elements of a string array, using any whitespace and an
	* optional extra delimter, like a ","
	* @warning Caution!! this routine is O(N^2) allocations...use it for parsing very short text or not at all!
	*
	* @param	InArray			The array to fill with the string pieces
	* @param	pchExtraDelim	The string to delimit on
	*
	* @return	The number of elements in InArray
	*/
	int32 ParseIntoArrayWS(TArray<FString>& OutArray, const TCHAR* pchExtraDelim = nullptr, bool InCullEmpty = true) const;

	/**
	* Breaks up a delimited string into elements of a string array, using line ending characters
	* @warning Caution!! this routine is O(N^2) allocations...use it for parsing very short text or not at all!
	*
	* @param	InArray			The array to fill with the string pieces
	*
	* @return	The number of elements in InArray
	*/
	int32 ParseIntoArrayLines(TArray<FString>& OutArray, bool InCullEmpty = true) const;

	/**
	* Breaks up a delimited string into elements of a string array, using the given delimiters
	* @warning Caution!! this routine is O(N^2) allocations...use it for parsing very short text or not at all!
	*
	* @param	InArray			The array to fill with the string pieces
	* @param	DelimArray		The strings to delimit on
	* @param	NumDelims		The number of delimiters.
	*
	* @return	The number of elements in InArray
	*/
	int32 ParseIntoArray(TArray<FString>& OutArray, const TCHAR** DelimArray, int32 NumDelims, bool InCullEmpty = true) const;

	/**
	* Takes an array of strings and removes any zero length entries.
	*
	* @param	InArray	The array to cull
	*
	* @return	The number of elements left in InArray
	*/
	static int32 CullArray(TArray<FString>* InArray);

	/**
	* Returns a copy of this string, with the characters in reverse order
	*/
	FString Reverse() const;

	/**
	* Reverses the order of characters in this string
	*/
	void ReverseString();

	/**
	* Replace all occurrences of a substring in this string
	*
	* @param From substring to replace
	* @param To substring to replace From with
	* @param SearchCase	Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	* @return a copy of this string with the replacement made
	*/
	FString Replace(const TCHAR* From, const TCHAR* To, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase) const;

	/**
	* Replace all occurrences of SearchText with ReplacementText in this string.
	*
	* @param	SearchText	the text that should be removed from this string
	* @param	ReplacementText		the text to insert in its place
	* @param SearchCase	Indicates whether the search is case sensitive or not ( defaults to ESearchCase::IgnoreCase )
	*
	* @return	the number of occurrences of SearchText that were replaced.
	*/
	int32 ReplaceInline(const TCHAR* SearchText, const TCHAR* ReplacementText, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase);

	/**
	* Returns a copy of this string with all quote marks escaped (unless the quote is already escaped)
	*/
	FString ReplaceQuotesWithEscapedQuotes() const;

	/**
	* Replaces certain characters with the "escaped" version of that character (i.e. replaces "\n" with "\\n").
	* The characters supported are: { \n, \r, \t, \', \", \\ }.
	*
	* @param	Chars	by default, replaces all supported characters; this parameter allows you to limit the replacement to a subset.
	*
	* @return	a string with all control characters replaced by the escaped version.
	*/
	FString ReplaceCharWithEscapedChar(const TArray<TCHAR>* Chars = nullptr) const;

	/**
	* Removes the escape backslash for all supported characters, replacing the escape and character with the non-escaped version.  (i.e.
	* replaces "\\n" with "\n".  Counterpart to ReplaceCharWithEscapedChar().
	* @return copy of this string with replacement made
	*/
	FString ReplaceEscapedCharWithChar(const TArray<TCHAR>* Chars = nullptr) const;

	/**
	* Replaces all instances of '\t' with TabWidth number of spaces
	* @param InSpacesPerTab - Number of spaces that a tab represents
	* @return copy of this string with replacement made
	*/
	FString ConvertTabsToSpaces(const int32 InSpacesPerTab);

	// Takes the number passed in and formats the string in comma format ( 12345 becomes "12,345")
	static FString FormatAsNumber(int32 InNumber);

	// To allow more efficient memory handling, automatically adds one for the string termination.
	FORCEINLINE void Reserve(const uint32 CharacterCount)
	{
		Data.Reserve(CharacterCount + 1);
	}

	/** Converts an integer to a string. */
	static FORCEINLINE FString FromInt(int32 Num)
	{
		FString Ret;
		Ret.AppendInt(Num);
		return Ret;
	}

	/** appends the integer InNum to this string */
	void AppendInt(int32 InNum);

	/**
	* Converts a string into a buffer
	*
	* @param DestBuffer the buffer to fill with the string data
	* @param DestSize the size of the buffer in bytes (must be at least string len / 3)
	*
	* @return true if the conversion happened, false otherwise
	*/
	static bool ToBlob(const FString& Source, uint8* DestBuffer, const uint32 DestSize);

	/**
	* Converts a string into a buffer
	*
	* @param DestBuffer the buffer to fill with the string data
	* @param DestSize the size of the buffer in bytes (must be at least string len / 2)
	*
	* @return true if the conversion happened, false otherwise
	*/
	static bool ToHexBlob(const FString& Source, uint8* DestBuffer, const uint32 DestSize);

	/**
	* Joins an array of 'something that can be concatentated to strings with +=' together into a single string with separators.
	*
	* @param	Array		The array of 'things' to concatenate.
	* @param	Separator	The string used to separate each element.
	*
	* @return	The final, joined, separated string.
	*/
	template <typename T, typename Allocator>
	static FString Join(const TArray<T, Allocator>& Array, const TCHAR* Separator)
	{
		FString Result;
		bool    First = true;
		for (const T& Element : Array)
		{
			if (First)
			{
				First = false;
			}
			else
			{
				Result += Separator;
			}

			Result += Element;
		}

		return Result;
	}

	/**
	 * \brief Convert FString to std::string
	 */
	std::string ToString() const
	{
		TCHAR* data = Data.GetData();

		if (!data)
			return "";

		const int size_needed = WideCharToMultiByte(CP_UTF8, 0, data, static_cast<int>(Len()), nullptr, 0,
			nullptr, nullptr);

		std::string str(size_needed, 0);
		WideCharToMultiByte(CP_UTF8, 0, data, static_cast<int>(Len()), str.data(), size_needed, nullptr,
			nullptr);

		return str;
	}

	/**
	* \brief Formats text using fmt::format
	* \tparam T Either a a char or wchar_t
	* \tparam Args Optional arguments types
	* \param format Message
	* \param args Optional arguments
	* \return Formatted text
	*/
	template <typename T, typename... Args>
	static FString Format(const T* format, Args&&... args)
	{
		if constexpr (!TIsCharType<T>::Value)
			static_assert(TIsCharType<T>::Value, "format must be a char or wchar_t");

		auto formatted_msg = fmt::format(format, std::forward<Args>(args)...);

		return FString(formatted_msg.c_str());
	}
};


template<>
struct TContainerTraits<FString> : public TContainerTraitsBase<FString>
{
	enum { MoveWillEmptyContainer = TContainerTraits<FString::DataType>::MoveWillEmptyContainer };
};

template<> struct TIsZeroConstructType<FString> { enum { Value = true }; };
Expose_TNameOf(FString)

template <>
struct TIsContiguousContainer<FString>
{
	enum { Value = true };
};

inline TCHAR* GetData(FString& String)
{
	return String.GetCharArray().GetData();
}

inline const TCHAR* GetData(const FString& String)
{
	return String.GetCharArray().GetData();
}

inline SIZE_T GetNum(const FString& String)
{
	return String.GetCharArray().Num();
}

/**
* Convert an array of bytes to a TCHAR
* @param In byte array values to convert
* @param Count number of bytes to convert
* @return Valid string representing bytes.
*/
inline FString BytesToString(const uint8* In, int32 Count)
{
	FString Result;
	Result.Empty(Count);

	while (Count)
	{
		// Put the byte into an int16 and add 1 to it, this keeps anything from being put into the string as a null terminator
		int16 Value = *In;
		Value += 1;

		Result += TCHAR(Value);

		++In;
		Count--;
	}
	return Result;
}

/**
* Convert FString of bytes into the byte array.
* @param String		The FString of byte values
* @param OutBytes		Ptr to memory must be preallocated large enough
* @param MaxBufferSize	Max buffer size of the OutBytes array, to prevent overflow
* @return	The number of bytes copied
*/
inline int32 StringToBytes(const FString& String, uint8* OutBytes, int32 MaxBufferSize)
{
	int32 NumBytes = 0;
	const TCHAR* CharPos = *String;

	while (*CharPos && NumBytes < MaxBufferSize)
	{
		OutBytes[NumBytes] = (int8)(*CharPos - 1);
		CharPos++;
		++NumBytes;
	}
	return NumBytes - 1;
}

/** @return Char value of Nibble */
inline TCHAR NibbleToTChar(uint8 Num)
{
	if (Num > 9)
	{
		return TEXT('A') + TCHAR(Num - 10);
	}
	return TEXT('0') + TCHAR(Num);
}

/**
* Convert a byte to hex
* @param In byte value to convert
* @param Result out hex value output
*/
inline void ByteToHex(uint8 In, FString& Result)
{
	Result += NibbleToTChar(In >> 4);
	Result += NibbleToTChar(In & 15);
}

/**
* Convert an array of bytes to hex
* @param In byte array values to convert
* @param Count number of bytes to convert
* @return Hex value in string.
*/
inline FString BytesToHex(const uint8* In, int32 Count)
{
	FString Result;
	Result.Empty(Count * 2);

	while (Count)
	{
		ByteToHex(*In++, Result);
		Count--;
	}
	return Result;
}

/**
* Checks if the TChar is a valid hex character
* @param Char		The character
* @return	True if in 0-9 and A-F ranges
*/
inline const bool CheckTCharIsHex(const TCHAR Char)
{
	return (Char >= TEXT('0') && Char <= TEXT('9')) || (Char >= TEXT('A') && Char <= TEXT('F')) || (Char >= TEXT('a') && Char <= TEXT('f'));
}

/**
* Convert a TChar to equivalent hex value as a uint8
* @param Char		The character
* @return	The uint8 value of a hex character
*/
inline const uint8 TCharToNibble(const TCHAR Char)
{
	check(CheckTCharIsHex(Char));
	if (Char >= TEXT('0') && Char <= TEXT('9'))
	{
		return Char - TEXT('0');
	}
	else if (Char >= TEXT('A') && Char <= TEXT('F'))
	{
		return (Char - TEXT('A')) + 10;
	}
	return (Char - TEXT('a')) + 10;
}

/**
* Convert FString of Hex digits into the byte array.
* @param HexString		The FString of Hex values
* @param OutBytes		Ptr to memory must be preallocated large enough
* @return	The number of bytes copied
*/
inline int32 HexToBytes(const FString& HexString, uint8* OutBytes)
{
	int32 NumBytes = 0;
	const bool bPadNibble = (HexString.Len() % 2) == 1;
	const TCHAR* CharPos = *HexString;
	if (bPadNibble)
	{
		OutBytes[NumBytes++] = TCharToNibble(*CharPos++);
	}
	while (*CharPos)
	{
		OutBytes[NumBytes] = TCharToNibble(*CharPos++) << 4;
		OutBytes[NumBytes] += TCharToNibble(*CharPos++);
		++NumBytes;
	}
	return NumBytes;
}

/** Namespace that houses lexical conversion for various types. User defined conversions can be implemented externally */
namespace Lex
{
	/**
	*	Expected functions in this namespace are as follows:
	*		bool								TryParseString(T& OutValue, const TCHAR* Buffer);
	*		void 								FromString(T& OutValue, const TCHAR* Buffer);
	*		<implicitly convertible to string>	ToString(T);
	*		                    ^-- Generally this means it can return either FString or const TCHAR*
	*		                        Generic code that uses ToString should assign to an FString or forward along to other functions
	*		                        that accept types that are also implicitly convertible to FString
	*
	*	Implement custom functionality externally.
	*/

	/** Covert a string buffer to intrinsic types */
	inline void FromString(int8& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atoi(Buffer); }
	inline void FromString(int16& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atoi(Buffer); }
	inline void FromString(int32& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atoi(Buffer); }
	inline void FromString(int64& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atoi64(Buffer); }
	inline void FromString(uint8& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atoi(Buffer); }
	inline void FromString(uint16& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atoi(Buffer); }
	inline void FromString(uint32& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atoi64(Buffer); }	//64 because this unsigned and so Atoi might overflow
	inline void FromString(uint64& OutValue, const TCHAR* Buffer) { OutValue = FCString::Strtoui64(Buffer, nullptr, 0); }
	inline void FromString(float& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atof(Buffer); }
	inline void FromString(double& OutValue, const TCHAR* Buffer) { OutValue = FCString::Atod(Buffer); }
	inline void FromString(FString& OutValue, const TCHAR* Buffer) { OutValue = Buffer; }

	template<typename CharType>
	typename TEnableIf<TIsCharType<CharType>::Value, FString>::Type
		ToString(const CharType* Ptr)
	{
		return FString(Ptr);
	}

	inline FString ToString(bool Value)
	{
		return Value ? TEXT("true") : TEXT("false");
	}

	FORCEINLINE FString ToString(FString&& Str)
	{
		return MoveTemp(Str);
	}

	FORCEINLINE FString ToString(const FString& Str)
	{
		return Str;
	}

	/** Helper template to convert to sanitized strings */
	template<typename T>
	FString ToSanitizedString(const T& Value)
	{
		return ToString(Value);
	}

	/** Parse a string into this type, returning whether it was successful */
	/** Specialization for arithmetic types */
	template<typename T>
	static typename TEnableIf<TIsArithmetic<T>::Value, bool>::Type
		TryParseString(T& OutValue, const TCHAR* Buffer)
	{
		if (FCString::IsNumeric(Buffer))
		{
			FromString(OutValue, Buffer);
			return true;
		}
		return false;
	}
}

// Deprecated alias for old LexicalConversion namespace.
// Namespace alias deprecation doesn't work on our compilers, so we can't actually mark it with the DEPRECATED() macro.
namespace LexicalConversion = Lex;

/** Shorthand legacy use for Lex functions */
template<typename T>
struct TTypeToString
{
	static FString ToString(const T& Value) { return Lex::ToString(Value); }
	static FString ToSanitizedString(const T& Value) { return Lex::ToSanitizedString(Value); }
};
template<typename T>
struct TTypeFromString
{
	static void FromString(T& Value, const TCHAR* Buffer) { return Lex::FromString(Value, Buffer); }
};


/* FString implementation
*****************************************************************************/

namespace UE4String_Private
{
	struct FCompareCharsCaseSensitive
	{
		static FORCEINLINE bool Compare(TCHAR Lhs, TCHAR Rhs)
		{
			return Lhs == Rhs;
		}
	};

	struct FCompareCharsCaseInsensitive
	{
		static FORCEINLINE bool Compare(TCHAR Lhs, TCHAR Rhs)
		{
			return FChar::ToLower(Lhs) == FChar::ToLower(Rhs);
		}
	};

	template <typename CompareType>
	bool MatchesWildcardRecursive(const TCHAR* Target, int32 TargetLength, const TCHAR* Wildcard, int32 WildcardLength)
	{
		// Skip over common initial non-wildcard-char sequence of Target and Wildcard
		for (;;)
		{
			TCHAR WCh = *Wildcard;
			if (WCh == TEXT('*') || WCh == TEXT('?'))
			{
				break;
			}

			if (!CompareType::Compare(*Target, WCh))
			{
				return false;
			}

			if (WCh == TEXT('\0'))
			{
				return true;
			}

			++Target;
			++Wildcard;
			--TargetLength;
			--WildcardLength;
		}

		// Test for common suffix
		const TCHAR* TPtr = Target + TargetLength;
		const TCHAR* WPtr = Wildcard + WildcardLength;
		for (;;)
		{
			--TPtr;
			--WPtr;

			TCHAR WCh = *WPtr;
			if (WCh == TEXT('*') || WCh == TEXT('?'))
			{
				break;
			}

			if (!CompareType::Compare(*TPtr, WCh))
			{
				return false;
			}

			--TargetLength;
			if (TargetLength == 0)
			{
				return false;
			}

			--WildcardLength;
		}

		// Match * against anything and ? against single (and zero?) chars
		TCHAR FirstWild = *Wildcard;
		if (WildcardLength == 1 && (FirstWild == TEXT('*') || TargetLength < 2))
		{
			return true;
		}
		++Wildcard;
		--WildcardLength;

		// This routine is very slow, though it does ok with one wildcard
		int32 MaxNum = TargetLength;
		if (FirstWild == TEXT('?') && MaxNum > 1)
		{
			MaxNum = 1;
		}

		for (int32 Index = 0; Index <= MaxNum; ++Index)
		{
			if (MatchesWildcardRecursive<CompareType>(Target, TargetLength - Index, Wildcard, WildcardLength))
			{
				return true;
			}
		}
		return false;
	}
}

inline void FString::TrimToNullTerminator()
{
	if (Data.Num())
	{
		int32 DataLen = FCString::Strlen(Data.GetData());
		int32 Len = DataLen > 0 ? DataLen + 1 : 0;

		Data.RemoveAt(Len, Data.Num() - Len);
	}
}


inline int32 FString::Find(const TCHAR* SubStr, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir, int32 StartPosition) const
{
	if (SubStr == nullptr)
	{
		return INDEX_NONE;
	}
	if (SearchDir == ESearchDir::FromStart)
	{
		const TCHAR* Start = **this;
		if (StartPosition != INDEX_NONE)
		{
			Start += FMath::Clamp(StartPosition, 0, Len() - 1);
		}
		const TCHAR* Tmp = SearchCase == ESearchCase::IgnoreCase
			? FCString::Stristr(Start, SubStr)
			: FCString::Strstr(Start, SubStr);

		return Tmp ? (Tmp - **this) : INDEX_NONE;
	}
	else
	{
		// if ignoring, do a onetime ToUpper on both strings, to avoid ToUppering multiple
		// times in the loop below
		if (SearchCase == ESearchCase::IgnoreCase)
		{
			return ToUpper().Find(FString(SubStr).ToUpper(), ESearchCase::CaseSensitive, SearchDir, StartPosition);
		}
		else
		{
			const int32 SearchStringLength = FMath::Max(1, FCString::Strlen(SubStr));

			if (StartPosition == INDEX_NONE || StartPosition >= Len())
			{
				StartPosition = Len();
			}

			for (int32 i = StartPosition - SearchStringLength; i >= 0; i--)
			{
				int32 j;
				for (j = 0; SubStr[j]; j++)
				{
					if ((*this)[i + j] != SubStr[j])
					{
						break;
					}
				}

				if (!SubStr[j])
				{
					return i;
				}
			}
			return INDEX_NONE;
		}
	}
}

inline FString FString::ToUpper() const &
{
	FString New = *this;
	New.ToUpperInline();
	return New;
}

inline FString FString::ToUpper() &&
{
	this->ToUpperInline();
	return MoveTemp(*this);
}

inline void FString::ToUpperInline()
{
	const int32 StringLength = Len();
	TCHAR* RawData = Data.GetData();
	for (int32 i = 0; i < StringLength; ++i)
	{
		RawData[i] = FChar::ToUpper(RawData[i]);
	}
}


inline FString FString::ToLower() const &
{
	FString New = *this;
	New.ToLowerInline();
	return New;
}

inline FString FString::ToLower() &&
{
	this->ToLowerInline();
	return MoveTemp(*this);
}

inline void FString::ToLowerInline()
{
	const int32 StringLength = Len();
	TCHAR* RawData = Data.GetData();
	for (int32 i = 0; i < StringLength; ++i)
	{
		RawData[i] = FChar::ToLower(RawData[i]);
	}
}

inline bool FString::StartsWith(const TCHAR* InPrefix, ESearchCase::Type SearchCase) const
{
	if (SearchCase == ESearchCase::IgnoreCase)
	{
		return InPrefix && *InPrefix && !FCString::Strnicmp(**this, InPrefix, FCString::Strlen(InPrefix));
	}
	else
	{
		return InPrefix && *InPrefix && !FCString::Strncmp(**this, InPrefix, FCString::Strlen(InPrefix));
	}
}

inline bool FString::StartsWith(const FString& InPrefix, ESearchCase::Type SearchCase) const
{
	if (SearchCase == ESearchCase::IgnoreCase)
	{
		return InPrefix.Len() > 0 && !FCString::Strnicmp(**this, *InPrefix, InPrefix.Len());
	}
	else
	{
		return InPrefix.Len() > 0 && !FCString::Strncmp(**this, *InPrefix, InPrefix.Len());
	}
}

inline bool FString::EndsWith(const TCHAR* InSuffix, ESearchCase::Type SearchCase) const
{
	if (!InSuffix || *InSuffix == TEXT('\0'))
	{
		return false;
	}

	int32 ThisLen = this->Len();
	int32 SuffixLen = FCString::Strlen(InSuffix);
	if (SuffixLen > ThisLen)
	{
		return false;
	}

	const TCHAR* StrPtr = Data.GetData() + ThisLen - SuffixLen;
	if (SearchCase == ESearchCase::IgnoreCase)
	{
		return !FCString::Stricmp(StrPtr, InSuffix);
	}
	else
	{
		return !FCString::Strcmp(StrPtr, InSuffix);
	}
}

inline bool FString::EndsWith(const FString& InSuffix, ESearchCase::Type SearchCase) const
{
	if (SearchCase == ESearchCase::IgnoreCase)
	{
		return InSuffix.Len() > 0 &&
			Len() >= InSuffix.Len() &&
			!FCString::Stricmp(&(*this)[Len() - InSuffix.Len()], *InSuffix);
	}
	else
	{
		return InSuffix.Len() > 0 &&
			Len() >= InSuffix.Len() &&
			!FCString::Strcmp(&(*this)[Len() - InSuffix.Len()], *InSuffix);
	}
}

inline bool FString::RemoveFromStart(const FString& InPrefix, ESearchCase::Type SearchCase)
{
	if (InPrefix.IsEmpty())
	{
		return false;
	}

	if (StartsWith(InPrefix, SearchCase))
	{
		RemoveAt(0, InPrefix.Len());
		return true;
	}

	return false;
}

inline bool FString::RemoveFromEnd(const FString& InSuffix, ESearchCase::Type SearchCase)
{
	if (InSuffix.IsEmpty())
	{
		return false;
	}

	if (EndsWith(InSuffix, SearchCase))
	{
		RemoveAt(Len() - InSuffix.Len(), InSuffix.Len());
		return true;
	}

	return false;
}

/**
* Concatenate this path with given path ensuring the / character is used between them
*
* @param Str       Pointer to an array of TCHARs (not necessarily null-terminated) to be concatenated onto the end of this.
* @param StrLength Exact number of characters from Str to append.
*/
inline void FString::PathAppend(const TCHAR* Str, int32 StrLength)
{
	int32 DataNum = Data.Num();
	if (StrLength == 0)
	{
		if (DataNum > 1 && Data[DataNum - 2] != TEXT('/') && Data[DataNum - 2] != TEXT('\\'))
		{
			Data[DataNum - 1] = TEXT('/');
			Data.Add(TEXT('\0'));
		}
	}
	else
	{
		if (DataNum > 0)
		{
			if (DataNum > 1 && Data[DataNum - 2] != TEXT('/') && Data[DataNum - 2] != TEXT('\\') && *Str != TEXT('/'))
			{
				Data[DataNum - 1] = TEXT('/');
			}
			else
			{
				Data.Pop(false);
				--DataNum;
			}
		}

		Data.Reserve(DataNum + StrLength + 1);
		Data.Append(Str, StrLength);
		Data.Add(TEXT('\0'));
	}
}

inline void FString::TrimStartAndEndInline()
{
	TrimEndInline();
	TrimStartInline();
}

inline FString FString::TrimStartAndEnd() const &
{
	FString Result(*this);
	Result.TrimStartAndEndInline();
	return Result;
}

inline FString FString::TrimStartAndEnd() &&
{
	FString Result(MoveTemp(*this));
	Result.TrimStartAndEndInline();
	return Result;
}

inline void FString::TrimStartInline()
{
	int32 Pos = 0;
	while (Pos < Len() && FChar::IsWhitespace((*this)[Pos]))
	{
		Pos++;
	}
	RemoveAt(0, Pos);
}

inline FString FString::TrimStart() const &
{
	FString Result(*this);
	Result.TrimStartInline();
	return Result;
}

inline FString FString::TrimStart() &&
{
	FString Result(MoveTemp(*this));
	Result.TrimStartInline();
	return Result;
}

inline void FString::TrimEndInline()
{
	int32 End = Len();
	while (End > 0 && FChar::IsWhitespace((*this)[End - 1]))
	{
		End--;
	}
	RemoveAt(End, Len() - End);
}

inline FString FString::TrimEnd() const &
{
	FString Result(*this);
	Result.TrimEndInline();
	return Result;
}

inline FString FString::TrimEnd() &&
{
	FString Result(MoveTemp(*this));
	Result.TrimEndInline();
	return Result;
}

inline FString FString::TrimQuotes(bool* bQuotesRemoved) const
{
	bool bQuotesWereRemoved = false;
	int32 Start = 0, Count = Len();
	if (Count > 0)
	{
		if ((*this)[0] == TCHAR('"'))
		{
			Start++;
			Count--;
			bQuotesWereRemoved = true;
		}

		if (Len() > 1 && (*this)[Len() - 1] == TCHAR('"'))
		{
			Count--;
			bQuotesWereRemoved = true;
		}
	}

	if (bQuotesRemoved != nullptr)
	{
		*bQuotesRemoved = bQuotesWereRemoved;
	}
	return Mid(Start, Count);
}

inline int32 FString::CullArray(TArray<FString>* InArray)
{
	FString Empty;
	InArray->Remove(Empty);
	return InArray->Num();
}

inline FString FString::Reverse() const
{
	FString New(*this);
	New.ReverseString();
	return New;
}

inline void FString::ReverseString()
{
	if (Len() > 0)
	{
		TCHAR* StartChar = &(*this)[0];
		TCHAR* EndChar = &(*this)[Len() - 1];
		TCHAR TempChar;
		do
		{
			TempChar = *StartChar;	// store the current value of StartChar
			*StartChar = *EndChar;	// change the value of StartChar to the value of EndChar
			*EndChar = TempChar;	// change the value of EndChar to the character that was previously at StartChar

			StartChar++;
			EndChar--;

		} while (StartChar < EndChar);	// repeat until we've reached the midpoint of the string
	}
}

inline FString FString::FormatAsNumber(int32 InNumber)
{
	FString Number = FString::FromInt(InNumber), Result;

	int32 dec = 0;
	for (int32 x = Number.Len() - 1; x > -1; --x)
	{
		Result += Number.Mid(x, 1);

		dec++;
		if (dec == 3 && x > 0)
		{
			Result += TEXT(",");
			dec = 0;
		}
	}

	return Result.Reverse();
}

inline void FString::AppendInt(int32 InNum)
{
	int64 Num = InNum; // This avoids having to deal with negating -MAX_int32-1
	const TCHAR* NumberChar[11] = { TEXT("0"), TEXT("1"), TEXT("2"), TEXT("3"), TEXT("4"), TEXT("5"), TEXT("6"), TEXT("7"), TEXT("8"), TEXT("9"), TEXT("-") };
	bool bIsNumberNegative = false;
	TCHAR TempNum[16];				// 16 is big enough
	int32 TempAt = 16; // fill the temp string from the top down.

					   // Correctly handle negative numbers and convert to positive integer.
	if (Num < 0)
	{
		bIsNumberNegative = true;
		Num = -Num;
	}

	TempNum[--TempAt] = 0; // NULL terminator

						   // Convert to string assuming base ten and a positive integer.
	do
	{
		TempNum[--TempAt] = *NumberChar[Num % 10];
		Num /= 10;
	} while (Num);

	// Append sign as we're going to reverse string afterwards.
	if (bIsNumberNegative)
	{
		TempNum[--TempAt] = *NumberChar[10];
	}

	*this += TempNum + TempAt;
}

inline bool FString::ToBlob(const FString& Source, uint8* DestBuffer, const uint32 DestSize)
{
	// Make sure the buffer is at least half the size and that the string is an
	// even number of characters long
	if (DestSize >= (uint32)(Source.Len() / 3) &&
		(Source.Len() % 3) == 0)
	{
		TCHAR ConvBuffer[4];
		ConvBuffer[3] = TEXT('\0');
		int32 WriteIndex = 0;
		// Walk the string 3 chars at a time
		for (int32 Index = 0; Index < Source.Len(); Index += 3, WriteIndex++)
		{
			ConvBuffer[0] = Source[Index];
			ConvBuffer[1] = Source[Index + 1];
			ConvBuffer[2] = Source[Index + 2];
			DestBuffer[WriteIndex] = FCString::Atoi(ConvBuffer);
		}
		return true;
	}
	return false;
}

inline bool FString::ToHexBlob(const FString& Source, uint8* DestBuffer, const uint32 DestSize)
{
	// Make sure the buffer is at least half the size and that the string is an
	// even number of characters long
	if (DestSize >= (uint32)(Source.Len() / 2) &&
		(Source.Len() % 2) == 0)
	{
		TCHAR ConvBuffer[3];
		ConvBuffer[2] = TEXT('\0');
		int32 WriteIndex = 0;
		// Walk the string 2 chars at a time
		TCHAR* End = nullptr;
		for (int32 Index = 0; Index < Source.Len(); Index += 2, WriteIndex++)
		{
			ConvBuffer[0] = Source[Index];
			ConvBuffer[1] = Source[Index + 1];
			DestBuffer[WriteIndex] = FCString::Strtoi(ConvBuffer, &End, 16);
		}
		return true;
	}
	return false;
}

inline FString FString::Chr(TCHAR Ch)
{
	TCHAR Temp[2] = { Ch,0 };
	return FString(Temp);
}


inline FString FString::ChrN(int32 NumCharacters, TCHAR Char)
{
	FString Temp;
	Temp.Data.AddUninitialized(NumCharacters + 1);
	for (int32 Cx = 0; Cx < NumCharacters; ++Cx)
	{
		Temp[Cx] = Char;
	}
	Temp.Data[NumCharacters] = 0;
	return Temp;
}

inline FString FString::LeftPad(int32 ChCount) const
{
	int32 Pad = ChCount - Len();

	if (Pad > 0)
	{
		return ChrN(Pad, ' ') + *this;
	}
	else
	{
		return *this;
	}
}

inline FString FString::RightPad(int32 ChCount) const
{
	int32 Pad = ChCount - Len();

	if (Pad > 0)
	{
		return *this + ChrN(Pad, ' ');
	}
	else
	{
		return *this;
	}
}

inline bool FString::IsNumeric() const
{
	if (IsEmpty())
	{
		return 0;
	}

	return FCString::IsNumeric(Data.GetData());
}

/**
* Breaks up a delimited string into elements of a string array.
*
* @param	InArray		The array to fill with the string pieces
* @param	pchDelim	The string to delimit on
* @param	InCullEmpty	If 1, empty strings are not added to the array
*
* @return	The number of elements in InArray
*/
inline int32 FString::ParseIntoArray(TArray<FString>& OutArray, const TCHAR* pchDelim, const bool InCullEmpty) const
{
	// Make sure the delimit string is not null or empty
	OutArray.Reset();
	const TCHAR *Start = Data.GetData();
	const int32 DelimLength = FCString::Strlen(pchDelim);
	if (Start && *Start != TEXT('\0') && DelimLength)
	{
		while (const TCHAR *At = FCString::Strstr(Start, pchDelim))
		{
			if (!InCullEmpty || At - Start)
			{
				OutArray.Emplace(At - Start, Start);
			}
			Start = At + DelimLength;
		}
		if (!InCullEmpty || *Start)
		{
			OutArray.Emplace(Start);
		}

	}
	return OutArray.Num();
}

inline bool FString::MatchesWildcard(const FString& InWildcard, ESearchCase::Type SearchCase) const
{
	FString Wildcard(InWildcard);
	FString Target(*this);
	int32 IndexOfStar = Wildcard.Find(TEXT("*"), ESearchCase::CaseSensitive, ESearchDir::FromEnd); // last occurance
	int32 IndexOfQuestion = Wildcard.Find(TEXT("?"), ESearchCase::CaseSensitive, ESearchDir::FromEnd); // last occurance
	int32 Suffix = FMath::Max<int32>(IndexOfStar, IndexOfQuestion);
	if (Suffix == INDEX_NONE)
	{
		// no wildcards
		if (SearchCase == ESearchCase::IgnoreCase)
		{
			return FCString::Stricmp(*Target, *Wildcard) == 0;
		}
		else
		{
			return FCString::Strcmp(*Target, *Wildcard) == 0;
		}
	}
	else
	{
		if (Suffix + 1 < Wildcard.Len())
		{
			FString SuffixString = Wildcard.Mid(Suffix + 1);
			if (!Target.EndsWith(SuffixString, SearchCase))
			{
				return false;
			}
			Wildcard = Wildcard.Left(Suffix + 1);
			Target = Target.Left(Target.Len() - SuffixString.Len());
		}
		int32 PrefixIndexOfStar = Wildcard.Find(TEXT("*"), ESearchCase::CaseSensitive);
		int32 PrefixIndexOfQuestion = Wildcard.Find(TEXT("?"), ESearchCase::CaseSensitive);
		int32 Prefix = FMath::Min<int32>(PrefixIndexOfStar < 0 ? INT_MAX : PrefixIndexOfStar, PrefixIndexOfQuestion < 0 ? INT_MAX : PrefixIndexOfQuestion);
		if (Prefix > 0)
		{
			FString PrefixString = Wildcard.Left(Prefix);
			if (!Target.StartsWith(PrefixString, SearchCase))
			{
				return false;
			}
			Wildcard = Wildcard.Mid(Prefix);
			Target = Target.Mid(Prefix);
		}
	}
	// This routine is very slow, though it does ok with one wildcard
	TCHAR FirstWild = Wildcard[0];
	Wildcard = Wildcard.Right(Wildcard.Len() - 1);
	if (FirstWild == TEXT('*') || FirstWild == TEXT('?'))
	{
		if (!Wildcard.Len())
		{
			if (FirstWild == TEXT('*') || Target.Len() < 2)
			{
				return true;
			}
		}
		int32 MaxNum = FMath::Min<int32>(Target.Len(), FirstWild == TEXT('?') ? 1 : INT_MAX);
		for (int32 Index = 0; Index <= MaxNum; Index++)
		{
			if (Target.Right(Target.Len() - Index).MatchesWildcard(Wildcard, SearchCase))
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		return false;
	}
}


/** Caution!! this routine is O(N^2) allocations...use it for parsing very short text or not at all */
inline int32 FString::ParseIntoArrayWS(TArray<FString>& OutArray, const TCHAR* pchExtraDelim, bool InCullEmpty) const
{
	// default array of White Spaces, the last entry can be replaced with the optional pchExtraDelim string
	// (if you want to split on white space and another character)
	static const TCHAR* WhiteSpace[] =
	{
		TEXT(" "),
		TEXT("\t"),
		TEXT("\r"),
		TEXT("\n"),
		TEXT(""),
	};

	// start with just the standard whitespaces
	int32 NumWhiteSpaces = ARRAY_COUNT(WhiteSpace) - 1;
	// if we got one passed in, use that in addition
	if (pchExtraDelim && *pchExtraDelim)
	{
		WhiteSpace[NumWhiteSpaces++] = pchExtraDelim;
	}

	return ParseIntoArray(OutArray, WhiteSpace, NumWhiteSpaces, InCullEmpty);
}

inline int32 FString::ParseIntoArrayLines(TArray<FString>& OutArray, bool InCullEmpty) const
{
	// default array of LineEndings
	static const TCHAR* LineEndings[] =
	{
		TEXT("\r\n"),
		TEXT("\r"),
		TEXT("\n"),
	};

	// start with just the standard line endings
	int32 NumLineEndings = ARRAY_COUNT(LineEndings);
	return ParseIntoArray(OutArray, LineEndings, NumLineEndings, InCullEmpty);
}

#pragma warning(push)
#pragma warning(disable : 4291)

inline int32 FString::ParseIntoArray(TArray<FString>& OutArray, const TCHAR** DelimArray, int32 NumDelims, bool InCullEmpty) const
{
	// Make sure the delimit string is not null or empty
	OutArray.Empty();
	const TCHAR *Start = Data.GetData();
	const int32 Length = Len();
	if (Start)
	{
		int32 SubstringBeginIndex = 0;

		// Iterate through string.
		for (int32 i = 0; i < Len();)
		{
			int32 SubstringEndIndex = INDEX_NONE;
			int32 DelimiterLength = 0;

			// Attempt each delimiter.
			for (int32 DelimIndex = 0; DelimIndex < NumDelims; ++DelimIndex)
			{
				DelimiterLength = FCString::Strlen(DelimArray[DelimIndex]);

				// If we found a delimiter...
				if (FCString::Strncmp(Start + i, DelimArray[DelimIndex], DelimiterLength) == 0)
				{
					// Mark the end of the substring.
					SubstringEndIndex = i;
					break;
				}
			}

			if (SubstringEndIndex != INDEX_NONE)
			{
				const int32 SubstringLength = SubstringEndIndex - SubstringBeginIndex;
				// If we're not culling empty strings or if we are but the string isn't empty anyways...
				if (!InCullEmpty || SubstringLength != 0)
				{
					// ... add new string from substring beginning up to the beginning of this delimiter.
					new (OutArray) FString(SubstringEndIndex - SubstringBeginIndex, Start + SubstringBeginIndex);
				}
				// Next substring begins at the end of the discovered delimiter.
				SubstringBeginIndex = SubstringEndIndex + DelimiterLength;
				i = SubstringBeginIndex;
			}
			else
			{
				++i;
			}
		}

		// Add any remaining characters after the last delimiter.
		const int32 SubstringLength = Length - SubstringBeginIndex;
		// If we're not culling empty strings or if we are but the string isn't empty anyways...
		if (!InCullEmpty || SubstringLength != 0)
		{
			// ... add new string from substring beginning up to the beginning of this delimiter.
			new (OutArray) FString(Start + SubstringBeginIndex);
		}
	}

	return OutArray.Num();
}

#pragma warning(pop)

inline FString FString::Replace(const TCHAR* From, const TCHAR* To, ESearchCase::Type SearchCase) const
{
	// Previous code used to accidentally accept a nullptr replacement string - this is no longer accepted.

	if (IsEmpty() || !From || !*From)
	{
		return *this;
	}

	// get a pointer into the character data
	const TCHAR* Travel = Data.GetData();

	// precalc the lengths of the replacement strings
	int32 FromLength = FCString::Strlen(From);
	int32 ToLength = FCString::Strlen(To);

	FString Result;
	while (true)
	{
		// look for From in the remaining string
		const TCHAR* FromLocation = SearchCase == ESearchCase::IgnoreCase ? FCString::Stristr(Travel, From) : FCString::Strstr(Travel, From);
		if (!FromLocation)
			break;

		// copy everything up to FromLocation
		Result.AppendChars(Travel, FromLocation - Travel);

		// copy over the To
		Result.AppendChars(To, ToLength);

		Travel = FromLocation + FromLength;
	}

	// copy anything left over
	Result += Travel;

	return Result;
}

inline int32 FString::ReplaceInline(const TCHAR* SearchText, const TCHAR* ReplacementText, ESearchCase::Type SearchCase)
{
	int32 ReplacementCount = 0;

	if (Len() > 0
		&& SearchText != nullptr && *SearchText != 0
		&& ReplacementText != nullptr && (SearchCase == ESearchCase::IgnoreCase || FCString::Strcmp(SearchText, ReplacementText) != 0))
	{
		const int32 NumCharsToReplace = FCString::Strlen(SearchText);
		const int32 NumCharsToInsert = FCString::Strlen(ReplacementText);

		if (NumCharsToInsert == NumCharsToReplace)
		{
			TCHAR* Pos = SearchCase == ESearchCase::IgnoreCase ? FCString::Stristr(&(*this)[0], SearchText) : FCString::Strstr(&(*this)[0], SearchText);
			while (Pos != nullptr)
			{
				ReplacementCount++;

				// FCString::Strcpy now inserts a terminating zero so can't use that
				for (int32 i = 0; i < NumCharsToInsert; i++)
				{
					Pos[i] = ReplacementText[i];
				}

				if (Pos + NumCharsToReplace - **this < Len())
				{
					Pos = SearchCase == ESearchCase::IgnoreCase ? FCString::Stristr(Pos + NumCharsToReplace, SearchText) : FCString::Strstr(Pos + NumCharsToReplace, SearchText);
				}
				else
				{
					break;
				}
			}
		}
		else if (Contains(SearchText, SearchCase))
		{
			FString Copy(*this);
			Empty(Len());

			// get a pointer into the character data
			TCHAR* WritePosition = (TCHAR*)Copy.Data.GetData();
			// look for From in the remaining string
			TCHAR* SearchPosition = SearchCase == ESearchCase::IgnoreCase ? FCString::Stristr(WritePosition, SearchText) : FCString::Strstr(WritePosition, SearchText);
			while (SearchPosition != nullptr)
			{
				ReplacementCount++;

				// replace the first letter of the From with 0 so we can do a strcpy (FString +=)
				*SearchPosition = 0;

				// copy everything up to the SearchPosition
				(*this) += WritePosition;

				// copy over the ReplacementText
				(*this) += ReplacementText;

				// restore the letter, just so we don't have 0's in the string
				*SearchPosition = *SearchText;

				WritePosition = SearchPosition + NumCharsToReplace;
				SearchPosition = SearchCase == ESearchCase::IgnoreCase ? FCString::Stristr(WritePosition, SearchText) : FCString::Strstr(WritePosition, SearchText);
			}

			// copy anything left over
			(*this) += WritePosition;
		}
	}

	return ReplacementCount;
}


/**
* Returns a copy of this string with all quote marks escaped (unless the quote is already escaped)
*/
inline FString FString::ReplaceQuotesWithEscapedQuotes() const
{
	if (Contains(TEXT("\""), ESearchCase::CaseSensitive))
	{
		FString Result;

		const TCHAR* pChar = **this;

		bool bEscaped = false;
		while (*pChar != 0)
		{
			if (bEscaped)
			{
				bEscaped = false;
			}
			else if (*pChar == TCHAR('\\'))
			{
				bEscaped = true;
			}
			else if (*pChar == TCHAR('"'))
			{
				Result += TCHAR('\\');
			}

			Result += *pChar++;
		}

		return Result;
	}

	return *this;
}

static const TCHAR* CharToEscapeSeqMap[][2] =
{
	// Always replace \\ first to avoid double-escaping characters
	{ TEXT("\\"), TEXT("\\\\") },
{ TEXT("\n"), TEXT("\\n") },
{ TEXT("\r"), TEXT("\\r") },
{ TEXT("\t"), TEXT("\\t") },
{ TEXT("\'"), TEXT("\\'") },
{ TEXT("\""), TEXT("\\\"") }
};

static const uint32 MaxSupportedEscapeChars = ARRAY_COUNT(CharToEscapeSeqMap);

/**
* Replaces certain characters with the "escaped" version of that character (i.e. replaces "\n" with "\\n").
* The characters supported are: { \n, \r, \t, \', \", \\ }.
*
* @param	Chars	by default, replaces all supported characters; this parameter allows you to limit the replacement to a subset.
*
* @return	a string with all control characters replaced by the escaped version.
*/
inline FString FString::ReplaceCharWithEscapedChar(const TArray<TCHAR>* Chars/*=nullptr*/) const
{
	if (Len() > 0 && (Chars == nullptr || Chars->Num() > 0))
	{
		FString Result(*this);
		for (int32 ChIdx = 0; ChIdx < MaxSupportedEscapeChars; ChIdx++)
		{
			if (Chars == nullptr || Chars->Contains(*(CharToEscapeSeqMap[ChIdx][0])))
			{
				// use ReplaceInline as that won't create a copy of the string if the character isn't found
				Result.ReplaceInline(CharToEscapeSeqMap[ChIdx][0], CharToEscapeSeqMap[ChIdx][1]);
			}
		}
		return Result;
	}

	return *this;
}
/**
* Removes the escape backslash for all supported characters, replacing the escape and character with the non-escaped version.  (i.e.
* replaces "\\n" with "\n".  Counterpart to ReplaceCharWithEscapedChar().
*/
inline FString FString::ReplaceEscapedCharWithChar(const TArray<TCHAR>* Chars/*=nullptr*/) const
{
	if (Len() > 0 && (Chars == nullptr || Chars->Num() > 0))
	{
		FString Result(*this);
		// Spin CharToEscapeSeqMap backwards to ensure we're doing the inverse of ReplaceCharWithEscapedChar
		for (int32 ChIdx = MaxSupportedEscapeChars - 1; ChIdx >= 0; ChIdx--)
		{
			if (Chars == nullptr || Chars->Contains(*(CharToEscapeSeqMap[ChIdx][0])))
			{
				// use ReplaceInline as that won't create a copy of the string if the character isn't found
				Result.ReplaceInline(CharToEscapeSeqMap[ChIdx][1], CharToEscapeSeqMap[ChIdx][0]);
			}
		}
		return Result;
	}

	return *this;
}

/**
* Replaces all instances of '\t' with TabWidth number of spaces
* @param InSpacesPerTab - Number of spaces that a tab represents
*/
inline FString FString::ConvertTabsToSpaces(const int32 InSpacesPerTab)
{
	//must call this with at least 1 space so the modulus operation works

	FString FinalString = *this;
	int32 TabIndex;
	while ((TabIndex = FinalString.Find(TEXT("\t"))) != INDEX_NONE)
	{
		FString LeftSide = FinalString.Left(TabIndex);
		FString RightSide = FinalString.Mid(TabIndex + 1);

		FinalString = LeftSide;
		//for a tab size of 4, 
		int32 LineBegin = LeftSide.Find(TEXT("\n"), ESearchCase::IgnoreCase, ESearchDir::FromEnd, TabIndex);
		if (LineBegin == INDEX_NONE)
		{
			LineBegin = 0;
		}
		int32 CharactersOnLine = (LeftSide.Len() - LineBegin);

		int32 NumSpacesForTab = InSpacesPerTab - (CharactersOnLine % InSpacesPerTab);
		for (int32 i = 0; i < NumSpacesForTab; ++i)
		{
			FinalString.AppendChar(' ');
		}
		FinalString += RightSide;
	}

	return FinalString;
}

inline int32 FindMatchingClosingParenthesis(const FString& TargetString, const int32 StartSearch)
{
	const TCHAR* const StartPosition = (*TargetString) + StartSearch;
	const TCHAR* CurrPosition = StartPosition;
	int32 ParenthesisCount = 0;

	// Move to first open parenthesis
	while (*CurrPosition != 0 && *CurrPosition != TEXT('('))
	{
		++CurrPosition;
	}

	// Did we find the open parenthesis
	if (*CurrPosition == TEXT('('))
	{
		++ParenthesisCount;
		++CurrPosition;

		while (*CurrPosition != 0 && ParenthesisCount > 0)
		{
			if (*CurrPosition == TEXT('('))
			{
				++ParenthesisCount;
			}
			else if (*CurrPosition == TEXT(')'))
			{
				--ParenthesisCount;
			}
			++CurrPosition;
		}

		// Did we find the matching close parenthesis
		if (ParenthesisCount == 0 && *(CurrPosition - 1) == TEXT(')'))
		{
			return StartSearch + ((CurrPosition - 1) - StartPosition);
		}
	}

	return INDEX_NONE;
}

#pragma warning(pop)

