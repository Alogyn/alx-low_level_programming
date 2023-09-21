#include "main.h"

/*
 * Task (Advanced) 8. rot13
 */

/**
  * rot13 - Beginning/Starting point
  *
  * @str: Input string pointer or argument
  *
  * Objectif: Encode a string using rot13
  *
  * Return: The string encoded to rot13 characters
  */

char *rot13(char *str)
{
	/* Arrays and variables declarations */
	int encode = 0, i;
	 /* Change string characters to rot13 loop */
	while (str[encode] != '\0')
	{
		/* Check the string characters conditions */
		while ((str[encode] > 64 && str[encode] < 91) ||
				(str[encode] > 96 && str[encode] < 123))
		{
			/* Reduce 13 points characters for N/n +  */
			str[encode] -= 13;

			/* Correcte the char value if character is wrong */
			if ((str[encode] > 51 && str[encode] < 65) ||
					(str[encode] > 83 && str[encode] < 97))
			{
				str[encode] += 26;
			}
			break;
		}
		encode++;
	}

	return (str);
}
