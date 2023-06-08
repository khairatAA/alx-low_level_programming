#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: any number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	char bits;
	int zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		bits = (n >> i) & 1;
		if (bits == 1)
		{
			zeros = 0;
			_putchar('1');
		}
		else if (!zeros)
			_putchar('0');
	}
}
