#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not
 * ASCII codes of the digits were used to validate the inputs
 * @c: is the input character
 * Return: 1 if success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
