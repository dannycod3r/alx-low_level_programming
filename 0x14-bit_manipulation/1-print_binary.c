#include "main.h"

/**
 * print_binary - convert integer to binary
 * @n: unsigned long int. Number to be converted
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int size = 0;
	unsigned int bit = 0, one = 0;

	for (size = (sizeof(int) * 8) - 1; size >= 0; size--)
	{
		bit  = (n >> size) & 1;

		if (bit == 1)
			one = 1;
		if (one)
			_putchar(bit + '0');
	}
	/*handle the case where the input n is 0*/
	if (!one)
		_putchar('0');
}
