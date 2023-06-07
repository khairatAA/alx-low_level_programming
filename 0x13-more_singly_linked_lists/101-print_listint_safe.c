#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	const listint_t *currentNode = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (currentNode != NULL)
	{
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		count++;
		temp = currentNode;
		currentNode = currentNode->next;
		if (temp <= currentNode)
		{
			printf("-> [%p] %d\n", (void *)currentNode,
					currentNode->n);
			/* printf("-> [%p] %d\n", (void *)temp, temp->n); */
			break;
		}
	}

	return (count);
}
