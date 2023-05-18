#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: lenth of the array
 * Return: success
 */
int **alloc_grid(int width, int height)
{
	int **ptrArr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	ptrArr = malloc(sizeof(int *) * height);
	if (ptrArr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptrArr[i] = malloc(sizeof(int) * width);
		if (ptrArr[i] == NULL)
		{
			for (--i; i >= 0; --i)
				free(ptrArr[i]);
			free(ptrArr);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptrArr[i][j] = 0;

	return (ptrArr);
}
