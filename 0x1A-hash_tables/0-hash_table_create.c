#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 * @size: size of the array
 * Return: Pointer to the newly created hash table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}

	return (table);
}
