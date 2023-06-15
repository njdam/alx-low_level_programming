#include "lists.h"

/**
 * sum_dlistint - is a func to return sum of all data(n) in dlistint_t list;
 * @head: is a head node of doubly linked list;
 *
 * Return: value equal to sum of all data(n) in doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head) /* If head is NULL, is not pass, means sum end at 0. */
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
