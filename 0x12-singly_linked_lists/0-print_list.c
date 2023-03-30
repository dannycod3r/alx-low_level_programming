#include "lists.h"

/**
 * print_list - Prints all the elements of a given list
 * @h: a given linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = NULL;

	if (h == NULL)
		return (0);

	current = h;
	while (current != NULL)
	{
		count++;
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}

	return (count);
}
