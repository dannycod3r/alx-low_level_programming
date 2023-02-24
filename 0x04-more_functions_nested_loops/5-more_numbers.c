#include "main.h"

/**
 * more_numbers - print numbers from 0..14
 * Return: void
 */
void more_numbers(void)
{
	int looper = 0;

	while (looper < 10)
	{
		int i  = 1;

		while (i < 2)
		{
			int j = 0;

			while (j <= 14)
			{
				if (j > 9)
					_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				j++;
			}
			i++;
		}

		_putchar('\n');
		looper++;
	}
}
