#include <stdio.h>
#include <string.h>
#include "main.h"

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
