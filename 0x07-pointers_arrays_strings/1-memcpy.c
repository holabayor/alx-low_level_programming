#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest: memory area to be filled
 * @src: byte to fill with
 * @n: the length of the byte to be filled
 * Return: pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
