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
	int i, j;

	if (min > max)
		return (NULL);
	i = 0;
	while (i >= min && i <= max)
		i++;
	ptr = (int *)malloc(i * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = min++;

	return (ptr);
}
