#include "lists.h"
/**
 * add_dnodeint_end - Add a node to the end of a dlinked list
 * @head: pointer to the linked list
 * @n: content of t he node
 * Return: pointer to the node element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	/*created the node*/
	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	/*if list is empty*/
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		current = *head;
		/*traverse the list*/
		while (current->next != NULL)
			current = current->next;
		/*connect node to last node*/
		current->next = node;
		node->prev = current;
	}

	return (node);
}
