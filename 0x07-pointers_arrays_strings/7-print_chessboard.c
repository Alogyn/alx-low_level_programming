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
	/* Variables declarations*/
	int index = 0, track;

	/* Index to traverse the 'a' array*/
	while (index < 64)
	{
		/* Keep track of the column index within the current row */
		if (index % 8 == 0 && index != 0)
		{
			track = index;
			_putchar('\n');
		}
		_putchar(a[index / 8][index - track]);
		index++;
	}
	_putchar('\n');
}
