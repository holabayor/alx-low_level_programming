#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	while (size > 0 && i < size)
	{
		for (i = 0; i < n; i++)

			_putchar('#');
		_putchar('\n');
		i++;
	}
}
