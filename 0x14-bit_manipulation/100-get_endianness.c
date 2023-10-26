#include "main.h"

/*
 * Task (Advanced) 6. Endianness
 */

/**
  * get_endianness - Checks the endianness
  *
  * Return: '1' if litle endian, '0' if big endian
  */

int get_endianness(void)
{
	/* Pointer and variable declaratiosn */
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	/* If the least significant byte is '1' */
	if (*byte_ptr)
		return (1);

	else
		return (0);
}
