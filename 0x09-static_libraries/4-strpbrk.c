#include "main.h"

/**
 * _strpbrk - function that searches for any set of bytes
 * @s: initial segment of the segment
 * @accept: the bytes to accept
 * Return: pointer to the byte found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
				return (s + i);
	return ('\0');
}
