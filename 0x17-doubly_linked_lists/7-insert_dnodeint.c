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
	unsigned int i = 0, nlen;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	nlen = dlistint_len(*h);
	if (idx > nlen)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	while (i < idx - 1)
	{
		i++;
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}

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
