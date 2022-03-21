#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(str[i]);
	_putchar('\n');
}
