#include <stdio.h>

/*
 * Task (Advanced) 16. In computer class, the first assignment was to write
 * a program to print the first 100 Fibonacci numbers. Instead,
 * I wrote a program that would steal passwords of students.
 * My teacher gave me an A+
 */

/*
 * length - Get the length
 *
 * @num: Input number or argument
 *
 * Objectif: Handles unsigned long numbers
 *
 * return: 'a', number of digit
 */

int length(unsigned long num)
{
	int a = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		a += 1;
	}
	return (a);
}

/**
  * main - Beginning/Starting point
  *
  * Objectif: Find and print the first 98 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	int i, j;
	unsigned long int fib1 = 1, fib2 = 2, sum;
	unsigned long int fib1o = 0, fib2o = 0, sumo = 0;
	unsigned long int mx = 1000000000000000000UL;

	for (i = 1; i <= 98; i++)
	{
		if (fib1o > 0)
		{
			printf("%lu", fib1o);
		}
		j = length(mx) - 1 - length(fib1);
		while (fib1o > 0 && j > 0)
		{
			 printf("%d", 0);
			 --j;
		}
		printf("%lu", fib1);
		sum = fib1 + fib2;
		if (sum >= mx)
		{
			sum -= mx;
			sumo += 1;
		}
		fib1 = fib2;
		fib1o = fib2o;
		fib2 = sum;
		fib2o = sumo;

		if (i != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
