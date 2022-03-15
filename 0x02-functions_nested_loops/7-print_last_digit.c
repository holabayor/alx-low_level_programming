#include "main.h"

/**
 * print_last_digit - return the absolute value of an integer
 * @val: - the input value
 * Return: last value of the digit
 */
int print_last_digit(int val)
{
	int digit;

	if (val < 0)
		val = val * -1
	digit = val % 10;
	_putchar(digit + '0');
	return (digit);
}
