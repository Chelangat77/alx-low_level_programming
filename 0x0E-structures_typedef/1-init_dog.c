#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - runs code
 * @d: structural variable
 * @name: character variable
 * @age: float variable
 * @owner: character variable
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
