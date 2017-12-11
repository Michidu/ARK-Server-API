#pragma once

#include "../basictypes.h"
#include "IsPointer.h"
#include "AndOrNot.h"
#include "IsArithmetic.h"
#include "IsPODType.h"


/*-----------------------------------------------------------------------------
 * Macros to abstract the presence of certain compiler intrinsic type traits 
 -----------------------------------------------------------------------------*/
#define HAS_TRIVIAL_CONSTRUCTOR(T) __has_trivial_constructor(T)
#define IS_POD(T) __is_pod(T)
#define IS_EMPTY(T) __is_empty(T)


/*-----------------------------------------------------------------------------
	Type traits similar to TR1 (uses intrinsics supported by VC8)
	Should be updated/revisited/discarded when compiler support for tr1 catches up.
 -----------------------------------------------------------------------------*/

/**
 * TIsSame
 *
 * Unreal implementation of std::is_same trait.
 */
template <typename A, typename B>
struct TIsSame
{
	enum { Value = false };
};

template <typename T>
struct TIsSame<T, T>
{
	enum { Value = true };
};

/**
 * TIsCharType
 */
template <typename T>
struct TIsCharType
{
	enum { Value = false };
};

template <>
struct TIsCharType<ANSICHAR>
{
	enum { Value = true };
};

template <>
struct TIsCharType<WIDECHAR>
{
	enum { Value = true };
};

/**
 * TIsReferenceType
 */
template <typename T>
struct TIsReferenceType
{
	enum { Value = false };
};

template <typename T>
struct TIsReferenceType<T&>
{
	enum { Value = true };
};

template <typename T>
struct TIsReferenceType<T&&>
{
	enum { Value = true };
};

/**
 * TIsLValueReferenceType
 */
template <typename T>
struct TIsLValueReferenceType
{
	enum { Value = false };
};

template <typename T>
struct TIsLValueReferenceType<T&>
{
	enum { Value = true };
};

/**
 * TIsRValueReferenceType
 */
template <typename T>
struct TIsRValueReferenceType
{
	enum { Value = false };
};

template <typename T>
struct TIsRValueReferenceType<T&&>
{
	enum { Value = true };
};

/**
 * TIsVoidType
 */
template <typename T>
struct TIsVoidType
{
	enum { Value = false };
};

template <>
struct TIsVoidType<void>
{
	enum { Value = true };
};

template <>
struct TIsVoidType<void const>
{
	enum { Value = true };
};

template <>
struct TIsVoidType<void volatile>
{
	enum { Value = true };
};

template <>
struct TIsVoidType<void const volatile>
{
	enum { Value = true };
};

/**
 * TIsFundamentalType
 */
template <typename T>
struct TIsFundamentalType
{
	enum { Value = TOr<TIsArithmetic<T>, TIsVoidType<T>>::Value };
};

/**
 * TIsFunction
 *
 * Tests is a type is a function.
 */
template <typename T>
struct TIsFunction
{
	enum { Value = false };
};

template <typename RetType, typename... Params>
struct TIsFunction<RetType(Params ...)>
{
	enum { Value = true };
};

/**
 * TIsWeakPointerType
 */
template <typename T>
struct TIsWeakPointerType
{
	enum { Value = false };
};

/*-----------------------------------------------------------------------------
	Call traits - Modeled somewhat after boost's interfaces.
-----------------------------------------------------------------------------*/

/**
 * Call traits helpers
 */
template <typename T, bool TypeIsSmall>
struct TCallTraitsParamTypeHelper
{
	typedef const T& ParamType;
	typedef const T& ConstParamType;
};

template <typename T>
struct TCallTraitsParamTypeHelper<T, true>
{
	typedef const T ParamType;
	typedef const T ConstParamType;
};

template <typename T>
struct TCallTraitsParamTypeHelper<T*, true>
{
	typedef T* ParamType;
	typedef const T* ConstParamType;
};


/*-----------------------------------------------------------------------------
	Helper templates for dealing with 'const' in template code
-----------------------------------------------------------------------------*/

/**
 * TRemoveConst<> is modeled after boost's implementation.  It allows you to take a templatized type
 * such as 'const Foo*' and use const_cast to convert that type to 'Foo*' without knowing about Foo.
 *
 *		MutablePtr = const_cast< RemoveConst< ConstPtrType >::Type >( ConstPtr );
 */
template <class T>
struct TRemoveConst
{
	typedef T Type;
};

template <class T>
struct TRemoveConst<const T>
{
	typedef T Type;
};


/*-----------------------------------------------------------------------------
 * TCallTraits
 *
 * Same call traits as boost, though not with as complete a solution.
 *
 * The main member to note is ParamType, which specifies the optimal 
 * form to pass the type as a parameter to a function.
 * 
 * Has a small-value optimization when a type is a POD type and as small as a pointer.
-----------------------------------------------------------------------------*/

/**
 * base class for call traits. Used to more easily refine portions when specializing
 */
template <typename T>
struct TCallTraitsBase
{
private:
	enum
	{
		PassByValue = TOr<TAndValue<sizeof(T) <= sizeof(void*), TIsPODType<T>>, TIsArithmetic<T>, TIsPointer<T>>::Value
	};

public:
	typedef T ValueType;
	typedef T& Reference;
	typedef const T& ConstReference;
	typedef typename TCallTraitsParamTypeHelper<T, PassByValue>::ParamType ParamType;
	typedef typename TCallTraitsParamTypeHelper<T, PassByValue>::ConstParamType ConstPointerType;
};

/**
 * TCallTraits
 */
template <typename T>
struct TCallTraits : public TCallTraitsBase<T>
{
};

// Fix reference-to-reference problems.
template <typename T>
struct TCallTraits<T&>
{
	typedef T& ValueType;
	typedef T& Reference;
	typedef const T& ConstReference;
	typedef T& ParamType;
	typedef T& ConstPointerType;
};

// Array types
template <typename T, size_t N>
struct TCallTraits<T [N]>
{
private:
	typedef T ArrayType[N];
public:
	typedef const T* ValueType;
	typedef ArrayType& Reference;
	typedef const ArrayType& ConstReference;
	typedef const T* const ParamType;
	typedef const T* const ConstPointerType;
};

// const array types
template <typename T, size_t N>
struct TCallTraits<const T [N]>
{
private:
	typedef const T ArrayType[N];
public:
	typedef const T* ValueType;
	typedef ArrayType& Reference;
	typedef const ArrayType& ConstReference;
	typedef const T* const ParamType;
	typedef const T* const ConstPointerType;
};


/*-----------------------------------------------------------------------------
	Traits for our particular container classes
-----------------------------------------------------------------------------*/

/**
 * Traits for containers.
 */
template <typename T>
struct TContainerTraitsBase
{
	// This should be overridden by every container that supports emptying its contents via a move operation.
	enum { MoveWillEmptyContainer = false };
};

template <typename T>
struct TContainerTraits : public TContainerTraitsBase<T>
{
};

struct FVirtualDestructor
{
	virtual ~FVirtualDestructor()
	{
	}
};

template <typename T, typename U>
struct TMoveSupportTraitsBase
{
	// Param type is not an const lvalue reference, which means it's pass-by-value, so we should just provide a single type for copying.
	// Move overloads will be ignored due to SFINAE.
	typedef U Copy;
};

template <typename T>
struct TMoveSupportTraitsBase<T, const T&>
{
	// Param type is a const lvalue reference, so we can provide an overload for moving.
	typedef const T& Copy;
	typedef T&& Move;
};

/**
 * This traits class is intended to be used in pairs to allow efficient and correct move-aware overloads for generic types.
 * For example:
 *
 * template <typename T>
 * void Func(typename TMoveSupportTraits<T>::Copy Obj)
 * {
 *     // Copy Obj here
 * }
 *
 * template <typename T>
 * void Func(typename TMoveSupportTraits<T>::Move Obj)
 * {
 *     // Move from Obj here as if it was passed as T&&
 * }
 *
 * Structuring things in this way will handle T being a pass-by-value type (e.g. ints, floats, other 'small' types) which
 * should never have a reference overload.
 */
template <typename T>
struct TMoveSupportTraits : TMoveSupportTraitsBase<T, typename TCallTraits<T>::ParamType>
{
};

template <typename T>
struct TIdentity
{
	typedef T Type;
};

/*-----------------------------------------------------------------------------
 * Undef Macros abstracting the presence of certain compiler intrinsic type traits
 -----------------------------------------------------------------------------*/
#undef IS_EMPTY
#undef IS_POD
#undef HAS_TRIVIAL_CONSTRUCTOR
