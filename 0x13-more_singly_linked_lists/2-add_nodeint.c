#include "lists.h"

/**
 * add_nodeint - to add a new node at the beginning of a listint_t list;
 * @head: a pointer to head node of a listint_t list;
 * @n: is a constant integer in node of singly linked a listint_t list;
 *
 * Return: the address of new element otherwise NULL;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
