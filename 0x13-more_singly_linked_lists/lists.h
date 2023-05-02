#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/************ MANDATORY ************/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);

/*** Qu.9: Insert at index ***/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*** Qu.10: Delete at index ***/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/************ ADVANCED ************/
/* Qu.100: (11) Reverse list */
listint_t *reverse_listint(listint_t **head);

/** Qu.101: (12) Print (safe version) **/
size_t print_listint_safe(const listint_t *head);
size_t uniq_node_count(const listint_t *head);

/*** Qu.102: (13) Free (safe version) ***/
size_t free_listint_safe(listint_t **h);

/**** Qu.103: (14) Find the loop ****/
listint_t *find_listint_loop(listint_t *head);

#endif /* LISTS_H */
