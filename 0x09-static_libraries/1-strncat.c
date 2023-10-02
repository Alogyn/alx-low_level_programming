#include "main.h"

/*
 * Task 1. strncat
 */

/**
  * _strncat - Beginning/Starting point
  *
  * @src: Original string pointer or argument
  * @dest: Append.v2 string pointer or argument
  * @n: Byts number used from the string 'src'
  *
  * Objectif: Concatenate two strings
  *
  * Return: The pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	/* Append variable declaration */
	int append = 0;
	/* String size count variable declaration */
	int count = 0;

	/* String size count loop */
	while (dest[count] != '\0')
	{
		count++;
	}

	/* Concatenates two strings */
	for (; append < n && src[append] != '\0'; append++)
	{
		dest[append + count] = src[append];
	}

	/* Terminating null byte */
	dest[append + count] = '\0';

	return (dest);
}
