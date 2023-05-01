#include "lists.h"

/**
 * sum_listint - is a function to return sum of all data(n);
 * @head: is a pointer to the head node of listint_t list;
 *
 * Return: sum of all data(n) of listint_t linked list otherwise 0.
 */
int sum_listint(listint_t *head)
{
	/* listint_t *current; */
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		/* current = head->next; */
		sum += head->n;
		head = head->next;
	}
	free(head);
	/* free(current); */

	return (sum);
}
