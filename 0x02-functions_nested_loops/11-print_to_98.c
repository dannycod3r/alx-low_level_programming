#include "main.h"
/**
 * print_to_98 - program entry
 *
 * @n: number to count from
 * Description:
 * Return: 0
 */
void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);

			if (m == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
