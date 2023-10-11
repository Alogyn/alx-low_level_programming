#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Task (Advanced) 4. Most hackers are young because young people
 * tend to be adaptable. As long as you remain adaptable,
 * you can always be a good hacker
 */

/**
  * main - Prints the opcodes of its own main function
  *
  * @argc: Number of arguments (int)
  * @argv: Array arguments (char)
  *
  * Return: '0' if success, '1' if incorrect arguments number,
  * '2' if negative number of Bytes
  */

int main(int argc, char *argv[])
{
	/* Pointer loop and variable declarations */
	char *m = (char *) main;
	int i, numbytes;

	/* Checks if the correct number of arguments is provided */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Converts the argument to an integer */
	numbytes = atoi(argv[1]);

	/* Checks if the number of bytes is negative */
	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Prints the opcodes of the main function */
	for (i = 0; i < numbytes; i++)
	{
		printf("%02x", m[i] & 0XFF);

		if (i != numbytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
