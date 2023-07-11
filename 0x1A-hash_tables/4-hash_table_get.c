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
	unsigned char *key_code = (unsigned char *)key;
	unsigned long int index = hash_djb2(key_code) % ht->size;
	hash_node_t *current = ht->array[index]; /* Assigning head node at index */

	if (current == NULL)
		return (NULL);

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			value = current->value;
		current = current->next;
	}

	return (value);
}
