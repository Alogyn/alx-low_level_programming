#include "main.h"

/*
 * Task 0 She locked away a secret, deep inside herself,
 * something she once knew to be true... but chose to forget
 */

/**
  * _puts_recursion - Prints a string, followed by a new line
  *
  * @s: Input string pointer (char)
  *
  * Return: None
  */

void _puts_recursion(char *s)
{
	/* Print the characters from the string */
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	/* Retrun to line if no characters left */
	else
	{
		_putchar('\n');
	}
}
