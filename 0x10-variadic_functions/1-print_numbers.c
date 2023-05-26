#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: varadic function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_print_num;
	unsigned int i;

	va_start(arg_print_num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_print_num, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg_print_num);
	printf("\n");
}
