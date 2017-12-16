#pragma once

#include "TArray.h"
#include "MicrosoftPlatformString.h"
#include "Templates/UnrealTypeTraits.h"
#include "UnrealMathUtility.h"
#include "Char.h"
#include "CString.h"

#pragma warning(push)
#pragma warning(disable : 4244)

class FString
{
private:
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
		: Data(Other.Data, ExtraSlack + (Other.Data.Num() || !ExtraSlack ? 0 : 1))
	// Add 1 if the source string array is empty and we want some slack, because we'll need to include a null terminator which is currently missing
	{
	}

	/**
	* Create a copy of the Other string with extra space for characters at the end of the string
	*
	* @param Other the other string to create a new copy from
	* @param ExtraSlack number of extra characters to add to the end of the other string in this string
	*/
	FORCEINLINE FString(FString&& Other, int32 ExtraSlack)
		: Data(std::move(Other.Data), ExtraSlack + (Other.Data.Num() || !ExtraSlack ? 0 : 1))
	// Add 1 if the source string array is empty and we want some slack, because we'll need to include a null terminator which is currently missing
	{
	}

	/**
	* Constructor using an array of TCHAR
	*
	* @param In array of TCHAR
	*/
	template <typename CharType>
	FORCEINLINE FString(const CharType* Src, typename TEnableIf<TIsCharType<CharType>::Value>::Type* Dummy = nullptr)
	// This TEnableIf is to ensure we don't instantiate this constructor for non-char types, like id* in Obj-C
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
	* Copy Assignment from array of TCHAR
	*
	* @param Other array of TCHAR
	*/
	FORCEINLINE FString& operator=(const TCHAR* Other)
	{
		if (Data.GetData() != Other)
		{
			int32 Len = Other && *Other ? FPlatformString::Strlen(Other) + 1 : 0;
			Data.Clear();
			Data.AddUninitialized(Len);

			if (Len)
			{
				memcpy_s(Data.GetData(), Data.Max() * sizeof(TCHAR), Other, Len * sizeof(TCHAR));
			}
		}
		return *this;
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
		AppendChars(Str, FPlatformString::Strlen(Str));

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
		if (InChar != 0)
		{
			// position to insert the character.  
			// At the end of the string if we have existing characters, otherwise at the 0 position
			int32 InsertIndex = Data.Num() > 0 ? Data.Num() - 1 : 0;

			// number of characters to add.  If we don't have any existing characters, 
			// we'll need to append the terminating zero as well.
			int32 InsertCount = Data.Num() > 0 ? 1 : 2;

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
		if (Count != 0)
		{
			// position to insert the character.  
			// At the end of the string if we have existing characters, otherwise at the 0 position
			int32 InsertIndex = Data.Num() > 0 ? Data.Num() - 1 : 0;

			// number of characters to add.  If we don't have any existing characters, 
			// we'll need to append the terminating zero as well.
			int32 FinalCount = Data.Num() > 0 ? Count : Count + 1;

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
	* Concatenate this with given string
	*
	* @param Str other string to be concatenated onto the end of this
	* @return reference to this
	*/
	FORCEINLINE FString& operator+=(const FString& Str)
	{
		AppendChars(Str.Data.GetData(), Str.Len());

		return *this;
	}

	int32 FString::Find(const TCHAR* SubStr, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir,
	                    int32 StartPosition) const
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

			return Tmp ? Tmp - **this : INDEX_NONE;
		}
		// if ignoring, do a onetime ToUpper on both strings, to avoid ToUppering multiple
		// times in the loop below
		if (SearchCase == ESearchCase::IgnoreCase)
		{
			return ToUpper().Find(FString(SubStr).ToUpper(), ESearchCase::CaseSensitive, SearchDir, StartPosition);
		}
		const int32 SearchStringLength = FMath::Max(1, FPlatformString::Strlen(SubStr));

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

	FString FString::ToUpper() const &
	{
		FString New = *this;
		New.ToUpperInline();
		return New;
	}

	void FString::ToUpperInline() const
	{
		const int32 StringLength = Len();
		TCHAR* RawData = Data.GetData();
		for (int32 i = 0; i < StringLength; ++i)
		{
			RawData[i] = FChar::ToUpper(RawData[i]);
		}
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
		return FCString::Stricmp(**this, *Other) == 0;
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
		return FCString::Stricmp(**this, *Other);
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

	/** @return the left most given number of characters */
	FORCEINLINE FString Left(int32 Count) const
	{
		return FString(FMath::Clamp(Count, 0, Len()), **this);
	}

	/** @return the substring from Start position for ArrayNum characters. */
	FORCEINLINE FString Mid(int32 Start, int32 Count = INT_MAX) const
	{
		uint32 End = Start + Count;
		Start = FMath::Clamp((uint32)Start, (uint32)0, (uint32)Len());
		End = FMath::Clamp((uint32)End, (uint32)Start, (uint32)Len());
		return FString(End - Start, **this + Start);
	}

	bool FString::StartsWith(const TCHAR* InPrefix, ESearchCase::Type SearchCase) const
	{
		if (SearchCase == ESearchCase::IgnoreCase)
		{
			return InPrefix && *InPrefix && !FCString::Strnicmp(**this, InPrefix, FCString::Strlen(InPrefix));
		}
		return InPrefix && *InPrefix && !FCString::Strncmp(**this, InPrefix, FCString::Strlen(InPrefix));
	}

	bool FString::StartsWith(const FString& InPrefix, ESearchCase::Type SearchCase) const
	{
		if (SearchCase == ESearchCase::IgnoreCase)
		{
			return InPrefix.Len() > 0 && !FCString::Strnicmp(**this, *InPrefix, InPrefix.Len());
		}
		return InPrefix.Len() > 0 && !FCString::Strncmp(**this, *InPrefix, InPrefix.Len());
	}

	bool FString::EndsWith(const TCHAR* InSuffix, ESearchCase::Type SearchCase) const
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
		return !FCString::Strcmp(StrPtr, InSuffix);
	}

	bool FString::EndsWith(const FString& InSuffix, ESearchCase::Type SearchCase) const
	{
		if (SearchCase == ESearchCase::IgnoreCase)
		{
			return InSuffix.Len() > 0 &&
				Len() >= InSuffix.Len() &&
				!FCString::Stricmp(&(*this)[Len() - InSuffix.Len()], *InSuffix);
		}
		return InSuffix.Len() > 0 &&
			Len() >= InSuffix.Len() &&
			!FCString::Strcmp(&(*this)[Len() - InSuffix.Len()], *InSuffix);
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
	int32 FString::ParseIntoArray(TArray<FString>& OutArray, const TCHAR* pchDelim, const bool InCullEmpty) const
	{
		OutArray.Clear();
		const TCHAR* Start = Data.GetData();
		const int32 DelimLength = FCString::Strlen(pchDelim);
		if (Start && DelimLength)
		{
			while (const TCHAR* At = FCString::Strstr(Start, pchDelim))
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

	void FString::AppendInt(int32 InNum)
	{
		int64 Num = InNum; // This avoids having to deal with negating -MAX_int32-1
		const TCHAR* NumberChar[11] = {
			TEXT("0"), TEXT("1"), TEXT("2"), TEXT("3"), TEXT("4"), TEXT("5"), TEXT("6"), TEXT("7"), TEXT("8"), TEXT("9"),
			TEXT("-")
		};
		bool bIsNumberNegative = false;
		TCHAR TempNum[16]; // 16 is big enough
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
		}
		while (Num);

		// Append sign as we're going to reverse string afterwards.
		if (bIsNumberNegative)
		{
			TempNum[--TempAt] = *NumberChar[10];
		}

		*this += TempNum + TempAt;
	}

	std::string ToString() const
	{
		TCHAR* data = Data.GetData();

		if (!data)
			return "";

		const auto length = Len();
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(data, data + length, '?', &str[0]);

		return str;
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

	/** Get the length of the string, excluding terminating character */
	FORCEINLINE int32 Len() const
	{
		return Data.Num() ? Data.Num() - 1 : 0;
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

	/** Converts an integer to a string. */
	static FORCEINLINE FString FromInt(int32 Num)
	{
		FString Ret;
		Ret.AppendInt(Num);
		return Ret;
	}

	template <typename LhsType, typename RhsType>
	FORCEINLINE static FString ConcatFStrings(typename TIdentity<LhsType>::Type Lhs, typename TIdentity<RhsType>::Type Rhs)
	{
		if (Lhs.IsEmpty())
		{
			return std::move(Rhs);
		}

		int32 RhsLen = Rhs.Len();

		FString Result(std::move(Lhs), RhsLen);
		Result.AppendChars(Rhs.Data.GetData(), RhsLen);

		return Result;
	}

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
		return ConcatFStrings<FString&&, const FString&>(std::move(Lhs), Rhs);
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
		return ConcatFStrings<const FString&, FString&&>(Lhs, std::move(Rhs));
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
		return ConcatFStrings<FString&&, FString&&>(std::move(Lhs), std::move(Rhs));
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
};

#pragma warning(pop)
