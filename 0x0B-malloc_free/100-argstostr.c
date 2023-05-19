#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: counts arguments
 * @av: string of arguments
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, count;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, count = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	count++;
	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}

	return (ptr);
}
