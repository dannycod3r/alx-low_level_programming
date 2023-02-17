#include <stdio.h>

/**
 * main - program entry
 *
 * Description: something
 * Return: 0
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
