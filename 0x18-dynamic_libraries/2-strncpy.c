#include "main.h"

/*
 * Task 2. strncpy
 */

/**
  * _strncpy - Beginning/Starting point
  *
  * @src: Original string pointer or argument
  * @dest: Copy string pointer or argument
  * @n: Bytes number used from the string 'src'
  *
  * Objectif: Copy a string
  *
  * Return: The pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	/* Copy variable declaration */
	int copy = 0;

	/* Copying string loop */
	while (src[copy] != '\0' && copy < n)
	{
		dest[copy] = src[copy];
		copy++;
	}

	/* Write NULL Bytes with the rest of 'n' */
	while (copy < n)
	{
		dest[copy] = '\0';
		copy++;
	}

	return (dest);
}
