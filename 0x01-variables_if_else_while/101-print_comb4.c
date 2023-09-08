#include <stdio.h>

/*
 * Task (Advanced) 11. The success combination in business is:
 * Do what you do better... and: do more of what you do...
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: print all possible different combinations of three digits
  * Numbers must be separated by ,, followed by a space
  * The three digits must be different
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Declaring the variable "i" with the value '0' */
	int i = 0;

	/* Declaring the variables 'j' and 'k' */
	int j, k;

	/* Get the first digit from 0 to 7 */
	while (i <= 7)
	{
		/* Get the second digit greater than the first one */
		j = i + 1;
		/* Get the first digit from 'i + 1' to 8 */
		while (j <= 8)
		{
			/* Get the thrid digit greater than the second one */
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				/* if 'i # 7' and 'j # 8' and 'k # 9', print ',' and space */
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
