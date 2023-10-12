#include "search_algos.h"
#include <math.h>

/**
 * get_next_node - to get the nth node next to a given node.
 * @node: is the starting node.
 * @index: is number of positions next to the node.
 *
 * Return: the node n places next to the given node, otherwise NULL.
 */
listint_t *get_next_node(listint_t *node, size_t index)
{
	size_t i = 0;
	listint_t *result = NULL;

	result = node;
	for (i = 0; (i < index) && (result) && (result->next); i++)
		result = result->next;

	return (result);
}

/**
 * jump_list - search a value in a sorted list of integers using Jump search
 * @list: is a pointer to the head of the list where to search in
 * @size: is a number of nodes in the list
 * @value: is the value to search for
 *
 * Return: a pointer to first node where value is located or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, idx1, idx2;
	listint_t *current, *prev;

	if (!list)
		return (NULL);

	jump = sqrt(size); /* Jump step */
	prev = list;
	current = get_next_node(prev, jump);

	/* Jump ahead until we find a value greater or equal to the target */
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if ((current->n >= value) || (!current->next))
			break;
		prev = current;
		current = get_next_node(prev, jump);
	}

	idx1 = prev->index;
	idx2 = current->index;
	printf("Value found between indexes [%lu] and [%lu]\n", idx1, idx2);

	/* Perform a linear search between prev and current */
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL); /* Value not found */
}
