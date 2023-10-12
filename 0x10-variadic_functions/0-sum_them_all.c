#include "variadic_functions.h"

/*
 * Task 0. Beauty is variable, ugliness is constant
 */

/**
  * sum_them_all - Returns the sum of all its parameters
  *
  * @n: The number of arguments (int)
  *
  * Return: The sum of n'n numbers, 0 if the 'n' in invalid
  */

int sum_them_all(const unsigned int n, ...)
{
	/* Variadic, Loop and variable declarations */
	va_list list_param;
	unsigne int i = 0;
	int sum = 0;

	/* Beginning of the 'list_param' variadic */
	va_start(list_param, n);

	/* In case 'n' is empty */
	if (n == NULL)
	{
		return (0);
	}

	/* In case 'n' valid, calucling the sum */
	else
	{
		while (i < n)
		{
			sum += va_arg(list_param, int);
			i++;
		}
	}

	/* Ending of the 'list_param' variadic */
	va_end(list_param);
}
