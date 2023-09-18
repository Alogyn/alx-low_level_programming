#include "main.h"

/*
 * Task 7. Winning is only half of it. Having fun is the other half
 */

/**
  * puts_half - Beginning/Starting point
  *
  * @str: String pointer or argument
  *
  * Objectif: Print half of a string, followed by a new line
  *
  * Return: None
  */

void puts_half(char *str)
{
	/* Variable declaration */
	int length = 0;

	/* String length counter loop */
	while (str[length] != '\0')
	{
		length++;
	}

	/* The number of characters is even */
	if (length % 2 == 0)
	{
		/* Print Half of characters */
		for (length /= 2; str[length] != 0; length++)
		{
			_putchar(str[length]);
		}
	}

	/* The number of characters is odd */
	else
	{
		/* Print Half of characters */
		for (length = ((length - 1) / 2); str[length] != 0; length++)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
