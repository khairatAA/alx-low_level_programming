#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: old pointer
 * @old_size: old size
 * @new_size: new size
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	newPtr = malloc(new_size);
	if (newPtr)
	{
		size = (old_size < new_size) ? old_size : new_size;
		memcpy(newPtr, ptr, size);
	}
	free(ptr);

	return (newPtr);
}
