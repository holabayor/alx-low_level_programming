#include "main.h"

/**
 * print_line - print line for an input legnth
 * @n: the length of the line
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n, i++)
			_putchar('_');
			i++;
		_putchar('\n');
	}
}
