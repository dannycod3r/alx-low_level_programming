#include <stdio.h>
/**
 * main - program entry
 *
 * Description:
 * Return: 0
 */
int main(void)
{

	int i; /*looper */
	long int a = 1; /*first term */
	long int b = 2; /*second term */
	long int c = a + b; /*third number */

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu\n", c);
		}

		a = b;
		b = c;
		c = a + b;
	}

	return (0);
}
