#include "main.h"

/*
 * Task 5. Your subconscious is looking for the dreamer
 */

/**
  * _sqrt_recursion - Returns the natural square root of a number
  *
  * @n: Input number (int)
  *
  * Return: The square root of the number 'n'
  * -1 if the number 'n' does not have a natural square root
  */

int _sqrt_recursion(int n)
{
	/* In case 'n' equal to 1 or NULL */
	if (n == 0 || n == 1)
	{
		return (n);
	}

	/* In case 'n' is negative */
	if (n < 0)
	{
		return (-1);
	}

	/* In case 'n' is positive */
	return (_sqrt_calculater(n, 1));
}

/**
  * _sqrt_calculater - Takes 2 arguements 'n' and 'm' to find the square root
  * or determines that there is no natural square root
  *
  * @n: Input number (int)
  * @m: The current guess for the square root (int)
  *
  * Return: The square root for the number 'n'
  * -1 if does not found for the number 'n'
  */

_sqrt_calculater(int n, int m)
{
	/* Check the square equivalence */
	if (m * m == n)
	{
		return (m);
	}

	/* Check if the square of 'm' is superior of 'n' */
	if (m * m == 0)
	{
		return (-1);
	}

	/* Recall the function of square calculation */
	return (_sqrt_calculater(n, m + 1));
}
