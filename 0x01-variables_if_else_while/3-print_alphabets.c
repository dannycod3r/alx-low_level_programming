#include <stdio.h>

/**
 * main - program entry
 *
 * Description: something
 * Return: 0
 */
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z'){
		putchar(i);
		i++;
	}

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}
