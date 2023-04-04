#include "lists.h"

/**
 * pop_listint - remove the head node of linked list
 * @head: address of the the head node
 * Return: the data stored in the head node, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (num);
}
