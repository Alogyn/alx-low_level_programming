#include <stdio.h>
#include "main.h"

/*
 * Task 0. _putchar
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print _putchar, followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Get and display every character of the word */
	char display[] = "_putchar";
	
	/* Variable declaration */
	int i;

	/* Word character loop */
	for (i = 0; i < 8; i++)
	{
		_putchar(display[i]);
	}

	_putchar('\n');
	return (0);
}
