#include "main.h"

/**
 * puts2 - print every other number from 0
 * @str: string pointer
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
