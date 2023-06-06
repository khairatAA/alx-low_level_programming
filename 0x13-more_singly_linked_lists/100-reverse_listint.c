#include "lists.h"

/**
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentNode, *nextNode, *prevNode;

	currentNode = nextNode = *head;
	prevNode = NULL;
	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	*head = prevNode;

	return (*head);
}
