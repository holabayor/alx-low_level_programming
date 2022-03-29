#include "main.h"

/**
 * print_chessboard - function that searches for any set of bytes
 * @a: 2d array of chars
 * Return: void
 */
void print_chessboard(char *(a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
}
