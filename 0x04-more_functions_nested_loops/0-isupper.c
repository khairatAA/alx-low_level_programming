#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: ingeter to be tested
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
