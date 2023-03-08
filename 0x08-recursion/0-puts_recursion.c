#include "main.h"


/**
 * _puts_recursion - print characters using recursion
 * @s: pointer to a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')/*base case*/
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
