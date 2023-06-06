#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	const listint_t *currentNode = head;
	size_t count = 0;
	int loop = 0;

	if (head == NULL)
		exit(98);
	while (temp != NULL && currentNode != NULL && temp->next != NULL)
	{
		printf("[%9p] %d\n", (void *)temp, temp->n);
		currentNode = currentNode->next;
		temp = temp->next;
		if (currentNode == temp)
		{
			loop = 1;
			break;
		}
		count++;
	}
	if (loop)
	{
		printf("[%9p] %d\n", (void *)currentNode, currentNode->n);
		exit(98);
	}
	while (currentNode != NULL)
	{
		printf("[%9p] %d\n", (void *)currentNode, currentNode->n);
		currentNode = currentNode->next;
		count++;
	}

	return (count);
}
