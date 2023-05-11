#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 * Return: n
 */
int _sqrt_recursion(int n)
{
	int sqrt, temp;

	temp = 0;
	sqrt = n / 2;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (n / temp + temp) / 2;
	}
	if (sqrt * sqrt == n)

		return (sqrt);
	if (n < 0)

		return (-1);
	if (n == 1)

		return (1);

	return (-1);
}
