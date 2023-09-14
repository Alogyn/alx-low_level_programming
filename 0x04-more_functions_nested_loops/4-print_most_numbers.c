#include "main.h"

/*
 * Task 4. I believe in numbers and signs
 */

/**
  * print_most_numbers - Beginning/Starting point
  *
  * Objectif: Print the numbers, from 0 to 9, followed by a new line
  *
  * Return: None
  */

void print_most_numbers(void)
{
	/* Variable declaration */
	int n = 0;

	while (n < 10)
	{
		if (n != 2 || n != 4)
		{
			_putchar(n + '0');
		}
		else
		{
			continue;
		}
		n++;
	}
	_putchar('\n');
}
