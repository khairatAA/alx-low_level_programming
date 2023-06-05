#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: doubule pointer
 *
 * Return (nothing)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *currentNode;

	while (temp != NULL)
	{
		currentNode = temp;
		temp = temp->next;
		free(currentNode);
	}
	*head = NULL;
}
