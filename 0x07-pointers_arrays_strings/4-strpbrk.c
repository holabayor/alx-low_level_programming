#include "main.h"

/**
 * _strpbrk - function that searches for any set of bytes
 * @s: initial segment of the segment
 * @accept: the bytes to accept
 * Return: byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(accept + i) != '\0'; i++)
		for (j = 0; *(s + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
				return (s + i);
	return ('\0');
}
