#include <stdio.h>
/**
 * print_natural - entry point
 * @size: the size of the multplication table
 * Return: void
 */
void print_natural(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf(sum);
}
