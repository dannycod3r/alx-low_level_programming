#include "main.h"
/**
 * _puts -  display string literal
 * @str: memory location
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
