#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new string
 * @str: string
 * Return: pointer to the array or NULL
 */

char *_strdup(char *str)
{
	char *m, *dup;
	int size = 0;

	for (; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(str) + 1);

	if (m == NULL)
		return (NULL);

	dup = m;
	while (*str)
	{
		*dup = *str;
		str++;
		dup++;
	}
	*dup = '\0';

	return (m);
}
