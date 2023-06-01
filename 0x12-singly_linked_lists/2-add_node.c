#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = (*head);
	*head = newNode;

	return (newNode);
}
