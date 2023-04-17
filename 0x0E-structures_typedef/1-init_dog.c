#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the structure of a dog
 *
 * @d: pointer to dog structure
 * @name: It's name
 * @owner: It's owner
 * @age: It's age
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
