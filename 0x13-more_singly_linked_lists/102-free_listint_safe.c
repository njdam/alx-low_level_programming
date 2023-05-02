#include "lists.h"

/**
 * free_listint_safe - a function to free a listint_t list safely;
 * @h: is a pointer to a head of listint_t linked list;
 *
 * Return: value equal to size of list free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL;
	size_t counts = 0;

	if (*h == NULL || h == NULL)
		return (0);

	while (*h)
	{
		if ((*h - (*h)->next) <= 0)
		{
			free(*h);
			counts++;
			break;
		}

		temp = (*h)->next;
		free(*h);
		(*h) = temp;
		counts++;
	}

	*h = NULL;

	return (counts);
}
