#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: byte to fill with
 * @n: the length of the byte to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char *b, unsigned int n)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
