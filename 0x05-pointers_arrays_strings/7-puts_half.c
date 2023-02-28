#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string pointer
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int half = 0;

	while (str[len] != '\0')
		len++;

	len--;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	else
		half = len / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
