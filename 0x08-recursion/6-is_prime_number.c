#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_prime_number - prime number
 * @n: integer to be tested
 * @min: minimum
 * @max: maximum
 * Return: 1 or 0
 */
int prime(int n, int min, int max);

int is_prime_number(int n)
{
	if (n == 1 || n < 0)

		return (0);

	return (prime(n, 2, n));
}

/**
 * prime - prime number
 * @n: integer to be tested
 * @min: minimum
 * @max: maximum
 * Return: 1 or 0
 */
int prime(int n, int min, int max)
{
	if (min >= max)
	{
		return (1);
	}
	else if (n % min == 0)
	{
		return (0);
	}


	return (prime(n, (min + 1), max));
}
