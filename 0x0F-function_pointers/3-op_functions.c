#include "3-calc.h"

/*
 * Task 3. A goal is not always meant to be reached,
 * it often serves simply as something to aim at
 */

/**
  * op_add - Returns the sum of 'a' and 'b'
  *
  * @a: Input first number (int)
  * @b: Input second number (int)
  *
  * Return: Addition of 'a' and 'b'
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Returns the difference of 'a' and 'b'
  *
  * @a: Input first number (int)
  * @b: Input second number (int)
  *
  * Return: Difference of 'a' and 'b'
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Returns the product of 'a' and 'b'
  *
  * @a: Input first number (int)
  * @b: Input second number (int)
  *
  * Return: Multipication of 'a' and 'b'
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Returns the result of the division of 'a' and 'b'
  *
  * @a: Input first number (int)
  * @b: Input second number (int)
  *
  * Return: Division of 'a' and 'b'
  */

int op_div(int a, int b)
{
	/* Exclure the NULL value for b */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - eturns the remainder of the division of 'a' and 'b'
  *
  * @a: Input first number (int)
  * @b: Input second number (int)
  *
  * Return: Remainder of 'a / b '
  */

int op_mod(int a, int b)
{
	/* Exclure the NULL value for b */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
