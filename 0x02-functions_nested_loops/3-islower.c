#include "main.h"

/**
 * _islower - checks if a character is lowercase character or not
 * @c: is the input character
 * Return: 1 if success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
