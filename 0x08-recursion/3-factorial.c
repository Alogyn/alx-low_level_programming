#include "main.h"

/*
 * Task 3. You mustn't be afraid to dream a little bigger, darling
 */

/**
  * factorial - Returns the factorial of a given number
  *
  * @n: Input number (int)
  *
  * Return: The factorial of the number 'n'
  */

int factorial(int n)
{
	/* In case 'n' is positive */
	if (n > 0)
	{
		/* Factorial calculation */
		return (n * factorial(n -1));
	}

	/* In case 'n' is NULL */
	else if (n == 0)
	{
		return (1);
	}

	/* In case 'n' is negative */
	else
	{
		return (-1);
	}
}
