#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * @argc: command line arugments counts
 * @argv: command line arugments string
 * Return: 1
 */
int main(int argc, char *argv[])
{
	if (*argv[argc - 1])
		printf("%d\n", argc - 1);

	return (1);
}
