#include <stdio.h>
#include <stdlib.h>

/**
 * print_first - prints before the main function is executed.
 */

void print_first(void) __attribute__((constructor));
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
