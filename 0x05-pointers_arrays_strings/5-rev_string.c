#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
}
