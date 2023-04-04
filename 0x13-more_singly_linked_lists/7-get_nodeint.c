#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a particular index
 * @head: head node/ list entry point
 * @index: position we are looking for
 * Return: pointer to the node if found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (count == index)
			head = current;
		count++;
		current = current->next;
	}

	return (head);
}
