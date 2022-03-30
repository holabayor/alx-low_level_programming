#include "main.h"
/**
 * _sqrt - returns the natural square root of a number
 * @n: value to find its square
 * @val: bound
 * Return: square root
 */
int _sqrt(int n, int val)
{
	if (n < 0)
		return (-1);
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrt(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value to find its square
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
