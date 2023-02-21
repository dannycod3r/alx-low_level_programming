#include "main.h"
/**
 * main - program entry
 *
 * Description:
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;

		for (j = 'a'; j <= 'z', j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
