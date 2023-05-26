#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be tested
 * @src: string to be tested
 * Return: Success
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
