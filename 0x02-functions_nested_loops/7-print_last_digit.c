#include "main.h"
/**
 * print_last_digit - program entry
 *
 * @x: number
 * Description:
 * Return: 0
 */
int print_last_digit(int x)
{
	int last_number  = x % 10;

	/*for negative input*/
	if (last_number < 0)
	{
		last_number = last_number * -1;
	}
	_putchar(last_number);
	return (last_number);

}
