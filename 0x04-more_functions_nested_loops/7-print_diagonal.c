#include "main.h"

/*
 * Task 7. I feel like I am diagonally parked in a parallel universe
 */

/**
  * print_diagonal - Beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Draw a diagonal line on the terminal
  *
  * Return: None
  */

void print_diagonal(int n)
{
	/* Varaibles declaration */
	int i, j;

	if (n > 0)
	{
		/* '\' lopp */
		for (i = 0; i < n; i++)
		{
			/* Space lopp */
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
