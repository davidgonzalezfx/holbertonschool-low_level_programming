#include "holberton.h"

/**
 * array_range - create array of int
 * @min: start
 * @max: end
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *arr = NULL, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		*(arr + i) = min + i;
	return (arr);
}
