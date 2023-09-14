#include <stdio.h>

/*
 * Task 9. Fizz-Buzz
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print the numbers from 1 to 100, followed by a new line.
  * For multiples of three print 'Fizz'.
  * For the multiples of five print 'Buzz'.
  * For numbers which are multiples of both three and five print 'FizzBuzz'.
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Variable declaration */
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i < 100)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i < 100)
		{
			printf("Buzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}

