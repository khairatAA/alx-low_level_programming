#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - encodes a string
 * @str: string to be tested
 * Return: success
 */
char *rot13(char *str)
{
	int i, j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = lrot[j];
				break;
			}
		}
	}

	return (str);
}
