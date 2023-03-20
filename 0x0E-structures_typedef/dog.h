#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a dog type
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* initialize a variable of type struct dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
