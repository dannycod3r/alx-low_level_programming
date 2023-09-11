#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of the hash table
 *
 * Return: a pointer to the newly created hash table
 *         or NULL if otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	/*if creating the array fails*/
	if (table->array == NULL)
	{
		/*free space*/
		free(table->array);
		return (NULL);
	}

	return (table);
}
