#include <stdio.h>
#include "main.h"

/*
 * Task 3. islower
 */

/**
  * _islower -  Beginning/Starting point
  *
  * @c: input character or argument
  *
  * Objectif: Check for lowercase character
  *
  * Return: 1 if character  lowercase
  * 0 if otherwise
  */

int _islower(int c)
{
	/* Condition if 'C' is between 'a' and 'z' */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
