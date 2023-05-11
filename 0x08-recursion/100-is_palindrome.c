#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: s
 */
int palindrome(char *s, int start, int end);
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome(s, 0, len - 1));
}

/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: s
 */
int palindrome(char *s, int start, int end)
{
	if (start >= end)

		return (1);
	if (s[start] == s[end])
		
		return (palindrome(s, start + 1, end - 1));

	return (0);
}
