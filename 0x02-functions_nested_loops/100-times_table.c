#include "main.h"

/*
 * Task (Advanced) 12. The World looks like a multiplication-table,
 * or a mathematical equation, which, turn it how you will, balances itself
 */

/**
  * print_times_table - Beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Print the n times table, starting with 0
  *
  * Return: None
  */

void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result < 10 && result != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}
