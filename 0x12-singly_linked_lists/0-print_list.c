#include "lists.h"

/**
 * print_list - Prints all the elements of a given list
 * @h: a given linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}

	while (current != NULL)
	{
		count++;
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}

	return (count);
}
