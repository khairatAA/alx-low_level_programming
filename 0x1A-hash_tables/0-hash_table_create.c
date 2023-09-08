#include "hash_tables.h"

/**
 * create_item - allocates memory to the key value pair
 * @key: The key, string
 * @value: The value corresponding to a key
 * Return: the newly created item
 */

hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = NULL;

	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = (char *)malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (NULL);

	item->value = (char *)malloc(strlen(value) + 1);
	if (item->value == NULL)
		return (NULL);

	strcpy(item->key, key);
	strcpy(item->value, value);

	item->next = NULL;

	return (item);
}

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array =
		(hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}

	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
