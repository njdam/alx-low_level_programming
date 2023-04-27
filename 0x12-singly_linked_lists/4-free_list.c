#include "lists.h"

/**
 * free_list - a function that frees a list_t list;
 * @head: is a pointer to the first node of singly linked list_t list;
 *
 * Return: nothing./
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head->str);
		free(head);
		head = current_node;
	}

	free(head);
}
