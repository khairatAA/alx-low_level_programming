#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be tested
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len - 1; i++)
	{
		if (str[i] == str[0])
		{
			_putchar(str[0]);
		}
		else if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
