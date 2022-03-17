#include "main.h"

/**
 * _isupper - checks if a character is uppercase character or not
 * @c: is the input character
 * Return: 1 if success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
