#include "main.h"

/*
 * Task 3. strspn
 */

/**
  * _strspn - Get the length of a prefix substring
  *
  * @s: Input pointer to string (char)
  * @accept: Accepted Bytes (char)
  *
  * Return: The number of bytes in the initial segment of 's'
  * which consist only of bytes from 'accept'
  */

unsigned int _strspn(char *s, char *accept)
{
	/* Loops and breaker variables declaration */
	unsigned int length = 0, checker, breaker;

	/* Length counter loop */
	while (*(s + length) != '\0')
	{
		/* Initializing variables */
		checker = 0;
		breaker = 1;
		/* Checker 'accept' loop */
		while (accept[checker] != '\0')
		{
			/* Finding consist char */
			if (*(s + length) ==  accept[checker])
			{
				breaker = 0;
				break;
			}
			checker++;
		}

		/* In case not consist char */
		if (breaker == 1)
		{
			break;
		}
		length++;
	}

	return (length);
}
