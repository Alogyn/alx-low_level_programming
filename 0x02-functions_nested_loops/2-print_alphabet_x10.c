#include <stdio.h>
#include "main.h"

/*
 * Task 2. 10 x alphabet
 */

/**
  * print_alphabet_x10 - Beginning/Starting point
  *
  * Objectif: Print 10 times the alphabet, in lowercase, followed by a new line
  *
  * Return: Always 0 (True)
  */

void print_alphabet_x10(void)
{
	/* Vasriables declariation */
	int i;
	char alpha;

	/* Repetition times loop */
	for (i = 0; i < 10; i++)
	{
		/* Alpahbet loop */
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
