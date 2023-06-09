#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be test
 * Return: success
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
				if (i == 0 ||
					str[i - 1] == ' ' ||
					str[i - 1] == '\t' ||
					str[i - 1] == '\n' ||
					str[i - 1] == ',' ||
					str[i - 1] == ';' ||
					str[i - 1] == '.' ||
					str[i - 1] == '!' ||
					str[i - 1] == '?' ||
					str[i - 1] == '\"' ||
					str[i - 1] == '(' ||
					str[i - 1] == ')' ||
					str[i - 1] == '{' ||
					str[i - 1] == '}')
					str[i] = str[i] - 32;
	}

	return (str);
}
