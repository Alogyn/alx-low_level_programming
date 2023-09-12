#include <stdio.h>

/*
 * Task (Advanced) 16. In computer class, the first assignment was to write
 * a program to print the first 100 Fibonacci numbers. Instead,
 * I wrote a program that would steal passwords of students.
 * My teacher gave me an A+
 */

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
	unsigned long int i, j = 1, a = 2, f1, f2, fib1, fib2;

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", a);
		a = a + j;
		j = a - j;
	}

	f1 = j / 1000000000;
	f2 = j % 1000000000;
	fib1 = a / 1000000000;
	fib2 = a % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", fib1 + (fib2 / 1000000000));
		printf("%lu", fib2 % 1000000000);
		fib1 = fib1 + f1;
		f1 = fib1 - f1;
		fib2 = fib2 + f2;
		f2 = fib2 - f2;
	}
	printf("\n");
	return (0);
}
