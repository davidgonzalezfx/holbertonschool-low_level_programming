#include "holberton.h"

/**
 * print_chessboard - print chessboard
 * @a: matrix
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int col, row;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
