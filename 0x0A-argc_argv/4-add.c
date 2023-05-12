#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isnum(char *s);

/**
 * main - Entry point
 * @argc: command line arugments counts
 * @argv: command line arugments string
 * Return: 1 or 0 success always
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, digit;

	for (i = 1; i < argc; i++)
	{
		if (isnum(argv[i]))
		{
			digit = atoi(argv[i]);
			sum = sum + digit;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (digit)
		printf("%d\n", sum);
	if (argc == 1)
		printf("0\n");

	return (0);
}

/**
 * isnum - checks if its a digit
 * @s: string to be test
 * Return: 1 or 0 success always
 */
int isnum(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}

	return (1);
}
