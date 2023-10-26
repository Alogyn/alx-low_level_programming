#include "main.h"

/*
 * Task 2. 10
 */

/**
  * get_bit - Returns the value of a bit at a given index
  *
  * @n: The number to extract the bit from (long int)
  * @index: The index of the bit, starting from 0 (int)
  *
  * Return: The value of the bit at index, '-1' if fail
  */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Ensure index is within bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Right shift n by index positions and perform bitwise AND with 1 */
	return ((n >> index) & 1);
}
