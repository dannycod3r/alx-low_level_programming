#include "lists.h"

/**
 * sum_list - add all data in  linked list
 * @head: entry point of linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
