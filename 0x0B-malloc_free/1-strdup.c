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
	
	if (str == NULL || m == 0)
		return (0);

	while (i <= size)
	{
		m[i] = str[i];
		i++;
	}

	return (m);
}
