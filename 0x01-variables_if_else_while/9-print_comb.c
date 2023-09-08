#include <stdio.h>

/*
 * Task 9. Patience, persistence and perspiration make an unbeatable
 * combination for success
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print all possible combinations of single-digit numbers
  * Numbers must be separated by ,, followed by a space
  * Numbers should be printed in ascending order
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "single_digit" with the value '0' */
	int sdigit = '0';

	/* Get numbers from 0 to 9 */
	while (sdigit <= '9')
	{
		putchar('sdigit');
		putchar(',');
		putchar(' ');
		sdigit++;
	}
	putchar('\n');
	return (0);
}
