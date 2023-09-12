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
	int i, n = 98;
	unsigned  int  fib1 = 1, fib2 = 2, next;

	printf("%u, %u", fib1, fib2);
	for (i = 2; i < n; i++)
	{
		next = fib1 + fib2;
		printf(", %u", next);
		 fib1 = fib2;
		 fib2 = next;
	}
	printf("\n");
	return (0);
}
