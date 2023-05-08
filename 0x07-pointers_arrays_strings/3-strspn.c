#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring
 *  @s: string
 *  @accept: character to match s
 *  Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
