#include "main.h"

/**
* print_square - prints a square
* @size: size of square
* Return: none
**/

void print_square(int size)
{
	int line, column;

	if (size <= 0)
		_putchar('\n');
	for (line = 0; line < size; lin++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
