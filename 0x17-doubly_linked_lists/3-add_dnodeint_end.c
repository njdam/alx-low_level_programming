#include "lists.h"

/**
 * add_dnodeint_end - a func to add a node at the end dlistint_t list;
 * @head: is a pointer to the head node of doubly linked list;
 * @n: is an element of a node of doubly linked list;
 *
 * Return: return address of new node added otherwise NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL); /* If addition of new node failed */
	new_node->n = n;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
		new_node->next = NULL;

		return (new_node);
	}

	while (current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;
	new_node->next = NULL;

	return (new_node);
}
