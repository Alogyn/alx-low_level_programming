#include <stdio.h>

/*
 * Task 9. Patience, persistence and perspiration make an unbeatable
 * combination for success
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print all possible combinations of single-digit numbers
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "single_digit" with the value '0' */
	int singledigit = '0';

	/* Get numbers from 0 to 9 */
	while (singledigit <= '9')
	{
		putchar('singledigit');
		putchar(',');
		putchar(' ');
		singledigit++;
	}
	putchar('\n');
	return (0);
}
