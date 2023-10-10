#include <stdio.h>

/*
 * Task 2. File name
 */

/**
  * main - Prints the name of the file it was compiled from,
  * followed by a new line
  *
  * Return: Always 0 (True)
  */

int main(void)
{
	/* Getting the filename from predefined Macros */
	printf("%s\n", __FILE__);
	return (0);
}
