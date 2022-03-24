#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: the pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		*dest++;
	while (*src)
	{
		*dest = *src;
		*src++;
		*dest++;
	}
	*dest = '\0';
	return (dest);
}
