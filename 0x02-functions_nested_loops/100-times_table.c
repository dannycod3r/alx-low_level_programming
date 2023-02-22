#include "main.h"
/**
 * print_times_table - program entry
 * @n: number
 */
void print_times_table(int n)
{
	int i, j;

	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)/* first iteration*/
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar((i * j) + '0');
				} else if ((i * j) < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if ((i * j) >= 10 && (i * j) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
