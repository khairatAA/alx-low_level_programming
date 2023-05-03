#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
