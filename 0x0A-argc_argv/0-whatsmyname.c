#include <stdio.h>

/*
 * Task 0. It ain't what they call you, it's what you answer to
 */

/**
  * main - Prints its name, followed by a new line
  *
  * @argc: Number of arguments
  * @argv: Array Arguments pointer
  *
  * Return: Always 0 (Succes)
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	/* Print the file name */
	printf("%s\n", argv[0]);
	return (0);
}
