#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *            need to flip to get from one number to another
 * @n: unsigned long int. The first number
 * @m: unsigned long int. The second number
 * Return:...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0;
	unsigned int count = 0;

	/*set different bit to 1 and same bit to 0*/
	diff = n ^ m;
	while (diff)
	{
		count += diff & 1;
		diff = diff >> 1;
	}
	return (count);
}
