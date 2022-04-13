#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initializes the variable of a type
 * @name: string character
 * @age: float
 * @owner: string - owner of the dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d
		;
	d = malloc(sizeof(*d));
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
