#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * @argc: command line arugments counts
 * @argv: command line arugments string
 * Return: 0 sucess always
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
