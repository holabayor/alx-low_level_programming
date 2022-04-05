#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new string
 * @str: string
 * Return: pointer to the array or NULL
 */

char *_strdup(char *str)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = str[size];

	return (m);
}
