#include "main.h"

/*
 * Task (Advanced) 8. Inception. Now, before you bother telling me
 * it's impossible...
 */

/**
  * wildcmp - Compares two strings and returns 1 if the strings can be
  * considered identical, otherwise return 0
  *
  * @s1: First string (char)
  * @s2: Second string (char)
  *
  * Return: 1 if the two strings are identical, 0 if not
  */

int wildcmp(char *s1, char *s2)
{
	/* In case both strings are empty */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* The current charcters s1 match the s2 or '*' */
	if (*s2 == '*' || *s1 == *s2)
	{
		return ((*s1 != '\0' && *s2 == '*') ? (wildcmp(s1 + 1, s2) ||
				wildcmp(s1, s2 + 1)) : wildcmp(s1 + 1, s2 + 1));
	}
	/* In case no match found */
	return (0);
}
