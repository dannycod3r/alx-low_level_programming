#include "lists.h"
/**
 * dlistint_len - Find the number of elements in a linked list
 * @h: list entry point / head
 * Return: the number on elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
