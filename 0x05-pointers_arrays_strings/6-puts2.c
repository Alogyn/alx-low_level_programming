#include "main.h"

/*
 * Task 6. Half the lies they tell about me aren't true
 */

/**
  * puts2 - Beginning/Starting point
  *
  * @str: String pointer or argument
  *
  * Objectif: Print every other character of a string,
  * starting with the first character, followed by a new line
  *
  * Return: None
  */

void puts2(char *str)
{
	/* Variable declaration */
	int i, length = 0;

	/* String length counter loop */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print the other charahters */
	for (i = 0; i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
