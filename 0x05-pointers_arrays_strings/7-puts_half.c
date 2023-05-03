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

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			if (str[i] != '\0')
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; n < len; n++)
		{
			if (str[n] != '\0')
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
