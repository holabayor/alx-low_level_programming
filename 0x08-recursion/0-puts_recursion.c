#include "main.h"
/**
 * _puts_recursion - print a line
 * @s: input string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(s);
	else
		_putchar(s);
		_puts_recursion(*(s + 1));
}
