#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 49; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a != 57 || b != 56 || c != 57 || d != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
