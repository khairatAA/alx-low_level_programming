#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: command line arugments counts
 * @argv: command line arugments string
 * Return: 1 or 0 success always
 */
int main(int argc, char *argv[])
{
	int num, i, price;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
		printf("0\n");
	price = 0;
	for (i = 0; i <= 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			price++;
			num = num - coins[i];
		}
	}
	printf("%d\n", price);

	return (0);
}
