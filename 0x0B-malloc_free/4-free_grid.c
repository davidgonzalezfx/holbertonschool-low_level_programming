#include "holberton.h"

/**
 * free_grid - free previous matrix
 * @grid: matrix
 * @height: int
 * Return: void - free memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
