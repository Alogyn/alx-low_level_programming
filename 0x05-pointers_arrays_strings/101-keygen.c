#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Task (Advanced) 11. Don't hate the hacker, hate the code
 */

/**
  * main - Beginning/Starting point
  *
  * Objectif: Generate random valid passwords for the program 101-crackme
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Track the sum variable */
	int sum = 0;
	/* Generated random value variable */
	int random = 0;
	/* Varaible declaration */
	time_t seed;

	/* Random number generator with the current time */
	srand((unsigned int)time(&seed));

	while (sum < 2772)
	{
		/* Random value between 0 and 127 */
		random = rand() % 128;
		/* Stop if the sum exceeds 2772 */
		if (sum + random > 2772)
		{
			break;
		}
		sum = sum + random;
		/* Print the random value as a character */
		printf("%c", random);
	}
	/* Print the difference to reach 2772 */
	printf("%c\n", (2772 - sum));
	return (0);
}
