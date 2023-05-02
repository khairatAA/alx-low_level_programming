#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integer
 * @a: pointer to be tested
 * @b: pointer to be tested
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
