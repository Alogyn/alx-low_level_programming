#include <stdio.h>
#include <stdlib.h>

/*
 * Task (Advanced) 5. Minimal Number of Coins for Change
 */

/**
  * main - Prints the minimum number of coins to make change
  * for an amount of money
  *
  * @argc: Number of arguments
  * @argv: Array arguments pointer
  *
  * Return: 0 if successed, 1 if error
  */

int main(int argc, char *argv[])
{
	/*Loop and coin number variables declaration */
	int i, sum = 0;

	/* Checks if theres no arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Amount of coins to change */
	i = atoi(argv[1]);
	while (i > 0)
	{
		/* 25 cents condition */
		if (i >= 25)
		{
			i -= 25;
		}
		/* 10 cents condition */
		else if (i >= 10)
		{
			i -= 10;
		}
		/* 5 cents condition */
		else if (i >= 5)
		{
			i -= 5;
		}
		/* 1 cent condition */
		else if (i >= 1)
		{
			i -= 1;
		}
		sum += 1;
	}

	printf("%d\n", sum);
	return (0);
}
