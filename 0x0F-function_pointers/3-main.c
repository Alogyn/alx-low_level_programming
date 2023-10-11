#include "3-calc.h"

/**
  * main - Beginning/Starting point
  *
  * @argc: Number of arguments (int)
  * @argv: Array arguments (char)
  *
  * Return: '0' if success, '98' if argument number is wrong,
  * 99 if invalid operator
  */

int main(int argc, char *argv[])
{
	/* Appropriate function based on the operator */
	int (*operation)(int, int);

	/* Checks the number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Checks the invalid operator */
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
