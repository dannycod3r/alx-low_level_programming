#include "main.h"

/**
* _strlen - get the length of a string.
* @s: a pointer to a char
* Return: length of a string
**/

void puts_half(char *str)
{
int length = strlen(str);
int i;
if (length % 2 == 0)
{
for (i = length / 2; i < length ; i++)
{
_putchar(str[i]);
}
}
else if  (length % 2 != 0)
{
for (i = (length + 1) / 2; i < length; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
