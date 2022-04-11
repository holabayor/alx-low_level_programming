#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - initializes the variable of a type
 * @d: struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		d->name == NULL ? "(nil)" : d->name;
		d->owner == NULL ? "(nil)" : d->owner;
		printf("Name : %s\n", d->name);
		printf("Age : %.6f\n", d->age);
		printf("Owner : %s\n", d->owner);
	}
}
