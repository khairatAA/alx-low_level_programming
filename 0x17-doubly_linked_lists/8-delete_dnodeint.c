#include "lists.h"

/**
 *  delete_dnodeint_at_index - deletes the node at index index of a list
 *  @head: the head of the list
 *  @index: the index of the list to be deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0, count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (index >= count)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp -> next;
			i++;
		}
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
	}

	return (1);
}
