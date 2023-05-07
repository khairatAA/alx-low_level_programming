#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: it contains a string
 * @size: size of buffer b
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0 ; i < size; i = i + 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j = j + 2)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j]);
			}
			if (i + j + 1 < size)
				printf("%02x ", b[i + j + 1]);
			else
				printf("     ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				if (c < 32 || c > 126)
					c = '.';
				printf("%c", c);
			}
		}
		printf("\n");
	}
}
