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
	/* Check the identical characters */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* In case the two strings reach the identical end */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* In case the seconde string have '*' */
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* In case the first string end and the second end after the last '*' */
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
	{
		return (0);
	}

	return (0);
}
