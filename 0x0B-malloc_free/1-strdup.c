#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new string
 * @str: string
 * Return: pointer to the array or NULL
 */

char *_strdup(char *str)
{
	char *m;
	int i, size = 0;

	for (; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(str) + 1);

	if (m == NULL)
		return (NULL);

	while (*str)
	{
		*m = *str;
		str++;
		i++;
	}
	*m = '\0';

	return (m);
}
