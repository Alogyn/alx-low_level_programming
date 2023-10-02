#include "main.h"

/*
 * Task 6. There is no such thing as absolute value in this world.
 * You can only estimate what a thing is worth to you
 */

/**
  * _abs - Beginning/Starting point
  *
  * @n: Input number or argument
  *
  * Objectif: Compute the absolute value of an integer
  *
  * Return: Absolut value of n
  */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
