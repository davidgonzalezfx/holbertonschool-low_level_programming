#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: pointer ti first position of array
 * @size: length of array
 * @value: value to search
 * Return: index of value in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
