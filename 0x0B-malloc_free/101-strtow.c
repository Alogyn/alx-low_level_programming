#include "main.h"
#include <stdlib.h>

/*
 * Task (Advanced) 6. I will show you how great I am
 */

int word_count(char *str);
void lib_dim(char **ar, int i);

/**
  * strtow - Splits a string into words
  *
  * @str: Input string (char)
  *
  * Return: The pointer of an array of strings (words)
  */

char **strtow(char *str)
{
	/* Pointer and loop variable declaration */
	int i, s, j, str_l, word;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);
	str_l = word_count(str);
	string = malloc((str_l + 1) * sizeof(char *));
	if (str_l == 0 || string == NULL)
		return (NULL);

	for (i = s = 0; i < str_l; i++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				string[i] = malloc((word - s + 2) * sizeof(char));
				if (string[i] == NULL)
				{
					lib_dim(string, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= word; s++, j++)
			string[i][j] = str[s];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}

/**
  * word_count - Counts the number of words in a string
  *
  * @str: Input string (char)
  *
  * Return: The number of words
  */

int word_count(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		/* Ignoring spaces */
		if (*str == ' ')
			str++;
		else
		{
			/* Counting loop */
			while (*str != ' ' && *str != '\0')
				str++;
			count++;
		}
	}
	return (count);
}

/**
  * lib_dim - Frees the array of a dimension
  * @ar: Pointer array (char)
  * @i: Input number (int)
  *
  * Return: None
  */

void lib_dim(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}
