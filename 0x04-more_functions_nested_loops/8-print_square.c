#include "main.h"

/*
 * Task 8. You are so much sunshine in every square inch
 */

/**
  * print_square - Beginning//Starting point
  *
  * @size: Input number or argument
  *
  * Objectif: Print a square, followed by a new line
  *
  * Return: None
  */

void print_square(int size)
{
	/* Variables declaration */
	int i, j;

	if (size > 0)
	{
		/* Lines lopp */
		for (i = 0; i < size; i++)
		{
			/* Columns loop */
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
