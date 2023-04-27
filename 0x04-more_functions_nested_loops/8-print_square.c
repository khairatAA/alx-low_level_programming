#include "main.h"
#include <stdio.h>

/**
 * print_square -  prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
