#include "main.h"

/**
 * print_alphabet - program entry
 *
 * Description:
 * Return: 0
 */

print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++ )
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}