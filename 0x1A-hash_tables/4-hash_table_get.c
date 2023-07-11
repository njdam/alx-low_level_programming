#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key;
 * @ht: is a hash table where to retrieve a value associated with a key;
 * @key: is a key to be used to find it's value in hash table;
 *
 * Return: a value associated with a key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !*key || !key)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	if (index >= ht->size )
		return (NULL);

	current = ht->array[index]; /* Assigning head node at index */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			value = current->value;
			break;
		}
		current = current->next;
	}

	return (value);
}
