#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be tested
 */
void rev_string(char *s)
{
	int len, i;
	char ch;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] =  ch;
	}
	puts(s);
}
