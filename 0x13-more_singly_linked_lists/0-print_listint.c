#include "lists.h"

/**
 * print_listint - print the elements of linked list and returns
 * @h: pointer to the first element
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
