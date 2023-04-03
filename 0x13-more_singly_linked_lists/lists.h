#ifndef LISTS_H
#define LISTS_H

/*printf, NULL, size_t*/
#include <stdio.h>
/*malloc, free*/
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

/*print all elements in a linked list*/
size_t print_listint(const listint_t *h);

/*get the length of a linked list*/
size_t listint_len(const listint_t *h);

/*add new node at the beginning of a list*/
listint_t *add_nodeint(listint_t **head, const int n);

#endif
