#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		return (0);
	}

	return ((*head)->n);
}
