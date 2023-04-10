#include "main.h"

/**
 * clear_bit - set the bit at a given index to 0
 * @n: unsigned long int. The number
 * @index: unsigned int
 * Return: 1 if successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned int m = ~(1 << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /*index out of range*/

	*n = *n & m;

	if ((*n & (1UL << index)) != 0)
		return (-1);/*bit not cleared*/

	return (1);
}
