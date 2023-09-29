#include "main.h"

/*
 * Task (Advanced) 7. They say we only use a fraction of our brain's
 * true potential. Now that's when we're awake. When we're asleep,
 * we can do almost anything
 */

int string_checker(char *s, int start, int end);
int string_length(char *s);

/**
  * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
  *
  * @s: Input string pointer (char)
  *
  * Return: 1 if the string is palindrome, 0 if not
  */

int is_palindrome(char *s)
{
	/* In case the string is empty */
	if (*s == '\0')
	{
		return (1);
	}

	/* Functions call to check the palindrome condition */
	return (string_checker(s, 0, string_length(s) - 1));
}

/**
  * string_checker - Check the charcters if the palindrome exist or not
  *
  * @s: insput string (char)
  * @start: Number of the beginning characters (int)
  * @end: Number of the ending characters (int)
  *
  * Return: 1 if the palindrome exist, 0 if not
  */

int string_checker(char *s, int start, int end)
{
	/* Check the starting and ending characters of a string */
	if (*(s + start) == *(s + end))
	{
		/* Check if the characters have palindrome */
		if (start == end || start == end + 1)
		{
			return (1);
		}
		/* Recall the checker function */
		return (0 + string_checker(s, start + 1, end - 1));
	}
	return (0);
}

/**
  * string_length - Calculing the length of the string 's'
  *
  * @s: Input string (char)
  *
  * Return: The length of the string
  */

int string_length(char *s)
{
	/* Calculing the string length */
	if (*s != '\0')
	{
		return (1 + string_length(s + 1));
	}

	/* In case we reach the end of the string */
	else
	{
		return (0);
	}
}
