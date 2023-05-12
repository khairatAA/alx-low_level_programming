#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: command line arugments counts
 * @argv: command line arugments string
 * Return: 1
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (1);
}
