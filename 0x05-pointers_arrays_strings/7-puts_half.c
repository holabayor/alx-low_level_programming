#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the secong half of a string
 * @str: pointer to the input string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;

	for (i = (len % 2 ? (len / 2) : (len - 1 / 2)); i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
