#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c)
{
    return ((write(1, &c, 1));
}

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif