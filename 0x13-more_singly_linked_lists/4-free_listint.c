#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list;
 * @head: is a pointer to the head node of listint_t list;
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}

	free(head);
}
