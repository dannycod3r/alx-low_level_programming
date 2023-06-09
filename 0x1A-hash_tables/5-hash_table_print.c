#include "hash_tables.h"

/**
 * hash_table_print - print all elements of a hash table
 * In the form of key/value pair in the
 * order that they appear in the array of hash table
 * @ht: the hash tbale
 * Return Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int first_elem_flag = 1; /*tract the first elem*/

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)/*loop thru the array*/
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first_elem_flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			first_elem_flag = 0;
		}
	}
	printf("}\n");
}
