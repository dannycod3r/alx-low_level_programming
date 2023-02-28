#include "main.h"

/**
* _strlen - get the length of a string.
* @s: a pointer to a char
* Return: length of a string
**/

int _strlen(char *s)
{
int l, i = 0;

while (s[i] != '\0')
{
i++;
}
l = i;
return (l);
}

/**
* puts_half -  prints half of a given string
* @str: a pointer to string
* Return: string
**/

void puts_half(char *str)
{
	int half;
	int len = _strlen(str);

	if (len % 2 != 0)
	{
		half = (len / 2) + 1;
	}
	else
	{
		half = size / 2;
	}
	
	for (half = half; half < len; half)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
