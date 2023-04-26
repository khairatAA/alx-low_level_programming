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
	_putchar(a);
	return (a);

	return (0);
}
