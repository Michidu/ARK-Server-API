#pragma once

#include <tchar.h>

#include "../GenericPlatform/GenericPlatformString.h"

/**
* Microsoft specific implementation 
**/

#pragma warning(push)
#pragma warning(disable : 4996) // 'function' was declared deprecated  (needed for the secure string functions)
#pragma warning(disable : 4995) // 'function' was declared deprecated  (needed for the secure string functions)
#pragma warning(disable : 4267)
#pragma warning(disable : 4244)

struct FMicrosoftPlatformString : public FGenericPlatformString
{
	/** 
	 * Wide character implementation 
	 **/
	static FORCEINLINE WIDECHAR* Strcpy(WIDECHAR* Dest, SIZE_T DestCount, const WIDECHAR* Src)
	{
		_tcscpy_s(Dest, DestCount, Src);
		return Dest;
	}

	static FORCEINLINE WIDECHAR* Strncpy(WIDECHAR* Dest, const WIDECHAR* Src, SIZE_T MaxLen)
	{
		_tcsncpy_s(Dest, MaxLen, Src, MaxLen - 1);
		return Dest;
	}

	static FORCEINLINE WIDECHAR* Strcat(WIDECHAR* Dest, SIZE_T DestCount, const WIDECHAR* Src)
	{
		_tcscat_s(Dest, DestCount, Src);
		return Dest;
	}

	static FORCEINLINE WIDECHAR* Strupr(WIDECHAR* Dest, SIZE_T DestCount)
	{
		_tcsupr_s(Dest, DestCount);
		return Dest;
	}

	static FORCEINLINE int32 Strcmp(const WIDECHAR* String1, const WIDECHAR* String2)
	{
		return _tcscmp(String1, String2);
	}

	static FORCEINLINE int32 Strncmp(const WIDECHAR* String1, const WIDECHAR* String2, SIZE_T Count)
	{
		return _tcsncmp(String1, String2, Count);
	}

	static FORCEINLINE int32 Strnicmp(const WIDECHAR* String1, const WIDECHAR* String2, SIZE_T Count)
	{
		return _tcsnicmp(String1, String2, Count);
	}

	static FORCEINLINE int32 Strlen(const WIDECHAR* String)
	{
		return _tcslen(String);
	}

	static FORCEINLINE const WIDECHAR* Strstr(const WIDECHAR* String, const WIDECHAR* Find)
	{
		return _tcsstr(String, Find);
	}

	static FORCEINLINE const WIDECHAR* Strchr(const WIDECHAR* String, WIDECHAR C)
	{
		return _tcschr(String, C);
	}

	static FORCEINLINE const WIDECHAR* Strrchr(const WIDECHAR* String, WIDECHAR C)
	{
		return _tcsrchr(String, C);
	}

	static FORCEINLINE int32 Atoi(const WIDECHAR* String)
	{
		return _tstoi(String);
	}

	static FORCEINLINE int64 Atoi64(const WIDECHAR* String)
	{
		return _tstoi64(String);
	}

	static FORCEINLINE float Atof(const WIDECHAR* String)
	{
		return _tstof(String);
	}

	static FORCEINLINE double Atod(const WIDECHAR* String)
	{
		return _tcstod(String, nullptr);
	}

	static FORCEINLINE int32 Strtoi(const WIDECHAR* Start, WIDECHAR** End, int32 Base)
	{
		return _tcstoul(Start, End, Base);
	}

	static FORCEINLINE int64 Strtoi64(const WIDECHAR* Start, WIDECHAR** End, int32 Base)
	{
		return _tcstoi64(Start, End, Base);
	}

	static FORCEINLINE uint64 Strtoui64(const WIDECHAR* Start, WIDECHAR** End, int32 Base)
	{
		return _tcstoui64(Start, End, Base);
	}

	static FORCEINLINE WIDECHAR* Strtok(WIDECHAR* StrToken, const WIDECHAR* Delim, WIDECHAR** Context)
	{
		return _tcstok_s(StrToken, Delim, Context);
	}

	static FORCEINLINE int32 GetVarArgs(WIDECHAR* Dest, SIZE_T DestSize, int32 Count, const WIDECHAR*& Fmt, va_list ArgPtr)
	{
		int32 Result = _vsntprintf_s(Dest, DestSize, Count, Fmt, ArgPtr);
		va_end( ArgPtr );
		return Result;
	}

	/** 
	 * Ansi implementation 
	 **/
	static FORCEINLINE ANSICHAR* Strcpy(ANSICHAR* Dest, SIZE_T DestCount, const ANSICHAR* Src)
	{
		strcpy_s(Dest, DestCount, Src);
		return Dest;
	}

	static FORCEINLINE void Strncpy(ANSICHAR* Dest, const ANSICHAR* Src, SIZE_T MaxLen)
	{
		strncpy_s(Dest, MaxLen, Src, MaxLen - 1);
	}

	static FORCEINLINE ANSICHAR* Strcat(ANSICHAR* Dest, SIZE_T DestCount, const ANSICHAR* Src)
	{
		strcat_s(Dest, DestCount, Src);
		return Dest;
	}

	static FORCEINLINE ANSICHAR* Strupr(ANSICHAR* Dest, SIZE_T DestCount)
	{
		_strupr_s(Dest, DestCount);
		return Dest;
	}

	static FORCEINLINE int32 Strcmp(const ANSICHAR* String1, const ANSICHAR* String2)
	{
		return strcmp(String1, String2);
	}

	static FORCEINLINE int32 Strncmp(const ANSICHAR* String1, const ANSICHAR* String2, SIZE_T Count)
	{
		return strncmp(String1, String2, Count);
	}

	/**
	 * Compares two strings case-insensitive.
	 *
	 * @param String1 First string to compare.
	 * @param String2 Second string to compare.
	 *
	 * @returns Zero if both strings are equal. Greater than zero if first
	 *          string is greater than the second one. Less than zero
	 *          otherwise.
	 */
	static FORCEINLINE int32 Stricmp(const ANSICHAR* String1, const ANSICHAR* String2)
	{
		return _stricmp(String1, String2);
	}

	static FORCEINLINE int32 Stricmp(const WIDECHAR* String1, const WIDECHAR* String2)
	{
		return _wcsicmp(String1, String2);
	}

	static FORCEINLINE int32 Strnicmp(const ANSICHAR* String1, const ANSICHAR* String2, SIZE_T Count)
	{
		return _strnicmp(String1, String2, Count);
	}

	static FORCEINLINE int32 Strlen(const ANSICHAR* String)
	{
		return strlen(String);
	}

	static FORCEINLINE const ANSICHAR* Strstr(const ANSICHAR* String, const ANSICHAR* Find)
	{
		return strstr(String, Find);
	}

	static FORCEINLINE const ANSICHAR* Strchr(const ANSICHAR* String, ANSICHAR C)
	{
		return strchr(String, C);
	}

	static FORCEINLINE const ANSICHAR* Strrchr(const ANSICHAR* String, ANSICHAR C)
	{
		return strrchr(String, C);
	}

	static FORCEINLINE int32 Atoi(const ANSICHAR* String)
	{
		return atoi(String);
	}

	static FORCEINLINE int64 Atoi64(const ANSICHAR* String)
	{
		return _strtoi64(String, nullptr, 10);
	}

	static FORCEINLINE float Atof(const ANSICHAR* String)
	{
		return (float)atof(String);
	}

	static FORCEINLINE double Atod(const ANSICHAR* String)
	{
		return atof(String);
	}

	static FORCEINLINE int32 Strtoi(const ANSICHAR* Start, ANSICHAR** End, int32 Base)
	{
		return strtol(Start, End, Base);
	}

	static FORCEINLINE int64 Strtoi64(const ANSICHAR* Start, ANSICHAR** End, int32 Base)
	{
		return _strtoi64(Start, End, Base);
	}

	static FORCEINLINE uint64 Strtoui64(const ANSICHAR* Start, ANSICHAR** End, int32 Base)
	{
		return _strtoui64(Start, End, Base);
	}

	static FORCEINLINE ANSICHAR* Strtok(ANSICHAR* StrToken, const ANSICHAR* Delim, ANSICHAR** Context)
	{
		return strtok_s(StrToken, Delim, Context);
	}

	static FORCEINLINE int32 GetVarArgs(ANSICHAR* Dest, SIZE_T DestSize, int32 Count, const ANSICHAR*& Fmt, va_list ArgPtr)
	{
		int32 Result = _vsnprintf_s(Dest, DestSize, Count, Fmt, ArgPtr);
		return Result;
	}

	static const ANSICHAR* GetEncodingName()
	{
		return "UTF-16LE";
	}

	static const bool IsUnicodeEncoded = true;
};

typedef FMicrosoftPlatformString FPlatformString;

#pragma warning(pop)
