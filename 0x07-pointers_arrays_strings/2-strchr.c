#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: memory area to be filled
 * @c: the length of the byte to be filled
 * Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + 1);
	return ('\0');
}
