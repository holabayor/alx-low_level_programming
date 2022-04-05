#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *s;

	s = _strdup("Holberton");
	if (s == NULL)
	{
		printf("failed");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
