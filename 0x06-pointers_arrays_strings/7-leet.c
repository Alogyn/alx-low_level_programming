#include "main.h"

/*
 * Task 7. Mozart composed his music not for the elite, but for everybody
 */

/**
  * leet - Beginning/Starting point
  *
  * @str: Input string pointer or argument
  *
  * Objectif: Encode a string into 1337
  *
  * Return: The string encoded to leet numbers
  */

char *leet(char *str)
{
	/* Arrays and variables declarations */
	int encode = 0, i = 0;
	char letter = "aAeEoOtTlL";
	char leet = "4433007711";

	/* String characters loop */
	for (; str[encode] != '\0'; encode++)
	{
		/* Leet characters change loop */
		for (; letter[i] != ''\0'; i++)
		{
			/* Check the leet conditions characters */
			if (str[encode] == letter[i])
			{
				str[encode] = leet[i];
				break;
			}
		}
	}

	return (str);
}
