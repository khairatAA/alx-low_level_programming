#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of agrument
 * @argv: string of argument
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int calc;
	char *operator;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		operator = argv[2];
		num2 = atoi(argv[3]);
		if ((*operator == '/' || *operator == '%') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		if ((get_op_func(operator)) != NULL)
		{
			calc = get_op_func(operator)(num1, num2);
			printf("%d\n", calc);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
