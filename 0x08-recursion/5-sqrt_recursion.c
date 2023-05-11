#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 * @min: minimum
 * @max: maxximum
 * Return: n
 */
int _sqrt_num(int n,int min, int max);

int _sqrt_num(int n,int min, int max)
{
	int guess, square;

	if (max < min)

		return (-1);
	guess = (min + max) / 2;
	square = guess * guess;
	if (square == n)

		return (guess);
	else if (square < n)

		return (_sqrt_num(n, guess + 1, max));

	return(_sqrt_num(n, min, guess - 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	return (_sqrt_num(n, 0, n));
}
