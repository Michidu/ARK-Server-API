// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "../BasicTypes.h"

#include "AreTypesEqual.h"
#include "Decay.h"
#include "Invoke.h"
#include "IsConstructible.h"
#include "IsInvocable.h"
#include "IsMemberPointer.h"
#include "RemoveReference.h"
#include "UnrealTypeTraits.h"

#include "../Containers/ContainerAllocationPolicies.h"
#include "../HAL/UnrealMemory.h"
#include "../Math/UnrealMathUtility.h"


// Disable visualization hack for shipping or test builds.
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
#define ENABLE_TFUNCTIONREF_VISUALIZATION 1
#else
#define ENABLE_TFUNCTIONREF_VISUALIZATION 0
#endif

template <typename FuncType> class TFunction;
template <typename FuncType> class TFunctionRef;

/**
 * TFunction<FuncType>
 *
 * See the class definition for intended usage.
 */
template <typename FuncType>
class TFunction;

/**
 * TUniqueFunction<FuncType>
 *
 * See the class definition for intended usage.
 */
template <typename FuncType>
class TUniqueFunction;

/**
 * TFunctionRef<FuncType>
 *
 * See the class definition for intended usage.
 */
template <typename FuncType>
class TFunctionRef;

/**
 * Traits class which checks if T is a TFunction<> type.
 */
template <typename T> struct TIsTFunction { enum { Value = false }; };
template <typename T> struct TIsTFunction<TFunction<T>> { enum { Value = true }; };

template <typename T> struct TIsTFunction<const          T> { enum { Value = TIsTFunction<T>::Value }; };
template <typename T> struct TIsTFunction<      volatile T> { enum { Value = TIsTFunction<T>::Value }; };
template <typename T> struct TIsTFunction<const volatile T> { enum { Value = TIsTFunction<T>::Value }; };

/**
 * Traits class which checks if T is a TFunction<> type.
 */
template <typename T> struct TIsTUniqueFunction { enum { Value = false }; };
template <typename T> struct TIsTUniqueFunction<TUniqueFunction<T>> { enum { Value = true }; };

template <typename T> struct TIsTUniqueFunction<const          T> { enum { Value = TIsTUniqueFunction<T>::Value }; };
template <typename T> struct TIsTUniqueFunction<      volatile T> { enum { Value = TIsTUniqueFunction<T>::Value }; };
template <typename T> struct TIsTUniqueFunction<const volatile T> { enum { Value = TIsTUniqueFunction<T>::Value }; };

/**
 * Traits class which checks if T is a TFunctionRef<> type.
 */
template <typename T> struct TIsTFunctionRef { enum { Value = false }; };
template <typename T> struct TIsTFunctionRef<TFunctionRef<T>> { enum { Value = true }; };

template <typename T> struct TIsTFunctionRef<const          T> { enum { Value = TIsTFunctionRef<T>::Value }; };
template <typename T> struct TIsTFunctionRef<      volatile T> { enum { Value = TIsTFunctionRef<T>::Value }; };
template <typename T> struct TIsTFunctionRef<const volatile T> { enum { Value = TIsTFunctionRef<T>::Value }; };

/**
 * Private implementation details of TFunction and TFunctionRef.
 */
namespace UE4Function_Private
{
	struct FUniqueFunctionStorage;

	/**
	 * Common interface to a callable object owned by TFunction.
	 */
	struct IFunction_OwnedObject
	{
		/**
		 * Creates a copy of the object in the allocator and returns a pointer to it.
		 */
		virtual IFunction_OwnedObject* CopyToEmptyStorage(FUniqueFunctionStorage& Storage) const = 0;

		/**
		 * Returns the address of the object.
		 */
		virtual void* GetAddress() = 0;

		/**
		 * Destructor.
		 */
		virtual ~IFunction_OwnedObject()
		{
		}
	};

	/**
	 * Implementation of IFunction_OwnedObject for a given copyable T.
	 */
	template <typename T>
	struct TFunction_CopyableOwnedObject final : public IFunction_OwnedObject
	{
		/**
		 * Constructor which creates its T by copying.
		 */
		explicit TFunction_CopyableOwnedObject(const T& InObj)
			: Obj(InObj)
		{
		}

		/**
		 * Constructor which creates its T by moving.
		 */
		explicit TFunction_CopyableOwnedObject(T&& InObj)
			: Obj(MoveTemp(InObj))
		{
		}

		IFunction_OwnedObject* CopyToEmptyStorage(FUniqueFunctionStorage& Storage) const override
		{
			return new (Storage) TFunction_CopyableOwnedObject(Obj);
		}

		virtual void* GetAddress() override
		{
			return &Obj;
		}

		T Obj;
	};

	/**
	 * Implementation of IFunction_OwnedObject for a given non-copyable T.
	 */
	template <typename T>
	struct TFunction_UniqueOwnedObject final : public IFunction_OwnedObject
	{
		/**
		 * Constructor which creates its T by moving.
		 */
		explicit TFunction_UniqueOwnedObject(T&& InObj)
			: Obj(MoveTemp(InObj))
		{
		}

		IFunction_OwnedObject* CopyToEmptyStorage(FUniqueFunctionStorage& Storage) const override
		{
			// Should never get here - copy functions are deleted for TUniqueFunction
			check(false);
			return nullptr;
		}

		virtual void* GetAddress() override
		{
			return &Obj;
		}

		T Obj;
	};

#if !defined(_WIN32) || defined(_WIN64)
	// Let TFunction store up to 32 bytes which are 16-byte aligned before we heap allocate
	typedef TAlignedBytes<16, 16> FAlignedInlineFunctionType;
#if USE_SMALL_TFUNCTIONS
	typedef FHeapAllocator FFunctionAllocatorType;
#else
	typedef TInlineAllocator<2> FFunctionAllocatorType;
#endif
#else
	// ... except on Win32, because we can't pass 16-byte aligned types by value, as some TFunctions are.
	// So we'll just keep it heap-allocated, which is always sufficiently aligned.
	typedef TAlignedBytes<16, 8> FAlignedInlineFunctionType;
	typedef FHeapAllocator FFunctionAllocatorType;
#endif

	template <typename T>
	struct TIsNullableBinding :
		TOr<
		TIsPointer<T>,
		TIsMemberPointer<T>,
		TIsTFunction<T>
		>
	{
	};

	template <typename T>
	FORCEINLINE typename TEnableIf<TIsNullableBinding<T>::Value, bool>::Type IsBound(const T& Func)
	{
		// Function pointers, data member pointers, member function pointers and TFunctions
		// can all be null/unbound, so test them using their boolean state.
		return !!Func;
	}

	template <typename T>
	FORCEINLINE typename TEnableIf<!TIsNullableBinding<T>::Value, bool>::Type IsBound(const T& Func)
	{
		// We can't tell if any other generic callable can be invoked, so just assume they can be.
		return true;
	}

	struct FFunctionStorage;

	struct FUniqueFunctionStorage
	{
		FUniqueFunctionStorage() = default;

		FUniqueFunctionStorage(FUniqueFunctionStorage&& Other)
		{
			Allocator.MoveToEmpty(Other.Allocator);
		}

		// Allow moving from a TFunction's storage
		FUniqueFunctionStorage(FFunctionStorage&& Other);

		FUniqueFunctionStorage& operator=(FUniqueFunctionStorage&& Other) = delete;
		FUniqueFunctionStorage& operator=(const FUniqueFunctionStorage& Other) = delete;

		template <typename FunctorType>
		typename TDecay<FunctorType>::Type* Bind(FunctorType&& InFunc)
		{
			if (!IsBound(InFunc))
			{
				return nullptr;
			}

			using OwnedType = TFunction_UniqueOwnedObject<typename TDecay<FunctorType>::Type>;

			OwnedType* NewObj = new (*this) OwnedType(Forward<FunctorType>(InFunc));
			return &NewObj->Obj;
		}

		void* BindCopy(const FFunctionStorage& Other);

		IFunction_OwnedObject* GetBoundObject() const
		{
			return (IFunction_OwnedObject*)Allocator.GetAllocation();
		}

		/**
		 * Returns a pointer to the callable object - needed by TFunctionRefBase.
		 */
		void* GetPtr() const
		{
			return GetBoundObject()->GetAddress();
		}

		/**
		 * Destroy any owned bindings - called by TFunctionRefBase only if Bind() or BindCopy() was called.
		 */
		void Unbind()
		{
			GetBoundObject()->~IFunction_OwnedObject();
		}

		FFunctionAllocatorType::ForElementType<FAlignedInlineFunctionType> Allocator;
	};

	struct FFunctionStorage : public FUniqueFunctionStorage
	{
		FFunctionStorage() = default;

		FFunctionStorage(FFunctionStorage&& Other)
			: FUniqueFunctionStorage(MoveTemp((FUniqueFunctionStorage&)Other))
		{
		}

		template <typename FunctorType>
		typename TDecay<FunctorType>::Type* Bind(FunctorType&& InFunc)
		{
			if (!IsBound(InFunc))
			{
				return nullptr;
			}

			using OwnedType = TFunction_CopyableOwnedObject<typename TDecay<FunctorType>::Type>;

			OwnedType* NewObj = new (*this) OwnedType(Forward<FunctorType>(InFunc));
			return &NewObj->Obj;
		}

		void* BindCopy(const FFunctionStorage& Other)
		{
			IFunction_OwnedObject* ThisFunc = Other.GetBoundObject()->CopyToEmptyStorage(*this);
			return ThisFunc->GetAddress();
		}
	};

	inline FUniqueFunctionStorage::FUniqueFunctionStorage(FFunctionStorage&& Other)
	{
		Allocator.MoveToEmpty(Other.Allocator);
	}

	inline void* FUniqueFunctionStorage::BindCopy(const FFunctionStorage& Other)
	{
		IFunction_OwnedObject* ThisFunc = Other.GetBoundObject()->CopyToEmptyStorage(*this);
		return ThisFunc->GetAddress();
	}
}

inline void* operator new(size_t Size, UE4Function_Private::FUniqueFunctionStorage& Storage)
{
	size_t NewSize = FMath::DivideAndRoundUp(Size, sizeof(UE4Function_Private::FAlignedInlineFunctionType));
	Storage.Allocator.ResizeAllocation(0, (int32)NewSize, sizeof(UE4Function_Private::FAlignedInlineFunctionType));

	return Storage.Allocator.GetAllocation();
}

namespace UE4Function_Private
{
#if ENABLE_TFUNCTIONREF_VISUALIZATION
	/**
	 * Helper classes to help debugger visualization.
	 */
	struct IDebugHelper
	{
		virtual ~IDebugHelper() = 0;
	};

	inline IDebugHelper::~IDebugHelper()
	{
	}

	template <typename T>
	struct TDebugHelper : IDebugHelper
	{
		T* Ptr;
	};
#endif

	/**
	 * A class which is used to instantiate the code needed to call a bound function.
	 */
	template <typename Functor, typename FuncType>
	struct TFunctionRefCaller;

	template <typename Functor, typename Ret, typename... ParamTypes>
	struct TFunctionRefCaller<Functor, Ret(ParamTypes...)>
	{
		static Ret Call(void* Obj, ParamTypes&... Params)
		{
			return Invoke(*(Functor*)Obj, Forward<ParamTypes>(Params)...);
		}
	};

	template <typename Functor, typename... ParamTypes>
	struct TFunctionRefCaller<Functor, void(ParamTypes...)>
	{
		static void Call(void* Obj, ParamTypes&... Params)
		{
			Invoke(*(Functor*)Obj, Forward<ParamTypes>(Params)...);
		}
	};

	/**
	 * A class which defines an operator() which will own storage of a callable and invoke the TFunctionRefCaller::Call function on it.
	 */
	template <typename StorageType, typename FuncType>
	struct TFunctionRefBase;

	template <typename StorageType, typename Ret, typename... ParamTypes>
	struct TFunctionRefBase<StorageType, Ret(ParamTypes...)>
	{
		template <typename OtherStorageType, typename OtherFuncType>
		friend struct TFunctionRefBase;

		TFunctionRefBase()
			: Callable(nullptr)
		{
		}

		TFunctionRefBase(TFunctionRefBase&& Other)
			: Callable(Other.Callable)
			, Storage(MoveTemp(Other.Storage))
		{
			if (Callable)
			{
#if ENABLE_TFUNCTIONREF_VISUALIZATION
				// Use Memcpy to copy the other DebugPtrStorage, including vptr (because we don't know the bound type
				// here), and then reseat the underlying pointer.  Possibly even more evil than the Set code.
				FMemory::Memcpy(&DebugPtrStorage, &Other.DebugPtrStorage, sizeof(DebugPtrStorage));
				DebugPtrStorage.Ptr = Storage.GetPtr();
#endif

				Other.Callable = nullptr;
			}
		}

		template <typename OtherStorage>
		TFunctionRefBase(TFunctionRefBase<OtherStorage, Ret(ParamTypes...)>&& Other)
			: Callable(Other.Callable)
			, Storage(MoveTemp(Other.Storage))
		{
			if (Callable)
			{
#if ENABLE_TFUNCTIONREF_VISUALIZATION
				// Use Memcpy to copy the other DebugPtrStorage, including vptr (because we don't know the bound type
				// here), and then reseat the underlying pointer.  Possibly even more evil than the Set code.
				FMemory::Memcpy(&DebugPtrStorage, &Other.DebugPtrStorage, sizeof(DebugPtrStorage));
				DebugPtrStorage.Ptr = Storage.GetPtr();
#endif

				Other.Callable = nullptr;
			}
		}

		template <typename OtherStorage>
		TFunctionRefBase(const TFunctionRefBase<OtherStorage, Ret(ParamTypes...)>& Other)
			: Callable(Other.Callable)
		{
			if (Callable)
			{
				void* NewPtr = Storage.BindCopy(Other.Storage);

#if ENABLE_TFUNCTIONREF_VISUALIZATION
				// Use Memcpy to copy the other DebugPtrStorage, including vptr (because we don't know the bound type
				// here), and then reseat the underlying pointer.  Possibly even more evil than the Set code.
				FMemory::Memcpy(&DebugPtrStorage, &Other.DebugPtrStorage, sizeof(DebugPtrStorage));
				DebugPtrStorage.Ptr = NewPtr;
#endif
			}
		}

		TFunctionRefBase(const TFunctionRefBase& Other)
			: Callable(Other.Callable)
		{
			if (Callable)
			{
				void* NewPtr = Storage.BindCopy(Other.Storage);

#if ENABLE_TFUNCTIONREF_VISUALIZATION
				// Use Memcpy to copy the other DebugPtrStorage, including vptr (because we don't know the bound type
				// here), and then reseat the underlying pointer.  Possibly even more evil than the Set code.
				FMemory::Memcpy(&DebugPtrStorage, &Other.DebugPtrStorage, sizeof(DebugPtrStorage));
				DebugPtrStorage.Ptr = NewPtr;
#endif
			}
		}

		template <
			typename FunctorType,
			typename = typename TEnableIf<
			TNot<
			TIsSame<TFunctionRefBase, typename TDecay<FunctorType>::Type>
			>::Value
			>::Type
		>
			TFunctionRefBase(FunctorType&& InFunc)
		{
			if (auto* Binding = Storage.Bind(Forward<FunctorType>(InFunc)))
			{
				using DecayedFunctorType = typename TRemovePointer<decltype(Binding)>::Type;

				Callable = &TFunctionRefCaller<DecayedFunctorType, Ret(ParamTypes...)>::Call;

#if ENABLE_TFUNCTIONREF_VISUALIZATION
				// We placement new over the top of the same object each time.  This is illegal,
				// but it ensures that the vptr is set correctly for the bound type, and so is
				// visualizable.  We never depend on the state of this object at runtime, so it's
				// ok.
				new ((void*)&DebugPtrStorage) TDebugHelper<DecayedFunctorType>;
				DebugPtrStorage.Ptr = (void*)Binding;
#endif
			}
		}

		TFunctionRefBase& operator=(TFunctionRefBase&&) = delete;
		TFunctionRefBase& operator=(const TFunctionRefBase&) = delete;

		Ret operator()(ParamTypes... Params) const
		{
			checkf(Callable, TEXT("Attempting to call an unbound TFunction!"));
			return Callable(Storage.GetPtr(), Params...);
		}

		~TFunctionRefBase()
		{
			if (Callable)
			{
				Storage.Unbind();
			}
		}

	protected:
		bool IsSet() const
		{
			return !!Callable;
		}

	private:
		// A pointer to a function which invokes the call operator on the callable object
		Ret(*Callable)(void*, ParamTypes&...);

		StorageType Storage;

#if ENABLE_TFUNCTIONREF_VISUALIZATION
		// To help debug visualizers
		TDebugHelper<void> DebugPtrStorage;
#endif
	};

	template <typename FunctorType, typename Ret, typename... ParamTypes>
	struct TFunctorReturnTypeIsCompatible
		: TIsConstructible<Ret, decltype(DeclVal<FunctorType>()(DeclVal<ParamTypes>()...))>
	{
	};

	template <typename MemberRet, typename Class, typename Ret, typename... ParamTypes>
	struct TFunctorReturnTypeIsCompatible<MemberRet Class::*, Ret, ParamTypes...>
		: TIsConstructible<Ret, MemberRet>
	{
	};

	template <typename MemberRet, typename Class, typename Ret, typename... ParamTypes>
	struct TFunctorReturnTypeIsCompatible<MemberRet Class::* const, Ret, ParamTypes...>
		: TIsConstructible<Ret, MemberRet>
	{
	};

	template <typename MemberRet, typename Class, typename... MemberParamTypes, typename Ret, typename... ParamTypes>
	struct TFunctorReturnTypeIsCompatible<MemberRet(Class::*)(MemberParamTypes...), Ret, ParamTypes...>
		: TIsConstructible<Ret, MemberRet>
	{
	};

	template <typename MemberRet, typename Class, typename... MemberParamTypes, typename Ret, typename... ParamTypes>
	struct TFunctorReturnTypeIsCompatible<MemberRet(Class::*)(MemberParamTypes...) const, Ret, ParamTypes...>
		: TIsConstructible<Ret, MemberRet>
	{
	};

	template <typename FuncType, typename FunctorType>
	struct TFuncCanBindToFunctor;

	template <typename FunctorType, typename Ret, typename... ParamTypes>
	struct TFuncCanBindToFunctor<Ret(ParamTypes...), FunctorType> :
		TAnd<
		TIsInvocable<FunctorType, ParamTypes...>,
		TFunctorReturnTypeIsCompatible<FunctorType, Ret, ParamTypes...>
		>
	{
	};

	template <typename FunctorType, typename... ParamTypes>
	struct TFuncCanBindToFunctor<void(ParamTypes...), FunctorType> :
		TIsInvocable<FunctorType, ParamTypes...>
	{
	};

	struct FFunctionRefStoragePolicy
	{
		template <typename FunctorType>
		typename TRemoveReference<FunctorType>::Type* Bind(FunctorType&& InFunc)
		{
			checkf(IsBound(InFunc), TEXT("Cannot bind a null/unbound callable to a TFunctionRef"));

			Ptr = (void*)&InFunc;
			return &InFunc;
		}

		void* BindCopy(const FFunctionRefStoragePolicy& Other)
		{
			void* OtherPtr = Other.Ptr;
			Ptr = OtherPtr;
			return OtherPtr;
		}

		/**
		 * Returns a pointer to the callable object - needed by TFunctionRefBase.
		 */
		void* GetPtr() const
		{
			return Ptr;
		}

		/**
		 * Destroy any owned bindings - called by TFunctionRefBase only if Bind() or BindCopy() was called.
		 */
		void Unbind() const
		{
			// FunctionRefs don't own their binding - do nothing
		}

	private:
		// A pointer to the callable object
		void* Ptr;
	};
}

/**
 * TFunctionRef<FuncType>
 *
 * A class which represents a reference to something callable.  The important part here is *reference* - if
 * you bind it to a lambda and the lambda goes out of scope, you will be left with an invalid reference.
 *
 * FuncType represents a function type and so TFunctionRef should be defined as follows:
 *
 * // A function taking a string and float and returning int32.  Parameter names are optional.
 * TFunctionRef<int32 (const FString& Name, float Scale)>
 *
 * If you also want to take ownership of the callable thing, e.g. you want to return a lambda from a
 * function, you should use TFunction.  TFunctionRef does not concern itself with ownership because it's
 * intended to be FAST.
 *
 * TFunctionRef is most useful when you want to parameterize a function with some caller-defined code
 * without making it a template.
 *
 * Example:
 *
 * // Something.h
 * void DoSomethingWithConvertingStringsToInts(TFunctionRef<int32 (const FString& Str)> Convert);
 *
 * // Something.cpp
 * void DoSomethingWithConvertingStringsToInts(TFunctionRef<int32 (const FString& Str)> Convert)
 * {
 *     for (const FString& Str : SomeBunchOfStrings)
 *     {
 *         int32 Int = Convert(Str);
 *         DoSomething(Int);
 *     }
 * }
 *
 * // SomewhereElse.cpp
 * #include "Something.h"
 *
 * void Func()
 * {
 *     // First do something using string length
 *     DoSomethingWithConvertingStringsToInts([](const FString& Str) {
 *         return Str.Len();
 *     });
 *
 *     // Then do something using string conversion
 *     DoSomethingWithConvertingStringsToInts([](const FString& Str) {
 *         int32 Result;
 *         TTypeFromString<int32>::FromString(Result, *Str);
 *         return Result;
 *     });
 * }
 */
template <typename FuncType>
class TFunctionRef : public UE4Function_Private::TFunctionRefBase<UE4Function_Private::FFunctionRefStoragePolicy, FuncType>
{
	using Super = UE4Function_Private::TFunctionRefBase<UE4Function_Private::FFunctionRefStoragePolicy, FuncType>;

public:
	/**
	 * Constructor which binds a TFunctionRef to a callable object.
	 */
	template <
		typename FunctorType,
		typename = typename TEnableIf<
		TAnd<
		TNot<TIsTFunctionRef<typename TDecay<FunctorType>::Type>>,
		UE4Function_Private::TFuncCanBindToFunctor<FuncType, typename TDecay<FunctorType>::Type>
		>::Value
		>::Type
	>
		TFunctionRef(FunctorType&& InFunc)
		: Super(Forward<FunctorType>(InFunc))
	{
		// This constructor is disabled for TFunctionRef types so it isn't incorrectly selected as copy/move constructors.
	}

	TFunctionRef(const TFunctionRef&) = default;

	// We delete the assignment operators because we don't want it to be confused with being related to
	// regular C++ reference assignment - i.e. calling the assignment operator of whatever the reference
	// is bound to - because that's not what TFunctionRef does, nor is it even capable of doing that.
	TFunctionRef& operator=(const TFunctionRef&) const = delete;
	~TFunctionRef() = default;
};

/**
 * TFunction<FuncType>
 *
 * A class which represents a copy of something callable.  FuncType represents a function type and so
 * TFunction should be defined as follows:
 *
 * // A function taking a string and float and returning int32.  Parameter names are optional.
 * TFunction<int32 (const FString& Name, float Scale)>
 *
 * Unlike TFunctionRef, this object is intended to be used like a UE4 version of std::function.  That is,
 * it takes a copy of whatever is bound to it, meaning you can return it from functions and store them in
 * objects without caring about the lifetime of the original object being bound.
 *
 * Example:
 *
 * // Something.h
 * TFunction<FString (int32)> GetTransform();
 *
 * // Something.cpp
 * TFunction<FString (int32)> GetTransform(const FString& Prefix)
 * {
 *     // Squares number and returns it as a string with the specified prefix
 *     return [=](int32 Num) {
 *         return Prefix + TEXT(": ") + TTypeToString<int32>::ToString(Num * Num);
 *     };
 * }
 *
 * // SomewhereElse.cpp
 * #include "Something.h"
 *
 * void Func()
 * {
 *     TFunction<FString (int32)> Transform = GetTransform(TEXT("Hello"));
 *
 *     FString Result = Transform(5); // "Hello: 25"
 * }
 */
template <typename FuncType>
class TFunction final : public UE4Function_Private::TFunctionRefBase<UE4Function_Private::FFunctionStorage, FuncType>
{
	using Super = UE4Function_Private::TFunctionRefBase<UE4Function_Private::FFunctionStorage, FuncType>;

public:
	/**
	 * Default constructor.
	 */
	TFunction(TYPE_OF_NULLPTR = nullptr)
	{
	}

	/**
	 * Constructor which binds a TFunction to any function object.
	 */
	template <
		typename FunctorType,
		typename = typename TEnableIf<
		TAnd<
		TNot<TIsTFunction<typename TDecay<FunctorType>::Type>>,
		UE4Function_Private::TFuncCanBindToFunctor<FuncType, FunctorType>
		>::Value
		>::Type
	>
		TFunction(FunctorType&& InFunc)
		: Super(Forward<FunctorType>(InFunc))
	{
		// This constructor is disabled for TFunction types so it isn't incorrectly selected as copy/move constructors.

		// This is probably a mistake if you expect TFunction to take a copy of what
		// TFunctionRef is bound to, because that's not possible.
		//
		// If you really intended to bind a TFunction to a TFunctionRef, you can just
		// wrap it in a lambda (and thus it's clear you're just binding to a call to another
		// reference):
		//
		// TFunction<int32(float)> MyFunction = [MyFunctionRef](float F) { return MyFunctionRef(F); };
		static_assert(!TIsTFunctionRef<typename TDecay<FunctorType>::Type>::Value, "Cannot construct a TFunction from a TFunctionRef");
	}

	TFunction(TFunction&&) = default;
	TFunction(const TFunction& Other) = default;
	~TFunction() = default;

	/**
	 * Move assignment operator.
	 */
	TFunction& operator=(TFunction&& Other)
	{
		Swap(*this, Other);
		return *this;
	}

	/**
	 * Copy assignment operator.
	 */
	TFunction& operator=(const TFunction& Other)
	{
		TFunction Temp = Other;
		Swap(*this, Temp);
		return *this;
	}

	/**
	 * Tests if the TFunction is callable.
	 */
	FORCEINLINE explicit operator bool() const
	{
		return Super::IsSet();
	}
};

/**
 * TUniqueFunction<FuncType>
 *
 * Used like TFunction above, but is move-only.  This allows non-copyable functors to be bound to it.
 *
 * Example:
 *
 * TUniquePtr<FThing> Thing = MakeUnique<FThing>();
 *
 * TFunction      <void()> CopyableFunc = [Thing = MoveTemp(Thing)](){ Thing->DoSomething(); }; // error - lambda is not copyable
 * TUniqueFunction<void()> MovableFunc  = [Thing = MoveTemp(Thing)](){ Thing->DoSomething(); }; // ok
 *
 * void Foo(TUniqueFunction<void()> Func);
 * Foo(MovableFunc);           // error - TUniqueFunction is not copyable
 * Foo(MoveTemp(MovableFunc)); // ok
 */
template <typename FuncType>
class TUniqueFunction final : public UE4Function_Private::TFunctionRefBase<UE4Function_Private::FUniqueFunctionStorage, FuncType>
{
	using Super = UE4Function_Private::TFunctionRefBase<UE4Function_Private::FUniqueFunctionStorage, FuncType>;

public:
	/**
	 * Default constructor.
	 */
	TUniqueFunction(TYPE_OF_NULLPTR = nullptr)
	{
	}

	/**
	 * Constructor which binds a TFunction to any function object.
	 */
	template <
		typename FunctorType,
		typename = typename TEnableIf<
		TAnd<
		TNot<TOr<TIsTUniqueFunction<typename TDecay<FunctorType>::Type>, TIsTFunction<typename TDecay<FunctorType>::Type>>>,
		UE4Function_Private::TFuncCanBindToFunctor<FuncType, FunctorType>
		>::Value
		>::Type
	>
		TUniqueFunction(FunctorType&& InFunc)
		: Super(Forward<FunctorType>(InFunc))
	{
		// This constructor is disabled for TUniqueFunction types so it isn't incorrectly selected as copy/move constructors.

		// This is probably a mistake if you expect TFunction to take a copy of what
		// TFunctionRef is bound to, because that's not possible.
		//
		// If you really intended to bind a TFunction to a TFunctionRef, you can just
		// wrap it in a lambda (and thus it's clear you're just binding to a call to another
		// reference):
		//
		// TFunction<int32(float)> MyFunction = [MyFunctionRef](float F) { return MyFunctionRef(F); };
		static_assert(!TIsTFunctionRef<typename TDecay<FunctorType>::Type>::Value, "Cannot construct a TUniqueFunction from a TFunctionRef");
	}

	/**
	 * Constructor which takes ownership of a TFunction's functor.
	 */
	TUniqueFunction(TFunction<FuncType>&& Other)
		: Super(MoveTemp(*(UE4Function_Private::TFunctionRefBase<UE4Function_Private::FFunctionStorage, FuncType>*)& Other))
	{
	}

	/**
	 * Constructor which takes ownership of a TFunction's functor.
	 */
	TUniqueFunction(const TFunction<FuncType>& Other)
		: Super(*(const UE4Function_Private::TFunctionRefBase<UE4Function_Private::FFunctionStorage, FuncType>*)& Other)
	{
	}

	/**
	 * Copy/move assignment operator.
	 */
	TUniqueFunction& operator=(TUniqueFunction&& Other)
	{
		Swap(*this, Other);
		return *this;
	}

	TUniqueFunction(TUniqueFunction&&) = default;
	TUniqueFunction(const TUniqueFunction& Other) = delete;
	TUniqueFunction& operator=(const TUniqueFunction& Other) = delete;
	~TUniqueFunction() = default;

	/**
	 * Tests if the TUniqueFunction is callable.
	 */
	FORCEINLINE explicit operator bool() const
	{
		return Super::IsSet();
	}
};

/**
 * Nullptr equality operator.
 */
template <typename FuncType>
FORCEINLINE bool operator==(TYPE_OF_NULLPTR, const TFunction<FuncType>& Func)
{
	return !Func;
}

/**
 * Nullptr equality operator.
 */
template <typename FuncType>
FORCEINLINE bool operator==(const TFunction<FuncType>& Func, TYPE_OF_NULLPTR)
{
	return !Func;
}

/**
 * Nullptr inequality operator.
 */
template <typename FuncType>
FORCEINLINE bool operator!=(TYPE_OF_NULLPTR, const TFunction<FuncType>& Func)
{
	return (bool)Func;
}

/**
 * Nullptr inequality operator.
 */
template <typename FuncType>
FORCEINLINE bool operator!=(const TFunction<FuncType>& Func, TYPE_OF_NULLPTR)
{
	return (bool)Func;
}