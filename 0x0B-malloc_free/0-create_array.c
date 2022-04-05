#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char to fill with
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
