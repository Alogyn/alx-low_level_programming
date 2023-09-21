#include "main.h"
#include <stdio.h>

/*
 * Task (Advanced) 12. Noise is a buffer,
 * more effective than cubicles or booth walls
 */

/**
  * print_buffer - Beginning/Starting point
  *
  * @b: Input number pointer or argument
  * @size: Size of the pointer
  *
  * Objectif: Print a buffer
  *
  * Return: None
  */

void print_buffer(char *b, int size)
{
	/* offset = chunk tracker, i = loop variable, c = characters */
	int offset = 0, i, c;

	/* Empty/Invalid buffer */
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (offset < size)
	{
		/* Print in the buffer hexadicimal */
		printf("%08x: ", offset);
		for (i = 0; i < 10 && (offset + i) < size; i++)
		{
			printf("%02x", *(b + offset + i));
			if (i % 2)
				printf(" ");
		}
		for (; i < 10; i++)
		{
			printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < 10 && (offset + i) < size; i++)
		{
			c = *(b + offset + i);
			if (c < 32 || c > 126)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		offset += 10;
	}
}
