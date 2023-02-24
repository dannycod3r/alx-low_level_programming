#include "main.h"

/**
* print_diagonal - print diagonal line
*@n: numbers of lines and columns
* Return: none
**/

void print_diagonal(int n)
{
	int line, column;

	for (line = 0; line < n; line++)
	{
		for (column = 0; column <= line; column++)
		{
			if (column != line)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
