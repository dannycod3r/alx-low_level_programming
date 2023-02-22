#include <stdio.h>


/**
 * num_length - returns the lenth of string
 * @n: operand number
 * Return: number of digits
 */

int num_length(int n)
{
	int length = 0;

	if (!n)
	{
		return (1);
	}

	while (n)
	{
		n = n / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	unsigned long a = 1, b = 2, tmp;
	unsigned long mx = 100000000, ao = 0, bo = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (ao > 0)
			printf("%lu", ao);
		initial0s = num_length(mx) - 1 - num_length(a);
		while (ao > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", a);

		tmp = (a + b) % mx;
		tmpo = ao + bo + (a + b) / mx;
		a = b;
		ao = bo;
		b = tmp;
		bo = tmpo;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
