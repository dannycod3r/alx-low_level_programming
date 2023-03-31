#ifndef LISTS_H
#define LISTS_H

/*size_t, printf*/
#include <stdio.h>
/*strdup*/
#include <string.h>
/*malloc*/
#include <stdlib.h>

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

/* print the elements of a singly linked list*/
size_t print_list(const list_t *h);

/*return the number of elements in a linked list*/
size_t list_len(const list_t *h);

/* return the address of a newly created node */
list_t *add_node(list_t **head, const char *str);

/*return the address a newly added node at the end of the list*/
list_t *add_node_end(list_t **head, const char *str);

/*free malloc after using linked list*/
void free_list(list_t *head);

/*print first before main*/
void print_first(void) __attribute__((constructor));

#endif
