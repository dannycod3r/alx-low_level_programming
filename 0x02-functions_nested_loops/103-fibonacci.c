#include <stdio.h>

/**
 * main -  program entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b= 1;
	int c;
	int sum;

	for (c = 0; c < 4000000; b++)
	{
		c = a + b;
		a = b;
		b = c;
		if (b % 2 == 0)
			sum = sum + c;

	}
	printf("%d\n", sum);
	return (0);
}
