#include <stdio.h>
/**
 * fib - recursive fibonacci calculator
 * @limit: length of the sequence
 * Return: void
 */
void fib(int limit)
{
	static int a = 1, b = 2, new;

	if (limit > 0)
	{
		new = a + b;
		a = b;
		b = new;
		printf("%i, ", new);
		fib(limit - 1);
	}
}

/**
 * main - entry point
 * Return: first 50 fibonacci sequence
 */
int main(void)
{
	int count;

	count = 50;
	printf("%i, %i\n", 1, 2);
	fib(count - 2);
	return (0);
}
