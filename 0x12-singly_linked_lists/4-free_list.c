#include "lists.h"

/**
 * free_list - free dynamic memory allocated by malloc
 * @head: starting of the linked list
 * Return: nothig
 */
void free_list(list_t *head)
{
	list_t *current_node = head;

	while (head != NULL)/*traverse the list*/
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
	free(head);
}
