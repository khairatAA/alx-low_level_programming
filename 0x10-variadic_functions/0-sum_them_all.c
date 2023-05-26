#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: variadic function
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_arg;
	unsigned int i, sum;

	if (n != 0)
	{
		va_start(sum_arg, n);
		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(sum_arg, int);
		}
		va_end(sum_arg);
		return (sum);
	}

	return (0);
}
