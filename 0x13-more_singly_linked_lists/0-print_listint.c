#include "lists.h"

/**
 * print_listint - print the elements in a linked list
 * @h: head node - list entry point
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
