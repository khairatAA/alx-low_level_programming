#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: value
 * @n: size_of s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
