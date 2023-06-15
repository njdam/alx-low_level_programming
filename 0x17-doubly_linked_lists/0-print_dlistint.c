#include "lists.h"

/**
 * print_dlistint - is a func to print all elements of doubly linked list;
 * @h: is a head node of doubly linked list;
 *
 * Return: number of nodes in doubly linked list printed.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_node++;
		h = h->next;
	}

	return (n_node);
}
