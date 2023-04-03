#include "lists.h"

/**
 * free_listint2 - free memory allocated by linked list
 * @head: pointer to a pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (*head == NULL)
		*head = NULL;

	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
