#include <stdio.h>
#include <string.h>
#include "main.h"

int _atoi(char *s);

/**
 * main - Entry point
 * @argc: command line arugments counts
 * @argv: command line arugments string
 * Return: 1 or 0 success always
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, multi;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	multi = a * b;
	printf("%d\n", multi);

	return (0);
}

/**
 * _atoi - convert a string to an integer
 * @s: string to test
 * Return: success
 */
int _atoi(char *s)
{
	unsigned int value = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign = sign * -1;
		else if (*s >= '0' && *s <= '9')
			value = (value * 10) + (*s - '0');
		else if (value > 0)
			break;
	} while (*s++);

	return (value * sign);
}
