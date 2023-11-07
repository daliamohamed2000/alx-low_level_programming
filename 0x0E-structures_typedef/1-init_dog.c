#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: the dog to init
 * @name: the name of the the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
