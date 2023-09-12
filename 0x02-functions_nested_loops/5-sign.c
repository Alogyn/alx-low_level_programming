#include "main.h"

/*
 * Task 5. Sign
 */

/**
  * print_sign - Beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Print the sign of a number
  *
  * Return: 1 and prints + if n is greater than zero
  * 0 and prints 0 if n is zero
  * -1 and prints - if n is less than zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}

	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}

	else
	{
		return (-1);
		_putchar('-');
	}
}
