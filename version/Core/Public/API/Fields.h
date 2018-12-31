#pragma once

#include <Windows.h>
#include <string>
#include <utility>

#include "Base.h"

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(void* _this, const std::string& func_name, Args&&... args)
{
	return static_cast<RT(__fastcall*)(DWORD64, ArgsTypes ...)>(GetAddress(func_name))(
		reinterpret_cast<DWORD64>(_this), std::forward<Args>(args)...);
}

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(nullptr_t, const std::string& funcName, Args&&... args)
{
	return static_cast<RT(__fastcall*)(ArgsTypes ...)>(GetAddress(funcName))(std::forward<Args>(args)...);
}

template <typename RT>
RT GetNativeField(const void* _this, const std::string& field_name)
{
	return *reinterpret_cast<RT*>(GetAddress(_this, field_name));
}

template <typename RT>
RT GetNativePointerField(const void* _this, const std::string& field_name)
{
	return reinterpret_cast<RT>(GetAddress(_this, field_name));
}

template <typename RT>
RT GetNativeDataPointerField(const std::string& field_name)
{
	return reinterpret_cast<RT>(GetDataAddress(field_name));
}

template <typename RT, typename T>
RT GetNativeBitField(const LPVOID _this, const std::string& field_name)
{
	const auto bf = GetBitField(_this, field_name);
	T result =
		((*reinterpret_cast<T*>(bf.offset)) >> bf.bit_position) & (~0ULL >> (sizeof(unsigned long long) * 8 - bf.num_bits));

	return static_cast<RT>(result);
}

template <typename RT, typename T>
void SetNativeBitField(LPVOID _this, const std::string& field_name, RT new_value)
{
	const auto bf = GetBitField(_this, field_name);
	const auto mask = (~0ULL >> ((sizeof(unsigned long long) * 8) - bf.num_bits)) << bf.bit_position;
	*reinterpret_cast<T*>(bf.offset) =
		(*reinterpret_cast<T*>(bf.offset) & ~mask) | ((static_cast<T>(new_value) << bf.bit_position) & mask);
}

template <typename T, size_t size>
class FieldArray
{
public:
	FieldArray(void* parent, const std::string& field_name)
		: value_(GetNativePointerField<T*>(parent, field_name))
	{
	}

	T* operator()()
	{
		return value_;
	}

	FieldArray& operator=(const T& other) = delete;

	static size_t GetSize()
	{
		return size;
	}

private:
	T* value_;
};

template <typename T>
class DataValue
{
public:
	DataValue(const std::string& field_name)
		: value_(GetNativeDataPointerField<T*>(field_name))
	{
	}

	T& operator()() const
	{
		return *value_;
	}

	DataValue& operator=(const T& other)
	{
		*value_ = other;
		return *this;
	}

	T& Get() const
	{
		return *value_;
	}

	void Set(const T& other)
	{
		*value_ = other;
	}

private:
	T* value_;
};

template <typename RT, typename T>
class BitFieldValue
{
public:
	BitFieldValue(void* parent, std::string field_name)
		: parent_(parent), field_name_(std::move(field_name))
	{
	}

	RT operator()() const
	{
		return GetNativeBitField<RT, T>(parent_, field_name_);
	}

	BitFieldValue& operator=(RT other)
	{
		SetNativeBitField<RT, T>(parent_, field_name_, other);
		return *this;
	}

	RT Get() const
	{
		return GetNativeBitField<RT, T>(parent_, field_name_);
	}

	void Set(RT other)
	{
		SetNativeBitField<RT, T>(parent_, field_name_, other);
	}

private:
	void* parent_;
	std::string field_name_;
};
