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
		/**
		 * The free_list function is intended to free a linked list
		 *  of list_t nodes, and so it iterates over the list,
		 *  freeing each node's str field using free(head->str).
		 *  This is necessary because any dynamically allocated memory
		 *  used to store the string needs to be freed
		 *  before freeing the memory allocated for the node itself
		 *  using free(head).
		 */
		free(head->str);
		free(head);
		head = current_node;
	}

	free(head);
}
