#include "main.h"

/*
 * Task 7. There are only 3 colors, 10 digits, and 7 notes;
 * it's what we do with them that's important
 */

/**
  * print_last_digit - beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Print the last digit of a number
  *
  * Return: Last digit of 'n' value
  */

int print_last_digit(int n)
{
	/* Variable declaratio*/
	int last_digit;

	if (n < 0)
	{
		last_digit = (n % 10) * -1;
	}

	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit);
	return (last_digit);
}
