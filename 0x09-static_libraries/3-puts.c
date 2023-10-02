#include "main.h"

/*
 * Task 3. I do not fear computers. I fear the lack of them
 */

/**
  * _puts - Beginning/Starting point
  *
  * @str: Pointer or argument
  *
  * Objectif: Print a string, followed by a new line, to stdout
  *
  * Return: None
  */

void _puts(char *str)
{
	/* Loop to Print every character from the string */
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
