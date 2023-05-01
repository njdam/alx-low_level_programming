#include "lists.h"

/**
 * reverse_listint - a function to reverse a listint_t linked list;
 * @head: is a pointer to head node of listint_t linked list;
 *
 * Return: a pointer to the first node otherwise "NULL".
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
