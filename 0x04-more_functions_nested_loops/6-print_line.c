#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: integer to be tested
 */
void print_line(int n)
{
	int _;

	for ('_' = 0; '_' <= n; '_'++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		_putchar('\n');
	}
}
