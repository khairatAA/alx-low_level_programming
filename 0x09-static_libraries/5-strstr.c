#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string
 * @needle: sub-string
 * Return: ret
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	if (ret != NULL)
		return (ret);

	return (ret);
}
