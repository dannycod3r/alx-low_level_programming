#include "lists.h"

/**
 * list_len - find the number of elements in a linked list
 * @h: given linked list
 * Return: the number of element in a given linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current = NULL;

	if (h == NULL)
		return (-1);

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
