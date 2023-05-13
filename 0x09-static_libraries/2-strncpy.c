#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be tested
 * @src: string to be tested
 * @n: integer
 * Return: success
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
