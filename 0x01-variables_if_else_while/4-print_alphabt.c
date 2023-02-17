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

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
			i++;

		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
