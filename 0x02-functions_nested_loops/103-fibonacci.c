#include <stdio.h>

/**
 * main -  program entry
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int sum;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum = sum + c;

	}
	printf("%d\n", sum);
	return (0);
}
