#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: the pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (*(dest + 1) != '\0')
		i++;
	while (*(src + 1) != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
