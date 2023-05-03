#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string to be tested
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n;
	int i;

	for (i = len - 1 / 2; i < len - 1; i++)
	{
		if (len - 1 / 2 == 0)
			_putchar(str[i]);
		else if (len - 1 / 2 != 0)
		{
			n = (len - 1 - 1) / 2;
			_putchar(str[n]);
		}
	}
}
