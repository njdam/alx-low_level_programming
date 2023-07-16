#include "hash_tables.h"

/**
 * shash_table_create - is a function to create sorted hash tables;
 * @size: is a size of array of new sorted hash table;
 *
 * Return: "NULL" if fails Otherwise return a pointer to sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - is a function to set an element to a sorted hash table;
 * @ht: is a hash table where to set an new element;
 * @key: is a key to be added to an array of ht and cannot be an empty str;
 * @value: is associated value with key;
 *
 * Return: value 0 if failed, Otherwise returns "-1".
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;
	char *valueCp;

	if (!value || !ht || !key || !(*key))
		return (0);
	valueCp = strdup(value);
	if (valueCp == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = valueCp;
			return (1);
		}
		temp = temp->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
	{
		free(valueCp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(valueCp);
		free(new_node);
		return (0);
	}
	new_node->value = valueCp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_node;
		else
			temp->snext->sprev = new_node;
		temp->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - is a func to retrieve a value associated w# a key;
 * @ht: is a hash table where a key is;
 * @key: is where a value is to be retrieved;
 *
 * Return: "NULL" if fails Otherwise associated value with a key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key || !(*key))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	current = ht->shead;
	while (current != NULL && strcmp(current->key, key) != 0)
		current = current->snext;

	return ((current == NULL) ? NULL : current->value);
}

/**
 * shash_table_print - is a function to print a sorted hash table;
 * @ht: is a hash table to be used;
 *
 * Return: nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	current = ht->shead;
	printf("{");
	while (!current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - is a function to print a ht in reverse;
 * @ht: is a hash table to be printed in reverse;
 *
 * Return: nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	current = ht->stail;
	printf("{");
	while (!current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - a function to delete a hash table;
 * @ht: is a hash table to be deleted;
 *
 * Return: nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (!ht)
		return;

	current = ht->shead;
	while (current)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}

	free(ht->array);
	free(ht);
}
