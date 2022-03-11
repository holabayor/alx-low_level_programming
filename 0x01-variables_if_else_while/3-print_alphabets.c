#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';
	char u = 'A'

	while (l <= 'z')
	{
		putchacr(l);
		l++;
	}
	while (u <= 'Z')
        {
                putchar(u);
                u++;
        }

	putchar('\n');
	return (0);
}
