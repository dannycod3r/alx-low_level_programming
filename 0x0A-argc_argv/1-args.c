#include <stdio.h>

/**
 * main - program that returns the number of args passed to it
 * @argc: arg count
 * @argv: pointer to argument
 * Return: number of args passed, 0 if none
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i; /*iterator*/

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			;
		printf("%d\n", --i);
	}
	else
	{
		i = 0;
		printf("%d\n", i);
	}

	return (0);
}
