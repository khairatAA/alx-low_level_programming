#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int sum3 = 0;
	int sum5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 = sum3 + i;
		}
		if (i % 5 == 0)
		{
			sum5 = sum5 + i;
		}
	}
	printf("%d\n", sum3 + sum5);
	return (0);
}
