#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *
 * @i: integer to be tested
 *
 * Return: Always 0 (success)in print_last_digit
 */

int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (a < 0)
		a = a * -1;
	_putchar(a + '0');

	return (a);
}
