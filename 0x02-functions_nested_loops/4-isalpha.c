#include "main.h"

/**
 * _isalpha- checks if a character is an alphabet or not
 * @c: is the input character
 * Return: 1 if success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
