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
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int leet[] = {52, 51, 48, 55, 49};

	/* String characters loop */
	for (; *(str + encode) != '\0'; encode++)
	{
		/* Leet characters change loop */
		for (; i <= 4; i++)
		{
			/* Check the leet conditions characters */
			if (*(str + encode) == lower[i] ||
					*(str + encode) == upper[i])
			{
				*(str + encode) = leet[i];
				break;
			}
		}
	}

	return (str);
}
