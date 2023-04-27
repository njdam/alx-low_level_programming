#include "lists.h"

/**
 * add_node_end - a function to add node at the end of linked list_t list;
 * @head: is a pointer to the first node of list_t list;
 * @str: ist string to be used stored in singly linked list_t list;
 *
 * Return: address of new node at the end of singly linked list_t list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)), *last_node;
	unsigned int len;

	if (new_node == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->len = len;
	if (*head == NULL)
	{
		*head = new_node; /* if pointed head is null means it is the end node */
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next; /* iterate until last node's next != '\0' */

	last_node->next = new_node; /* set last node's next as new_node */

	return (new_node);
}
