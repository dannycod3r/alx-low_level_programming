#include <stdio.h>

/**
 * main - program that returns the number of args passed to it
 * @argc: arg count
 * @argv: pointer to argument
 * Return: number of args passed, 0 if none
 */
int main(int argc, char *argv[])
{
	int i; /*iterator*/

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
