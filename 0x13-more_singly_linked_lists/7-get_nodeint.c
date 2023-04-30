#include "lists.h"

/**
 * get_nodeint_at_index - a func to return nth node of listint_t linked list;
 * @head: a pointer to head node of listint_t linked list;
 * @index: is index of node starting at 0;
 *
 * Return: nth node of listint_t linked list otherwise return "NULL".
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	if (head == NULL)
		return (NULL);

	num = 0;
	while (head != NULL && num < index)
	{
		head = head->next;
		num++;
	}

	return (head);
}
