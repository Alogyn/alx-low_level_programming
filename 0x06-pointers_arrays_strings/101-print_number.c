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

	/* Null number */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Negative number */
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Digit checker */
	while (n > 9)
	{
		/* Digit counter */
		n /= 10;
		digit *= 10;
	}

	/* Print numbers loop */
	while (digit > 0)
	{
		_putchar(((digit / 10) % 10) + '0');
		digit /= 10;
	}
}
