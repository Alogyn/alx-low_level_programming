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
	/* When the number is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* When the number is positive */
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
	_putchar ('\n');
}
