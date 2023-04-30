#include "lists.h"

/**
 * pop_listint - function to delete head node of a listint_t linked list;
 * @head: is a pointer to the head node of singly linked listint_t list;
 *
 * Return: head node's data(n) otherwise return 0 for empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (data);
}
