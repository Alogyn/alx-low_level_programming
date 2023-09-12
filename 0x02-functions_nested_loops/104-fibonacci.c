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

#include <stdio.h>

int main(void)
{
	unsigned long int i, j = 1, a = 2, temp;

	printf("%lu, %lu, ", j, a);

	for (i = 3; i <= 98; i++)
	{
		temp = a;
		a = a + j;
		j = temp;
		if (i != 98)
		{
			printf("%lu, ", a);
		}

		else
		{
			printf("%lu\n", a);
		}
	}
	return (0);
}
