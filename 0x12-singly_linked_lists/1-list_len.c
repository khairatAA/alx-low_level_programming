#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head
 * Return: returns the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		if (temp->str != NULL)
			temp = temp->next;
		count++;
	}

	return (count);
}
