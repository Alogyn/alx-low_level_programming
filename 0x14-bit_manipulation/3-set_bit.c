#include "main.h"

/*
 * Task 3. 11
 */

/**
  * set_bit - Sets the value of a bit to '1' at a given index
  *
  * @n: Pointer to the number (long int)
  * @index: Index of the bit to set, starting from 0
  *
  * Return: '1' if success, '-1' if fail
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Ensure index is within bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at the specified index to 1 */
	*n = *n | (1ul << index);

	return (1);
}
