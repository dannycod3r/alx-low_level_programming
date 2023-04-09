#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: unsigned long int. The number
 * @index: unsigned int
 * Return: the bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int size = 0;
	int bit = 0;

	for (size = sizeof(int) * 8 - 1; size >= 0; size--)
	{
		bit = (n >> size) & 1;
		if ((unsigned int)size == index)
			return (bit);
	}
	return (-1);
}
