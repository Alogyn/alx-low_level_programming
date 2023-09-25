#include "main.h"

/*
 * Task 2. strchr
 */

/**
  * _strchr - Locates a character 'c' in the string 's,
  * in case not found give 'NULL' in result
  *
  * @s: Input pointer to string (char)
  * @c: Located character in the string 's'
  *
  * Return: Pointer to the first occurrence of the character 'c'
  * in the string 's', or 'NULL' if the character is not found
  */

char *_strchr(char *s, char c)
{
	/* Locate character 'c' in 's' and return it */
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	/* In case 'c' is 'NULL' */
	if (c == '\0')
	{
		return (s);
	}

	/* In case 'c' not found in 's' */
	return ('\0');
}
