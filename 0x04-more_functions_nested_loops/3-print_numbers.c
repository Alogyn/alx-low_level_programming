#include "main.h"

/*
 * Task 3. The numbers speak for themselves
 */

/**
  * print_numbers - Beginning/Starting point
  *
  * Objectif: Print the numbers, from 0 to 9, followed by a new line
  *
  * Return: None
  */

void print_numbers(void)
{
	/* Variable declaration */
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
