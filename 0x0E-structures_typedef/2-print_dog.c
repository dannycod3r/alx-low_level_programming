#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the d of type dog
 * @d: the d of type dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);

		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
