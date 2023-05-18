#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of the array
 * @size: byte of each element
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = (nmemb * size);
	ptr = (void *)malloc(total);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total);

	return (ptr);
}
