#include <stdio.h>
#include "main.h"

/*
 * Task 11. 98 Battery Street, the OG
 */

/**
  * print_to_98 - Beginning/Starting point
  *
  * @n: Input Number or argument
  *
  * Objectif: Print all natural numbers from n to 98, followed by a new line
  *
  * Return: None
  */

void print_to_98(int n)
{
	/* Count variable declaration */
	int run;

	if (n < 98)
	{
		for (run = n; run < 98; run++)
		{
			printf("%i, ", run);
		}
	}
	else if (n > 98)
	{
		for (run = n; run > 98; run--)
		{
			printf("%i, ", run);
		}
	}
	if (run == 98)
	{
		printf("98\n");
	}
}
