#include "lists.h"

/**
 *
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *next_ptr;

	temp = head;
	while (temp != NULL)
	{
		next_ptr = temp->next;
		free(temp);
		temp = next_ptr;
	}
}
