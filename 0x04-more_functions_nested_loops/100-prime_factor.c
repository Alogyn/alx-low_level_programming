#include <stdio.h>

/*
 * Task (Advanced) 11. The problem of distinguishing prime numbers from
 * composite numbers and of resolving the latter into their prime factors
 * is known to be one of the most important and useful in arithmetic
 */

/**
  * main- Beginning/Starting point
  *
  * Objectif: Find and print the largest prime factor of the number
  * 612852475143, followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Variables declaration */
	long long n = 612852475143;
	long long lp, i;

	/* Divide the 'n' to the max times possible */
	while (n % 2 == 0)
	{
		lp = 2;
		number /= 2;
	}
	/* Divide the 'n' by odd numbers starting from 3 */
	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			lp = i;
			n /= i;
		}
	}
	printf("%lld\n", lp);
	return (0);
}
