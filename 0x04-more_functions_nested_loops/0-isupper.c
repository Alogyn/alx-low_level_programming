#include "main.h"

/*
 * Task 0. isupper
*/

/**
  * _isupper - Beginning/Starting point
  *
  * @c: Input character or argument
  *
  * Objectif: Check for uppercase character
  *
  * Return: 1 if character is 'Uppercase', else 0
  *
  */

int _isupper(int c)
{
	/* 'A' == 65 and 'Z == 90 in ASXII table */
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
