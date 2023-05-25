#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of arguments
 * @...: variadic function
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	va_list sum_arg;
	va_start(sum_arg, n);
	if (n == 0)
		return (0);
	else
	{
		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(sum_arg, int);
		}
		va_end(sum_arg);
	}

	return (sum);
}
