#include "function_pointers.h"

/*
 * Task 0. What's my name
 */

/**
  * print_name - Prints a name
  *
  * @name: Input the name (char)
  * @f: Pointer to the function (void)
  *
  * Return: None
  */

void print_name(char *name, void (*f)(char *))
{
	/* Checks if the 'name' and the pointer '*f' are not empty */
	if (name != NULL && f != NULL)
	{
		/* The function pointer */
		f(name);
	}
}
