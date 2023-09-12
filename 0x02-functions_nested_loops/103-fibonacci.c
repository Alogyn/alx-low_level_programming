#include <stdio.h>

/*
 * Task (Advanced) 15. Even Liber Abbaci
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Finf and print the sum of the even-valued terms,
  * followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next, sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
