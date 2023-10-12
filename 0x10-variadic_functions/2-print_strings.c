#include "variadic_functions.h"

/*
 * Task 2. One woman's constant is another woman's variable
 */

/**
  * print_strings - Prints strings, followed by a new line
  *
  * @separator: The string to seprate two integers (char)
  * @n: The number of arguments (int)
  *
  * Return: None
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* Variadic, pointer and loop variable declarations */
	va_list print_str;
	unsigned int i = 0;
	char *str;

	/* Beginning of the 'print_str' variadic */
	va_start(print_str, n);

	/* In case 'separator' is empty */
	if (separator == NULL)
	{
		separator = "";
	}

	/* In case 'n' valid, checks and prints the characters */
	while (i < n)
	{
		str = va_arg(print_str, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}

		printf("%s", str);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");

	/* Ending of the 'print_str' variadic */
	va_end(print_str);
}
