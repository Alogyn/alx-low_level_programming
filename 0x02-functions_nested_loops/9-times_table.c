#include "main.h"

/*
 * Task 9. Learn your times table
 */

/**
  * times_table - Beginning/Starting point
  *
  * Objectif: Print the 9 times table, starting with 0
  *
  * Return: None
  */

void times_table(void)
{
	/* Variables Declaration */
	int n, m, result;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			result = n * m;

			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			/* ',' an space condition */
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			/* New line condition */
			else
			{
				_putchar('\n');
			}
		}
	}
}
