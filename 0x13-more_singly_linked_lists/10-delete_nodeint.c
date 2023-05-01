#include "lists.h"

/**
 * delete_nodeint_at_index - a function to delete node at index position;
 * @head: is a pointer to a head node of listint_t linked list;
 * @index: is index of listint_t linked list where to delete node;
 *
 * Return: value of 1 for success otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *tmp = NULL;

	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);

		return (1);
	}

	i = 0;
	while (i < index && current)
	{
		if (current == NULL || current->next == NULL)
			return (-1);

		if (i == index - 1)
		{
			tmp = current->next;
			current->next = tmp->next;
			free(tmp);

			return (1);
		}

		current = current->next;
		i++;
	}

	return (-1);
}
