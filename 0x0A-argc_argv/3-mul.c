#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that returns the product of args passed to it
 * @argc: arg count
 * @argv: pointer to argument
 * Return: number of args passed, 0 if none
 */
int main(int  argc, char *argv[])
{
	int i; /*iterator*/
	int mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mult *= atoi(argv[i]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
