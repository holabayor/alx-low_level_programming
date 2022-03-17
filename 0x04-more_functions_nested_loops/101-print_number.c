#include "main.h"

/**
 * print_number - print out a number
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n > 9)
	{
		i = n % 10;
		_putchar((i) + '0');
		n /= 10;
	}
	_putchar((n) + '0');
}
