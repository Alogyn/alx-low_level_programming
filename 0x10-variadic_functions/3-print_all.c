#include "variadic_functions.h"

/*
 * Task 3. To be is a to be the value of a variable
 */

/**
  * print_all - Prints anything
  *
  * @format: List of types of arguments passed to the function
  *
  * Return: None
  */

void print_all(const char * const format, ...)
{
	/* Variadic, pointer and loop variable declarations */
	va_list print_any;
	unsigned i = 0;
	char *str;

	va_start(print_any, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print_any, int));
				break;
			case 'i':
				printf("%i", va_arg(print_any, int));
				break;
			case 'f':
				printf("%f", va_arg(print_any, double));
				break;
			case 's':
				str = va_arg(print_any, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(print_any);
}
