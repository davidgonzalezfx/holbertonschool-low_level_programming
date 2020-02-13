#include "holberton.h"
/**
 * print_square - print a square with # char
 * @size: int
 * Return: void
 */
void print_square(int size)
{
	int col, row;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
