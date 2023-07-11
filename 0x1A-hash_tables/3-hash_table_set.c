#include "hash_tables.h"

/**
 * hash_table_set - a function to set or update an element in hash table;
 * @ht: is a hash table where to update or set an element;
 * @key: is a key to be set or updated;
 * @value: is a value for a key to be set or updated;
 *
 * Return: value 1 for success otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	/* Checking if key is already existed, it's value to be updated */
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value); /* deleting previous value */
			tmp->value = strdup(value); /* setting new value */
			if (tmp->value == NULL)
				return (0); /* If failed to set new value */
			return (1); /* for success */
		}
		tmp = tmp->next;
	}
	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /* if memory allocation failed */

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->value);
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/* For adding new node at a start of a list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /* for success */
}
