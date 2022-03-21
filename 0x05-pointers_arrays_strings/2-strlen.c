#include "main.h"

/**
 * _strlen - calaculate the length of an input string
 * @s: input string
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;	
	return (i);
}
