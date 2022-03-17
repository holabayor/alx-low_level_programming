#include "main.h"

/**
 * print_line - print line for an input legnth
 * @n: the length of the line
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (i <= 0)
		_putchar('\n');

	while (n > 0 && i < n)
	{
		_putchar('_');
		i++;
	}
}
