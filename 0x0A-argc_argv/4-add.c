#include <stdio.h>
#include <stdlib.h>

/*
 * Task 4. To infinity and beyond
 */

/**
  * main - Adds positive numbers
  *
  * @argc: Number of arguments
  * @argv: Array arguments pointer
  *
  * Return: 0 if successed, 1 if error
  */

int main(int argc, char *argv[])
{
	/* Loops and addition variables declarations */
	int i = 1, j, add = 0;

	/* Checks if theres no arguments */
	if (argc == 1)
	{
		printf("0");
	}

	/* Adding the number arguments */
	while (i < argc)
	{
		/* Declaring first charcter in argv[] */
		char *num = argv[i];

		j = 0;
		while (num[j] != '\0')
		{
			if (num[j] < '0' || num[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		add += atoi(num);
		i++;
	}
	printf("%d\n", add);

	return (0);
}
