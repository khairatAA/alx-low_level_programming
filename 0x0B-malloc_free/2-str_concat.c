#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *ptrStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	ptrStr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptrStr == NULL)

		return (NULL);
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		ptrStr[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		ptrStr[len1] = s2[len2];
		len1++, len2++;
	}
	ptrStr[len1] = '\0';

	return (ptrStr);
}
