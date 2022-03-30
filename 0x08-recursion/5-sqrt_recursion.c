#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value to find its square
 * Return: square root 
 */
int _sqrt_recursion(int n)
{
	int val = 1;

	if (n < 0)
		return (-1);
	if (val * val == n)
		return (val);
	else if (val * val < n)
		val += 1;
		return (_sqrt_recursion(n));
}
