#include "main.h"

/*
 * Task 3. strspn
 */

/**
  * _strspn - Get the length of a prefix substring
  *
  * @s: Input pointer to string (char)
  * @accept: Number of Bytes accepted
  *
  * Return: The number of bytes in the initial segment of 's'
  * which consist only of bytes from 'accept'
  */

unsigned int _strspn(char *s, char *accept)
{
	/* Loops and breaker variables declaration */
	unsigned int length = 0, checker;
	bool breaker;

	/* Length counter loop */
	while (*s != '\0')
	{
		/* Initializing variables */
		checker = 0;
		breaker = false;
		/* Checker 'accept' loop */
		while (accept[checker] != '\0')
		{
			/* Finding consist char */
			if (*s ==  accept[checker])
			{
				breaker = true;
				break;
			}
			checker++;
		}

		/* in case not consist char */
		if (breaker == false)
		{
			break;
		}
		s++;
		length++;
	}

	return (length);
}
