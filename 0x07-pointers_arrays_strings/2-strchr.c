#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: Character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	if (ptr != NULL)
	{
		return (ptr);
	}

	return (ptr);
}
