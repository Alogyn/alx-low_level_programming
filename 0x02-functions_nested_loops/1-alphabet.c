#include <stdio.h>
#include "main.h"

/*
 * Task 1. I sometimes suffer from insomnia. And when I can't fall asleep,
 * I play what I call the alphabet game
 */

/**
  * print_alphabet - beginnin/Staring point
  *
  * Objectif: Print the alphabet, in lowercase, followed by a new line
  *
  * Return: Always 0 (True)
  */

void print_alphabet(void)
{
	/* Character Declaration */
	char alpha = 'a';

	/* Get and display all alphabet in lowercase */
	while (alpha <= 'z')
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
