#include <stdio.h>

/*
 * Task (Advanced) 12. Software is eating the World
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Print all possible combinations of two two-digit numbers
  * The numbers should range from 0 to 99
  * The two numbers should be separated by a space
  * The combination of numbers must be separated by comma, followed by a space
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "i" with the value '0' */
	int i = 0;

	/* Declaring the variables 'j' */
	int j;

	/* Get the first digit from 0 to 98 */
	while (i <= 98)
	{
		/* Get the second digit greater than the first one */
		j = i + 1;
		/* Get the first digit from 'i + 1' to 99 */
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			/* if 'i # 98' and ' j # 99', print ',' and the space */
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
