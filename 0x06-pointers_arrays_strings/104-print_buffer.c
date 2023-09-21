#include "main.h"

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
	/* Variables declarations */
	int i, j, k;

	if (size > 0)
	{
		while (i < size)
		{
			printf("%.8x:", i);
			j = i;
			while (j < i)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf("  ");
				j++;
			}
			printf(" ");
			k = i;
			while (k < i + 10)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
				k++;
			}
			i = i + 10;
		}
	}
}
