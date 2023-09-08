#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht:  hash table you want to look into
 * @key:  key is the key you are looking for
 * Return:  value associated with the element, or NULL if key
 * couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int index;

	if (key == NULL)
		return (NULL);

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
