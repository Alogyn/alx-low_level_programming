#include "main.h"

/*
 * Task 0. 0
 */

/**
  * binary_to_uint - Converts a binary number to an 'unsigned int'
  *
  * @b: Pointing to a string of 0 and 1 chars (char)
  *
  * Return: The convert number (num)
  */

unsigned int binary_to_uint(const char *b)
{
	/* Loop and number variables declarations */
	unsigned int num = 0;
	int i = 0;

	/* In case 'b' is empty */
	if (!b)
		return (0);

	while (b[i])
	{
		/* In case the character of 'b' is different of 1 and 0 */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* move the current bit by 1 postion */
		num <<= 1;

		/* In case the current bit equal to 1 */
		if (b[i] == '1')
			num += 1;

		i++;
	}

	return (num);
}
