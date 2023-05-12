#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: command line arugments counts
 * @argv: command line arugments string
 * Return: 0 success always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
