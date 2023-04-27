#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: integer to be tested
 */
void print_line(int n)
{
	int a;

	a = '_';
	for (a = 0; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(a);
		_putchar('\n');
	}
}
