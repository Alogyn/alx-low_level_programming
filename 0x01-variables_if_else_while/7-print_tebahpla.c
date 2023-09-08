#include <stdio.h>

/*
 * Task 7. Smile in the mirror
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print the lowercase alphabet in reverse, followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "letter" with the start value 'z' */
	char letter = 'z';

	/* Get and print alphabet from 'z' to 'a' */
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
