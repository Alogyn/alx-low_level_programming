#include "main.h"

/*
 * Task 5. 101
 */

/**
  * flip_bits - Returns the number of bits you would need to flip
  * to get from one number to another
  *
  * @n: First number (long int)
  * @m: Second number (long int)
  *
  * Return: The number of bits to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Xor and counter variables declarations */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/* Check if the least significant bit is '1' */
		count += xor_result & 1;

		/* Right shift the xor_result to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}
