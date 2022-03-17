#include "main.h"

/**
 * print_diagonal - print a diagonal line for an input legnth
 * @n: the length of the diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');

	while (n > 0 && i < n)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
