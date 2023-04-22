#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
			if (num < 57)
			{
				putchar(44);
				putchar(32);
			}
	}

	return (0);
}
