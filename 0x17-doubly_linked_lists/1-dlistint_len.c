#include "lists.h"

/**
 * dlistint_len - a func to return number of elements in doubly list;
 * @h: is a head node of doubly linked list;
 *
 * Return: value equal to a number of elements in doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t n_node = 0;

	while (h)
	{
		n_node++;
		h = h->next;
	}

	return (n_node);
}
