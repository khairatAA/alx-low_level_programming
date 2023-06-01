#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *temp = head, *formerNode;

	while (temp != NULL)
	{
		formerNode = temp;
		temp = temp->next;
		free(formerNode->str);
		free(formerNode);
	}
}
