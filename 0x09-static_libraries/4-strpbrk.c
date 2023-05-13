#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: characters to be matched
 * Return: r;
 */
char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);
	if (r != 0)
		return (r);

	return (r);
}
