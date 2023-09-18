#include "main.h"

/*
 * Task 9. strcpy
 */

/**
  * _strcpy - Beginning/Starting point
  *
  * @dest: Copy of string pointer or argument
  * @src: Original string pointer or argument
  *
  * Objectif: Copy the string pointed to by src,
  * including the terminating null byte (\0), to the buffer pointed to by dest
  *
  * Return: The pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	/* Variable declaration */
	int i = 0, j = 0;

	/* Array loop */
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++
	}
	dest[j] = '\0';
	return (dest);
}
