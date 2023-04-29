#include "lists.h"

/**
 * listint_len - to return number of elements in linked listint_t list;
 * @h: is a pointer to head node of listint_t singly linked list;
 *
 * Return: number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		h = h->next;
		num_node++;
	}

	return (num_node);
}
