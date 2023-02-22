#include <stdio.h>
/**
 * main - program entry
 *
 * Description: find the sum of multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int i; /*looper*/
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
