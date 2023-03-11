#include <stdio.h>

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i; /*iterator*/

	if (argc > 1)
	{
		for (i=1; i < argc; i++)
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
