#include "main.h"

/*
 * Task 4. strpbrk
 */

/**
  * _strpbrk - Locates the first occurrence in the string 's' of any of
  * the bytes in the string 'accept'
  *
  * @s: Input pointer to string (char)
  * @accept: Searched Bytes (char)
  *
  * Return: The pointer to the byte in 's' that matches one of
  * the bytes in 'accept', or 'NULL' if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	/* Loops, checker and breaker variables declarations */
	unsigned int search = 0, check;

	/* Searching in string 's' */
	while (*(s + search) != '\0')
	{
		/* Checking the occurrence characters */
		check = 0;
		while (*(accept  + search) != '\0')
		{
			if (*(s + search) == *(accept + check))
			{
				return (s + search);
			}
			check++;
		}
		search++;
	}

	return ('\n');
}
