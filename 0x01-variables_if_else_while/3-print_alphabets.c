#include <stdio.h>

/* Task 3. alphABET*/

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print the alphabet in lowercase, and then in uppercase,
  * followed by a new line
  *
  * Return: Always 0 (True)
  */
int main(void)
{
	/* Declaring the variable "letter" with the start value 'a' */
	char letter = 'a';

	/* Get alphabet from 'a' to 'z' */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	/* Get alphabet from 'A' to 'Z' */
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
