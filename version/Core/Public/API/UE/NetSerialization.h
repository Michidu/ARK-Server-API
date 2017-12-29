// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/*=============================================================================
	NetworkSerialization.h: 
	Contains custom network serialization functionality.
=============================================================================*/

#pragma once

#include "BasicTypes.h"
#include "Math/Vector.h"

class Error;
struct FFastArraySerializer;
struct FFastArraySerializerItem;

/**
 *	===================== Vector NetSerialization customization. =====================
 *	Provides custom NetSerilization for FVectors.
 *
 *	There are two types of net quantization available:
 *
 *	Fixed Quantization (SerializeFixedVector)
 *		-Fixed number of bits
 *		-Max Value specified as template parameter
 *
 *		Serialized value is scaled based on num bits and max value. Precision is determined by MaxValue and NumBits
 *		(if 2^NumBits is > MaxValue, you will have room for extra precision).
 *
 *		This format is good for things like normals, where the magnitudes are often similar. For example normal values may often
 *		be in the 0.1f - 1.f range. In a packed format, the overhead in serializing num of bits per component would outweigh savings from
 *		serializing very small ( < 0.1f ) values.
 *
 *		It is also good for performance critical sections since you can guarantee byte alignment if that is important.
 *	
 *
 *
 *	Packed Quantization (SerializePackedVector)
 *		-Scaling factor (usually 10, 100, etc)
 *		-Max number of bits per component (this is maximum, not a constant)
 *
 *		The format is <num of bits per component> <N bits for X> <N bits for Y> <N bits for Z>
 *
 *		The advantages to this format are that packed nature. You may support large magnitudes and have as much precision as you want. All while
 *		having small magnitudes take less space.
 *
 *		The trade off is that there is overhead in serializing how many bits are used for each component, and byte alignment is almost always thrown
 *		off.
 *
*/

struct FVector_NetQuantize : public FVector
{
	FORCEINLINE FVector_NetQuantize()
	{}

	explicit FORCEINLINE FVector_NetQuantize(EForceInit E)
	: FVector(E)
	{}

	FORCEINLINE FVector_NetQuantize( float InX, float InY, float InZ )
	: FVector(InX, InY, InZ)
	{}

	FORCEINLINE FVector_NetQuantize(const FVector &InVec)
	{
		FVector::operator=(InVec);
	}

};

struct FRotator_NetQuantize : public FRotator
{
	FORCEINLINE FRotator_NetQuantize()
	{}

	explicit FORCEINLINE FRotator_NetQuantize(EForceInit E)
	: FRotator(E)
	{}

	FORCEINLINE FRotator_NetQuantize(float InPitch, float InYaw, float InRoll)
	: FRotator(InPitch, InYaw, InRoll)
	{}
};

struct FVector_NetQuantize10 : public FVector
{
	FORCEINLINE FVector_NetQuantize10()
	{}

	explicit FORCEINLINE FVector_NetQuantize10(EForceInit E)
	: FVector(E)
	{}

	FORCEINLINE FVector_NetQuantize10( float InX, float InY, float InZ )
	: FVector(InX, InY, InZ)
	{}

	FORCEINLINE FVector_NetQuantize10(const FVector &InVec)
	{
		FVector::operator=(InVec);
	}
};

struct FVector_NetQuantize100 : public FVector
{
	FORCEINLINE FVector_NetQuantize100()
	{}

	explicit FORCEINLINE FVector_NetQuantize100(EForceInit E)
	: FVector(E)
	{}

	FORCEINLINE FVector_NetQuantize100( float InX, float InY, float InZ )
	: FVector(InX, InY, InZ)
	{}

	FORCEINLINE FVector_NetQuantize100(const FVector &InVec)
	{
		FVector::operator=(InVec);
	}
};

struct FVector_NetQuantizeNormal : public FVector
{
	FORCEINLINE FVector_NetQuantizeNormal()
	{}

	explicit FORCEINLINE FVector_NetQuantizeNormal(EForceInit E)
	: FVector(E)
	{}

	FORCEINLINE FVector_NetQuantizeNormal( float InX, float InY, float InZ )
	: FVector(InX, InY, InZ)
	{}

	FORCEINLINE FVector_NetQuantizeNormal(const FVector &InVec)
	{
		FVector::operator=(InVec);
	}
};
