#include "main.h"

/*
 * Task 2. This report, by its very length,
 * defends itself against the risk of being read
 */

/**
  * _strlen - Beginning/Starting point
  *
  * @s: pointer or argument
  *
  * Objectif: Return the length of a string
  *
  * Return: Length of a string
  */

int _strlen(char *s)
{
	/* Variable declaration to count the length of a string */
	int length = 0;

	/* Count loop */
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
