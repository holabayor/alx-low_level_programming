#include <stdio.h>
/**
 * fib - recursive fibonacci calculator
 * @limit: length of the sequence
 * Return: void
 */
void fib(int limit)
{
	static long a = 1, b = 2;
	long new;


	if (limit > 0)
	{
		new = a + b;
		a = b;
		b = new;
		printf(", %ld", new);
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
	printf("%i, %i", 1, 2);
	fib(count - 2);
	printf("\n");
	return (0);
}
