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

/*add node at the end of a list*/
listint_t *add_nodeint_end(listint_t **head, const int n);

/*free a list*/
void free_listint(listint_t *head);

/*free a list, set head to null*/
void free_listint2(listint_t **head);

/*remove the head node of a linked list*/
int pop_listint(listint_t **head);

/*get the element at a particular node*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

#endif
