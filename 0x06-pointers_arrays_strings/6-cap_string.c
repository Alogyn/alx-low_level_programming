#include "main.h"

/*
 * Task 6. Expect the best. Prepare for the worst. Capitalize on what comes
 */

/**
  * cap_string - Beginning/Starting point
  *
  * @str: Input string pointer or argument
  *
  * Objectif: Capitalize all words of a string
  *
  * Return: The string after capitalizing all words
  */

char *cap_string(char *str)
{
	/* Capitalizing variable declaration */
	int cap = 0;

	/* Capitalizing loop */
	while (str[cap] != '\0')
	{
		/* Check various delimiters */
		if (str[cap - 1] == '.' || str[cap - 1] == ' ' ||
				str[cap - 1] == ',' || str[cap - 1] == '\n' ||
				str[cap - 1] == '\t' || str[cap - 1] == '!' ||
				str[cap - 1] == '?')
		{
			if (str[cap] > 96 && str[cap] < 123)
			{
				str[cap] = str[cap] - 32;
			}
		}
		cap++;
	}

	return (str);
