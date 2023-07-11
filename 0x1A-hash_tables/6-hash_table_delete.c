#include "hash_tables.h"

/**
 * hash_table_delete - a function to delete a hash table;
 * @ht: is a hash table to be deleted;
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *head, *current;

	if (!ht)
		return;

	while (index < ht->size)
	{
		head = ht->array[index];
		while (head)
		{
			current = head;
			head = head->next;
			if (current->key)
				free(current->key);

			if (current->value)
				free(current->value);

			free(current);
		}
		index++;
	}

	free(ht->array);
	free(ht);
}
