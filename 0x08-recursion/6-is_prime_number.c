#include "main.h"
/**
 * _is_prime - checks if a number is prime or not
 * @n: number to be checked
 * @val: bound
 * Return: 1 for prime number otherwise 0
 */
int _is_prime(int n, int val)
{
	if (val >= n && n > 2)
		return (1);
	else if (n % val == 0 || n < 2)
		return (0);
	else
		return (_is_prime(n, val + 1));
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
