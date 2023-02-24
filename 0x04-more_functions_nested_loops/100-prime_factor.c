#include <stdio.h>

/**
 * main -  entry poin.
 * Desciption: finds and prints
 * the largest prime factor of the number 612852475143.
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; num > i; i++)
	{
		while (num % i == 0) /* check for factor of i*/
		{
			num = num / i;
		}
	}
	printf("%lu\n", i);

	return (0);
}
