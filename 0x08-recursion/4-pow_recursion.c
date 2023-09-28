#include "main.h"

/*
 * Task 4. Once an idea has taken hold of the brain
 * it's almost impossible to eradicate
 */

/**
  * _pow_recursion - Returns the value of 'x' raised to the power of 'y'
  *
  * @x: Input number (int)
  * @y: Input power of the number 'x' (int)
  *
  * Return: Return 'x' powred by 'y'
  * -1 if y < 0
  */

int _pow_recursion(int x, int y)
{
	/* In case 'y' is positive */
	if (y > 0)
	{
		/* Recall the function and reduce 'y' by 1 till y == 0 */
		return (x * _pow_recursion(x, y - 1));
	}

	/* In case 'y' is NULL */
	else if (y == 0)
	{
		return (1);
	}

	/* In case 'y' is negative */
	else
	{
		return (-1);
	}
}
