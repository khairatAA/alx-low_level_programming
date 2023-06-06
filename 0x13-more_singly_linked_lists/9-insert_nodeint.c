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
	listint_t *newnode, *temp;
	unsigned int i;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	/**
	 * if (idx > n)
	 * 	return (NULL);
	 */
	temp = *head;
	i = 1;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
