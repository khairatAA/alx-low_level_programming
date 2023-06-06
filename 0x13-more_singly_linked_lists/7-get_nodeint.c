#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head
 * @index: index of the node, starting at 0
 *
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (pos == index)
			return (temp);
		pos++;
		temp = temp->next;
	}
	return (NULL);
}
