#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value range
 * @max: maximum value range
 * Return: integer pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, j;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ptr[j] = min++;

	return (ptr);
}
