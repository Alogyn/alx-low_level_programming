#include "main.h"

/*
 * 1. isdigit
 */

/**
  * _isdigit - Beginning/Starting point
  *
  * @c: Input number or argument
  *
  * Objectif: Check for a digit (0 through 9)
  *
  * Return: 1 if charcter is 'Digit', otherwise 0
  */

int _isdigit(int c)
{
	/* '0' == 48 and '9' == 57 in ASCII table */
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
