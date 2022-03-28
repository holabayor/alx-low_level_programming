#include "main.h"

/**
 * _strstr - function that searches for any set of bytes
 * @haystack: initial segment of the segment
 * @needle: the bytes to accept
 * Return: pointer to the byte found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(needle + i) != '\0'; i++)
		for (j = 0; *(haystack + j) != '\0'; j++)
			if (*(haystack + j) == *(needle + i))
				return (haystack + j);
	return ('\0');
}
