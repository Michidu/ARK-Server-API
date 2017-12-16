#pragma once

#include <exception>

// These are the same as the same stdlib functions,
// except they throw an exception
// when they can't get the memory.

inline void* M_Malloc(size_t size)
{
	void* block = malloc(size);
	if (block == nullptr)
		throw std::exception("Could not malloc bytes");

	return block;
}

inline void* M_Realloc(void* memblock, size_t size)
{
	void* block = realloc(memblock, size);
	if (block == nullptr)
		throw std::exception("Could not malloc bytes");

	return block;
}

inline void M_Free(void* block)
{
	if (block != nullptr)
	{
		free(block);
	}
}
