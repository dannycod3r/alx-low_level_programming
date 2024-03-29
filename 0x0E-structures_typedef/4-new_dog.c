#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog of type dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: n_dog , New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
