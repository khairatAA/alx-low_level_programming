#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int a, i;

	a = 1;
	while (a <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		a++;
	}
}
