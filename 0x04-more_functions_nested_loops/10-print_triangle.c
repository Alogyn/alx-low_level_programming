#include "main.h"

/*
 * Task 10. Triangles
 */

/**
  * print_triangle - Beginning/Starting point
  *
  * @size: Input number or argument
  *
  * Objectif: Print a triangle, followed by a new line.
  *
  * Return: None
  */

void print_triangle(int size)
{
	/* Variables declaration i == lines, j == spaces, k == # */
	int i, j, k;

	if (size > 0)
	{
		/* Lines loop */
		for (i = 0; i < size; i++)
		{
			/* Spaces loop */
			for (j = i + 1; j < size; j++)
			{
				_putchar(' ');
			}
			/* character # loop */
			for (k = 0; k <= i; k++)
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
