#include <stdio.h>

/*
 * Task 2. The best argument against democracy is a five-minute conversation
 * with the average voter
 */

/**
  * main - Prints all arguments it receives
  *
  * @argc: Number of arguments
  * @argv: Array arguments pointer
  *
  * Return: Always 0 (Success)
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	/* Loop variable declaration */
	int i = 0;

	/* Print all arguments */
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
