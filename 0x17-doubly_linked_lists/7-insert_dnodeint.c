#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data value for the new node.
 *
 * Return: Address of the new node, or NULL if it failed to add the new node.
 */
dlistint_t *insert_dnodeint_at_index(
	dlistint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		return (*head = new_node);
	}


	for (count = 0; current; count++)
	{
		if (count == idx - 1)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next)
				current->next->prev = new_node;
			return (current->next = new_node);
		}
		current = current->next;
	}

	free(new_node);
	return (NULL);
}
