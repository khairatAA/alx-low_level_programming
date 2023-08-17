#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: the head pointer
 * Return: the nuber of elements list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count = count + 1;
		temp = temp->next;
	}

	return (count);
}
