#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be tested
 */
void rev_string(char *s)
{
	int len, i;
	char ch;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] =  ch;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: first int
 * @n2: second int
 * @r: result of addition
 * @size_r:mbuffer size
 * Return: success
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int value = 0, carry = 0;
	int i = 0, j = 0;
	int digit1 = 0, digit2 = 0, sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || carry == 1)
	{
		if (i < 0)
			digit1 = 0;
		else
			digit1 = *(n1 + i) - '0';
		if (j < 0)
			digit2 = 0;
		else
			digit2 = *(n2 + j) - '0';
		sum = digit1 + digit2 + carry;
		if (sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (value >= (size_r - 1))
			return (0);
		*(r + value) = (sum % 10) + '0';
		value++;
		i--;
		j--;
	}
	if (value == size_r)
		return (0);
	*(r + value) = '\0';
	rev_string(r);

	return (r);
}
