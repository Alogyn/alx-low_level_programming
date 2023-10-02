#include <stdio.h>

/*
 * Task 1. Silence is argument carried out by other means
 */


/**
  * main - Prints the number of arguments passed into it
  *
  * @argc: Number of arguments
  * @argv: Array arguments pointer
  *
  * Return: Always 0 (Succes)
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	/* Print the number of arguments */
	printf("%i\n", argc - 1);
	return (0);
}
