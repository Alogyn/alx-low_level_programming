#include "main.h"

/*
 * Task 2. Dreams feel real while we're in them.
 * It's only when we wake up that we realize something was actually strange
 */

/**
  * _strlen_recursion - Returns the length of a string
  *
  * @s: Input string pointer (char)
  *
  * Return: The length of the string 's'
  */

int _strlen_recursion(char *s)
{
	/* Check the end of the string */
	if (*s != '\0')
	{
		/* Every recall will add 1 in counting */
		return (1 + _strlen_recursion(s + 1));
	}

	/* End of string */
	else
	{
		return (0);
	}
}
