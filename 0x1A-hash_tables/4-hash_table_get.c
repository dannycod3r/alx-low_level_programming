#include "hash_tables.h"

/**
 * hash_table_get - get the content when given a key
 * @ht: the hash table
 * @key: the key
 * Return: the string value corresponding to a given key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL); /*key not found*/
}
