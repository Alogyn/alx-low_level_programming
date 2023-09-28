#include <unistd.h>

/**
  * _putchar - Prints the characaters of a string
  *
  * @c: Input Character (char)
  *
  * Return: The character 'c'
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
