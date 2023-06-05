#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head
 *
 * Return: returns the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
