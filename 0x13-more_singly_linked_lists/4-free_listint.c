#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head, *currentNode;

	while (temp != NULL)
	{
		currentNode = temp;
		temp = temp->next;
		/* free(currentNode->n); */
		free(currentNode);
	}
}
