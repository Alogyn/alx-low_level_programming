#include <stdio.h>

/*
 * Task 2.I sometimes suffer from insomnia. And when I can't fall asleep,
 * I play what I call the alphabet game
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print the alphabet in lowercase, followed by a new line
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
	putchar('\n');
	return (0);
}
