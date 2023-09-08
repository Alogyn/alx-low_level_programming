#include <stdio.h>

/*
 * Task (Advanced) 10. Inventing is a combination of brains and materials.
 * The more brains you use, the less material you need
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print all possible different combinations of two digits
  * Numbers must be separated by ,, followed by a space
  * The two digits must be different
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "i" with the value '0' */
	int i = 0;

	/* Declaring the variable "j" with the value '0' */
	int j = 0;

	/* Get the first digit from 0 to 8 */
	while (i <= 8)
	{
		/* Get the second digit greater than the first one */
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}
