#include "main.h"

/*
 * Task 5. strstr
 */

/**
  * _strstr - Finds the first occurrence of the substring 'needle'
  * in the string 'haystack'. The terminating null bytes (\0) are not compared
  *
  * @haystack: Input pointer to string (char)
  * @needle: Occurrence of the substring (char)
  *
  * Return: Pointer to the beginning of the located substring,
  * or NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	/* pointers declarations */
	char *sub, *check;

	/* Occurrence of the substring 'needle' in the string 'haystack' */
	while (*haystack != '\0')
	{
		/* Initializing the pointers */
		sub = haystack;
		check = needle;

		/* Checking and return the char occured */
		while (*check != '\0' && *haystack == *check)
		{
			haystack++;
			check++;
		}

		/* Check the char pointed to by the pointer n is the null */
		if (!*check)
		{
			return (sub);
		}
		haystack++;
	}

	/* In cas nothing found */
	return ('\0');
}
