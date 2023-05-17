#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char in the array
 * Return: success
 */
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int count;

	ptrArray = (char *)malloc(size * sizeof(char));
	for (count = 0; count < size; count++)
	{
		ptrArray[count] = c;
	}

	return (ptrArray);
}
