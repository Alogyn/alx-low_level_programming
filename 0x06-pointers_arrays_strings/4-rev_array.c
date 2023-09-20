#include "main.h"

/*
 * Task 4. I am a kind of paranoid in reverse.
 * I suspect people of plotting to make me happy
 */

/**
  * reverse_array - Beginning/Starting point
  *
  * @a: Array pointer or argument
  * @n: Number of arrays to reverse
  *
  * Objectif: Reverse the content of an array of integers
  *
  * Return: None
  */

void reverse_array(int *a, int n)
{
	/* Reverse and loops variables declarations */
	int origin = 0, reverse = n - 1, memory;

	/* Reversing array value loop */
	while (reverse > origin)
	{
		memory = a[origin];
		a[origin] = a[reverse];
		a[reverse] = memory;
		reverse--;
		origin++;
	}
}
