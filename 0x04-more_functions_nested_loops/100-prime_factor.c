#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int max;
	long n;

	n = 612852475143;
	max = 2;
	while (n  % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n /= i;
			if (i > max)
			{
				max = i;
			}
		}
	}
	if (n > 2)
	{
		if (n > max)
		{
		max = n;
		}
	}
	printf("%ld\n", n);

	return (0);
}
