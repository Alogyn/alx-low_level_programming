#include "variadic_functions.h"

/*
 * Task 1. To be is to be the value of a variable
 */

/**
  * print_numbers - Prints numbers, followed by a new line
  *
  * @separator: The string to seprate two integers (char)
  * @n: The number of arguments (int)
  *
  * Return: None
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_num;
	unsigned int i = 0;

	va_start(print_num, n);

	if (separator == NULL)
	{
		separator = "";
	}

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(print_num, int));
		}

		else
		{
			printf("%d", va_arg(print_num, int));
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
	va_end(print_num);
}
