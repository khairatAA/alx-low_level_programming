#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: the integer value to test
 *
 * Return: Always 0 (success) in _abs
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}

	return (0);
}
