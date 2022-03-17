#include "main.h"

/**
 * print_square - print a square
 * @n: the size of the square
 * Return: void
 */
void print_square(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');

	while (n > 0 && i < n)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
