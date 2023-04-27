#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int a, i;

	a = 0;
	while (a <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		a++;
	}
}
