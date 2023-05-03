#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees listint_t list
 * @head: pointer to the first linked_list
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
