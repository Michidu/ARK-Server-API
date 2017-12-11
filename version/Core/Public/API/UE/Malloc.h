#ifndef __M_ALLOC_H__
#define __M_ALLOC_H__

// These are the same as the same stdlib functions,
// except they bomb out with a fatal error
// when they can't get the memory.

void* M_Malloc(size_t size);
void* M_Realloc(void* memblock, size_t size);
void M_Free(void* memblock);

#endif //__M_ALLOC_H__
