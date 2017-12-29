// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "../BasicTypes.h"
#include "../Templates/EnableIf.h"
#include "../HAL/UnrealMemory.h"

/**
* Generic string implementation for most platforms
*/
struct FGenericPlatformString
{
	/**
	* Tests whether a particular character is a valid member of its encoding.
	*
	* @param Ch The character to test.
	* @return True if the character is a valid member of Encoding.
	*/
	template <typename Encoding>
	static bool IsValidChar(Encoding Ch)
	{
		return true;
	}


	/**
	* Tests whether a particular character can be converted to the destination encoding.
	*
	* @param Ch The character to test.
	* @return True if Ch can be encoded as a DestEncoding.
	*/
	template <typename DestEncoding, typename SourceEncoding>
	static bool CanConvertChar(SourceEncoding Ch)
	{
		return IsValidChar(Ch) && (SourceEncoding)(DestEncoding)Ch == Ch && IsValidChar((DestEncoding)Ch);
	}


	/**
	* Returns the string representing the name of the given encoding type.
	*
	* @return The name of the CharType as a TCHAR string.
	*/
	template <typename Encoding>
	static const TCHAR* GetEncodingTypeName();

	/**
	* True if the encoding type of the string is some form of unicode
	*/
	static const bool IsUnicodeEncoded = false;


	/**
	* Metafunction which tests whether a given character type represents a fixed-width encoding.
	*
	* We need to 'forward' the metafunction to a helper because of the C++ requirement that
	* nested structs cannot be fully specialized.  They can be partially specialized however, hence the
	* helper function.
	*/
	template <bool Dummy, typename T>
	struct TIsFixedWidthEncoding_Helper
	{
		enum { Value = false };
	};

	template <bool Dummy> struct TIsFixedWidthEncoding_Helper<Dummy, ANSICHAR> { enum { Value = true }; };
	template <bool Dummy> struct TIsFixedWidthEncoding_Helper<Dummy, WIDECHAR> { enum { Value = true }; };
	template <bool Dummy> struct TIsFixedWidthEncoding_Helper<Dummy, UCS2CHAR> { enum { Value = true }; };

	template <typename T>
	struct TIsFixedWidthEncoding : TIsFixedWidthEncoding_Helper<false, T>
	{
	};


	/**
	* Metafunction which tests whether two encodings are compatible.
	*
	* We'll say the encodings are compatible if they're both fixed-width and have the same size.  This
	* should be good enough and catches things like UCS2CHAR and WIDECHAR being equivalent.
	* Specializations of this template can be provided for any other special cases.
	* Same size is a minimum requirement.
	*/
	template <typename EncodingA, typename EncodingB>
	struct TAreEncodingsCompatible
	{
		enum { Value = TIsFixedWidthEncoding<EncodingA>::Value && TIsFixedWidthEncoding<EncodingB>::Value && sizeof(EncodingA) == sizeof(EncodingB) };
	};

	/**
	* Converts the [Src, Src+SrcSize) string range from SourceChar to DestChar and writes it to the [Dest, Dest+DestSize) range.
	* The Src range should contain a null terminator if a null terminator is required in the output.
	* If the Dest range is not big enough to hold the converted output, NULL is returned.  In this case, nothing should be assumed about the contents of Dest.
	*
	* @param Dest      The start of the destination buffer.
	* @param DestSize  The size of the destination buffer.
	* @param Src       The start of the string to convert.
	* @param SrcSize   The number of Src elements to convert.
	* @param BogusChar The char to use when the conversion process encounters a character it cannot convert.
	* @return          A pointer to one past the last-written element.
	*/
	template <typename SourceEncoding, typename DestEncoding>
	static typename TEnableIf<
		// This overload should be called when SourceEncoding and DestEncoding are 'compatible', i.e. they're the same type or equivalent (e.g. like UCS2CHAR and WIDECHAR are on Windows).
		TAreEncodingsCompatible<SourceEncoding, DestEncoding>::Value,
		DestEncoding*
	>::Type Convert(DestEncoding* Dest, int32 DestSize, const SourceEncoding* Src, int32 SrcSize, DestEncoding BogusChar = (DestEncoding)'?')
	{
		if (DestSize < SrcSize)
			return nullptr;

		return (DestEncoding*)Memcpy(Dest, Src, SrcSize * sizeof(SourceEncoding)) + SrcSize;
	}

	/**
	* Converts the [Src, Src+SrcSize) string range from SourceEncoding to DestEncoding and writes it to the [Dest, Dest+DestSize) range.
	* The Src range should contain a null terminator if a null terminator is required in the output.
	* If the Dest range is not big enough to hold the converted output, NULL is returned.  In this case, nothing should be assumed about the contents of Dest.
	*
	* @param Dest      The start of the destination buffer.
	* @param DestSize  The size of the destination buffer.
	* @param Src       The start of the string to convert.
	* @param SrcSize   The number of Src elements to convert.
	* @param BogusChar The char to use when the conversion process encounters a character it cannot convert.
	* @return          A pointer to one past the last-written element.
	*/
	template <typename SourceEncoding, typename DestEncoding>
	static typename TEnableIf<
		// This overload should be called when the types are not compatible but the source is fixed-width, e.g. ANSICHAR->WIDECHAR.
		!TAreEncodingsCompatible<SourceEncoding, DestEncoding>::Value && TIsFixedWidthEncoding<SourceEncoding>::Value,
		DestEncoding*
	>::Type Convert(DestEncoding* Dest, int32 DestSize, const SourceEncoding* Src, int32 SrcSize, DestEncoding BogusChar = (DestEncoding)'?')
	{
		const SourceEncoding* InSrc = Src;
		int32                 InSrcSize = SrcSize;
		bool                  bInvalidChars = false;
		while (SrcSize)
		{
			if (!DestSize)
				return nullptr;

			SourceEncoding SrcCh = *Src++;
			if (CanConvertChar<DestEncoding>(SrcCh))
			{
				*Dest++ = (DestEncoding)SrcCh;
			}
			else
			{
				*Dest++ = BogusChar;
				bInvalidChars = true;
			}
			--SrcSize;
			--DestSize;
		}

		return Dest;
	}

	/**
	* Returns the required buffer length for the [Src, Src+SrcSize) string when converted to the DestChar encoding.
	* The Src range should contain a null terminator if a null terminator is required in the output.
	*
	* @param  Src     The start of the string to convert.
	* @param  SrcSize The number of Src elements to convert.
	* @return         The number of DestChar elements that Src will be converted into.
	*/
	template <typename DestEncoding, typename SourceEncoding>
	static typename TEnableIf<TIsFixedWidthEncoding<SourceEncoding>::Value && TIsFixedWidthEncoding<DestEncoding>::Value, int32>::Type ConvertedLength(const SourceEncoding* Src, int32 SrcSize)
	{
		return SrcSize;
	}


private:
	/**
	* Forwarding function because we can't call FMemory::Memcpy directly due to #include ordering issues.
	*
	* @param Dest  The destination buffer.
	* @param Src   The source buffer.
	* @param Count The number of bytes to copy.
	* @return      Dest
	*/
	static void* Memcpy(void* Dest, const void* Src, SIZE_T Count);
};


/**
* Specialization of IsValidChar for ANSICHARs.
*/
template <>
inline bool FGenericPlatformString::IsValidChar<ANSICHAR>(ANSICHAR Ch)
{
	return Ch >= 0x00 && Ch <= 0x7F;
}

template <>
inline const TCHAR* FGenericPlatformString::GetEncodingTypeName<ANSICHAR>() { return TEXT("ANSICHAR"); }
template <>
inline const TCHAR* FGenericPlatformString::GetEncodingTypeName<WIDECHAR>() { return TEXT("WIDECHAR"); }
template <>
inline const TCHAR* FGenericPlatformString::GetEncodingTypeName<UCS2CHAR>() { return TEXT("UCS2CHAR"); }


inline void* FGenericPlatformString::Memcpy(void* Dest, const void* Src, SIZE_T Count)
{
	return FMemory::Memcpy(Dest, Src, Count);
}