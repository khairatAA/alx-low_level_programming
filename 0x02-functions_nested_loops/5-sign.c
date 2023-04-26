#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the integer to be tested
 *
 * Return: Always return 1 in print_sign if n > 0, 0 if 0 == n, and -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}

	return (0);
}
