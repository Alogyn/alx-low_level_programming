#include "main.h"

/*
 * Task 4. 100
 */

/**
  * clear_bit - Sets the value of a bit to '0' at a given index
  *
  * @n: Pointer to the number (long int)
  * @index: Index of the bit to clear, starting from 0 (int)
  *
  * Return: '1' if success, '-1' if fail
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Ensure index is within bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Clear the bit at the specified index */
	*n &= ~(1ul << index);

	return (1);
}
