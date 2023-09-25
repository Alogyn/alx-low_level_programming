#include "main.h"

/*
 * Task 1. memcpy
 */

/**
  * _memcpy - Copies 'n' bytes from memory area 'src' to memory area 'dest'
  *
  * @dest: Output pointer to a memory area (char)
  * @src: Input pointer to a memory area (char)
  * @n: Input the Bytes copied (insigned int)
  *
  * Return: Pointer to 'dest'
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Copy loop Variable declaration */
	unsigned int copy = 0;

	/* Copying 'n' bytes from 'src' to 'dest' */
	while (copy < n)
	{
		*(dest + copy) = *(src + copy);
		copy++;
	}

	return (dest);
}
