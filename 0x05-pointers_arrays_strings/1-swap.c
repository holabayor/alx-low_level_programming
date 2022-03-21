#include "main.h"

/**
 * swap_int - swpas the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
