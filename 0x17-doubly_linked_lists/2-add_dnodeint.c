#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of d linked list
 * @head: pointer to the linked list
 * @n: data in the node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create the node*/
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	/*check empty list*/
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	/*update the new node*/
	temp->next = *head;

	/*update the list*/
	(*head)->prev = temp;

	*head = temp;

	return (*head);
}
