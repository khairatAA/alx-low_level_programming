#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int a, b, c;

	a = 1;
	b = 2;
	printf("%d, %d", a, b);
	for (i = 3; i <= 98; ++i)
	{
		c = a + b;
		if (c < a || c < b)
		{
			a = 1;
			b = 2;
			printf("%d, ", a);
		}
		else
		{
			a = b;
			b = c;
			printf("%d, ", c);
		}
	}
	printf("\n");

	return (0);
}
