#include "main.h"
/*
 * Task 4. isalpha
 */

/**
  * _isalpha - Beginning/Starting point
  *
  * @c: input character or argument
  *
  * Objectif: Check for alphabetic character
  *
  * Return: 1 if c is a letter, lowercase or uppercase
  * 0 otherwise
  */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
