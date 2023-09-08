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
	/* Get the last Digit of n */

	int lastdigit;

	lastdigit = n % 10;

	/* if the last digit of n is greater than 5 */
	if (lastdigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, lastdigit);
	}

	/* if the last digit of n is 0 */
	else if (lastdigit == 0)
	{
		printf("Last digit of %i is %i and is 0", n, lastdigit);
	}

	/* if the last digit of n is less than 6 and not 0 */
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, lastdigit);
	}
	return (0);
}
