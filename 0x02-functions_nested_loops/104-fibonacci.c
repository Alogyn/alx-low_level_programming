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
	int i;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long fib11, fib12, fib21, fib22;
	unsigned long fib10, fib20;

	for (i = 0; i < 92; i++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
	fib11 = f1 / 10000000000;
	fib12 = f1 % 10000000000;
	fib21 = f2 / 10000000000;
	fib22 = f2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		fib10 = fib11 + fib21;
		fib20 = fib12 + fib22;
		if (fib12 + fib22 > 9999999999)
		{
			fib10 += 1;
			fib20 %= 10000000000;
		}
		printf("%lu%lu", fib10, fib20);
		if (i != 98)
		{
			printf(", ");
			fib11 = fib21;
			fib12 = fib22;
			fib21 = fib10;
			fib22 = fib20;
		}
	}
	printf("\n");
	return (0);
}
