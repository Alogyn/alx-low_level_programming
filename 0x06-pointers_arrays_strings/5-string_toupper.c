#include "main.h"

/*
 * Task 5. Always look up
 */

/**
  * string_toupper - Beginning/Starting point
  *
  * @str: Input string pointer or argument
  *
  * Objectif: Change all lowercase letters of a string to uppercase
  *
  * Return: TThe characters in the uppercase form
  */

char *string_toupper(char *str)
{
	/* Loop variable declaration */
	int change = 0;

	/* Changing lowercase characters to uppercase characters loop */
	for (; str[change] != '\0'; change++)
	{
		/* Cheking the ASCII table */
		if (str[change] > 96 && str[change] < 123)
		{
			str[change] = str[change] - 32;
		}
	}

	return (str);
}
