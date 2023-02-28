#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string pointer
 */

void puts_half(char *str)
{
	int len;
	int i;
	int half;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
		half = (len - 1) / 2;
	else
		half = len / 2;

	i = half;
	while (i >= half && i <= len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
