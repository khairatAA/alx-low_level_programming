#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: num er to be converted
 *
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	size_t length = strlen(b), i = 0;
	unsigned int binValue = 0;
	char holder;

	if (b == NULL)
		return (0);
	for (i = 0; i < length; i++)
	{
		holder = b[i];
		if (holder == '0')
			binValue = (binValue << 1);
		else if (holder == '1')
			binValue = (binValue << 1) | 1;
		else
			return (0);
	}
	return (binValue);
}
