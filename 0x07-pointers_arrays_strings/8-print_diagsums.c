#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
