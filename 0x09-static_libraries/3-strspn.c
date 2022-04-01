#include "main.h"

/**
 * _strspn - function that gets the length of a substring
 * @s: initial segment of the segment
 * @accept: the bytes to accept
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
		for (j = 0; *(s + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
				count++;
	return (count);
}
