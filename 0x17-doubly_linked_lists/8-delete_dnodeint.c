#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a list.
 * @head: Pointer to the pointer to the head of the doubly linked list.
 * @index: Index to delete from, starting from 0.
 *
 * Return: 1 on success or -1 on failure.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *tmp = (*head)->next;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		dlistint_t *tmp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp && tmp->next)
	{
		if (index == count)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}

	if (tmp && index == count)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}

	return (-1);
}
