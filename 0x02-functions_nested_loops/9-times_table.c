#include "main.h"

/**
 * times_table - program entry
 *
 * Description:
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)/* first iteration*/
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j; /*result of ij*/
			if ((k / 10) == 0)
			{
				if (j == 0)
				{
					_putchar('0');
				}
				if (j != 0)
				{
					_putchar(' ');
					_putchar((k % 10) + '0');
				}
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
