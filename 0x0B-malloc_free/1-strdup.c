#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the sring to be tested
 * Return: success
 */
char *_strdup(char *str)
{
	char *ptrStr;
	int strlen, i;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	ptrStr = malloc((strlen * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptrStr[i] = str[i];
	}
	ptrStr[i] = '\0';

	return (ptrStr);
}
