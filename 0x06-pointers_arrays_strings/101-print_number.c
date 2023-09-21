#include "main.h"

/*
 * Task (Advanced) 9. Numbers have life; they're not just symbols on paper
 */

/**
  * print_number - Beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Print an integer
  *
  * Return: None
  */

void print_number(int n)
{
	/* variables declarations */
	unsigned int digit = 1;

	/* NULL case */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Negative case */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Digit checker loop */
	while (n > 0)
	{
		n /= 10;
		digit *= 10;
	}

	/* Print the digits */
	while (digit > 1)
	{
		digit /= 10;
		_putchar(((n / digit) % 10) + '0');
	}
}
