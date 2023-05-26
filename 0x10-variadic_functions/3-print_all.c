#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: varadic function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list pr;
	unsigned int i = 0;
	char *string = va_arg(pr, char *), *space = "";

	if (format != NULL)
	{
		va_start(pr, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(pr, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(pr, int));
					break;
				case 'f':
					printf("%s%f", space,
						va_arg(pr, double));
					break;
				case 's':
					if (!string)
						string = "(nil)";
					printf("%s%s", space, string);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}
		va_end(pr);
		printf("\n");
	}
	else
		printf("\n");
}
