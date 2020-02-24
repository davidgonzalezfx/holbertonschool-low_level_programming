#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matris -> array
 * @size: size
 * Return: prints
 */
void print_diagsums(int *a, int size)
{
	int first = 0, second = 0, i, j, aux = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				first += a[aux];
			if (i + j + 1 == size)
				second += a[aux];
			aux++;
		}
	}
	printf("%d, %d\n", first, second);
}
