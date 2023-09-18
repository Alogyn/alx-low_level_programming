#include "main.h"

/*
 * Task 5. A good engineer thinks in reverse and asks himself about
 * the stylistic consequences of the components and systems he proposes
 */

/**
  * rev_string - Beginning/Starting point
  *
  * @s: Pointer or argument
  *
  * Objectif: Reverse a string
  *
  * Return: None
  */

void rev_string(char *s)
{
	/* Variables declarations */
	int length = 0;
	char *beg, *end, swap;

	/* String length counter loop */
	while (s[length] != '\0')
	{
		length++;
	}
	/* Swap the characters string */
	beg = s;
	end = legnth - 1;

	while (beg < end)
	{
		swap = *end;
		*end = *beg;
		*beg = swap;
		beg++;
		end--;
	}
}

