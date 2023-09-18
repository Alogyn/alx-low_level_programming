#include "main.h"

/*
 * Task 1. Don't swap horses in crossing a stream
 */

/**
  * swap_int - Beginning/Starting point
  *
  * @a: Fiorst pointer or argument
  * @b: Second pointer or argument
  *
  * Objectif: Swap the values of two integers
  *
  * Return: None
  */

void swap_int(int *a, int *b)
{
	/* Declaration of memory variable */
	int memory;

	/* Swap the values of 'a' and 'b' */
	memory = *b;
	*b = *a;
	*a = memory;
}
