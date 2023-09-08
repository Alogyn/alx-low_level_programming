#include <stdio.h>

/*
 * Task 6. Numberz
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print all single digit numbers of base 10 starting from 0,
  * followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "number" with the value '0' */
	int number = 0;

	while (number < 10)
	{
		printf(number);
		number++;
	}
	printf("\n");
	return (0);
}
