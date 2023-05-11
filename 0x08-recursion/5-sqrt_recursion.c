#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 * @start: start
 * @end: end
 * Return: n
 */
int sqrt_(int n, int start, int end);

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	return (sqrt_(n, 0, n));
}

/**
 * sqrt_ -  returns the natural square root of a number
 * @n: integer
 * @start: start
 * @end: end
 * Return: n
 */
int sqrt_(int n, int start, int end)
{
	int mid;

	if (start > end)

		return (-1);
	mid = (start + end) / 2;
	if (mid * mid == n)

		return (mid);
	if (mid * mid < n)

		return (sqrt_(n, mid + 1, end));

	return (sqrt_(n, start, mid - 1));
}
