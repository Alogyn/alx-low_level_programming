#include "main.h"

/*
 * Task 6. Chess is mental torture
 */

/**
  * print_chessboard - Prints the chessboard
  *
  * @a: Input pointer array (char)
  *
  * Return: None
  */

void print_chessboard(char (*a)[8])
{
	/* */
	int line = 0, column = 0;

	/* */
	while (line < 8)
	{
		/* */
		while (column < 8)
		{
			_putchar(a[line][column]);
			column++;
		}
		_putchar('\n');
		line++;
	}
}
