#include "lists.h"

/**
 * listint_len - get the number of elements in a linked list
 * @h: entry point of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
