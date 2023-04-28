#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	long a, b, c, sum;

	a = 1;
	b = 2;
	sum = 2;
	while (b <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (b % 2 == 0)
		{
			sum = sum + b;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
