#include "main.h"

/**
 * handleError - Handles all the error messages to be printed
 * @errorMessage: error messages to be handled
 *
 * Return: void
 */

void handleError(const char *errorMessage)
{
	fprintf(stderr, "%s\n", errorMessage);
	exit(98);
}
