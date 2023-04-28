#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, i;
	long c;

	a = 1;
	b = 2;
	printf("%d, %d", a, b);
	for (i = 3; i <= 50; ++i)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
