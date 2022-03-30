#include "main.h"
/**
 * _is_prime - checks if a number is prime or not
 * @n: number to be checked
 * @val: bound
 * Return: 1 for prime number otherwise 0
 */
int _is_prime(int n, int val)
{
	if (n <= 1)
		return (0);
	else if (n % val == 0)
		return (0);
	else if (val = n)
		return (1);
	else
		return (_is_prime(n, val++));
}

/**
 * is_prime_number - entry point
 * @n: number to be checked
 * Return: 1 for prime number otherwise 0
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
