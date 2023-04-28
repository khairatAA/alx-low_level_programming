#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: integer to be tested
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b != 0 && c < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (b == 0)
			{
				_putchar(c + '0');
			}
			else if (c < 100)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar(c % 10 + '0');
			}
			if (b == n)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
