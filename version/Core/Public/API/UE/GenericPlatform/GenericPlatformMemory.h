// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.


/*=============================================================================================
	GenericPlatformMemory.h: Generic platform memory classes
==============================================================================================*/

#pragma once

#include "../BasicTypes.h"
#include "../Math/UnrealMathUtility.h"
#include <wchar.h>

struct FPlatformMemory
{
	static FORCEINLINE void* Memmove( void* Dest, const void* Src, SIZE_T Count )
	{
		return memmove( Dest, Src, Count );
	}

	static FORCEINLINE int32 Memcmp( const void* Buf1, const void* Buf2, SIZE_T Count )
	{
		return memcmp( Buf1, Buf2, Count );
	}

	static FORCEINLINE void* Memset(void* Dest, uint8 Char, SIZE_T Count)
	{
		return memset( Dest, Char, Count );
	}

	static FORCEINLINE void* Memzero(void* Dest, SIZE_T Count)
	{
		return memset( Dest, 0, Count );
	}

	static FORCEINLINE void* Memcpy(void* Dest, const void* Src, SIZE_T Count)
	{
		return memcpy( Dest, Src, Count );
	}

	/** Memcpy optimized for big blocks. */
	static FORCEINLINE void* BigBlockMemcpy(void* Dest, const void* Src, SIZE_T Count)
	{
		return memcpy(Dest, Src, Count);
	}

	/** On some platforms memcpy optimized for big blocks that avoid L2 cache pollution are available */
	static FORCEINLINE void* StreamingMemcpy(void* Dest, const void* Src, SIZE_T Count)
	{
		return memcpy( Dest, Src, Count );
	}

	static void MemswapGreaterThan8(void* RESTRICT Ptr1, void* RESTRICT Ptr2, SIZE_T Size)
	{
		union PtrUnion
		{
			void*   PtrVoid;
			uint8*  Ptr8;
			uint16* Ptr16;
			uint32* Ptr32;
			uint64* Ptr64;
			UPTRINT PtrUint;
		};

		PtrUnion Union1 = { Ptr1 };
		PtrUnion Union2 = { Ptr2 };

		checkf(Union1.PtrVoid && Union2.PtrVoid, TEXT("Pointers must be non-null: %p, %p"), Union1.PtrVoid, Union2.PtrVoid);

		// We may skip up to 7 bytes below, so better make sure that we're swapping more than that
		// (8 is a common case that we also want to inline before we this call, so skip that too)
		check(Size > 8);

		if (Union1.PtrUint & 1)
		{
			Valswap(*Union1.Ptr8++, *Union2.Ptr8++);
			Size -= 1;
		}
		if (Union1.PtrUint & 2)
		{
			Valswap(*Union1.Ptr16++, *Union2.Ptr16++);
			Size -= 2;
		}
		if (Union1.PtrUint & 4)
		{
			Valswap(*Union1.Ptr32++, *Union2.Ptr32++);
			Size -= 4;
		}

		uint32 CommonAlignment = static_cast<uint32>(FMath::Min(FMath::CountTrailingZeros(static_cast<uint32>(Union1.PtrUint - Union2.PtrUint)), 3u));
		switch (CommonAlignment)
		{
		default:
			for (; Size >= 8; Size -= 8)
			{
				Valswap(*Union1.Ptr64++, *Union2.Ptr64++);
			}

		case 2:
			for (; Size >= 4; Size -= 4)
			{
				Valswap(*Union1.Ptr32++, *Union2.Ptr32++);
			}

		case 1:
			for (; Size >= 2; Size -= 2)
			{
				Valswap(*Union1.Ptr16++, *Union2.Ptr16++);
			}

		case 0:
			for (; Size >= 1; Size -= 1)
			{
				Valswap(*Union1.Ptr8++, *Union2.Ptr8++);
			}
		}
	}

	static inline void Memswap(void* Ptr1, void* Ptr2, SIZE_T Size)
	{
		switch (Size)
		{
		case 0:
			break;

		case 1:
			Valswap(*(uint8*)Ptr1, *(uint8*)Ptr2);
			break;

		case 2:
			Valswap(*(uint16*)Ptr1, *(uint16*)Ptr2);
			break;

		case 3:
			Valswap(*((uint16*&)Ptr1)++, *((uint16*&)Ptr2)++);
			Valswap(*(uint8*)Ptr1, *(uint8*)Ptr2);
			break;

		case 4:
			Valswap(*(uint32*)Ptr1, *(uint32*)Ptr2);
			break;

		case 5:
			Valswap(*((uint32*&)Ptr1)++, *((uint32*&)Ptr2)++);
			Valswap(*(uint8*)Ptr1, *(uint8*)Ptr2);
			break;

		case 6:
			Valswap(*((uint32*&)Ptr1)++, *((uint32*&)Ptr2)++);
			Valswap(*(uint16*)Ptr1, *(uint16*)Ptr2);
			break;

		case 7:
			Valswap(*((uint32*&)Ptr1)++, *((uint32*&)Ptr2)++);
			Valswap(*((uint16*&)Ptr1)++, *((uint16*&)Ptr2)++);
			Valswap(*(uint8*)Ptr1, *(uint8*)Ptr2);
			break;

		case 8:
			Valswap(*(uint64*)Ptr1, *(uint64*)Ptr2);
			break;

		case 16:
			Valswap(((uint64*)Ptr1)[0], ((uint64*)Ptr2)[0]);
			Valswap(((uint64*)Ptr1)[1], ((uint64*)Ptr2)[1]);
			break;

		default:
			MemswapGreaterThan8(Ptr1, Ptr2, Size);
			break;
		}
	}

private:
	template <typename T>
	static FORCEINLINE void Valswap(T& A, T& B)
	{
		// Usually such an implementation would use move semantics, but
		// we're only ever going to call it on fundamental types and MoveTemp
		// is not necessarily in scope here anyway, so we don't want to
		// #include it if we don't need to.
		T Tmp = A;
		A = B;
		B = Tmp;
	}
};
