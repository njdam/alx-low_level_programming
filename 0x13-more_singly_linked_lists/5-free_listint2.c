#include "lists.h"

/**
 * free_listint2 - a function to frees a listint_t list;
 * @head: is a pointer to pointed head node of singly linked list;
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
