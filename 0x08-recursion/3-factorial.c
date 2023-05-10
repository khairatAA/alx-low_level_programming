#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer to be tested
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);
	if (n == 1)

		return (1);

	return (n * factorial(n - 1));
}
