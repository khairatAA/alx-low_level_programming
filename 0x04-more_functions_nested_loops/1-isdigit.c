#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: ingeter to be tested
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
