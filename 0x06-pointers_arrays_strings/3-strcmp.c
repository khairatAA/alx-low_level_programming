#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp -  compares two strings.
 * @s1: first string
 * @s2: secong string
 * Return: success
 */
int _strcmp(char *s1, char *s2)
{
	int value;

	value = strcmp(s1, s2);

	return (value);
}
