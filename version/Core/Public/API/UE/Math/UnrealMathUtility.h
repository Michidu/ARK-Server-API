#pragma once

#include "../BasicTypes.h"
#include "../GenericPlatform/GenericPlatformMath.h"


//#define IMPLEMENT_ASSIGNMENT_OPERATOR_MANUALLY

// Assert on non finite numbers. Used to track NaNs.
#ifndef ENABLE_NAN_DIAGNOSTIC
#define ENABLE_NAN_DIAGNOSTIC 0
#endif

/*-----------------------------------------------------------------------------
	Floating point constants.
-----------------------------------------------------------------------------*/

#undef  PI
#define PI 					(3.1415926535897932f)
#define SMALL_NUMBER		(1.e-8f)
#define KINDA_SMALL_NUMBER	(1.e-4f)
#define BIG_NUMBER			(3.4e+38f)
#define EULERS_NUMBER       (2.71828182845904523536f)

// Copied from float.h
#define MAX_FLT 3.402823466e+38F

// Aux constants.
#define INV_PI			(0.31830988618f)
#define HALF_PI			(1.57079632679f)

// Magic numbers for numerical precision.
#define DELTA			(0.00001f)

/**
 * Lengths of normalized vectors (These are half their maximum values
 * to assure that dot products with normalized vectors don't overflow).
 */
#define FLOAT_NORMAL_THRESH				(0.0001f)

//
// Magic numbers for numerical precision.
//
#define THRESH_POINT_ON_PLANE			(0.10f)		/* Thickness of plane for front/back/inside test */
#define THRESH_POINT_ON_SIDE			(0.20f)		/* Thickness of polygon side's side-plane for point-inside/outside/on side test */
#define THRESH_POINTS_ARE_SAME			(0.00002f)	/* Two points are same if within this distance */
#define THRESH_POINTS_ARE_NEAR			(0.015f)	/* Two points are near if within this distance and can be combined if imprecise math is ok */
#define THRESH_NORMALS_ARE_SAME			(0.00002f)	/* Two normal points are same if within this distance */
/* Making this too large results in incorrect CSG classification and disaster */
#define THRESH_VECTORS_ARE_NEAR			(0.0004f)	/* Two vectors are near if within this distance and can be combined if imprecise math is ok */
/* Making this too large results in lighting problems due to inaccurate texture coordinates */
#define THRESH_SPLIT_POLY_WITH_PLANE	(0.25f)		/* A plane splits a polygon in half */
#define THRESH_SPLIT_POLY_PRECISELY		(0.01f)		/* A plane exactly splits a polygon */
#define THRESH_ZERO_NORM_SQUARED		(0.0001f)	/* Num of a unit normal that is considered "zero", squared */
#define THRESH_NORMALS_ARE_PARALLEL		(0.999845f)	/* Two unit vectors are parallel if abs(A dot B) is greater than or equal to this. This is roughly cosine(1.0 degrees). */
#define THRESH_NORMALS_ARE_ORTHOGONAL	(0.017455f)	/* Two unit vectors are orthogonal (perpendicular) if abs(A dot B) is less than or equal this. This is roughly cosine(89.0 degrees). */

#define THRESH_VECTOR_NORMALIZED		(0.01f)		/** Allowed error for a normalized vector (against squared magnitude) */
#define THRESH_QUAT_NORMALIZED			(0.01f)		/** Allowed error for a normalized quaternion (against squared magnitude) */

/*-----------------------------------------------------------------------------
	Global functions.
-----------------------------------------------------------------------------*/

/**
 * Structure for all math helper functions, inherits from platform math to pick up platform-specific implementations
 * Check GenericPlatformMath.h for additional math functions
 */
struct FMath : FGenericPlatformMath
{
	// Random Number Functions

	/** Helper function for rand implementations. Returns a random number in [0..A) */
	static FORCEINLINE int32 RandHelper(int32 A)
	{
		// Note that on some platforms RAND_MAX is a large number so we cannot do ((rand()/(RAND_MAX+1)) * A)
		// or else we may include the upper bound results, which should be excluded.
		return A > 0 ? Min(TruncToInt(FRand() * A), A - 1) : 0;
	}

	/** Helper function for rand implementations. Returns a random number >= Min and <= Max */
	static FORCEINLINE int32 RandRange(int32 Min, int32 Max)
	{
		const int32 Range = Max - Min + 1;
		return Min + RandHelper(Range);
	}

	/** Util to generate a random number in a range. Overloaded to distinguish from int32 version, where passing a float is typically a mistake. */
	static FORCEINLINE float RandRange(float InMin, float InMax)
	{
		return FRandRange(InMin, InMax);
	}

	/** Util to generate a random number in a range. */
	static FORCEINLINE float FRandRange(float InMin, float InMax)
	{
		return InMin + (InMax - InMin) * FRand();
	}

	/** Util to generate a random boolean. */
	static FORCEINLINE bool RandBool()
	{
		return RandRange(0, 1) == 1 ? true : false;
	}

	/**
	 *	Checks whether a number is a power of two.
	 *	@param Value	Number to check
	 *	@return			true if Value is a power of two
	 */
	template <typename T>
	static FORCEINLINE bool IsPowerOfTwo(T Value)
	{
		return ((Value & (Value - 1)) == (T)0);
	}


	// Math Operations

	/** Returns highest of 3 values */
	template <class T>
	static FORCEINLINE T Max3(const T A, const T B, const T C)
	{
		return Max(Max(A, B), C);
	}

	/** Returns lowest of 3 values */
	template <class T>
	static FORCEINLINE T Min3(const T A, const T B, const T C)
	{
		return Min(Min(A, B), C);
	}

	/** Multiples value by itself */
	template <class T>
	static FORCEINLINE T Square(const T A)
	{
		return A * A;
	}

	/** Clamps X to be between Min and Max, inclusive */
	template <class T>
	static FORCEINLINE T Clamp(const T X, const T Min, const T Max)
	{
		return X < Min ? Min : X < Max ? X : Max;
	}

	/** Divides two integers and rounds up */
	template <class T>
	static FORCEINLINE T DivideAndRoundUp(T Dividend, T Divisor)
	{
		return (Dividend + Divisor - 1) / Divisor;
	}

	template <class T>
	static FORCEINLINE T DivideAndRoundDown(T Dividend, T Divisor)
	{
		return Dividend / Divisor;
	}

	/**
	* Computes the sine and cosine of a scalar float.
	*
	* @param ScalarSin	Pointer to where the Sin result should be stored
	* @param ScalarCos	Pointer to where the Cos result should be stored
	* @param Value  input angles 
	*/
	static FORCEINLINE void SinCos(float* ScalarSin, float* ScalarCos, float Value)
	{
		// Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
		float quotient = INV_PI * 0.5f * Value;
		if (Value >= 0.0f)
		{
			quotient = (float)(int)(quotient + 0.5f);
		}
		else
		{
			quotient = (float)(int)(quotient - 0.5f);
		}
		float y = Value - 2.0f * PI * quotient;

		// Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
		float sign;
		if (y > HALF_PI)
		{
			y = PI - y;
			sign = -1.0f;
		}
		else if (y < -HALF_PI)
		{
			y = -PI - y;
			sign = -1.0f;
		}
		else
		{
			sign = +1.0f;
		}

		float y2 = y * y;

		// 11-degree minimax approximation
		*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 -
			0.16666667f) * y2 + 1.0f) * y;

		// 10-degree minimax approximation
		float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 +
			1.0f;
		*ScalarCos = sign * p;
	}


	// Note:  We use FASTASIN_HALF_PI instead of HALF_PI inside of FastASin(), since it was the value that accompanied the minimax coefficients below.
	// It is important to use exactly the same value in all places inside this function to ensure that FastASin(0.0f) == 0.0f.
	// For comparison:
	//		HALF_PI				== 1.57079632679f == 0x3fC90FDB
	//		FASTASIN_HALF_PI	== 1.5707963050f  == 0x3fC90FDA
#define FASTASIN_HALF_PI (1.5707963050f)

	/**
	* Computes the ASin of a scalar float.
	*
	* @param Value  input angle
	* @return ASin of Value
	*/
	static FORCEINLINE float FastAsin(float Value)
	{
		// Clamp input to [-1,1].
		bool nonnegative = Value >= 0.0f;
		float x = Abs(Value);
		float omx = 1.0f - x;
		if (omx < 0.0f)
		{
			omx = 0.0f;
		}
		float root = Sqrt(omx);
		// 7-degree minimax approximation
		float result = ((((((-0.0012624911f * x + 0.0066700901f) * x - 0.0170881256f) * x + 0.0308918810f) * x - 0.0501743046f
		) * x + 0.0889789874f) * x - 0.2145988016f) * x + FASTASIN_HALF_PI;
		result *= root; // acos(|x|)
		// acos(x) = pi - acos(-x) when x < 0, asin(x) = pi/2 - acos(x)
		return nonnegative ? FASTASIN_HALF_PI - result : result - FASTASIN_HALF_PI;
	}
#undef FASTASIN_HALF_PI


	// Conversion Functions

	/** 
	 * Converts radians to degrees.
	 * @param	RadVal			Value in radians.
	 * @return					Value in degrees.
	 */
	template <class T>
	static FORCEINLINE auto RadiansToDegrees(T const& RadVal) -> decltype(RadVal * (180.f / PI))
	{
		return RadVal * (180.f / PI);
	}

	/** 
	 * Converts degrees to radians.
	 * @param	DegVal			Value in degrees.
	 * @return					Value in radians.
	 */
	template <class T>
	static FORCEINLINE auto DegreesToRadians(T const& DegVal) -> decltype(DegVal * (PI / 180.f))
	{
		return DegVal * (PI / 180.f);
	}

	/** Find the smallest angle between two headings (in degrees) */
	static float FindDeltaAngleDegrees(float A1, float A2)
	{
		// Find the difference
		float Delta = A2 - A1;

		// If change is larger than 180
		if (Delta > 180.0f)
		{
			// Flip to negative equivalent
			Delta = Delta - 360.0f;
		}
		else if (Delta < -180.0f)
		{
			// Otherwise, if change is smaller than -180
			// Flip to positive equivalent
			Delta = Delta + 360.0f;
		}

		// Return delta in [-180,180] range
		return Delta;
	}

	/** Find the smallest angle between two headings (in radians) */
	static float FindDeltaAngleRadians(float A1, float A2)
	{
		// Find the difference
		float Delta = A2 - A1;

		// If change is larger than PI
		if (Delta > PI)
		{
			// Flip to negative equivalent
			Delta = Delta - PI * 2.0f;
		}
		else if (Delta < -PI)
		{
			// Otherwise, if change is smaller than -PI
			// Flip to positive equivalent
			Delta = Delta + PI * 2.0f;
		}

		// Return delta in [-PI,PI] range
		return Delta;
	}

	/** Given a heading which may be outside the +/- PI range, 'unwind' it back into that range. */
	static float UnwindRadians(float A)
	{
		while (A > PI)
		{
			A -= (float)PI * 2.0f;
		}

		while (A < -PI)
		{
			A += (float)PI * 2.0f;
		}

		return A;
	}

	/** Utility to ensure angle is between +/- 180 degrees by unwinding. */
	static float UnwindDegrees(float A)
	{
		while (A > 180.f)
		{
			A -= 360.f;
		}

		while (A < -180.f)
		{
			A += 360.f;
		}

		return A;
	}

	/** Converts given Polar coordinate pair to Cartesian coordinate system. */
	static FORCEINLINE void PolarToCartesian(const float Rad, const float Ang, float& OutX, float& OutY)
	{
		OutX = Rad * Cos(Ang);
		OutY = Rad * Sin(Ang);
	}

	/** Performs a linear interpolation between two values, Alpha ranges from 0-1 */
	template <class T, class U>
	static T Lerp(const T& A, const T& B, const U& Alpha)
	{
		return (T)(A + Alpha * (B - A));
	}

	/** Performs a linear interpolation between two values, Alpha ranges from 0-1. Handles full numeric range of T */
	template <class T>
	static T LerpStable(const T& A, const T& B, double Alpha)
	{
		return (T)((A * (1.0 - Alpha)) + (B * Alpha));
	}

	/** Performs a linear interpolation between two values, Alpha ranges from 0-1. Handles full numeric range of T */
	template <class T>
	static T LerpStable(const T& A, const T& B, float Alpha)
	{
		return (T)((A * (1.0f - Alpha)) + (B * Alpha));
	}

	/** Performs a 2D linear interpolation between four values values, FracX, FracY ranges from 0-1 */
	template <class T, class U>
	static T BiLerp(const T& P00, const T& P10, const T& P01, const T& P11, const U& FracX, const U& FracY)
	{
		return Lerp(
			Lerp(P00, P10, FracX),
			Lerp(P01, P11, FracX),
			FracY
		);
	}

	/**
	 * Performs a cubic interpolation
	 *
	 * @param  P - end points
	 * @param  T - tangent directions at end points
	 * @param  Alpha - distance along spline
	 *
	 * @return  Interpolated value
	 */
	template <class T, class U>
	static T CubicInterp(const T& P0, const T& T0, const T& P1, const T& T1, const U& A)
	{
		const float A2 = A * A;
		const float A3 = A2 * A;

		return (T)((2 * A3 - 3 * A2 + 1) * P0) + ((A3 - 2 * A2 + A) * T0) + ((A3 - A2) * T1) + ((-2 * A3 + 3 * A2) * P1);
	}

	/**
	 * Performs a first derivative cubic interpolation
	 *
	 * @param  P - end points
	 * @param  T - tangent directions at end points
	 * @param  Alpha - distance along spline
	 *
	 * @return  Interpolated value
	 */
	template <class T, class U>
	static T CubicInterpDerivative(const T& P0, const T& T0, const T& P1, const T& T1, const U& A)
	{
		T a = 6.f * P0 + 3.f * T0 + 3.f * T1 - 6.f * P1;
		T b = -6.f * P0 - 4.f * T0 - 2.f * T1 + 6.f * P1;
		T c = T0;

		const float A2 = A * A;

		return (a * A2) + (b * A) + c;
	}

	/**
	 * Performs a second derivative cubic interpolation
	 *
	 * @param  P - end points
	 * @param  T - tangent directions at end points
	 * @param  Alpha - distance along spline
	 *
	 * @return  Interpolated value
	 */
	template <class T, class U>
	static T CubicInterpSecondDerivative(const T& P0, const T& T0, const T& P1, const T& T1, const U& A)
	{
		T a = 12.f * P0 + 6.f * T0 + 6.f * T1 - 12.f * P1;
		T b = -6.f * P0 - 4.f * T0 - 2.f * T1 + 6.f * P1;

		return (a * A) + b;
	}

	/** Interpolate between A and B, applying an ease in function.  Exp controls the degree of the curve. */
	template <class T>
	static T InterpEaseIn(const T& A, const T& B, float Alpha, float Exp)
	{
		float const ModifiedAlpha = Pow(Alpha, Exp);
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolate between A and B, applying an ease out function.  Exp controls the degree of the curve. */
	template <class T>
	static T InterpEaseOut(const T& A, const T& B, float Alpha, float Exp)
	{
		float const ModifiedAlpha = 1.f - Pow(1.f - Alpha, Exp);
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolate between A and B, applying an ease in/out function.  Exp controls the degree of the curve. */
	template <class T>
	static T InterpEaseInOut(const T& A, const T& B, float Alpha, float Exp)
	{
		return Lerp<T>(A, B, Alpha < 0.5f
			                     ? InterpEaseIn(0.f, 1.f, Alpha * 2.f, Exp) * 0.5f
			                     : InterpEaseOut(0.f, 1.f, Alpha * 2.f - 1.f, Exp) * 0.5f + 0.5f);
	}

	/** Interpolation between A and B, applying a step function. */
	template <class T>
	static T InterpStep(const T& A, const T& B, float Alpha, int32 Steps)
	{
		if (Steps <= 1 || Alpha <= 0)
		{
			return A;
		}
		if (Alpha >= 1)
		{
			return B;
		}

		const float StepsAsFloat = static_cast<float>(Steps);
		const float NumIntervals = StepsAsFloat - 1.f;
		float const ModifiedAlpha = FloorToFloat(Alpha * StepsAsFloat) / NumIntervals;
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolation between A and B, applying a sinusoidal in function. */
	template <class T>
	static T InterpSinIn(const T& A, const T& B, float Alpha)
	{
		float const ModifiedAlpha = -1.f * Cos(Alpha * HALF_PI) + 1.f;
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolation between A and B, applying a sinusoidal out function. */
	template <class T>
	static T InterpSinOut(const T& A, const T& B, float Alpha)
	{
		float const ModifiedAlpha = Sin(Alpha * HALF_PI);
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolation between A and B, applying a sinusoidal in/out function. */
	template <class T>
	static T InterpSinInOut(const T& A, const T& B, float Alpha)
	{
		return Lerp<T>(A, B, Alpha < 0.5f
			                     ? InterpSinIn(0.f, 1.f, Alpha * 2.f) * 0.5f
			                     : InterpSinOut(0.f, 1.f, Alpha * 2.f - 1.f) * 0.5f + 0.5f);
	}

	/** Interpolation between A and B, applying an exponential in function. */
	template <class T>
	static T InterpExpoIn(const T& A, const T& B, float Alpha)
	{
		float const ModifiedAlpha = Alpha == 0.f ? 0.f : Pow(2.f, 10.f * (Alpha - 1.f));
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolation between A and B, applying an exponential out function. */
	template <class T>
	static T InterpExpoOut(const T& A, const T& B, float Alpha)
	{
		float const ModifiedAlpha = Alpha == 1.f ? 1.f : -Pow(2.f, -10.f * Alpha) + 1.f;
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolation between A and B, applying an exponential in/out function. */
	template <class T>
	static T InterpExpoInOut(const T& A, const T& B, float Alpha)
	{
		return Lerp<T>(A, B, Alpha < 0.5f
			                     ? InterpExpoIn(0.f, 1.f, Alpha * 2.f) * 0.5f
			                     : InterpExpoOut(0.f, 1.f, Alpha * 2.f - 1.f) * 0.5f + 0.5f);
	}

	/** Interpolation between A and B, applying a circular in function. */
	template <class T>
	static T InterpCircularIn(const T& A, const T& B, float Alpha)
	{
		float const ModifiedAlpha = -1.f * (Sqrt(1.f - Alpha * Alpha) - 1.f);
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolation between A and B, applying a circular out function. */
	template <class T>
	static T InterpCircularOut(const T& A, const T& B, float Alpha)
	{
		Alpha -= 1.f;
		float const ModifiedAlpha = Sqrt(1.f - Alpha * Alpha);
		return Lerp<T>(A, B, ModifiedAlpha);
	}

	/** Interpolation between A and B, applying a circular in/out function. */
	template <class T>
	static T InterpCircularInOut(const T& A, const T& B, float Alpha)
	{
		return Lerp<T>(A, B, Alpha < 0.5f
			                     ? InterpCircularIn(0.f, 1.f, Alpha * 2.f) * 0.5f
			                     : InterpCircularOut(0.f, 1.f, Alpha * 2.f - 1.f) * 0.5f + 0.5f);
	}

	/*
	 *	Cubic Catmull-Rom Spline interpolation. Based on http://www.cemyuksel.com/research/catmullrom_param/catmullrom.pdf 
	 *	Curves are guaranteed to pass through the control points and are easily chained together.
	 *	Equation supports abitrary parameterization. eg. Uniform=0,1,2,3 ; chordal= |Pn - Pn-1| ; centripetal = |Pn - Pn-1|^0.5
	 *	P0 - The control point preceding the interpolation range.
	 *	P1 - The control point starting the interpolation range.
	 *	P2 - The control point ending the interpolation range.
	 *	P3 - The control point following the interpolation range.
	 *	T0-3 - The interpolation parameters for the corresponding control points.		
	 *	T - The interpolation factor in the range 0 to 1. 0 returns P1. 1 returns P2.
	 */
	template <class U>
	static U CubicCRSplineInterp(const U& P0, const U& P1, const U& P2, const U& P3, const float T0, const float T1,
	                             const float T2, const float T3, const float T)
	{
		//Based on http://www.cemyuksel.com/research/catmullrom_param/catmullrom.pdf 
		float InvT1MinusT0 = 1.0f / (T1 - T0);
		U L01 = (P0 * ((T1 - T) * InvT1MinusT0)) + (P1 * ((T - T0) * InvT1MinusT0));
		float InvT2MinusT1 = 1.0f / (T2 - T1);
		U L12 = (P1 * ((T2 - T) * InvT2MinusT1)) + (P2 * ((T - T1) * InvT2MinusT1));
		float InvT3MinusT2 = 1.0f / (T3 - T2);
		U L23 = (P2 * ((T3 - T) * InvT3MinusT2)) + (P3 * ((T - T2) * InvT3MinusT2));

		float InvT2MinusT0 = 1.0f / (T2 - T0);
		U L012 = (L01 * ((T2 - T) * InvT2MinusT0)) + (L12 * ((T - T0) * InvT2MinusT0));
		float InvT3MinusT1 = 1.0f / (T3 - T1);
		U L123 = (L12 * ((T3 - T) * InvT3MinusT1)) + (L23 * ((T - T1) * InvT3MinusT1));

		return ((L012 * ((T2 - T) * InvT2MinusT1)) + (L123 * ((T - T1) * InvT2MinusT1)));
	}

	// Geometry intersection 

	/**
	* Converts a floating point number to an integer which is further from zero, "larger" in absolute value: 0.1 becomes 1, -0.1 becomes -1
	* @param F		Floating point value to convert
	* @return		The rounded integer
	*/
	static FORCEINLINE float RoundFromZero(float F)
	{
		return F < 0.0f ? FloorToFloat(F) : CeilToFloat(F);
	}

	static FORCEINLINE double RoundFromZero(double F)
	{
		return F < 0.0 ? FloorToDouble(F) : CeilToDouble(F);
	}

	/**
	* Converts a floating point number to an integer which is closer to zero, "smaller" in absolute value: 0.1 becomes 0, -0.1 becomes 0
	* @param F		Floating point value to convert
	* @return		The rounded integer
	*/
	static FORCEINLINE float RoundToZero(float F)
	{
		return F < 0.0f ? CeilToFloat(F) : FloorToFloat(F);
	}

	static FORCEINLINE double RoundToZero(double F)
	{
		return F < 0.0 ? CeilToDouble(F) : FloorToDouble(F);
	}

	/**
	* Converts a floating point number to an integer which is more negative: 0.1 becomes 0, -0.1 becomes -1
	* @param F		Floating point value to convert
	* @return		The rounded integer
	*/
	static FORCEINLINE float RoundToNegativeInfinity(float F)
	{
		return FloorToFloat(F);
	}

	static FORCEINLINE double RoundToNegativeInfinity(double F)
	{
		return FloorToDouble(F);
	}

	/**
	* Converts a floating point number to an integer which is more positive: 0.1 becomes 1, -0.1 becomes 0
	* @param F		Floating point value to convert
	* @return		The rounded integer
	*/
	static FORCEINLINE float RoundToPositiveInfinity(float F)
	{
		return CeilToFloat(F);
	}

	static FORCEINLINE double RoundToPositiveInfinity(double F)
	{
		return CeilToDouble(F);
	}

	/** 
	 * Returns a smooth Hermite interpolation between 0 and 1 for the value X (where X ranges between A and B)
	 * Clamped to 0 for X <= A and 1 for X >= B.
	 *
	 * @param A Minimum value of X
	 * @param B Maximum value of X
	 * @param X Parameter
	 *
	 * @return Smoothed value between 0 and 1
	 */
	static float SmoothStep(float A, float B, float X)
	{
		if (X < A)
		{
			return 0.0f;
		}
		if (X >= B)
		{
			return 1.0f;
		}
		const float InterpFraction = (X - A) / (B - A);
		return InterpFraction * InterpFraction * (3.0f - 2.0f * InterpFraction);
	}

	// Use the Euclidean method to find the GCD
	static int32 GreatestCommonDivisor(int32 a, int32 b)
	{
		while (b != 0)
		{
			int32 t = b;
			b = a % b;
			a = t;
		}
		return a;
	}

	// LCM = a/gcd * b
	// a and b are the number we want to find the lcm
	static int32 LeastCommonMultiplier(int32 a, int32 b)
	{
		int32 CurrentGcd = GreatestCommonDivisor(a, b);
		return CurrentGcd == 0 ? 0 : a / CurrentGcd * b;
	}
};
