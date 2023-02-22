#include <stdio.h>

/**
 * main -  program entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b;
	int c = 0;
	int sum = 0;

	for (b = 2; b <= 4000000; b++)
	{
		if (b % 2 == 0)
			sum = sum + b;
		c = b;
		b = b + a;
		a = c;
	}
	printf("%d\n", sum);
	return (0);
}
