#include "hash_tables.h"

/**
 * hash_table_print - is a function to print all elements in hash table;
 * @ht: is a hash table to be used;
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0, not_end = 0;
	hash_node_t *head;

	if (!ht)
		return;

	printf("{");
	while (index < ht->size)
	{
		head = ht->array[index];
		while (head)
		{
			if (not_end)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			not_end = 1;
			head = head->next;
		}
		index++;
	}
	printf("}\n");
}
