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
	unsigned int i, devider, digit = 1;

	/* Null number */
	if (n == 0)
	{
		_putchar(n);
	}

	/* Negative number */
	else if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	/* Positive number */
	else
	{
		i = n;
	}
	
	/* Devider number */
	devider = i;

	/* Digit checker */
	while (devider > 9)
	{
		/* Digit counter */
		devider /= 10;
		digit *= 10;
	}

	/* Print numbers loop */
	for (;digit > 0; digit /= 10)
	{
		_putchar(((i / 10) % 10) + '0');
	}
}
