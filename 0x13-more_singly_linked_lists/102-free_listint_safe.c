#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: head
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *currentNode = *h;
	size_t count = 0;

	while (currentNode != NULL)
	{
		temp = currentNode;
		currentNode = currentNode->next;
		free(temp);
		count++;
		if (temp <= currentNode)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
