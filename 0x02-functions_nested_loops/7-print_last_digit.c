#include "main.h"

/**
 * print_last_digit - return the absolute value of an integer
 * @val: - the input value
 * Return: last value of the digit
 */
int print_last_digit(int val)
{
	int digit;

	digit = val % 10;
	if (digit < 0)
		digit *= -1
	return (digit);
}
