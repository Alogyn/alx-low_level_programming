#include "main.h"

/*
 * Task 6. The shortest distance between two points is a straight line
 */

/**
  * print_line - Beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Draw a straight line in the terminal
  *
  * Return: None
  */

void print_line(int n)
{
	/* Variable declaration */
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
