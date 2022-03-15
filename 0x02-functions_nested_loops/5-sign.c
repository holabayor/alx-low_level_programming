#include "main.h"

/**
 * print_sign - checks if a poitive, negative or zero
 * @n: is the input character
 * Return: 1 if greater than zero, -1 if less than zero and 0 if equals zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
		return (0);
}
