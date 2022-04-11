#include "dog.h"

/**
 * init_dog - initializes the variable of a type
 * @d: struct dog
 * @name: string character
 * @age: float
 * @owner: string - owner of the dog
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
