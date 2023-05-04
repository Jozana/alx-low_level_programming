#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list
 * @head: pointer to pointer to first node in the list
 *
 * This function iterates through the linked list, freeing each node
 * and setting the head pointer to NULL at the end.
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (head && *head)
	{
		hold = *head;
		*head = (**head).next;
		free(hold);
	}
}
