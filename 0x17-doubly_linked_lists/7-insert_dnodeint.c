#include "lists.h"

/**
 * insert_dnodeint_at_index - is a func to insert new node at index in ln list;
 * @h: is a head node of doubly linked list;
 * @idx: is a given index where to add new node in dlistint_t list;
 * @n: is element of a new node to be added at index in dlistint_t list;
 *
 * Return: address of new node added otherwise NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h, *new_node;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1) /* If idx == 1 will skip this loop */
	{
		if (!current)
			return (NULL);
		current = current->next;
		i++;
	}

	if (!current)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
