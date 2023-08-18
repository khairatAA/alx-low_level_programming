#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: the integer
 * Return: NULL on failure and address of the new node on success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *tail = NULL;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
		*head = tail = newnode;
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}

	return (newnode);
}
