#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int line, col, tsize;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < size; line++)
	{
		for (col = 0; col < size; col++)
		{
			tsize = size - l - 1;
			if (col < tsize)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
