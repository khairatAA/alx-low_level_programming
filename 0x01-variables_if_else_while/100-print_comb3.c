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

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		for (j = i + 1; j <= 57; j++)
		{
			putchar(j);
			if (j < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	return (0);
}
