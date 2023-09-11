#include "hash_tables.h"

/**
 * hash_table_set - set the element of a hash table
 * @ht: the hast table
 * @key: key
 * @value: value
 *
 * Return: 1 if success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	/*if there is a node, handle collision */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	/*there is no node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
