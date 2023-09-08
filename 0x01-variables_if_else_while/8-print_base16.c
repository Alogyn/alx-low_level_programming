#include <stdio.h>

/*
 * Task 8. Hexadecimal
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print all the numbers of base 16 in lowercase,
  * followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "hexa" with the value '0' */
	char hexa = '0';

	/* Get the number from 0 to 9 */
	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}

	/* Declaring the variable "hexa" with the value 'a' */
	char hexa = 'a';

	/* Get the alphabet from 'a' to 'f' */
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
