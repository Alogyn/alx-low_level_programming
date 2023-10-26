#include "main.h"

/*
 * Task 1. 1
 */

/**
  * print_binary - prints the binary representation of a number
  *
  * @n: The number to print in binary (long int)
  *
  * Return: None
  */
void print_binary(unsigned long int n)
{
	/* Recursively divide n by 2 */
	if (n > 1)
		print_binary(n >> 1);

	/* Print the last bit of n */
	_putchar((n & 1) + '0');
}

