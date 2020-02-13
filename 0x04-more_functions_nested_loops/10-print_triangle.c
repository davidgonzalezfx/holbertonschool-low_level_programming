#include <stdio.h>
/**
 * print_triangle - print a triangle
 * @size: int
 * Return: void
 */
void print_triangle(int size)
{
	int base, height;

	if (size > 0)
	{
		for (base = 0; base < size; base++)
		{
			for (height = 0; height < size; height++)
			{
				if (height < size - base - 1)
				{
					printf(" ");
				}
				else
				{
					printf("#");
				}
			}
			printf("\n");
		}
	}
}
