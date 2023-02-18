#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print possibly combination of
 * Return: 0
 */
int main(void)
{
	int i = 48;

	/* i,j -> i=tens, j=ones*/
	while (i <= 57)
	{
		int j = 48;

		while (j <= 57)
		{
			/*if the tens = ones or tens > ones*/
			/*tens = ones avoids repitition i==j*/
			/*tens > ones solves only the smallest combination*/
			/*of two digits*/
			if (!((i == j) || (i > j)))
			{
				putchar(i); /* tens digit*/
				putchar(j); /* ones digit*/
				if (!(i==56 && j==57)){
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;

	}
	putchar('\n');

	return (0);
}
