#include "lists.h"

/**
 * print_dlistint - print all elements of a list
 * @h: head/ entry of list
 * Return: the number of of in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
