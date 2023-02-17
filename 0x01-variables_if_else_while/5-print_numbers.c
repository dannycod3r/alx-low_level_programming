#include <stdio.h>

/**
 * main - program entry
 *
 * Description: program to print 0..9
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
