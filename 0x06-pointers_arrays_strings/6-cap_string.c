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

	/* First character in 'str' */
	if (str[0] > 96 && str[0] < 123)
	{
		str[cap] -= 32;
		cap++;
	}

	/* Capitalizing loop */
	while (str[cap] != '\0')
	{
		/* Check various delimiters */
		if (str[cap] == 9 || str[cap] == 10 ||
				str[cap] == 32 || str[cap] == 33 ||
				str[cap] == 34 || str[cap] == 40 ||
				str[cap] == 41 || str[cap] == 44 ||
				str[cap] == 46 || str[cap] == 59 ||
				str[cap] == 63 || str[cap] == 123 ||
				str[cap] == 125)
		{
			if (str[cap + 1] > 96 && str[cap + 1] < 123)
			{
				str[cap + 1] -= 32;
			}
		}
		cap++;
	}

	return (str);
}
