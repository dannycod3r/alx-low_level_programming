#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print 0..9, without using any variable of type char
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
