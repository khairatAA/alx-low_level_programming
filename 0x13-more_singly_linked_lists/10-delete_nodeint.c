#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list
 * @head: head
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (i < index - 1 && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i < index - 1 || temp->next == NULL)
		return (-1);
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}
