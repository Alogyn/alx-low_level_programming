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
	unsigned int digit;

	/* NULL case */
	if (n == 0)
	{
		_putchar(n);
		return;
	}

	/* Negative number */
	else if (n < 0 && n > -9)
	{
		_putchar(n);
		return;
	}

	/* Positive number */
	else if (n > 0 && n < 9)
	{
		_putchar(n);
		return;
	}

	/* Digit checker loop */
	while (n != 0 && (n > 9 || n < -9))
	{
		/* negative case */
		if (n < -9)
		{
			_putchar('-');
			n *= -1;
			n /= 10;
			digit *= 10;
		}

		/* Positive case */
		else if (n > 9)
		{
			n /= 10;
			digit *= 10;
		}
	}

	/* Print the digits */
	while (digit > 0)
	{
		_putchar(((n / digit) % 10) + '0');
		digit /= 10;
	}
}
