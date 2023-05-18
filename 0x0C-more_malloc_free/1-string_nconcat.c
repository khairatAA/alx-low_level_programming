#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: given lenth of s2
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, result;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	result = (len1 + n) * sizeof(char);
	ptr = (char *)malloc(result + 1);
	if (ptr == NULL)

		return (NULL);
	i = 0;
	while (i < result && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < result && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
