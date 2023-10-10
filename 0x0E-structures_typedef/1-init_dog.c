#include "dog.h"
#include <stddef.h>
/**
 * init_dog - function name
 * @name: parameter one
 * @d: variable to be initialized to
 * @age: parameter two
 * @owner: pararmeter three
 * Return: 0
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
