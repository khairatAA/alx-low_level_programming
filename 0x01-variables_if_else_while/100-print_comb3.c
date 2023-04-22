#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);

		for (j = i + 1; j <= 9; i++)
		{
			putchar(j);
			if (j == i + 1)
			{
				putchar('\n');
				putchar(' ');
			}
		}
	}

	return (0);
}
