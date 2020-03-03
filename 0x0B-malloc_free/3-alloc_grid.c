#include "holberton.h"

/**
 * alloc_grid - allocate a matrix
 * @width: width
 * @height: height
 * Return: matrix allocated
 */
int **alloc_grid(int width, int height)
{
	int col, row, **matrix = NULL;

	if (width == 0 || height == 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (!matrix)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		matrix[row] = malloc(sizeof(int) * width);
		if (!matrix[row])
			return (NULL);
	}
	for (row = 0; row < width; row++)
	{
		for (col = 0; col < height; col++)
		{
			*(matrix)[col] = 0;
		}
	}
	return (matrix);
}
