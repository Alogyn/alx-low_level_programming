#include <stdio.h>

/*
 * Task 4. When I was having that alphabet soup,
 * I never thought that it would pay off
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print  the alphabet in lowercase, followed by a new line,
  * except q and e
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
		/* Print All letters except 'q' ans 'e' */
		if (letter != q && letter != e)
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
