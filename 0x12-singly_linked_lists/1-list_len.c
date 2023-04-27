#include "lists.h"

/**
 * list_len - a function to return number of elements of linked list_t list;
 * @h: is a pointer to the first node of linked list_t list;
 *
 * Return: resulting number of elements of linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count; /* length of list_t */
	const list_t *head = h; /* strating at the head of list_t */

	count = 0; /* Initialization of length of list_t */
	while (head != NULL)
	{
		count++; /* increment length as we move to next node */
		head = head->next; /* moving to the next node */
	}

	return (count);
}
