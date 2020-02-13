#include "holberton.h"
/**
 * print_triangle - print a triangle
 * @size: int
 * Return: void
 */
void print_triangle(int size)
{
	int base, height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (base = 0; base < size; base++)
	{
		for (height = 0; height < size; height++)
		{
			if (height < size - base - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
