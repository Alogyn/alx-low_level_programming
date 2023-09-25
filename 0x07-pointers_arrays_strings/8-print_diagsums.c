#include "main.h"
#include <stdio.h>

/*
 * Task 7. The line of life is a ragged diagonal between duty and desire
 */

/**
  * print_diagsums - Prints the sum of the two diagonals
  * of a square matrix of integers.
  *
  * @a: Input pointer array (int)
  * @size: Matrix size
  *
  * Return: None
  */

void print_diagsums(int *a, int size)
{
	/* Variables declarations */
	int diag = 0, left_sum = 0, right_sum = 0;

	/* Index to traverse the 'a' array*/
	while (diag < (size * size))
	{
		/* First diagonal */
		if (diag % (size + 1) == 0)
		{
			left_sum += a[diag];
		}

		/* Second diagonal */
		if (diag % (size - 1) == 0 && diag != 0 && diag < size * size - 1)
		{
			right_sum += a[diag];
		}
		diag++;
	}

	printf("%d, %d\n", left_sum, right_sum);
}
