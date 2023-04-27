#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
