#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a list
 * @head: the head of the list
 * Return: returns 0 on failure and sum of temp->n on success
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
