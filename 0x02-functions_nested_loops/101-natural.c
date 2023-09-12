#include <stdio.h>

/*
 * Task (Advanced) 13. Nature made the natural numbers;
 * All else is the work of women
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Compute and Print the sum of all the multiples
  * of 3 or 5 below 1024 (excluded), followed by a new line
  *
  * Return: Always 0 (True);
  */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += 1;
		}
	}
	printf("%i\n", sum);
	return (0);
}
