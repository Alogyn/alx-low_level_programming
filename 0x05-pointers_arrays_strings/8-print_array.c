#include "main.h"
#include <stdio.h>

/*
 * Task 8. Arrays are not pointers
 */

/**
  * print_array - Beginning/Starting point
  *
  * @a: Pointer or argument
  * @n: Input number or argument
  *
  * Objectif: Print n elements of an array of integers, followed by a new line
  *
  * Return: None
  */

void print_array(int *a, int n)
{
	/* Variable declaration */
	int i = 0;

	/* Array loop */
	while (i < n)
	{
		/* Print all elements except last one from the array */
		if (i < (n - 2))
		{
			printf("%d, ", a[i]);
		}

		/* Print the last one element from the array */
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
