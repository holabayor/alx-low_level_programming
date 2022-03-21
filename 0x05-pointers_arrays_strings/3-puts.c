#include "main.h"

/**
 * _puts - print a string
 * @s: input string
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(i);
		i++;
	_putchar('\n');
}
