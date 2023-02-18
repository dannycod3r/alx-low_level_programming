#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print possibly combination of ijk
 * Return: 0
 */
int main(void)
{
	int i = 48;

	/* i,j -> i=hun, j=tens, k=ones*/
	while (i <= 57)
	{
		int j = 48;

		while (j <= 57)
		{
			int k = 48;

			while (k <= 57)
			{
				/*if the tens = ones or tens > ones*/
				/*tens = ones avoids repitition i==j*/
				/*tens > ones solves only the smallest combination*/
				/*of two digits*/
				if (!((k == j) || (j == i) || (j > k) || (i > j)))
				{
					putchar(i); /* hundred digit*/
					putchar(j); /* tens digit*/
					putchar(k); /* ones digit*/

					if (!(i == 55 && j == 56 && k == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;

	}
	putchar('\n');

	return (0);
}
