#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer char to be test
 * @src: pointer char to be test
 * Return: Success
 */
char *_strcpy(char *dest, char *src)
{
	/* memset(dest, '\0', sizeof(dest));*/
	strcpy(dest, src);

	return (dest);
}
