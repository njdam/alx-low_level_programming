#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*************** MANUAL PUTCHAR ***************/
int _putchar(char c);

/*************** MANDATORY ***************/

/* 0. Print list */
size_t print_list(const list_t *h);

/** 1. List length **/
size_t list_len(const list_t *h);

/*** 2. Add node ***/
list_t *add_node(list_t **head, const char *str);

/**** 3. Add node at the end ****/
list_t *add_node_end(list_t **head, const char *str);

/***** 4. Free list *****/
void free_list(list_t *head);

/**************** ADVANCED ***************/

/* 5. The Hare and the Tortoise */

/* 6. Real programmers can write assembly code in any language */

#endif /* LISTS_H */
