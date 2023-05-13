#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to test
 * Return: success
 */
int _atoi(char *s)
{
	unsigned int val = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			val = (val * 10) + (*s - '0');

		else if (val > 0)
			break;

	} while (*s++);

	return (val * sign);
}
