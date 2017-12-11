#include <exception>

#ifndef _MSC_VER
#define _NORMAL_BLOCK			0
#define _malloc_dbg(s,b,f,l)	malloc(s)
#define _realloc_dbg(p,s,b,f,l)	realloc(p,s)
#endif
#if defined(__APPLE__)
#define _msize(p)				malloc_size(p)
#elif defined(__sun)
#define _msize(p)				(*((size_t*)(p)-1))
#elif !defined(_WIN32)
#define _msize(p)				malloc_usable_size(p)	// from glibc/FreeBSD
#endif

void* M_Malloc(size_t size)
{
	void* block = malloc(size);

	if (block == nullptr)
		throw std::exception("Could not malloc bytes");

	return block;
}

void* M_Realloc(void* memblock, size_t size)
{
	void* block = realloc(memblock, size);
	if (block == nullptr)
		throw std::exception("Could not malloc bytes");

	return block;
}

void M_Free(void* block)
{
	if (block != nullptr)
	{
		free(block);
	}
}
