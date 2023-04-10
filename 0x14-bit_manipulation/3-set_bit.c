#include "main.h"

/**
 * set_bit - set the bit at a given index to 1
 * @n: unsigned long int. Pointer to the number
 * @index: int
 * Return: 1 if successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*index out of range*/

	*n = *n | (1UL << index);

	if ((*n & (1UL << index)) == 0)
		return (-1);

	return (*n);
}
