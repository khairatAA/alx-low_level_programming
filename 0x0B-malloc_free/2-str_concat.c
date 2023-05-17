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
	int i, j;
	char *ptrStr, result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (len1 != '\0')
		len1++;
	len2 = 0;
	while (len2 != '\0')
		len2++;
	result = len1 + len2 + 1;
	ptrStr = (char *)malloc((result * sizeof(char)));
	if (ptrStr == NULL)

		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptrStr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		ptrStr[i + j] = s2[j];
	ptrStr[i + j] = '\0';

	return (ptrStr);
}
