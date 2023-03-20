#include <stdio.h>
#include "dog.h"

/**
 * print_dog - runs code
 * @d: structre variable
 * Return: zero
 */

void print_dog(struct dog *d)
{
	if (d->age < '0')
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d == NULL)
	{
		return;
	}
}

