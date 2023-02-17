#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry
 *
 * Description: check if the last number of n is greater than 5, is equal to 0
 * or less than and not 0
 * Return: 0
 */
int main(void)
{
	int n;
	int unit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	unit = n % 10;

	if (unit > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, unit);
	else if (unit == 0)
		printf("Last digit of %d is %d and is 0\n",
		       n, unit);
	else if (unit != 0 && unit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, unit);

	return (0);
}
