#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node at index position;
 * @head: is a pointer to the head node of listint_t linked list;
 * @idx: is index position where to add new node;
 * @n: is a value of a given node;
 *
 * Return: adress of new node otherwise NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int i;

	if (new_node == NULL || current == NULL)
		return (NULL);

	if (head == NULL)
	{
		free(new_node);

		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	i = 0;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
