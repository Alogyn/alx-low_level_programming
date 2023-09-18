#include "main.h"

/*
 * Task (Advanced) 10. Great leaders are willing to sacrifice the numbers
 * to save the people. Poor leaders sacrifice the people to save the numbers
 */

/**
  * _atoi - Beginning/Starting point
  *
  * @s:
  *
  * Objectif: Convert a string to an integer
  *
  * Return: Converted integer from string
  */

int _atoi(char *s)
{
	/* Variables declarations */
	int convert = 0;
	int length = 0;
	int sign = 1;
	int i = 0;

	/* String length counter loop */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Convert loop */
	for (; i < length; i++)
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			convert = convert * 10 + (s[i] - '0');
		}

		else if (convert != 0)
		{
			break;
		}
	}
	return (convert * sign);
}
