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
	/* Long numbers variable declaration */
	unsigned int number;

	number = n;
	/* Negative number */
	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}

	/* Print all numbers */
	if (number / 10 != 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
