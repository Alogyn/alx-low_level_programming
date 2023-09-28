#include "main.h"

/*
 * Task 1. Why is it so important to dream? Because,
 * in my dreams we are together
 */

/**
  * _print_rev_recursion - Prints a string in reverse
  *
  * @s: Input string pointer (char)
  *
  * Return: None
  */

void _print_rev_recursion(char *s)
{
	/* Check the end of the string */
	if (*s != '\0')
	{
		/* Recall the function */
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
