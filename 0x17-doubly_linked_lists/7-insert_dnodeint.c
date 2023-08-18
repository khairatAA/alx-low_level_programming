#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: the index the node should be added to
 * @n: the value of temp->n
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *newnode = NULL;
	unsigned int i = 0, count = 0;

	temp = *h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	else
	{
		temp = *h;
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->prev = temp;
		newnode->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = newnode;
		temp->next = newnode;
	}

	return (newnode);
}
