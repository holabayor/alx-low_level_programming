#include <stdio.h>
/**
 * main - entry poin
 *
 * Return: the sum of the natural numbers 
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	return (sum);
}
