#include "main.h"

/*
 * Task 0. memset
 */

/**
  * _memset - Fills the first 'n' bytes of the memory area pointed to by
  * 's' with the constant byte 'b'
  *
  * @s: Input pointer to memory area (char)
  * @b: Input constant byte (char)
  * @n: Input the Bytes filled (unsigned int)
  *
  * Return: Pointer to 's'
  */

char *_memset(char *s, char b, unsigned int n)
{
	/* Loop variable declaration */
	unsigned int fill = 0;

	/* Resoring value of b in char 's' pointer */
	while (fill < n)
	{
		*(s + fill) = b;
		fill++;
	}
	return (s);
}
