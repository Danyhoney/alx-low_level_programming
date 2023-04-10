#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * File Descp: A Header File  for all Prototypes.
 * Created: 7th of April, 2023
 * Auth: David James Taiye.
 * Size: undefined.
 * Project: alx-low_level_programming.
 * Status: submitted.
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* DANYHONEY */
