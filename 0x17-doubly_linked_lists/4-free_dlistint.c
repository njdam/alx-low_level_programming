#include "lists.h"

/**
 * free_dlistint - a function to free'd doubly linked list;
 * @head: is a head node of doubly linked list;
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current)
	{
		temp = current->next;
		free(current);

		current = temp;
	}

	free (temp);
}
