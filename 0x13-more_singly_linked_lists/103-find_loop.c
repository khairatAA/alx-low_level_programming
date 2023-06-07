#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *currentNode = head;

	while (currentNode != NULL && currentNode->next != NULL)
	{
		temp = temp->next;
		currentNode = currentNode->next->next;
		if (temp == currentNode)
		{
			break;
		}
	}
	if (currentNode == NULL || currentNode->next == NULL)
		return (NULL);
	temp = head;
	while (temp != currentNode)
	{
		temp = temp->next;
		currentNode = currentNode->next;
	}

	return (temp);
}
