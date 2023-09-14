#include "main.h"

/*
 * Task 5. Numbers constitute the only universal language
 */

/**
  * more_numbers - Beginning/Starting point
  *
  * Objectif: Print 10 times the numbers, from 0 to 14, followed by a new line
  *
  * Return: None
  */

void more_numbers(void)
{
	/* Variables declaration */
	int i = 0;
	int n;

	while (i < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
