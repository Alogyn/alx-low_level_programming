#include "main.h"

/*
 * Task 6. Inception. Is it possible?
 */

int check_prime(int n, int div);

/**
  * is_prime_number - Returns 1 if the input integer is a prime number,
  * otherwise return 0
  *
  * @n: Input number (int)
  *
  * Return: 1 if is prime number, 0 if is not
  */

int is_prime_number(int n)
{
	/* In case 'n' is less than 1 */
	if (n <= 1)
	{
		return (0);
	}

	/* In case 'n' equal to 2 */
	if (n == 2)
	{
		return (1);
	}

	/* Exclure non-prime numbers */
	if (n % 2 == 0 && n != 2)
	{
		return (0);
	}

	/* Recall of the function */
	return (check_prime(n, 3));
}

/**
  * check_prime - Finds the divisors of the 'n'
  *
  * @n: Input number (int)
  * @div: Divisor number (int)
  *
  * Return: 0 if not a prime number, 1 otherwise
  */

int check_prime(int n, int div)
{
	/* Check the rest of divising result */
	if (n % div == 0)
	{
		/* Prime numbers accept only 1 and 'n' */
		if (n == div)
		{
			return (1);
		}

		/* Non-prime numbers accept many divisors */
		else
		{
			return (0);
		}
	}

	/* Recall function */
	return (check_prime(n, div + 1));
}
