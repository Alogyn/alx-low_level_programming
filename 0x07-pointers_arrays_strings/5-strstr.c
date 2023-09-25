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
	/* Loops variablesa declarations */
	unsigned int sub = 0, check;

	/* */
	while (*(needle + sub) != '\0')
	{
		/* */
		check = 0;
		while (*(haystack + check) != '\0')
		{
			if (*(needle + sub) == *(haystack + check))
			{
				return (needle + sub);
			}
			check++;
		}
		sub++;
	}

	/* In cas nothing found */
	return ('\0');
}
