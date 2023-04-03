#include "lists.h"

/**
 * free_listint - free memory allocated by linked list
 * @head: entry point of linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
