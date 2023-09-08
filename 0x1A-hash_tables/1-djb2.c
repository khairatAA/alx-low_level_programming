#include "hash_tables.h"

/**
 * hash_djb2 - the hash function that returns the index
 * @str: the string who index is to be generated
 * Return: the index
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
