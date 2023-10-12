#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Search a value in a sorted skip list of integers.
 * @list: is a pointer to the head node of skip linked list
 * @value: is a value to search for
 *
 * Return: a pointer to first node where value is, otherwise NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t idx1 = 0, idx2 = 0;
	skiplist_t *current, *express;

	if (!list)
		return (NULL);

	current = list;
	express = current->express ? current->express : current;

	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		/* If express to n is greater than or equal to value break to found region */
		if (express->n >= value)
			break;

		current = express;
		/* skip untill the last express if reached go to next node then break */
		if ((current->n < value) && !(current->express))
		{
			while (express->next)
				express = express->next;
			break;
		}
		express = current->express ? current->express : current;
	}

	idx1 = current->index;
	idx2 = express->index;
	printf("Value found between indexes [%lu] and [%lu]\n", idx1, idx2);

	/* on next node in express which is equal to current find value */
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL); /* Value not found */
}
