#include "lists.h"

/**
 * print_list - a function to print all element of list_t list;
 * @h: is a poniter to the first node of singly linked list as head;
 *
 * Return: number of nodes in singly linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
