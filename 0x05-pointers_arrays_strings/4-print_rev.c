#include "main.h"

/*
 * Task 4. I can only go one way. I've not got a reverse gear
 */

/**
  * print_rev - beginning/Starting point
  *
  * @s: Pointer or argument
  *
  * Objectif: Print a string, in reverse, followed by a new line
  *
  * Return: None
  */

void print_rev(char *s)
{
	/* Declaration for the length string counter variable */
	int i, length = 0;

	/* Counter length loop */
	while (*s != '\0')
	{
		++length;
		++s;
	}

	/* Print the string character loop */
	for (i = length; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
