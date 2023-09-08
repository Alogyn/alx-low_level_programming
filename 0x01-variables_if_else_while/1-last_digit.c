#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Task 1. The last digit */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print the last digit of the number stored in the variable n
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i", n, n % 10);
	/* if the last digit of n is greater than 5 */
	if (n % 10 > 5)
	{
		printf(" and is greater than 5\n");
	}

	/* if the last digit of n is 0 */
	else if (n % 10 == 0)
	{
		printf(" and is 0\n");
	}

	/* if the last digit of n is less than 6 and not 0 */
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
