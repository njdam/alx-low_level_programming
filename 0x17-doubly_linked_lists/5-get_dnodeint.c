#include "lists.h"

/**
 * get_dnodeint_at_index - is a function to return a node at index;
 * @head: is a head node of doubly linked list;
 * @index: is index of node to be returned;
 *
 * Return: the node at a given index in doubly linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nlen, i = 0;
	dlistint_t *current = head;

	nlen = dlistint_len(head);
	if (index >= nlen)
		return (NULL);

	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
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
