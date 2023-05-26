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
	va_list print_args;
	unsigned int i;
	char *separator = "";
	char *string;

	if (format)
	{
		va_start(print_args, format);
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator,
							va_arg(print_args, int));
					break;
				case 'i':
					printf("%s%d", separator,
							va_arg(print_args, int));
					break;
				case 'f':
					printf("%s%f", separator,
							va_arg(print_args, double));
					break;
				case 's':
					string = va_arg(print_args, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		va_end(print_args);
		printf("\n");
	}
}
