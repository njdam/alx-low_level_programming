#include "lists.h"

/**
 * add_nodeint_end - for adding node at the end of a listint_t list;
 * head: a pointer to a head node of singly linked listint_t list;
 * @n: is constant integer in struct of listint_t list;
 *
 * Return: address of new element otherwise NULL;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return (new_node);
}
