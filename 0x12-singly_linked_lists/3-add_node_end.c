#include "lists.h"

/**
 * add_node_end - add new node to the end of a linked list
 * @head: head of the list
 * @str: value stored in a particular node
 * Return: address of the newly added node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL; /*new node*/
	list_t *last_node = NULL;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = strlen(str);

		if (*head == NULL)/*empty list*/
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			last_node = *head;
			while (last_node->next)
				last_node = last_node->next;
			last_node->next = new_node;

			return (last_node);
		}
	}

	return (NULL);
}
