#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_num - returns the natural square root of a number
 * @n: integer
 * @min: minimum
 * @max: maxximum
 * Return: n
 */
int _sqrt_num(int n, int min, int max)
{
	int guess;

	if (max < min)

		return (-1);
	guess = (min + max) / 2;
	if (guess == n / guess && n % guess == 0)

		return (guess);
	else if (guess < n / guess)

		return (_sqrt_num(n, guess + 1, max));

	return (_sqrt_num(n, min, guess - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);
	if (n == 0 || n == 1)

		return (n);

	return (_sqrt_num(n, 1, n));
}
