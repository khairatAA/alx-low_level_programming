#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source code pointer
 * @n: size_of
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
