#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer
 * @to: normal pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
