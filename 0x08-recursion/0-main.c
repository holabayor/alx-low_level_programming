#include "main.h"
#include <stdio.h>

int main(void)
{
	int n;

	n = _pow_recursion(1, 10);
	printf("%d\n", n);
	n = _pow_recursion(11, 2);
	printf("%d\n", n);
	n = _pow_recursion(5, 2);
	printf("%d\n", n);
	n = _pow_recursion(5, -2);
	printf("%d\n", n);
	n = _pow_recursion(10, -2);
	printf("%d\n", n);
	return (0);
}
