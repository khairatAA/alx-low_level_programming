#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: the integer to test
 *
 * Return: 1 if letter is lower case, 0 if not
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
