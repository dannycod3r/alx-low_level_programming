#include "main.h"

/**
 * print_rev - reverse the string in a char pointer
 * @s: character pointer
 */
void print_rev(char *s)
{
	/*get the legth of the string*/
	int len = 0;

	while (s[len] != '\0') /*get the length*/
		len++;

	len--; /*do this to ignore adding the '\0'*/
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
