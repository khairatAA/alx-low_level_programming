#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		_putchar(num1 / 10 + '0');
		_putchar(num2 % 10 + '0');

		for (num2 = 0; num2 <= 59; num2++)
		{
			_putchar(':');
			_putchar(num2 / 10 + '0');
			_putchar(num2 % 10 + '0');
			_putchar('\n');
		}
	}
}
