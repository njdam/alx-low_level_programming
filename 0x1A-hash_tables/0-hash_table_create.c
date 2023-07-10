#include "hash_tables.h"

/**
 * hash_table_create - is a function to create a hash table;
 * @size: is size of hash table;
 *
 * Return: address of created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
