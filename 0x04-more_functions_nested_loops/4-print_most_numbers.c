#include "main.h"
/**
 * print_most_numbers - print numbers 0..9 ignore 2, 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i = '0'; /*looper*/

	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
