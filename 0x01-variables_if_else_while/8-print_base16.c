#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print the values of base16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i = 48;
	int j = 'a';

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
