#ifndef __TARRAY_H__
#define __TARRAY_H__

#include <assert.h>
#include <string.h>

#if !defined(_WIN32)
#include <inttypes.h>		// for intptr_t
#elif !defined(_MSC_VER)
#include <stdint.h>			// for mingw
#endif

#include "BasicTypes.h"
#include "MAlloc.h"

// TArray -------------------------------------------------------------------

// T is the type stored in the array.
// TT is the type returned by operator().
template <class T, class TT=T>
class TArray
{
public:
	typedef T ElementType;
	typedef TT Allocator;

	////////
	// This is a dummy constructor that does nothing. The purpose of this
	// is so you can create a global TArray in the data segment that gets
	// used by code before startup without worrying about the constructor
	// resetting it after it's already been used. You MUST NOT use it for
	// heap- or stack-allocated TArrays.
	enum ENoInit
	{
		NoInit
	};

	TArray(ENoInit)
		: ArrayNum(0),
		  ArrayMax(0)
	{
	}

	TArray()
	{
		ArrayMax = 0;
		ArrayNum = 0;
		Array = NULL;
	}

	TArray(int max)
	{
		ArrayMax = max;
		ArrayNum = 0;
		Array = (T *)M_Malloc(sizeof(T) * max);
		if (max != 0) // [BL] GCC will throw a warning if max is 0
			memset(Array, 0, sizeof(T) * max); // [ZDoomGL] - initialize the array to 0
	}

	TArray(const TArray<T>& other)
	{
		DoCopy(other);
	}

	/**
	* Copy constructor. Use the common routine to perform the copy.
	*
	* @param Other The source array to copy.
	* @param ExtraSlack Tells how much extra memory should be preallocated
	*                   at the end of the array in the number of elements.
	*/
	FORCEINLINE TArray(const TArray& Other, int32 ExtraSlack)
		: ArrayNum(0),
		  ArrayMax(0)
	{
		DoCopy(Other);
		Grow(ExtraSlack);
	}

	TArray<T>& operator=(const TArray<T>& other)
	{
		if (&other != this)
		{
			if (Array != nullptr)
			{
				if (ArrayNum > 0)
				{
					DoDelete(0, ArrayNum - 1);
				}
				M_Free(Array);
			}
			DoCopy(other);
		}
		return *this;
	}

	~TArray()
	{
		if (Array)
		{
			if (ArrayNum > 0)
			{
				DoDelete(0, ArrayNum - 1);
			}
			M_Free(Array);
			Array = NULL;
			ArrayNum = 0;
			ArrayMax = 0;
		}
	}

	// Return a reference to an element
	T& operator[](size_t index) const
	{
		return Array[index];
	}

	// Returns the value of an element
	TT operator()(size_t index) const
	{
		return Array[index];
	}

	// Returns a reference to the last element
	T& Last() const
	{
		return Array[ArrayNum - 1];
	}

	unsigned int Push(const T& item)
	{
		Grow(1);
		::new((void*)&Array[ArrayNum]) T(item);
		return ArrayNum++;
	}

	bool Pop(T& item)
	{
		if (ArrayNum > 0)
		{
			item = Array[--ArrayNum];
			Array[ArrayNum].~T();
			return true;
		}
		return false;
	}

	void Delete(unsigned int index)
	{
		if (index < ArrayNum)
		{
			Array[index].~T();
			if (index < --ArrayNum)
			{
				memmove(&Array[index], &Array[index + 1], sizeof(T) * (ArrayNum - index));
			}
		}
	}

	void Delete(unsigned int index, int deletecount)
	{
		if (index + deletecount > ArrayNum)
		{
			deletecount = ArrayNum - index;
		}
		if (deletecount > 0)
		{
			for (int i = 0; i < deletecount; i++)
			{
				Array[index + i].~T();
			}
			ArrayNum -= deletecount;
			if (index < ArrayNum)
			{
				memmove(&Array[index], &Array[index + deletecount], sizeof(T) * (ArrayNum - index));
			}
		}
	}

	// Inserts an item into the array, shifting elements as needed
	void Insert(unsigned int index, const T& item)
	{
		if (index >= ArrayNum)
		{
			// Inserting somewhere past the end of the array, so we can
			// just add it without moving things.
			Resize(index + 1);
			::new((void *)&Array[index]) T(item);
		}
		else
		{
			// Inserting somewhere in the middle of the array,
			// so make room for it
			Resize(ArrayNum + 1);

			// Now move items from the index and onward out of the way
			memmove(&Array[index + 1], &Array[index], sizeof(T) * (ArrayNum - index - 1));

			// And put the new element in
			::new((void *)&Array[index]) T(item);
		}
	}

	/**
	* Constructs a new item at the end of the array, possibly reallocating the whole array to fit.
	*
	* @param Args	The arguments to forward to the constructor of the new item.
	* @return		Index to the new item
	*/
	template <typename... ArgsType>
	FORCEINLINE int32 Emplace(ArgsType&&... Args)
	{
		const int32 Index = AddUninitialized(1);
		new(GetData() + Index) ElementType(std::forward<ArgsType>(Args)...);
		return Index;
	}

	/**
	* Adds a given number of uninitialized elements into the array.
	*
	* Caution, AddUninitialized() will create elements without calling
	* the constructor and this is not appropriate for element types that
	* require a constructor to function properly.
	*
	* @param Count Number of elements to add.
	* @returns Number of elements in array before addition.
	*/
	FORCEINLINE int AddUninitialized(int num = 1)
	{
		const int OldNum = ArrayNum;
		if ((ArrayNum += num) > ArrayMax)
		{
			Grow(OldNum);
		}
		return OldNum;
	}

	void ShrinkToFit()
	{
		if (ArrayMax > ArrayNum)
		{
			ArrayMax = ArrayNum;
			if (ArrayMax == 0)
			{
				if (Array != nullptr)
				{
					M_Free(Array);
					Array = NULL;
				}
			}
			else
			{
				DoResize();
			}
		}
	}

	// Grow Array to be large enough to hold amount more entries without
	// further growing.
	void Grow(unsigned int amount)
	{
		if (ArrayNum + amount > ArrayMax)
		{
			const unsigned int choicea = ArrayNum + amount;
			const unsigned int choiceb = ArrayMax = ArrayMax >= 16 ? ArrayMax + ArrayMax / 2 : 16;
			ArrayMax = choicea > choiceb ? choicea : choiceb;
			DoResize();
		}
	}

	// Resize Array so that it has exactly amount entries in use.
	void Resize(unsigned int amount)
	{
		if (ArrayNum < amount)
		{
			// Adding new entries
			Grow(amount - ArrayNum);
			for (unsigned int i = ArrayNum; i < amount; ++i)
			{
				::new((void *)&Array[i]) T;
			}
		}
		else if (ArrayNum != amount)
		{
			// Deleting old entries
			DoDelete(amount, ArrayNum - 1);
		}
		ArrayNum = amount;
	}

	// Reserves amount entries at the end of the array, but does nothing
	// with them.
	unsigned int Reserve(unsigned int amount)
	{
		Grow(amount);
		unsigned int place = ArrayNum;
		ArrayNum += amount;
		for (unsigned int i = place; i < ArrayNum; ++i)
		{
			::new((void *)&Array[i]) T;
		}
		return place;
	}

	unsigned int Num() const
	{
		return ArrayNum;
	}

	unsigned int Max() const
	{
		return ArrayMax;
	}

	FORCEINLINE bool IsValidIndex(uint32_t index) const
	{
		return index >= 0 && index < ArrayNum;
	}

	T* GetData() const
	{
		return Array;
	}

	void Clear()
	{
		if (ArrayNum > 0)
		{
			DoDelete(0, ArrayNum - 1);
			ArrayNum = 0;
		}
	}

private:
	T* Array;
	unsigned int ArrayNum;
	unsigned int ArrayMax;

	void DoCopy(const TArray<T>& other)
	{
		ArrayMax = ArrayNum = other.ArrayNum;
		if (ArrayNum != 0)
		{
			Array = (T *)M_Malloc(sizeof(T) * ArrayMax);
			for (unsigned int i = 0; i < ArrayNum; ++i)
			{
				::new(&Array[i]) T(other.Array[i]);
			}
		}
		else
		{
			Array = NULL;
		}
	}

	void DoResize()
	{
		size_t allocsize = sizeof(T) * ArrayMax;
		Array = (T *)M_Realloc(Array, allocsize);
	}

	void DoDelete(unsigned int first, unsigned int last)
	{
		assert (last != ~0u);
		for (unsigned int i = first; i <= last; ++i)
		{
			Array[i].~T();
		}
	}
};

// TDeletingArray -----------------------------------------------------------
// An array that deletes its elements when it gets deleted.
template <class T, class TT=T>
class TDeletingArray : public TArray<T, TT>
{
public:
	~TDeletingArray<T, TT>()
	{
		for (unsigned int i = 0; i < TArray<T, TT>::Num(); ++i)
		{
			if ((*this)[i] != NULL)
				delete (*this)[i];
		}
	}
};

// TAutoGrowArray -----------------------------------------------------------
// An array with accessors that automatically grow the array as needed.
// It can still be used as a normal TArray if needed. ACS uses this for
// world and global arrays.

template <class T, class TT=T>
class TAutoGrowArray : public TArray<T, TT>
{
public:
	T GetVal(unsigned int index)
	{
		if (index >= this->Num())
		{
			return 0;
		}
		return (*this)[index];
	}

	void SetVal(unsigned int index, T val)
	{
		if ((int)index < 0) return; // These always result in an out of memory condition.

		if (index >= this->Num())
		{
			this->Resize(index + 1);
		}
		(*this)[index] = val;
	}
};

#endif //__TARRAY_H__
