#include "lists.h"

/**
 * find_listint_loop - a function to find loop in linked list;
 * @head: is a pointer to head node of listint_t linked list;
 *
 * Return: the address of node where loop starts;
 * Otherwise, returns "NULL" if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head, *y = head;

	if (head == NULL)
		return (NULL);

	while  (y && y->next)
	{
		x = x->next;
		y = (y->next)->next;

		if (x == y)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}

			return (y);
		}
	}

	return (NULL);
}
