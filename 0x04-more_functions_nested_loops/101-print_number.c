#include "main.h"

/*
 * Task (Advanced) 12. Numbers have life; they're not just symbols on paper
 */

/**
  * print_number - Beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Print an integer, without long, arrays,
  * pointers or hard-code special values
  *
  * Return: None
  */

void print_number(int n)
{
	/* Variable declaration */
	unsigned int m;

	/* When the number is negative */
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	/* When the number is positive */
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
