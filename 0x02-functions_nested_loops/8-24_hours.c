#include "main.h"

/**
 * jack_bauer - program entry
 *
 * Description:
 * Return: 0
 */
void jack_bauer(void);
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			_putchar (':');
			_putchar (j / 10 + '0');
			_putchar (j % 10 + '0');
			_putchar ('\n');
		}
	}

}
