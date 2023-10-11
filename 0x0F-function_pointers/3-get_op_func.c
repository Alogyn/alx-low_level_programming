#include "3-calc.h"

/*
 * Task 3. A goal is not always meant to be reached,
 * it often serves simply as something to aim at
 */

/**
  * get_op_func - Selects the correct function to perform
  * the operation asked by the user
  *
  * @s: Input pointer to string (char)
  *
  * Return: Pointer to the function that corresponds to
  * the operator given as a parameter
  */

int (*get_op_func(char *s))(int, int)
{
	/* Loop variable declaration */
	int i = 0;

	/* Statements initializing */
	op_t operation[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	/* Loop to checks the 5 statements above */
	while (operation[i].op != NULL)
	{
		/* In case one of the statements exist */
		if (*s == *operation[i].op && s[1] == '\0')
		{
			return (operation[i].f);
		}
		i++;
	}

	/* In case 's' doesn't matches any of the 5 statements above */
	return (0);
}
