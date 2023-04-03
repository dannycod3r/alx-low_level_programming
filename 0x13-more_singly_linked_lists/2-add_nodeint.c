#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of a linked list
 * @head: entry point of the node
 * @n: data stored in the node
 * Return: a pointer to the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node; /*hold the address*/

	return (*head);
}
