#include "lists.h"

/**
 * print_listint_safe - a function to print a listint_t linked list;
 * @head: is a pointer to head node of listint linked list;
 *
 * Return: value equal to number of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = uniq_node_count(head);
	size_t idx = 0;

	if (num_nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			num_nodes++;
		}
	}

	else
	{
		while (idx < num_nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			idx++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}

/**
 * uniq_node_count - fx to count unique nodes of listin_t linked list;
 * @head: is a pointer to head node of listint linked list;
 *
 * Return: value equal to number of unique nodes in list;
 * Otherwise, returns 0 if no looping taken place.
 */
size_t uniq_node_count(const listint_t *head)
{
	const listint_t *x = head->next;
	const listint_t *y = (head->next)->next;
	size_t counts = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	counts++;
	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				counts++;
				x = x->next;
				y = y->next;
			}

			x = x->next;
			while (x != y)
			{
				counts++;
				x = x->next;
			}
			return (counts);
		}
		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}
