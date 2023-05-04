#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be tested
 * @src:  string to be tested
 * @n: integer
 * Return: success
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
