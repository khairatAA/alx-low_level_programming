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
	{
		free(item);
		return (NULL);
	}

	item->value = (char *)malloc(strlen(value) + 1);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	return (item);
}

/**
 * hash_table_set -  adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *bucket = NULL;
	hash_node_t *new_node = NULL;
	hash_node_t *tmp = NULL;

	if (key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	if (bucket == NULL)
	{
		bucket = create_item((char *)key, (char *)value);
		if (bucket == NULL)
			return (0);
		ht->array[index] = bucket;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				if (tmp->value == NULL)
					return (0);

				return (1);
			}
			tmp = tmp->next;
		}
		new_node = create_item((char *)key, (char *)value);
		if (new_node == NULL)
			return (0);
		new_node->next = bucket;
		ht->array[index] = new_node;
	}
	return (1);
}
