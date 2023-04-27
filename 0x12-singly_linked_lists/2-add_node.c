#include "lists.h"

/**
 * add_node - a function to add new_node to the beginning of list_t list;
 * @head: a pointer to the first node of linked list_t list;
 * @str: is a constant string to be used and be stored in linked list_t list;
 *
 * Return: address of new element otherwise return "NULL".
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)); /* memory allocation to new_node */

	if (new_node == NULL)
		return (NULL); /* return NULL if malloc failed */

	new_node->str = strdup(str); /* dulicate string str as pointed by new_node */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head; /* make new_node's next as a point to the old head */
	*head = new_node; /* to set a pointer to head as new_node */

	return (new_node); /* return address of new node which is (*str) */
}
