#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: 1 success always
 */
int main(void)
{
	int a, b, multi;

	scanf("%d", &a);
	scanf("%d", &b);
	multi = a * b;
	if (a && b)
		printf("%d\n", multi);
	else
		printf("Error\n");

	return (1);
}
