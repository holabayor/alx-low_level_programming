#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 except 2 and 4
 * ASCII codes of the numbers were used
 * Return: void
 */
void print_most_numbers(void)
{
	for (i = 48; i <= 57; i++)
	{
		if (i != 50 || i != 52)
			continue;
		_putchar(i);
	}
	_putchar('/n');
}
