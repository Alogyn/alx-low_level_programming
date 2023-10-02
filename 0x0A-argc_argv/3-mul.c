#include <stdio.h>
#include <stdlib.h>

/*
 * Task 3. Neither irony nor sarcasm is argument
 */

/**
  * main - Multiplies two numbers
  *
  * @argc: Number of arguments
  * @argv: Array arguments pointer
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	/* Multiplication variable declaration */
	int mul;

	/* Checks if there is two arguments */
	if (argc == 3)
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%i\n", mul);
	}

	/* Display eror otherwise */
	else
	{
		printf("Error\n");
	}

	return (0);
}
