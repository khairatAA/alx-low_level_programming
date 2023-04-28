#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		c = b;
		printf(" ,%ld", c);
	}
	printf("\n");

	return (0);
}
