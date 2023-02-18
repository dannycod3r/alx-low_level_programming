#include <stdio.h>

/**
 * main - program entry
 *
 * Desciption: print the pattern 00 01
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 100) /*0 ..99*/
	{
		int j = 0;

		while (j < 100) /*0.. 99*/
		{
			/* ascending order  00 01, checks duplicate*/
			/* checks for 00 01 01 00 duplicates*/
			/* if i == j we could have 00 00, 01 01, */
			/* and other variations*/
			if (i < j)
			{
				putchar((i / 10) + 48); /*first 0*/
				putchar((i % 10) + 48); /*second 0*/
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}

		i++;
	}
	putchar('\n');
	return (0);
}
