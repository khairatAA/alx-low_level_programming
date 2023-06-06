#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index of the list where the new node should be added.
 * @n: n
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp, *prev;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint_end(head, n));
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	temp = *head;
	prev = NULL;
	i = 0;
	while (temp != NULL && i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (i < idx)
	{
		free(newnode);
		return (NULL);
	}
	prev->next = newnode;
	newnode->next = temp;

	return (newnode);
}
