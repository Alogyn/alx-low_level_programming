#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Task 0. Positive anything is better than negative nothing */

/**
  * main - beginning/Starting point
  *
  * Objectif: Print whether the number stored in the variable n is positive
  * or negative
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if the number is greater than 0: is positive  */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}

	/* if the number is 0: is zero */
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	/* if the number is less than 0: is negative */
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
