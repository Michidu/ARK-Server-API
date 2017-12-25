#pragma once

#include <Windows.h>
#include <string>

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(void* _this, const std::string& structure, const std::string& func_name, Args&&... args)
{
	return static_cast<RT(__fastcall*)(DWORD64, ArgsTypes ...)>(GetAddress(structure, func_name))(
		reinterpret_cast<DWORD64>(_this), std::forward<Args>(args)...);
}

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(nullptr_t, const std::string& structure, const std::string& funcName, Args&&... args)
{
	return static_cast<RT(__fastcall*)(ArgsTypes ...)>(GetAddress(structure, funcName))(std::forward<Args>(args)...);
}

template <typename RT>
RT GetNativeField(const void* _this, const std::string& structure, const std::string& field_name)
{
	return *reinterpret_cast<RT*>(GetAddress(_this, structure, field_name));
}

template <typename RT>
RT GetNativePointerField(const void* _this, const std::string& structure, const std::string& field_name)
{
	return reinterpret_cast<RT>(GetAddress(_this, structure, field_name));
}

template <typename RT, typename T>
RT GetNativeBitField(const void* _this, const std::string& structure, const std::string& field_name)
{
	const auto bf = GetBitField(_this, structure, field_name);
	T result = ((*reinterpret_cast<T*>(bf.offset)) >> bf.bit_position) & ~0ULL >> sizeof(unsigned long long) * 8 - bf.
		num_bits;

	return static_cast<RT>(result);
}

template <typename T>
void SetNativeBitField(LPVOID _this, const std::string& structure, const std::string& field_name, T new_value)
{
	const auto bf = GetBitField(_this, structure, field_name);
	const auto mask = ~0ULL >> sizeof(unsigned long long) * 8 - bf.num_bits << bf.bit_position;
	*reinterpret_cast<T*>(bf.offset) = (*reinterpret_cast<T*>(bf.offset) & ~mask) | ((new_value << bf.bit_position) & mask
	);
}

template <typename T>
class FieldValue
{
public:
	FieldValue(void* parent, const std::string& structure, const std::string& field_name)
		: value_(GetNativePointerField<T*>(parent, structure, field_name))
	{
	}

	T& operator()() const
	{
		return *value_;
	}

	T& operator=(const T& other)
	{
		*value_ = other;
		return *value_;
	}

private:
	T* value_;
};

template <typename T>
class FieldPointer
{
public:
	FieldPointer(void* parent, const std::string& structure, const std::string& field_name)
		: value_(GetNativePointerField<T>(parent, structure, field_name))
	{
	}

	T operator()() const
	{
		return value_;
	}

	T operator=(const T& other) = delete;

private:
	T value_;
};

template <typename T, size_t size>
class FieldArray
{
public:
	FieldArray(void* parent, const std::string& structure, const std::string& field_name)
		: value_(GetNativePointerField<T*>(parent, structure, field_name))
	{
	}

	T* operator()()
	{
		return value_;
	}

	T& operator=(const T& other) = delete;

	static size_t GetSize()
	{
		return size;
	}

private:
	T* value_;
};
