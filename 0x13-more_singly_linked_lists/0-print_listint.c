#include "lists.h"

/**
 * print_listint - a function to prints all the elements of a listint_t list;
 * @h: is a pointer to the head node of singly linked listint_t list;
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node;

	num_node = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}

	return (num_node);
}
