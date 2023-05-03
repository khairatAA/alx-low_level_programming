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
	for (i = 0; i < len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
