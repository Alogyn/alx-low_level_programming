#include <stdio.h>
#include <stdlib.h>

/*
 * Task (Advanced) 5. We must accept finite disappointment,
 * but never lose infinite hope
 */

int _putchar(char c);
int print_error(void);
int is_digit(char *str);
void mul(char *str1, char *str2);
int str_length(char *str);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

/**
  * main - Multiplies two positive numbers
  *
  * @argc: Input the argument number (int)
  * @argv: Input the Argument vector (char)
  *
  * Return: 0 if success, 98 if fail
  */

int main(int argc, char *argv[])
{
	/* Pointer declarations */
	char *num1 = argv[1];
	char *num2 = argv[2];

	/* Checking if the number of arguments correct */
	if (argc != 3 || is_digit(num1) || is_digit(num2))
		print_error();

	/* In case the two arguments are empty */
	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	/* In case are digits */
	else
		mul(num1, num2);
	return (0);
}

/**
  * print_error - Prints the error message
  *
  * Return: the functions exit()
  */

int print_error(void)
{
	/* Pointer and loop variables declarations */
	char *str;
	int i;

	/* Print error message */
	str = "Error";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	exit(98);
}

/**
  * is_digit - Checks if the string is digit or no
  *
  * @str: Input pointer string (char)
  *
  * Return: Always 0 (Success)
  */

int is_digit(char *str)
{
	/* Check if the string is a number */
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
  * mul - Multiplies two integers
  *
  * @str1: Input first string (char)
  * @str2: Input second string (char)
  *
  * Return: None
  */

void mul(char *str1, char *str2)
{
	/* Pointers and loops and variables declarations */
	int i, len1, len2, total_length, digit1, digit2, result = 0, tmp;
	char *ptr;
	void *temp;

	len1 = str_length(str1);
	len2 = str_length(str2);
	tmp = len2;
	total_length = len1 + len2;
	/* Allocate memory */
	ptr = _calloc(sizeof(int), total_length);
	temp = ptr;

	for (len1--; len1 >= 0; len1--)
	{
		digit1 = str1[len1] - '0';
		result = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			digit2 = str2[len2] - '0';
			result += ptr[len2 + len1 + 1] + (digit1 * digit2);
			ptr[len1 + len2 + 1] = result % 10;
			result /= 10;
		}
		if (result)
			ptr[len1 + len2 + 1] = result % 10;
	}
	while (*ptr == 0)
	{
		ptr++;
		total_length--;
	}
	for (i = 0; i < total_length; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
  * str_length - Countes the number of characters
  *
  * @str: Input the string (char)
  *
  * Return: The value of 'i'
  */

int str_length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
  * _memset - Fills memory with constant Bytes
  *
  * @s: Input pointer string (char)
  * @b: Input character (char)
  * @n: Input the number of Bytes (int)
  *
  * Return: The value of 's'
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
  * _calloc - Allocates memory for an array of' nmemb' elements of 'size' bytes
  * each and returns a pointer to the allocated memory
  *
  * @nmemb: Input number of elements (int)
  * @size: Input  size of bytes (int)
  *
  * Return: The pointer to the allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
